package odev;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Main {
	public static void main(String[] args) throws IOException {
		// 1. Kullanıcı tarafından komut satırından verilen dosya adını okuyacağız.
		String fileName = args[0];
		File dosya = new File(fileName);
		// 2. Dosya okuma işlemini gerçekleştireceğiz.
		StringBuilder fileContent = new StringBuilder();
		BufferedReader reader = new BufferedReader(new FileReader(dosya));
		String line;
		while ((line = reader.readLine()) != null) {
			fileContent.append(line).append("\n");
		}
		reader.close();

		// 3. Okunan dosyanın içindeki tek satırlı yorumları, çok satırlı yorumları ve
		// javadocları
		// ayırt edeceğiz ve ayrı ayrı dosyalara kaydedeceğiz.
		Pattern singleLineCommentPattern = Pattern.compile("//.*");
		Matcher singleLineCommentMatcher = singleLineCommentPattern.matcher(fileContent);

		Pattern multiLineCommentPattern = Pattern.compile("/\\*\\*?(.|\\n)*?\\*/");
		Matcher multiLineCommentMatcher = multiLineCommentPattern.matcher(fileContent);

		Pattern javadocPattern = Pattern.compile("/\\*\\*?(.|\\n)*?\\*/");
		Matcher javadocMatcher = javadocPattern.matcher(fileContent);

		File singleLineCommentFile = new File("single-line-comments.txt");
		File multiLineCommentFile = new File("multi-line-comments.txt");
		File javadocFile = new File("javadocs.txt");

		BufferedWriter singleLineCommentWriter = new BufferedWriter(new FileWriter(singleLineCommentFile));
		BufferedWriter multiLineCommentWriter = new BufferedWriter(new FileWriter(multiLineCommentFile));
		BufferedWriter javadocWriter = new BufferedWriter(new FileWriter(javadocFile));

		int singleLineCommentCount = 0;
		while (singleLineCommentMatcher.find()) {
			singleLineCommentCount++;
			singleLineCommentWriter.write(singleLineCommentMatcher.group());
			singleLineCommentWriter.newLine();
		}
		singleLineCommentWriter.close();

		int multiLineCommentCount = 0;
		int javadocCount = 0;
		while (multiLineCommentMatcher.find()) {
			String comment = multiLineCommentMatcher.group();
			if (comment.startsWith("/**")) {
				javadocCount++;
				javadocWriter.write(comment);
				javadocWriter.newLine();
			} else {
				multiLineCommentCount++;
				multiLineCommentWriter.write(comment);
				multiLineCommentWriter.newLine();
			}
		}
		multiLineCommentWriter.close();
		javadocWriter.close();

		// 4. Fonksiyon isimlerini ve bu fonksiyonlara ait
		// yorum sayılarını hesaplayacağız ve konsola yazdıracağız.
		Pattern functionPattern = Pattern.compile("(public\\s+static\\s+(void|int|String)\\s+\\w+\\s*\\().*?(\\))");
		Matcher functionMatcher = functionPattern.matcher(fileContent);

		while (functionMatcher.find()) {
			String function = functionMatcher.group();
			String[] functionLines = function.split("\n");
			String functionName = functionLines[0].trim().split("\\s+")[2];
			int singleLineCommentCountInFunction = 0;
			int multiLineCommentCountInFunction = 0;
			int javadocCountInFunction = 0;

			for (int i = functionMatcher.start(); i < functionMatcher.end(); i++) {
				char c = fileContent.charAt(i);
				if (c == '/') {
					if (i + 1 < functionMatcher.end() && fileContent.charAt(i + 1) == '/') {
						singleLineCommentCountInFunction++;
					} else if (i + 1 < functionMatcher.end() && fileContent.charAt(i + 1) == '*') {
						javadocCountInFunction++;
					}
				} else if (c == '*') {
					if (i + 1 < functionMatcher.end() && fileContent.charAt(i + 1) == '/') {
						multiLineCommentCountInFunction++;
					}
				}
			}

			System.out.println("Function Name: " + functionName);
			System.out.println("Number of Single Line Comments: " + singleLineCommentCountInFunction);
			System.out.println("Number of Multi Line Comments: " + multiLineCommentCountInFunction);
			System.out.println("Number of Javadocs: " + javadocCountInFunction);
			System.out.println();
		}
	}
}
