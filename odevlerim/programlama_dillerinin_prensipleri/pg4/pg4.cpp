#include<iostream>
#include<iomanip>
#include<fstream>
#include<time.h>
#include<string>
using namespace std;
class Ogrenci
{
private:
	int isim;
	int soyÝsim;
	int numara;	
};
class DosyaYonetim
{

public:
	
	//Ýsimler dosyasýndan rastgele isim seçiyoruz.
	void okumayazmaDosyasi()
	{
		string veri;
		fstream Dosya4;

		ifstream Dosya;
		Dosya.open("isimler.txt");
		int sayac = 0;
		int rastgele = rand() % 100 + 1;
		while (Dosya.eof() != true)
		{
			getline(Dosya, veri);

			++sayac;
			if (sayac == rastgele)
			{
				Dosya >> veri;
				cout << veri;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;

				Dosya4.close();

			}
		}
		cout << " ";
		Dosya.close();
		//Soyisimler dosyasýndan rastgele soy isim seçiliyor.
		ifstream Dosya1;
		Dosya1.open("Soyisimler.txt");
		int sayac1 = 0;
		int rastgele1 = rand() % 100 + 1;
		while (Dosya1.eof() != true)
		{
			getline(Dosya1, veri);
			++sayac1;
			if (sayac1 == rastgele1)
			{
				Dosya1 >> veri;
				cout << veri << endl;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;
				Dosya4 << endl;
				Dosya4.close();
				Dosya4 << " ";

			}

		}
		Dosya1.close();
		cout << endl;


	}

};
class Sinif
{

	string sinifIsmi;
	int sinifSayisi = 5;
	string veri;

 public:
	
	
	void ogrenciEkle()
	{

	}
	void ogreciSil()
	{

	}
	
	int sayi=5;
	char solUstKose = 201;
	char duz = 205;
	char sagUstKose = 187;
	char solAltKose = 200;
	char sagAltKose = 188;
	char dikey = 186;

    
	void ustYazdir(int elemanSayisi)
	{ 

		for (int i = 0;i < sayi;i++)
		{
		    
			cout << solUstKose;
			for (int i = 0; i < elemanSayisi; i++)
			{
				cout << duz;
			}
			cout << sagUstKose;
			
		}
	
		cout << endl;
		
	}
	void ustYazdir1(int elemanSayisi)
	{
		cout << setw(3);
		for (int i = 1;i < sayi;i++)
		{

			cout << solUstKose;
			for (int i = 0; i < elemanSayisi; i++)
			{
				cout << duz;
			}
			cout<< sagUstKose << setw(5);

		}

		
		cout << endl;
	}
	void ustYazdir2(int elemanSayisi)
	{
		cout << setw(3);
		for (int i = 1;i < sayi-2;i++)
		{

			cout << solUstKose;
			for (int i = 0; i < elemanSayisi; i++)
			{
				cout << duz;
			}
			cout << sagUstKose << setw(5);

		}
		cout<<setw(21);
		cout << solUstKose;
		for (int i = 0; i < elemanSayisi; i++)
		{
			cout << duz;
		}
		cout << sagUstKose << setw(5);
		cout << endl;
	}
	void ustYazdir3(int elemanSayisi)
	{
		cout << setw(51);
		cout << solUstKose;
		for (int i = 0; i < elemanSayisi; i++)
		{
			cout << duz;
		}
		cout << sagUstKose << setw(5);
		cout << endl;
	}

	void araYazdir()
	{
		for (int i = 1;i <= sayi;i++)
		{
			string harfler[26] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
          	int rastgele = rand() % 26;
	
			cout << dikey<<setw(7) << i<<rastgele[harfler]<< setw(7)<<dikey;
		}
		cout << endl;
	}
	
	void araYazdir1()
	{
		string veri;
		fstream Dosya4;

		
	    ifstream Dosya;
		Dosya.open("isimler.txt");
		int sayac = 0;
		int rastgele = rand() % 300 + 1;
		while (Dosya.eof() != true)
		{
			getline(Dosya, veri);

			++sayac;
			if (sayac == rastgele)
			{
				Dosya >> veri;
				cout << setw(3)<<dikey<<setw(10)<<veri<<dikey;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;

				Dosya4.close();

			}
		}
		cout << " ";
		Dosya.close();
	
		for (int i = 1;i < sayi-1;i++)
		{
			ifstream Dosya;
			Dosya.open("isimler.txt");
			int sayac = 0;
			int rastgele = rand() % 100 + 1;
			while (Dosya.eof() != true)
			{
				getline(Dosya, veri);

				++sayac;
				if (sayac == rastgele)
				{
					Dosya >> veri;
					cout << setw(4) << dikey << setw(10) <<veri<< dikey;
					Dosya4.open("kayitlar.txt", ios::app);
					Dosya4 << veri;

					Dosya4.close();

				}
			}
			cout << " ";
			Dosya.close();

			
		}
		cout << endl;
	}
	void araYazdirr()
	{

		ifstream Dosya1;
		fstream Dosya4;
		string veri;
		Dosya1.open("Soyisimler.txt");
		int sayac1 = 0;
		int rastgele1 = rand() % 300 + 1;
		while (Dosya1.eof() != true)
		{
			getline(Dosya1, veri);

			++sayac1;
			if (sayac1 == rastgele1)
			{
				Dosya1 >> veri;
				cout << setw(3) << dikey << setw(10) << veri << dikey;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;
				
				
			

			}
           Dosya4.close();
		}
		Dosya1.close();
		

		for (int i = 1;i < sayi - 1;i++)
		{
			ifstream Dosya;
			Dosya.open("soyisimler.txt");
			int sayac = 0;
			int rastgele = rand() % 100 + 1;
			while (Dosya.eof() != true)
			{
				getline(Dosya, veri);

				++sayac;
				if (sayac == rastgele)
				{
					Dosya >> veri;
					cout << setw(5) << dikey << setw(10) << veri << dikey;
					Dosya4.open("kayitlar.txt", ios::app);
					Dosya4 << veri;

					Dosya4.close();

				}
			}
			
			Dosya.close();


		}
		cout << endl;
	}

	void araYazdirrr()
	{
		cout << setw(3) << dikey << setw(10) << rand()%101+100<< dikey;
		for (int i = 1;i < sayi - 1;i++)
		{
			cout << setw(5) << dikey << setw(10) << rand() % 101 + 100 << dikey;
		}
		cout << endl;
	}





	void araYazdirr2()
	{

		
		fstream Dosya4;


		ifstream Dosya;
		Dosya.open("soyisimler.txt");
		int sayac = 0;
		int rastgele = rand() % 100 + 1;
		while (Dosya.eof() != true)
		{
			getline(Dosya, veri);

			++sayac;
			if (sayac == rastgele)
			{
				Dosya >> veri;
				cout << setw(3) << dikey << setw(10) << veri << dikey;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;

				Dosya4.close();

			}
		}
		Dosya.close();






		for (int i = 1;i < sayi - 3;i++)
		{
			Dosya.open("soyisimler.txt");
		    sayac = 0;
			rastgele = rand() % 100 + 1;
			while (Dosya.eof() != true)
			{
				getline(Dosya, veri);

				++sayac;
				if (sayac == rastgele)
				{
					Dosya >> veri;
					cout << setw(5) << dikey << setw(10) << veri << dikey;
					Dosya4.open("kayitlar.txt", ios::app);
					Dosya4 << veri;

					Dosya4.close();

				}
			}
			
			Dosya.close();


		}
		Dosya.open("soyisimler.txt");
		sayac = 0;
		rastgele = rand() % 100 + 1;
		while (Dosya.eof() != true)
		{
			getline(Dosya, veri);

			++sayac;
			if (sayac == rastgele)
			{
				Dosya >> veri;
				cout << setw(21) << dikey << setw(10) << veri << dikey;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;

				Dosya4.close();

			}
		}
	
		Dosya.close();
        cout << endl;

	}
	void araYazdir2()
	{


		fstream Dosya4;


		ifstream Dosya;
		Dosya.open("isimler.txt");
		int sayac = 0;
		int rastgele = rand() % 100 + 1;
		while (Dosya.eof() != true)
		{
			getline(Dosya, veri);

			++sayac;
			if (sayac == rastgele)
			{
				Dosya >> veri;
				cout << setw(3) << dikey << setw(10) << veri << dikey;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;

				Dosya4.close();

			}
		}
		Dosya.close();

		for (int i = 1;i < sayi - 3;i++)
		{
			Dosya.open("isimler.txt");
			sayac = 0;
			rastgele = rand() % 100 + 1;
			while (Dosya.eof() != true)
			{
				getline(Dosya, veri);

				++sayac;
				if (sayac == rastgele)
				{
					Dosya >> veri;
					cout << setw(5) << dikey << setw(10) << veri << dikey;
					Dosya4.open("kayitlar.txt", ios::app);
					Dosya4 << veri;

					Dosya4.close();

				}
			}

			Dosya.close();


		}
		Dosya.open("isimler.txt");
		sayac = 0;
		rastgele = rand() % 100 + 1;
		while (Dosya.eof() != true)
		{
			getline(Dosya, veri);

			++sayac;
			if (sayac == rastgele)
			{
				Dosya >> veri;
				cout << setw(21) << dikey << setw(10) << veri << dikey;
				Dosya4.open("kayitlar.txt", ios::app);
				Dosya4 << veri;

				Dosya4.close();

			}
		}

		Dosya.close();
		cout << endl;

	}



	void araYazdirrr2()
	{
		cout << setw(3) << dikey << setw(10) << rand() % 101 + 100 << dikey;
		for (int i = 1;i < sayi - 3;i++)
		{
			cout << setw(5) << dikey << setw(10) << rand() % 101 + 100 << dikey;
		}
		cout << setw(21) << dikey << setw(10) << rand() % 101 + 100 << dikey;
		cout << endl;
	}

	void araYazdir3()
	{
		 fstream Dosya4;
		 ifstream Dosya;

		for (int i = 1;i < sayi - 3;i++)
		{
			Dosya.open("isimler.txt");
			int sayac = 0;
			int rastgele = rand() % 100 + 1;
			while (Dosya.eof() != true)
			{
				getline(Dosya, veri);

				++sayac;
				if (sayac == rastgele)
				{
					Dosya >> veri;
					cout << setw(51) << dikey << setw(10) << veri << dikey;
					Dosya4.open("kayitlar.txt", ios::app);
					Dosya4 << veri;

					Dosya4.close();

				}
			}

			Dosya.close();
		}
		cout << endl;
	}

	void araYazdirr3()
	{
		fstream Dosya4;
		ifstream Dosya;

		for (int i = 1;i < sayi - 3;i++)
		{
			Dosya.open("soyisimler.txt");
			int sayac = 0;
			int rastgele = rand() % 100 + 1;
			while (Dosya.eof() != true)
			{
				getline(Dosya, veri);

				++sayac;
				if (sayac == rastgele)
				{
					Dosya >> veri;
					cout << setw(51) << dikey << setw(10) << veri << dikey;
					Dosya4.open("kayitlar.txt", ios::app);
					Dosya4 << veri;

					Dosya4.close();

				}
			}

			Dosya.close();
		}
		cout << endl;
	}

	void araYazdirrr3()
	{
		cout << setw(51) << dikey << setw(10) << rand()%101+100 << dikey;
		cout << endl;
	}

	void altYazdir(int elemanSayisi)
	{
		for (int i = 0;i < sayi;i++)
		{
			cout << solAltKose;
			for (int i = 0; i < elemanSayisi; i++)
			{
				cout << duz;
			}
			cout << sagAltKose;
		}
	}
	void altYazdir1(int elemanSayisi)
	{
		cout << setw(3);
		for (int i = 1;i < sayi;i++)
		{
			cout << solAltKose;
			for (int i = 0; i < elemanSayisi; i++)
			{
				cout << duz;
			}
			cout << sagAltKose<<setw(5);
		}
		cout << endl;
	}
	void altYazdir2(int elemanSayisi)
	{
		cout << setw(3);
		for (int i = 1;i < sayi-2;i++)
		{
			cout << solAltKose;
			for (int i = 0; i < elemanSayisi; i++)
			{
				cout << duz;
			}
			cout << sagAltKose << setw(5);
		}
		cout<<setw(21);
		cout << solAltKose;
		for (int i = 0; i < elemanSayisi; i++)
		{
			cout << duz;
		}
		cout << sagAltKose << setw(5);
	    cout << endl;
	}

	void altYazdir3(int elemanSayisi)
	{
		cout << setw(51);
		cout << solAltKose;
		for (int i = 0; i < elemanSayisi; i++)
		{
			cout << duz;
		}
		cout << sagAltKose << setw(5);
		cout << endl;
	}

};
class Okul
{
public:
	
	void okumaDosyasi3()
	{
		ifstream Dosya3;
		string satir;
		Dosya3.open("kayitlar.txt");
		for (int i = 0;i < 22;i++)
		{
			
			getline(Dosya3, satir);
			cout<< satir << endl;
		}

		
		Dosya3.close();
	


	}

};

class Program
{
	void calistir()
	{

	}
};




int main()
{
	srand(time(0));
	Sinif s1;
	s1.ustYazdir(14);
	s1.araYazdir();
	s1.altYazdir(14);
	cout << endl;
	s1.ustYazdir1(10);
	cout << endl;
	s1.araYazdir1();
	cout << endl;
	s1.araYazdirr();
	cout << endl;
	s1.araYazdirrr();
	cout << endl;
	s1.altYazdir1(10);
	cout << endl;
	s1.ustYazdir1(10);
	cout << endl;
	s1.araYazdir1();
	cout << endl;
	s1.araYazdirr();
	cout << endl;
	s1.araYazdirrr();
	cout << endl;
	s1.altYazdir1(10);
	cout << endl;
	s1.ustYazdir2(10);
	cout << endl;
	s1.araYazdir2();
	cout << endl;
	s1.araYazdirr2();
	cout << endl;
	s1.araYazdirrr2();
	cout << endl;
	s1.altYazdir2(10);
	cout << endl;
	s1.ustYazdir3(10);
	cout << endl;
	s1.araYazdir3();
	cout << endl;
	s1.araYazdirr3();
	cout << endl;
	s1.araYazdirrr3();
	cout << endl;
	s1.altYazdir3(10);
	DosyaYonetim d1;
	d1.okumayazmaDosyasi();
	

	cout << "1.Ogrenci Ekle" << endl;
	cout << "2.Sinif Ekle" << endl;
	cout << "3.Ogrenci Degistir" << endl;
	cout << "4.Ogrenci Sil" << endl;
	cout << "5.Sinif Sil" << endl;
	cout << "6.Cikis" << endl;

}
















	