/*********************************************************************************************************************************************
**
**                                      ��RENC�N�N ADI: NAZLI NUR ESMERAY
**                                      ��RENC�N�N NUMARASI:B191210074
**                                      DERS GRUBU:1. ��RET�M C GRUBU
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
				//sat�r numaras� 5'e e�it,5'ten b�y�k ve 15'e e�it,15'ten k���k olmal�d�r.
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

				//s�tun numaras� 5'e e�it,5'ten b�y�k ve 40'a e�it,40'tan k���k olmal�d�r.
				if (sutunNumarasi >= 5 && sutunNumarasi <= 40)
				{
					//s�tun numaras� sat�r numaras�n�n 2 kat� olmal�d�r. 
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


			//D�ng� sat�r numaras�n�n iki kat� oluncaya kadar 1.�eklin �st sat�r�nda * olu�turur.
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

			//D�ng� sat�r numaras�n�n 2 kat� oluncaya kadar 1.�eklin alt sat�r�nda * olu�turur
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			cout << endl;

			//D�ng� sat�r numaras�n�n 2 kat� oluncaya kadar 2.�eklin �st sat�r�nda * olu�turur.
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
			//D�ng� sat�r numaras�n�n 2 kat� oluncaya kadar 2.�eklin sat�r�nda * olu�turur.
			for (int i = 0; i < (satirNumarasi * 2); i++)
			{
				cout << "*";
			}
			return 0;
		}
	}
}

