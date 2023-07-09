/**************************************************************************************************************************
**					                        SAKARYA �N�VERS�TES�
**				                   B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				                       B�LG�SAYAR M�HEND�SL��� B�L�M�
**				                      NESNEYE DAYALI PROGRAMLAMA DERS�
**					                       2019-2020 YAZ D�NEM�

**				       ��RENC� ADI:NAZLI NUR ESMERAY
**				       ��RENC� NUMARASI:B191210074
**                     DERS�N ALINDI�I GRUP:1.��RET�M/C GRUBU
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
		//�r�n men�s� olu�turuldu.
		cout << "Ne yapmak istiyorsunuz?" << endl;
		cout << "1.�r�n Ekleme" << endl;
		cout << "2.�r�n Silme" << endl;
		cout << "3.�r�n Arama" << endl;
		cout << "4.�r�n Raporlama" << endl;
		
		cin >> secim;
	} while (secim != 1 && secim != 2 && secim != 3 && secim != 4);//Se�imler 1,2,3,4 say�lar�ndan farkl�ysa men� tekrar ekrana getirilir. 
	
	if (secim == 1)
	{
		system("cls");//Ekran� temizler.
		//�r�n ekleme i�lemi yap�l�r.
		cout << "**********�r�n Ekleme**********" << endl;

		ofstream dosyaYaz;
		dosyaYaz.open("�r�nler.txt", ios::app);

		do
		{
			cout << "�r�n no..............:";
			cin >> urunNo;
			cout << "�r�n ad�.............:";
			cin >> urunAdi;
			cout << "�r�n�n birimi........:";
			cin >> urunBirimi;
			cout << "�r�n�n birim fiyat�..:";
			cin >> urunBirimFiyati;
			cout << "�r�n�n markas�.......:";
			cin >> urunMarkasi;

			dosyaYaz << "\n" << urunNo << " " << urunAdi << " " << urunBirimi << " " << urunBirimFiyati << " " << urunMarkasi;
			cout << "�r�n eklendi." << endl;

			cout << "Ba�ka �r�n eklemek ister misiniz?(e/h)" << endl;
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
		//�r�n silme i�lemi yap�l�r.
		cout << "**********�r�n Silme**********" << endl;
		string silUrunNo;
		cout << "Silinmesini istedi�iniz �r�n�n no.sunu giriniz:";
		cin >> silUrunNo;

		ifstream dosyaOku("�r�nler.txt");
		ofstream dosyaYaz("gecici.tmp");

		while (!dosyaOku.eof())
		{
			dosyaOku >> urunNo >> urunAdi >> urunBirimi >> urunBirimFiyati >> urunMarkasi;

			//Girilen �r�n no.su dosyada bulunan �r�n no.ya e�itse bu d�ng�ye girilir.
			if (silUrunNo == urunNo)
			{
				cout << "**********�r�n Bilgileri**********" << endl;
				cout << "�r�n no..............:" << urunNo << endl;
				cout << "�r�n ad�.............:" << urunAdi << endl;
				cout << "�r�n�n birimi........:" << urunBirimi << endl;
				cout << "�r�n�n birim fiyat�..:" << urunBirimFiyati << endl;
				cout << "�r�n�n markas�.......:" << urunMarkasi << endl;

				cout << "�r�n silinmi�tir.";

			}
			else
			{
				dosyaYaz << urunNo << " " << urunAdi << " " << urunBirimi << " " << urunBirimFiyati << " " << urunMarkasi << "\n";
			}
		}
		dosyaYaz.close();
		dosyaOku.close();

		remove("�r�nler.txt");//Silinen �r�nler burada saklan�r
		rename("gecici.tmp", "�r�nler.txt");//�r�nler gecici.tmp de saklan�r ve ismi de�i�tirilir.
		
	}

	if (secim == 3)
	{
		system("cls");
		//�r�n arama i�lemi yap�l�r.
		cout << "**********�r�n Arama**********" << endl;
		string cevapII;
		int bulunanUrunSayisi = 0;
		cout << "�r�nde aramak istedi�iniz bilgiyi giriniz." << endl;
		cin >> cevapII;
		ifstream dosyaOku("�r�nler.txt");
		
		
		while (!dosyaOku.eof())
		{
			dosyaOku >> urunNo >> urunAdi >> urunBirimi >> urunBirimFiyati >> urunMarkasi;
			
			
			if (urunNo == cevapII || urunAdi == cevapII || urunBirimi == cevapII || urunBirimFiyati == cevapII || urunMarkasi == cevapII)
			{
				bulunanUrunSayisi += 1;//Bulunan �r�n say�s� hesaplan�r
				cout << "**********�r�n Bilgileri**********" << endl;
				cout << "�r�n no..............:" << urunNo << endl;
				cout << "�r�n ad�.............:" << urunAdi << endl;
				cout << "�r�n�n birimi........:" << urunBirimi << endl;
				cout << "�r�n�n birim fiyat�..:" << urunBirimFiyati << endl;
				cout << "�r�n�n markas�.......:" << urunMarkasi << endl;
				cout << endl;
				
			}
		    
		}
		cout << bulunanUrunSayisi << " adet �r�n bulunmu�tur." << endl;
		dosyaOku.close();
	}
	if (secim == 4)
	{
		system("cls");
		//�r�n raporlama i�lemi yap�l�r.
		cout << "**********�r�n Raporlama**********" << endl;
		int toplamUrunSayisi = 0;
		ifstream dosyaOku("�r�nler.txt");
		cout << endl;
		cout << "�r�n No.lar�" << setw(15) << "�r�n Adlar�" << setw(20) << "�r�n Birimleri" << setw(22) << "�r�n Birim Fiyatlar�" << setw(16) << "�r�n Markalar�" << endl;
		while (!dosyaOku.eof())
		{
			toplamUrunSayisi += 1;//Toplam �r�n say�s� hesaplan�r.

			dosyaOku >> urunNo >> urunAdi >> urunBirimi >> urunBirimFiyati >> urunMarkasi;

			cout << setw(5) << urunNo << setw(20) << urunAdi << setw(17) << urunBirimi << setw(20) << urunBirimFiyati << setw(20) << urunMarkasi << endl;
		}
		cout << endl;
		cout << "Toplam " << toplamUrunSayisi << " �r�n bulunmaktad�r." << endl;
		
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
			cout << "Proje ad�...............:";
			cin >> projeAdi;
			cout << "Proje y�r�t�c� firmas�..:";
			cin >> projeYurutucuFirma;
			cout << "Proje sorumlusu.........:";
			cin >> projeSorumlusu;
			cout << "Proje kontrol�r�........:";
			cin >> projeKontroloru;

			dosyaYazII << "\n" << projeNo << " " << projeAdi << " " << projeYurutucuFirma << " " << projeSorumlusu << " " << projeKontroloru;
			cout << "Proje eklendi." << endl;

			cout << "Ba�ka proje eklemek ister misiniz?(e/h)" << endl;
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
		cout << "Silinmesini istedi�iniz projenin no.sunu giriniz:";
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
				cout << "Proje ad�...............:" << projeAdi << endl;
				cout << "Proje y�r�t�c� firmas�..:" << projeYurutucuFirma << endl;
				cout << "Proje sorumlusu.........:" << projeSorumlusu << endl;
				cout << "Proje kontrol�r�........:" << projeKontroloru << endl;

				cout << "Proje silinmi�tir.";

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
		cout << "Projede aramak istedi�iniz bilgiyi giriniz." << endl;
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
				cout << "Proje ad�...............:" << projeAdi << endl;
				cout << "Proje y�r�t�c� firmas�..:" << projeYurutucuFirma << endl;
				cout << "Proje sorumlusu.........:" << projeSorumlusu << endl;
				cout << "Proje kontrol�r�........:" << projeKontroloru << endl;

			}

		}
		cout << bulunanProjeSayisi << " adet proje bulunmu�tur." << endl;
		dosyaOkuII.close();
	}
	if (secimII == 4)
	{
		system("cls");
		cout << "**********Proje Raporlama**********" << endl;
		int toplamProjeSayisi = 0;
		ifstream dosyaOkuII("projeler.txt");
		cout << endl;
		cout << "Proje No.lar�" << setw(18) << "Proje Adlar�" << setw(35) << "Proje Y�r�t�c� Firmalar�" << setw(22) << "Proje Sorumlular�" << setw(20) << "Proje Kontrol�r�" << endl;
		while (dosyaOkuII.eof() != true)
		{
			toplamProjeSayisi += 1;

			dosyaOkuII >> projeNo >> projeAdi >> projeYurutucuFirma >> projeSorumlusu >> projeKontroloru;

			cout <<setw(7)<< projeNo << setw(25) << projeAdi <<setw(30)<< projeYurutucuFirma<<setw(25)<< projeSorumlusu <<setw(20)<< projeKontroloru << endl;
		}
		cout << endl;
		cout << "Toplam " << toplamProjeSayisi << " proje bulunmaktad�r." << endl;

		dosyaOkuII.close();
	}

}