/**************************************************************************************************************************
**					                        SAKARYA ÜNÝVERSÝTESÝ
**				                   BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				                       BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				                      NESNEYE DAYALI PROGRAMLAMA DERSÝ
**					                       2019-2020 YAZ DÖNEMÝ

**				       ÖÐRENCÝ ADI:NAZLI NUR ESMERAY
**				       ÖÐRENCÝ NUMARASI:B191210074
**                     DERSÝN ALINDIÐI GRUP:1.ÖÐRETÝM/C GRUBU
***************************************************************************************************************************/
#include<iostream>
#include<iomanip>
#include<fstream>
#include<locale.h>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	string urunNo, urunAdi, urunBirimi, urunBirimFiyati, urunMarkasi;

	int secim;
	char cevap;
	do
	{
		//Ürün menüsü oluþturuldu.
		cout << "Ne yapmak istiyorsunuz?" << endl;
		cout << "1.Ürün Ekleme" << endl;
		cout << "2.Ürün Silme" << endl;
		cout << "3.Ürün Arama" << endl;
		cout << "4.Ürün Raporlama" << endl;
		
		cin >> secim;
	} while (secim != 1 && secim != 2 && secim != 3 && secim != 4);//Seçimler 1,2,3,4 sayýlarýndan farklýysa menü tekrar ekrana getirilir. 
	
	if (secim == 1)
	{
		system("cls");//Ekraný temizler.
		//Ürün ekleme iþlemi yapýlýr.
		cout << "**********Ürün Ekleme**********" << endl;

		ofstream dosyaYaz;
		dosyaYaz.open("ürünler.txt", ios::app);

		do
		{
			cout << "Ürün no..............:";
			cin >> urunNo;
			cout << "Ürün adý.............:";
			cin >> urunAdi;
			cout << "Ürünün birimi........:";
			cin >> urunBirimi;
			cout << "Ürünün birim fiyatý..:";
			cin >> urunBirimFiyati;
			cout << "Ürünün markasý.......:";
			cin >> urunMarkasi;

			dosyaYaz << "\n" << urunNo << " " << urunAdi << " " << urunBirimi << " " << urunBirimFiyati << " " << urunMarkasi;
			cout << "Ürün eklendi." << endl;

			cout << "Baþka ürün eklemek ister misiniz?(e/h)" << endl;
			cin >> cevap;
		} while (cevap == 'e');

		if (cevap == 'h')
		{
			dosyaYaz.close();
		}
	}
	if (secim == 2)
	{
		system("cls");
		//Ürün silme iþlemi yapýlýr.
		cout << "**********Ürün Silme**********" << endl;
		string silUrunNo;
		cout << "Silinmesini istediðiniz ürünün no.sunu giriniz:";
		cin >> silUrunNo;

		ifstream dosyaOku("ürünler.txt");
		ofstream dosyaYaz("gecici.tmp");

		while (!dosyaOku.eof())
		{
			dosyaOku >> urunNo >> urunAdi >> urunBirimi >> urunBirimFiyati >> urunMarkasi;

			//Girilen ürün no.su dosyada bulunan ürün no.ya eþitse bu döngüye girilir.
			if (silUrunNo == urunNo)
			{
				cout << "**********Ürün Bilgileri**********" << endl;
				cout << "Ürün no..............:" << urunNo << endl;
				cout << "Ürün adý.............:" << urunAdi << endl;
				cout << "Ürünün birimi........:" << urunBirimi << endl;
				cout << "Ürünün birim fiyatý..:" << urunBirimFiyati << endl;
				cout << "Ürünün markasý.......:" << urunMarkasi << endl;

				cout << "Ürün silinmiþtir.";

			}
			else
			{
				dosyaYaz << urunNo << " " << urunAdi << " " << urunBirimi << " " << urunBirimFiyati << " " << urunMarkasi << "\n";
			}
		}
		dosyaYaz.close();
		dosyaOku.close();

		remove("ürünler.txt");//Silinen ürünler burada saklanýr
		rename("gecici.tmp", "ürünler.txt");//Ürünler gecici.tmp de saklanýr ve ismi deðiþtirilir.
		
	}

	if (secim == 3)
	{
		system("cls");
		//Ürün arama iþlemi yapýlýr.
		cout << "**********Ürün Arama**********" << endl;
		string cevapII;
		int bulunanUrunSayisi = 0;
		cout << "Üründe aramak istediðiniz bilgiyi giriniz." << endl;
		cin >> cevapII;
		ifstream dosyaOku("ürünler.txt");
		
		
		while (!dosyaOku.eof())
		{
			dosyaOku >> urunNo >> urunAdi >> urunBirimi >> urunBirimFiyati >> urunMarkasi;
			
			
			if (urunNo == cevapII || urunAdi == cevapII || urunBirimi == cevapII || urunBirimFiyati == cevapII || urunMarkasi == cevapII)
			{
				bulunanUrunSayisi += 1;//Bulunan ürün sayýsý hesaplanýr
				cout << "**********Ürün Bilgileri**********" << endl;
				cout << "Ürün no..............:" << urunNo << endl;
				cout << "Ürün adý.............:" << urunAdi << endl;
				cout << "Ürünün birimi........:" << urunBirimi << endl;
				cout << "Ürünün birim fiyatý..:" << urunBirimFiyati << endl;
				cout << "Ürünün markasý.......:" << urunMarkasi << endl;
				cout << endl;
				
			}
		    
		}
		cout << bulunanUrunSayisi << " adet ürün bulunmuþtur." << endl;
		dosyaOku.close();
	}
	if (secim == 4)
	{
		system("cls");
		//Ürün raporlama iþlemi yapýlýr.
		cout << "**********Ürün Raporlama**********" << endl;
		int toplamUrunSayisi = 0;
		ifstream dosyaOku("ürünler.txt");
		cout << endl;
		cout << "Ürün No.larý" << setw(15) << "Ürün Adlarý" << setw(20) << "Ürün Birimleri" << setw(22) << "Ürün Birim Fiyatlarý" << setw(16) << "Ürün Markalarý" << endl;
		while (!dosyaOku.eof())
		{
			toplamUrunSayisi += 1;//Toplam ürün sayýsý hesaplanýr.

			dosyaOku >> urunNo >> urunAdi >> urunBirimi >> urunBirimFiyati >> urunMarkasi;

			cout << setw(5) << urunNo << setw(20) << urunAdi << setw(17) << urunBirimi << setw(20) << urunBirimFiyati << setw(20) << urunMarkasi << endl;
		}
		cout << endl;
		cout << "Toplam " << toplamUrunSayisi << " ürün bulunmaktadýr." << endl;
		
		dosyaOku.close();
	}

	cout << endl;
	string projeNo, projeAdi, projeYurutucuFirma, projeSorumlusu, projeKontroloru;

	int secimII;
	char cevapIII;
	do
	{
		cout << "Ne yapmak istiyorsunuz?" << endl;
		cout << "1.Proje Ekleme" << endl;
		cout << "2.Proje Silme" << endl;
		cout << "3.Proje Arama" << endl;
		cout << "4.Proje Raporlama" << endl;

		cin >> secimII;
	} while (secimII != 1 && secimII != 2 && secimII != 3 && secimII != 4);

	if (secimII == 1)
	{
		system("cls");
		cout << "**********Proje Ekleme**********" << endl;

		ofstream dosyaYazII;
		dosyaYazII.open("projeler.txt", ios::app);

		do
		{
			cout << "Proje no................:";
			cin >> projeNo;
			cout << "Proje adý...............:";
			cin >> projeAdi;
			cout << "Proje yürütücü firmasý..:";
			cin >> projeYurutucuFirma;
			cout << "Proje sorumlusu.........:";
			cin >> projeSorumlusu;
			cout << "Proje kontrolörü........:";
			cin >> projeKontroloru;

			dosyaYazII << "\n" << projeNo << " " << projeAdi << " " << projeYurutucuFirma << " " << projeSorumlusu << " " << projeKontroloru;
			cout << "Proje eklendi." << endl;

			cout << "Baþka proje eklemek ister misiniz?(e/h)" << endl;
			cin >> cevapIII;
		} while (cevapIII == 'e');

		if (cevapIII == 'h')
		{
			dosyaYazII.close();
		}
	}
	if (secimII == 2)
	{
		system("cls");
		cout << "**********Proje Silme**********" << endl;
		string silProjeNo;
		cout << "Silinmesini istediðiniz projenin no.sunu giriniz:";
		cin >> silProjeNo;

		ifstream dosyaOkuII("projeler.txt");
		ofstream dosyaYazII("geciciII.tmp");

		while (dosyaOkuII.eof() != true)
		{
			dosyaOkuII >> projeNo >> projeAdi >> projeYurutucuFirma >> projeSorumlusu >> projeKontroloru;


			if (projeNo == silProjeNo)
			{
				cout << "**********Proje Bilgileri**********" << endl;
				cout << "Proje no................:" << projeNo << endl;
				cout << "Proje adý...............:" << projeAdi << endl;
				cout << "Proje yürütücü firmasý..:" << projeYurutucuFirma << endl;
				cout << "Proje sorumlusu.........:" << projeSorumlusu << endl;
				cout << "Proje kontrolörü........:" << projeKontroloru << endl;

				cout << "Proje silinmiþtir.";

			}
			else
			{
				dosyaYazII << projeNo << " " << projeAdi << " " << projeYurutucuFirma << " " << projeSorumlusu << " " << projeKontroloru << endl;
			}
		}
		dosyaYazII.close();
		dosyaOkuII.close();

		remove("projeler.txt");
		rename("geciciII.tmp", "projeler.txt");

	}

	if (secimII == 3)
	{
		system("cls");
		cout << "**********Proje Arama**********" << endl;
		string cevapIV;
		int bulunanProjeSayisi = 0;
		cout << "Projede aramak istediðiniz bilgiyi giriniz." << endl;
		cin >> cevapIV;
		ifstream dosyaOkuII("projeler.txt");


		while (dosyaOkuII.eof() != true)
		{
			dosyaOkuII >> projeNo >> projeAdi >> projeYurutucuFirma >> projeSorumlusu >> projeKontroloru;


			if (projeNo == cevapIV || projeAdi == cevapIV || projeYurutucuFirma == cevapIV || projeSorumlusu == cevapIV || projeKontroloru == cevapIV)
			{
				bulunanProjeSayisi += 1;
				cout << "**********Proje Bilgileri**********" << endl;
				cout << "Proje no................:" << projeNo << endl;
				cout << "Proje adý...............:" << projeAdi << endl;
				cout << "Proje yürütücü firmasý..:" << projeYurutucuFirma << endl;
				cout << "Proje sorumlusu.........:" << projeSorumlusu << endl;
				cout << "Proje kontrolörü........:" << projeKontroloru << endl;

			}

		}
		cout << bulunanProjeSayisi << " adet proje bulunmuþtur." << endl;
		dosyaOkuII.close();
	}
	if (secimII == 4)
	{
		system("cls");
		cout << "**********Proje Raporlama**********" << endl;
		int toplamProjeSayisi = 0;
		ifstream dosyaOkuII("projeler.txt");
		cout << endl;
		cout << "Proje No.larý" << setw(18) << "Proje Adlarý" << setw(35) << "Proje Yürütücü Firmalarý" << setw(22) << "Proje Sorumlularý" << setw(20) << "Proje Kontrolörü" << endl;
		while (dosyaOkuII.eof() != true)
		{
			toplamProjeSayisi += 1;

			dosyaOkuII >> projeNo >> projeAdi >> projeYurutucuFirma >> projeSorumlusu >> projeKontroloru;

			cout <<setw(7)<< projeNo << setw(25) << projeAdi <<setw(30)<< projeYurutucuFirma<<setw(25)<< projeSorumlusu <<setw(20)<< projeKontroloru << endl;
		}
		cout << endl;
		cout << "Toplam " << toplamProjeSayisi << " proje bulunmaktadýr." << endl;

		dosyaOkuII.close();
	}

}