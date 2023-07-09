import java.util.Random;
import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Kolon sayısını girin: ");
        int kolonSayisi = scanner.nextInt();
        scanner.nextLine(); // bir sonraki satıra geçmek için kullanıcıdan alınan boşluğu oku

        String[] semboller = new String[kolonSayisi];
        int[] popülasyonlar = new int[kolonSayisi];

        for (int i = 0; i < kolonSayisi; i++) {
            // Rastgele sembol oluşturulması
            semboller[i] = rastgeleSembol();

            System.out.print("Kolon " + (i + 1) + " popülasyonunu girin: ");
            popülasyonlar[i] = scanner.nextInt();
            scanner.nextLine(); // bir sonraki satıra geçmek için kullanıcıdan alınan boşluğu oku
        }

        // Kolonilerin oluşturulması
        Koloni[] koloniler = new Koloni[kolonSayisi];
        Random random = new Random();

        for (int i = 0; i < kolonSayisi; i++) {
            String sembol = semboller[i];
            int popülasyon = popülasyonlar[i];
            int yemekStogu = popülasyon * popülasyon;

            Taktik taktik;
            Uretim uretim;

            // Rastgele Taktik ve Uretim seçimi yapılıyor
            if (random.nextBoolean()) {
                taktik = new TaktikA();
            } else {
                taktik = new TaktikB();
            }

            if (random.nextBoolean()) {
                uretim = new UretimA();
            } else {
                uretim = new UretimB();
            }

            koloniler[i] = new Koloni(sembol, popülasyon, yemekStogu, taktik, uretim);
        }

        // Oyunun başlatılması
        Oyun oyun = new Oyun(koloniler);
        oyun.baslat();

        scanner.close();
    }

    private static String rastgeleSembol() {
        Random random = new Random();
        char[] sembolHarfler = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < 3; i++) {
            char rastgeleHarf = sembolHarfler[random.nextInt(sembolHarfler.length)];
            sb.append(rastgeleHarf);
        }

        return sb.toString();
    }
}
