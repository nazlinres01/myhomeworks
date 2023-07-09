/**************************************************************************************************************************
**					                        SAKARYA ÜNİVERSİTESİ
**				                   BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				                       BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				                      NESNEYE DAYALI PROGRAMLAMA DERSİ
**					                       2019-2020 BAHAR DÖNEMİ
**	
**				       ÖDEV NUMARASI:ÖDEV1 
**				       ÖĞRENCİ ADI:NAZLI NUR ESMERAY
**				       ÖĞRENCİ NUMARASI:B191210074
**                     DERSİN ALINDIĞI GRUP:1.ÖĞRETİM/C GRUBU
***************************************************************************************************************************/

using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp12
{
    class Program
    {
        static void Main(string[] args)
        {
            double basarıNotu;
            int AA_sayısı = 0;
            int BA_sayısı = 0;
            int BB_sayısı = 0;
            int CB_sayısı = 0;
            int CC_sayısı = 0;
            int DC_sayısı = 0;
            int DD_sayısı = 0;
            int FD_sayısı = 0;
            int FF_sayısı = 0;
            double yüzdeAA_sayısı, yüzdeBA_sayısı, yüzdeBB_sayısı,
                   yüzdeCB_sayısı, yüzdeCC_sayısı, yüzdeDC_sayısı,
                   yüzdeDD_sayısı, yüzdeFD_sayısı, yüzdeFF_sayısı;

            //Öğrenci_Bilgileri adında text dosyası oluşturuldu ve dosyadakiler bilgiler bir diziye aktarıldı
            string[] bilgiler = File.ReadAllLines(@"C:\Okul\Öğrenci_Bilgileri.txt");

            //İstenilen satırdaki elemanlar yazdırıldı
            for (int j = 0; j < bilgiler.Length-10; j=j+10)
            {
                
                for (int i = j; i < j+9; i++)
                {
                    Console.WriteLine(bilgiler[i]);
                }
                //Başarı notları hesaplandı
                basarıNotu = Convert.ToInt32(bilgiler[j + 3]) * 24.75 / 100 + Convert.ToInt32(bilgiler[j + 4]) * 5.5 / 100
                           + Convert.ToInt32(bilgiler[j + 5]) * 5.5 / 100 + Convert.ToInt32(bilgiler[j + 6]) * 5.5 / 100
                           + Convert.ToInt32(bilgiler[j + 7]) * 13.75 / 100 + Convert.ToInt32(bilgiler[j + 8]) * 45.00 / 100;
                
                //Başarı notu ekrana yazdırıldı
                string basarı = Convert.ToString(basarıNotu);
                Console.Write("Başarı Notu:{0}", basarı);
                Console.WriteLine();

                //Belli aralıklar için harf notları belirlendi
                if (basarıNotu <= 100.00 && basarıNotu >= 90.00)
                {
                    Console.Write("Harf Notu AA'dır.");
                    AA_sayısı++;
                }
                else if (basarıNotu <= 89.99 && basarıNotu >= 85.00)
                {
                    Console.Write("Harf Notu BA'dır.");
                    BA_sayısı++;
                }
                else if (basarıNotu <= 84.99 && basarıNotu >= 80.00)
                {
                    Console.Write("Harf Notu BB'dir.");
                    BB_sayısı++;
                }
                else if (basarıNotu <= 79.99 && basarıNotu >= 75.00)
                {
                    Console.Write("Harf Notu CB'dir.");
                    CB_sayısı++;
                }
                else if (basarıNotu <= 74.99 && basarıNotu >= 65.00)
                {
                    Console.Write("Harf Notu CC'dir.");
                    CC_sayısı++;
                }
                else if (basarıNotu <= 64.99 && basarıNotu >= 58.00)
                {
                    Console.Write("Harf Notu DC'dir.");
                    DC_sayısı++;
                }
                else if (basarıNotu <= 57.99 && basarıNotu >= 50.00)
                {
                    Console.Write("Harf Notu DD'dir.");
                    DD_sayısı++;
                }
                else if (basarıNotu <= 49.99 && basarıNotu >= 40.00)
                {
                    Console.Write("Harf Notu FD'dir.");
                    FD_sayısı++;
                }
                else if (basarıNotu <= 39.99 && basarıNotu >= 0)
                {
                    Console.Write("Harf Notu FF'dir.");
                    FF_sayısı++;
                }

                Console.WriteLine();
            }

            //Öğrenci_Bilgileri2 adında text dosyası oluşturuldu
            FileStream fs = new FileStream(@"C:\Okul\Öğrenci_Bilgileri2.txt", FileMode.OpenOrCreate, FileAccess.Write);
            StreamWriter sw = new StreamWriter(fs);


            //Dosyaya belirlenen harf notlarının sayısı yazdırıldı
            sw.WriteLine("AA'dan " + AA_sayısı + " tane vardır.");
            sw.WriteLine("BA'dan " + BA_sayısı + " tane vardır.");
            sw.WriteLine("BB'dan " + BB_sayısı + " tane vardır.");
            sw.WriteLine("CB'dan " + CB_sayısı + " tane vardır.");
            sw.WriteLine("CC'dan " + CC_sayısı + " tane vardır.");
            sw.WriteLine("DC'dan " + DC_sayısı + " tane vardır.");
            sw.WriteLine("DD'dan " + DD_sayısı + " tane vardır.");
            sw.WriteLine("FD'dan " + FD_sayısı + " tane vardır.");
            sw.WriteLine("FF'dan " + FF_sayısı + " tane vardır.");
            sw.WriteLine();
            
            //Belirlenen harf notlarının yüzdeleri hesaplandı
            yüzdeAA_sayısı = AA_sayısı * (100 / 20);
            yüzdeBA_sayısı = BA_sayısı * (100 / 20);
            yüzdeBB_sayısı = BB_sayısı * (100 / 20);
            yüzdeCB_sayısı = CB_sayısı * (100 / 20);
            yüzdeCC_sayısı = CC_sayısı * (100 / 20);
            yüzdeDC_sayısı = DC_sayısı * (100 / 20);
            yüzdeDD_sayısı = DD_sayısı * (100 / 20);
            yüzdeFD_sayısı = FD_sayısı * (100 / 20);
            yüzdeFF_sayısı = FF_sayısı * (100 / 20);

            //Dosyaya belirlenen harf notlarının yüzdeleri yazdırıldı 
            sw.WriteLine("AA'dan " + "%" + yüzdeAA_sayısı + " vardır.");
            sw.WriteLine("BA'dan " + "%" + yüzdeBA_sayısı + " vardır.");
            sw.WriteLine("BB'dan " + "%" + yüzdeBB_sayısı + " vardır.");
            sw.WriteLine("CB'dan " + "%" + yüzdeCB_sayısı + " vardır.");
            sw.WriteLine("CC'dan " + "%" + yüzdeCC_sayısı + " vardır.");
            sw.WriteLine("DC'dan " + "%" + yüzdeDC_sayısı + " vardır.");
            sw.WriteLine("DD'dan " + "%" + yüzdeDD_sayısı + " vardır.");
            sw.WriteLine("FD'dan " + "%" + yüzdeFD_sayısı + " vardır.");
            sw.WriteLine("FF'dan " + "%" + yüzdeFF_sayısı + " vardır.");

            sw.Close();

            Console.ReadKey();



        }
    }
}
