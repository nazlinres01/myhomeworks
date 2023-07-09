/****************************************************************************************************************************************************************************************************************************
**                                                                                      
**                                                                                ÖÐRENCÝ ADI:NAZLI NUR ESMERAY
**																				  ÖÐRENCÝ NUMARASI:B191210074
**																				  DERS GRUBU:1C GRUBU/1.ÖÐRETÝM
*****************************************************************************************************************************************************************************************************************************/



#include<iostream>
#include<iomanip>
#include<windows.h>
#include<time.h>

using namespace std;
struct Sahne
{
	int genislik;
	int yukseklik;
	int a;
};

void koordinatAta(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

Sahne sahneOlustur()

{    

	Sahne s1;
	char karakterler[] = { '+','*','@','$','#' };//Rastgele 5 karakter atandý.
	int a = rand() % 5;
	karakterler[a];

	char degerler[] = { 30,40,50 };//Rastgele 3 sayý atandý.
	int b= rand() % 3;
	degerler[b];
	s1.genislik = degerler[b];
	
	

	karakterler[a];
	s1.yukseklik = rand() % 11 + 20;//20-30 aralýðýnda rastgele deðer atandý.
    

	//Sahne çizildi.
	for (int i = 0; i < s1.genislik;i++)
	{
		cout << karakterler[a];
		Sleep(100);
	}
	for (int i = 0; i < s1.yukseklik;i++)
	{
		koordinatAta(s1.genislik - 1, i);
		cout << karakterler[a];
		Sleep(100);
	}
	
	for (int i = 0; i < s1.genislik;i++)
	{
		koordinatAta(s1.genislik - 1 - i, s1.yukseklik);
		cout << karakterler[a];
		Sleep(100);
	}

	for (int i = 0; i < s1.yukseklik;i++)
	{
		koordinatAta(0, s1.yukseklik - 1 - i);
		cout << karakterler[a];
		Sleep(100);

		
	}
	for(int i=0;i<s1.yukseklik+3;i++)
	cout<<endl;

	return s1;
	
	
}


struct LSekli
{
	int x;
	int y;
	int boyut;
	char karakterler[];
	
};

LSekli lSekliOlustur()
{
	LSekli lSekli;
	lSekli.x = rand() % 21 + 5;//x deðerine 5-25 arasý rastgele atandý.
	lSekli.y = 3;//y deðerine 3 sayýsý atandý.
	lSekli.boyut = rand() % 6 + 2;//Boyut deðeri 2-7 arasý rastgele atandý.
	char karakterler[] = { '+','*','@','$','#' };//Rastgele 5 karakter atandý.
	int a = rand() % 5;
	karakterler[a];


	//L þekli oluþturuldu.
	for (int i = 0;i < lSekli.boyut;i++)
	{
		koordinatAta(lSekli.x + i, lSekli.y);
		cout << karakterler[a];

	}

	for (int i = 0;i <( lSekli.boyut*2)+1;i++)
	{
		koordinatAta(lSekli.x, lSekli.y+i);
		cout << karakterler[a];

	}

	for (int i = 0;i < lSekli.boyut*2;i++)
	{
		koordinatAta(lSekli.x + i, lSekli.y+lSekli.boyut*2);
		cout << karakterler[a];

	}

	for (int i = 0;i < lSekli.boyut;i++)
	{
		koordinatAta(lSekli.x +lSekli.boyut-1,lSekli.y+i);
		cout << karakterler[a];

	}

	for (int i = 0;i < lSekli.boyut+1;i++)
	{
		koordinatAta(lSekli.x + lSekli.boyut-1+i,lSekli.y+lSekli.boyut);
		cout << karakterler[a];

	}

	for (int i = 0;i < lSekli.boyut+1;i++)
	{
		koordinatAta(lSekli.x +( lSekli.boyut)*2-1,lSekli.y+lSekli.boyut+i);
		cout << karakterler[a];

	}
    return lSekli;

}	
    
	LSekli lSekliAsagiGotur(LSekli l)
	{
		l.y++;
		return l;
	}






	int main()
	{
		srand(time(0));
		system("cls");
		sahneOlustur();
		lSekliOlustur();
		
	}