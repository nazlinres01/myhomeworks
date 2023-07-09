/*********************************************************************************************************************************************
**
**                                      ÖÐRENCÝNÝN ADI: NAZLI NUR ESMERAY
**                                      ÖÐRENCÝNÝN NUMARASI:B191210074
**                                      DERS GRUBU:1. ÖÐRETÝM C GRUBU
**
************************************************************************************************************************************************/


#include<iostream>
using namespace std;
int main()
{
	{
		int sutunNumarasi;
		int satirNumarasi;
		int i, j;

		while (true)
		{

			while (true)
			{
				cout << "satir numarasini giriniz:";
				cin >> satirNumarasi;
				//satýr numarasý 5'e eþit,5'ten büyük ve 15'e eþit,15'ten küçük olmalýdýr.
				if (satirNumarasi >= 5 && satirNumarasi <= 15)
				{
					break;
				}
				else {
					cout << "satir numarasi hatali....Tekrar deneyiniz...." << endl;
				}
			}

			while (true)
			{
				cout << "sutun numarasini giriniz:";
				cin >> sutunNumarasi;

				//sütun numarasý 5'e eþit,5'ten büyük ve 40'a eþit,40'tan küçük olmalýdýr.
				if (sutunNumarasi >= 5 && sutunNumarasi <= 40)
				{
					//sütun numarasý satýr numarasýnýn 2 katý olmalýdýr. 
					if (sutunNumarasi == 2 * satirNumarasi)
					{
						break;
					}


					else
					{
						cout << "sutun numarasi satir numarasinin iki kati olmalidir....Tekrar deneyiniz...." << endl;
					}
				}

				else
				{
					cout << "sutun numarasi hatali....Tekrar deneyiniz...." << endl;
				}

			}


			//Döngü satýr numarasýnýn iki katý oluncaya kadar 1.þeklin üst satýrýnda * oluþturur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;


			for (int i = satirNumarasi - 2; i >= 1; i--)
			{
				cout << "*";


				for (int j = 1; j < i; j++)
				{
					cout << " ";
				}
				cout << "*";


				for (int j = satirNumarasi - 2; j >= i; j--)
				{
					cout << " ";
				}

				for (int j = satirNumarasi - 2; j >= i; j--)
				{
					cout << " ";
				}
				cout << "*";


				for (int j = 1; j < i; j++)
				{
					cout << " ";
				}
				cout << "*";

				cout << endl;
			}

			//Döngü satýr numarasýnýn 2 katý oluncaya kadar 1.þeklin alt satýrýnda * oluþturur
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;

			//Döngü satýr numarasýnýn 2 katý oluncaya kadar 2.þeklin üst satýrýnda * oluþturur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;

			for (int i = satirNumarasi - 2; i >= 1; i--)
			{

				cout << "*";
				for (int j = satirNumarasi - 2; j > i; j--)
				{
					cout << " ";
				}
				cout << "*";

				for (int j = 1; j <= i; j++)
				{
					cout << " ";
				}

				for (int j = 1; j <= i; j++)
				{
					cout << " ";
				}
				cout << "*";

				for (int j = satirNumarasi - 2; j > i; j--)
				{
					cout << " ";
				}

				cout << "*";

				cout << endl;
			}
			//Döngü satýr numarasýnýn 2 katý oluncaya kadar 2.þeklin satýrýnda * oluþturur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			return 0;
		}
	}
}

