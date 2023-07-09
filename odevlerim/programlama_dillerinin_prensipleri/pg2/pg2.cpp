/********************************************************************************************************************************************
**
**                                               ÖÐRENCÝ ADI:NAZLI NUR ESMERAY
**                                               ÖÐRENCÝ NUMARASI:B191210074
**                                               DERS GRUBU:1C GURUBU/1.ÖÐRETÝM
*********************************************************************************************************************************************/


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

	        int matrisBoyutu,a;
	

		    while (true)
		    {
		 	      cout << "matris boyutunu giriniz:";
			      cin >> matrisBoyutu;
			   if (matrisBoyutu >= 5 && matrisBoyutu <= 25)
			   {
				  break;
			   }
			   else
			   {
				   cout << "matris boyutu 5'e esit,5'ten buyuk ve 25'e esit,25'ten kucuk olmalidir.";
				   cout << endl;
			   }

		    }  
		   //Matris olusturuldu.
		    cout <<setw(8);
		    for (int i = 1; i <= matrisBoyutu;i++)
			{
			cout << i <<setw(5);
            }

		    cout << endl;
		    cout <<setw(5);
			for (int j = 0;j < 4 * (matrisBoyutu - 1)+matrisBoyutu+3;j++)
			{
				cout << "_";
			}
		
		    cout << endl;
		
			int matris[25][25];
			int matris2[25][25];
			for (int i = 0;i < matrisBoyutu;i++) 
			{
				cout << endl;
				cout <<setw(2)<< i + 1 << "|";
				

				for (int j = 0;j < matrisBoyutu;j++)
				{
					matris[i][j] = rand() % 10;

					cout<<setw(5);
					cout << matris[i][j] ;
                }
                cout << endl;

			}
			
			    //Kullanici menusu olusturuldu.
				int sayi, satirNumarasi, sutunNumarasi;
				cout << "1.Secilen satir ve  sutun numarasini degistirme" << endl;
				cout << "2.Secilen satirdaki tek sayilari satirin basina getirme" << endl;
				cout << "3.Secilen sutundaki sayilari ters cevirme" << endl;
				cout << "4.Matristeki sayilari toplama" << endl;
				cout << "1 - 4 arasi sayi giriniz:" << endl;
				cin >> sayi;
			
			
			if (sayi == 1)

			{ 
				while (true)
				{
					int a;
					cout << "satir numarasini giriniz:";
					cin >> satirNumarasi;
					cout << "sutun numarasini giriniz:";
					cin >> sutunNumarasi;
					if (matrisBoyutu >= satirNumarasi)
					{
						break;
					}

					else 
					{
						cout << "satir ve sutun numarasi matris boyutundan kucuk veya matris boyutuna esit olmali";
						cout << setw(8);
						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << i + 1 << setw(5);
						}
						cout << endl;
						cout << setw(5);
						for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++) 
						{
							cout << "_";
						}
						cout << endl;

						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << endl;
							cout << setw(2) << i + 1 << "|";

							for (int j = 0;j < matrisBoyutu;j++)
							{
								cout << setw(5) << matris[i][j];
							}
							cout << endl;

						}


						int sayi, satirNumarasi, sutunNumarasi;
						cout << "1.Secilen satir ve  sutun numarasini degistirme" << endl;
						cout << "2.Secilen satirdaki tek sayilari satirin basina getirme" << endl;
						cout << "3.Secilen sutundaki sayilari ters cevirme" << endl;
						cout << "4.Matristeki sayilari toplama" << endl;
						cout << "1 - 4 arasi sayi giriniz:" << endl;
						cin >> sayi;
					}
					if (matrisBoyutu >= sutunNumarasi) {

					}
					else {
						cout << "satir ve sutun numarasi matris boyutundan kucuk veya matris boyutuna esit olmali";
						cout << setw(8);
						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << i + 1 << setw(5);
						}
						cout << endl;
						cout << setw(5);
						for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++) 
						{
							cout << "_";
						}
						cout << endl;

						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << endl;
							cout << setw(2) << i + 1 << "|";

							for (int j = 0;j < matrisBoyutu;j++)
							{
								cout << setw(5) << matris[i][j];
							}
							cout << endl;

						}


						int sayi, satirNumarasi, sutunNumarasi;
						cout << "1.Secilen satir ve  sutun numarasini degistirme" << endl;
						cout << "2.Secilen satirdaki tek sayilari satirin basina getirme" << endl;
						cout << "3.Secilen sutundaki sayilari ters cevirme" << endl;
						cout << "4.Matristeki sayilari toplama" << endl;
						cout << "1 - 4 arasi sayi giriniz:" << endl;
						cin >> sayi;

					}
				}

				//Secilen satir ve sutunun yerleri degistirildi.
				satirNumarasi = satirNumarasi - 1;
				sutunNumarasi = sutunNumarasi - 1;
				
				for (int i = 0;i < matrisBoyutu;i++)
				{
					a = matris[satirNumarasi][i];
					matris[satirNumarasi][i] = matris[i][sutunNumarasi];
					matris[i][sutunNumarasi] = a;
					
				}
				//Secilen satir ve sutunun kesisen elemanlari toplandi.
				matris[satirNumarasi][sutunNumarasi]=matris[satirNumarasi][satirNumarasi] + matris[sutunNumarasi][sutunNumarasi];
				
				//Tekrar matris olusturuldu.
				cout << setw(8);
				for (int i = 0;i < matrisBoyutu;i++)
				{
					cout << i + 1 << setw(5);
				}
				cout << endl;
				cout << setw(5);
				for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++)
				{
					cout << "_";
				}
				cout << endl;

				for (int i = 0;i < matrisBoyutu;i++)
				{
					cout << endl;
					cout << setw(2) << i + 1 << "|";

					for (int j = 0;j < matrisBoyutu;j++)
					{
						cout << setw(5) << matris[i][j];
					}
					cout << endl;

				}

			}

			
			if (sayi == 2)
			{
				while (true)
				{
					cout << "satir numarasini giriniz:";
					cin >> satirNumarasi;
					if (matrisBoyutu >= satirNumarasi) 
					{
						break;
					}
					else {
						cout << "satir numarasi matris boyutundan kucuk veya matris boyutuna esit olmalidir" << endl;
						cout << setw(8);
						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << i + 1 << setw(5);
						}
						cout << endl;
						cout << setw(5);
						for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++)
						{
							cout << "_";
						}
						cout << endl;

						for (int i = 0;i < matrisBoyutu;i++) 
						{
							cout << endl;
							cout << setw(2) << i + 1 << "|";

							for (int j = 0;j < matrisBoyutu;j++)
							{
								cout << setw(5) << matris[i][j];
							}
							cout << endl;

						}


						int sayi, satirNumarasi, sutunNumarasi;
						cout << "1.Secilen satir ve  sutun numarasini degistirme" << endl;
						cout << "2.Secilen satirdaki tek sayilari satirin basina getirme" << endl;
						cout << "3.Secilen sutundaki sayilari ters cevirme" << endl;
						cout << "4.Matristeki sayilari toplama" << endl;
						cout << "1 - 4 arasi sayi giriniz:" << endl;
						cin >> sayi;

					}
				}
				//secilen satirin elemanlarinda tekler basa yerlestirildi.
				satirNumarasi = satirNumarasi - 1;
				for (int i = 0;i < matrisBoyutu;i++)
				{
					for (int j = i;j < matrisBoyutu;j++)
					{
						if (matris[satirNumarasi][j] % 2 != 0)
						{
							matris2[satirNumarasi][i] = matris[satirNumarasi][i];
							matris[satirNumarasi][i] = matris[satirNumarasi][j];
							matris[satirNumarasi][j] = matris2[satirNumarasi][i];
						}
					}
				}
				//Tekrar matris olusturuldu.
				cout << setw(8);
				for (int i = 0;i < matrisBoyutu;i++)
				{
					cout << i + 1 << setw(5);
				}
				cout << endl;
				cout << setw(5);
				for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++)
				{
					cout << "_";
				}
				cout << endl;

				for (int i = 0;i < matrisBoyutu;i++) 
				{
					cout << endl;
					cout << setw(2) << i + 1 << "|";

					for (int j = 0;j < matrisBoyutu;j++)
					{
						cout << setw(5) << matris[i][j];
					}
					cout << endl;

				}
			}

			if (sayi == 3)
			{
				while (true)
				{

					cout << "sutun numarasini giriniz:";
					cin >> sutunNumarasi;
					if (matrisBoyutu >= sutunNumarasi)
					{
						break;
					}

					else
					{
						cout << "sutun numarasi matris boyutundan kucuk veya matris boyutuna esit olmalidir";
						cout << setw(8);
						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << i + 1 << setw(5);
						}
						cout << endl;
						cout << setw(5);
						for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++)
						{
							cout << "_";
						}
						cout << endl;

						for (int i = 0;i < matrisBoyutu;i++)
						{
							cout << endl;
							cout << setw(2) << i + 1 << "|";

							for (int j = 0;j < matrisBoyutu;j++) 
							{
								cout << setw(5) << matris[i][j];
							}
							cout << endl;

						}


						int sayi, satirNumarasi, sutunNumarasi;
						cout << "1.Secilen satir ve  sutun numarasini degistirme" << endl;
						cout << "2.Secilen satirdaki tek sayilari satirin basina getirme" << endl;
						cout << "3.Secilen sutundaki sayilari ters cevirme" << endl;
						cout << "4.Matristeki sayilari toplama" << endl;
						cout << "1 - 4 arasi sayi giriniz:" << endl;
						cin >> sayi;
					}
				}
				//Secilen sutunun tersten gorunumu elde edildi.
				sutunNumarasi = sutunNumarasi - 1;
				for (int i = 0;i < matrisBoyutu;i++)
				{
					for (int j = i;j < matrisBoyutu;j++)
					{
						matris2[j][sutunNumarasi] = matris[j][sutunNumarasi];
						matris[j][sutunNumarasi] = matris[i][sutunNumarasi];
						matris[i][sutunNumarasi] = matris2[j][sutunNumarasi];
					}
				}
				//Tekrar matris olusturuldu.
				cout << setw(8);
				for (int i = 0;i < matrisBoyutu;i++)
				{
					cout <<i + 1 << setw(5);
				}
				cout<<endl;
				cout << setw(5);
				for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++)
				{
					cout << "_";
				}
				cout << endl;

				for (int i = 0;i<matrisBoyutu;i++)
				{
					cout << endl;
					cout << setw(2) << i + 1 << "|";

					for (int j = 0;j < matrisBoyutu;j++) 
					{
						cout << setw(5)<<matris[i][j];
					}
					cout << endl;
				}

			}

			if (sayi == 4)
			{
				//Matristeki elemanlarin toplam degeri hesaplandi ve matrisin ilk elemanina yazildi.
				int toplam = 0;
				for (int i = 0;i < matrisBoyutu;i++)
				{
					for (int j = 0;j < matrisBoyutu;j++)
					{
						toplam = toplam + matris[i][j];
					}

				}
				//Ayný satirdaki bir sonraki elemana bir onceki degerden kendi degeri cikarilarak sonuc elde edildi.
				//Bu islem matrisin tum elemanlari icin olusturuldu.
				for (int i = 0;i < matrisBoyutu;i++)
				{
					for (int j = 0;j < matrisBoyutu;j++) 
					{
						toplam = toplam - matris[i][j];
						matris[i][j] = toplam;
					}
				}
				//Tekrar matris olusturuldu.
				cout << setw(8);
				for (int i = 0;i < matrisBoyutu;i++)
				{
					cout << i + 1 << setw(5);
				}
				cout << endl;
				cout << setw(5);
				for (int j = 0;j < 4 * (matrisBoyutu - 1) + matrisBoyutu + 3;j++) 
				{
					cout << "_";
				}
				cout << endl;

				for (int i = 0;i < matrisBoyutu;i++)
				{
					cout << endl;
					cout << setw(2) << i + 1 << "|";

					for (int j = 0;j < matrisBoyutu;j++) 
					{
						cout << setw(5) << matris[i][j];
					}
					cout << endl;
				}

			}
			return 0;


		





















































































	}
















































	   
