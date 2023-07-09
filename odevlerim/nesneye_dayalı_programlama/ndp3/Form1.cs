/**********************************************************************************************************************************************************
**                                           SAKARYA ÜNİVERSİTESİ
**                                  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ 
**                                        BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**                                      NESNEYE DAYALI PROGRAMLAMA DERSİ
**                                           2020-2021 BAHAR DÖNEMİ 
**                          
**                                       ÖDEV NUMARASI..........:Ödev3
**                                       ÖĞRENCİ ADI VE SOYADI..:NAZLI NUR ESMERAY
**                                       ÖĞRENCİ NUMARASI.......:B191210074
**                                       DERSİN ALINDIĞI GRUP...:C GRUBU/1.SINIF/1.ÖĞRETİM
***********************************************************************************************************************************************************/
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp21
{
    public partial class Form1 : Form
    {
        public Form1()
        {

            InitializeComponent();
            int StokAdedi1, StokAdedi2, StokAdedi3, StokAdedi4;
            //Stok adetleri rastgele atanıyor.
            Random RastgeleSayi = new Random();
            StokAdedi1 = RastgeleSayi.Next(1, 100);
            StokAdedi2 = RastgeleSayi.Next(1, 100);
            StokAdedi3 = RastgeleSayi.Next(1, 100);
            StokAdedi4 = RastgeleSayi.Next(1, 100);

            stok1.Text = StokAdedi1.ToString();
            stok2.Text = StokAdedi2.ToString();
            stok3.Text = StokAdedi3.ToString();
            stok4.Text = StokAdedi4.ToString();

            fiyat1.Text = "7800";
            fiyat2.Text = "2500";
            fiyat3.Text = "5000";
            fiyat4.Text = "8000";

        }

        class Urun
        {
            public string Ad;
            public string Marka;
            public string Model;
            public string Ozellik;
            public int StokAdedi;
            public int HamFiyat;
            public int SecilenAdet;

        }

        //Urun sıfından miras alınıyor.
        class Buzdolabi : Urun
        {
            public Buzdolabi(int IcHacim_lt, string EnerjiSinifi)
            {
                //Nesne oluşturuluyor
                Buzdolabi buzdolabi = new Buzdolabi(580, "A++");

                Ad = "Buzdolabi";
                Marka = "Profilo";
                Model = "BD3086W3AN";
                Ozellik = " No-Frost";
                HamFiyat = 7800;

            }

        }
        class Cep_Telefonu : Urun
        {

            public Cep_Telefonu(int DahiliHafiza_GB, int RamKapasitesi_GB, int PilGucu_mAh)
            {
                Cep_Telefonu cep_telefonu = new Cep_Telefonu(32, 4, 4000);
                cep_telefonu.Ad = "Cep Telefonu";
                cep_telefonu.Marka = "Apple";
                cep_telefonu.Model = "Iphone 7 Plus";
                cep_telefonu.Ozellik = "Çift Hatlı";
                cep_telefonu.HamFiyat = 2500;

            }

        }

        class Laptop : Urun
        {

            public Laptop(double EkranBoyutu_inc, string EkranCozunurlugu, int DahiliHafiza_GB, int RamKapasitesi, int PilGucu)
            {
                Laptop laptop = new Laptop(15.6, "1920x1080", 500, 16, 400);
                Ad = "Laptop";
                Marka = "HP";
                Model = "Zbook 17";
                Ozellik = "i5 islemci ";
                HamFiyat = 5000;


            }


        }
        class LED_TV : Urun
        {
            public LED_TV(int EkranBoyutu_cm, string EkranCozunurlugu)
            {
                LED_TV led_tv = new LED_TV(146, "1920x1080");
                Ad = "LED_TV";
                Marka = "Samsung";
                Model = "55RU7400";
                Ozellik = "Smart Özellikli";
                HamFiyat = 8000;

            }

        }

        class Sepet : Urun
        {
            
            double KDVli_Fiyat1, KDVli_Fiyat2, KDVli_Fiyat3, KDVli_Fiyat4;
            public int SecilenAdet1, SecilenAdet2, SecilenAdet3, SecilenAdet4;
            //KDV'li fiyatlar hesaplanıyor.
            public double KdvUygula_Buzdolabi()
            {
                int HamFiyat1 = 7800;
                KDVli_Fiyat1 = HamFiyat1 * 1.05 * SecilenAdet1;
                return KDVli_Fiyat1;
            }
            public double KdvUygula_CepTelefonu()
            {
                int HamFiyat2 = 2500;
                KDVli_Fiyat2 = HamFiyat2 * 1.2 * SecilenAdet2;
                return KDVli_Fiyat2;

            }
            public double KdvUygula_Laptop()
            {
                int HamFiyat3 = 5000;
                KDVli_Fiyat3 = HamFiyat3 * 1.15 * SecilenAdet3;
                return KDVli_Fiyat3;
            }
            public double KdvUygula_LedTv()
            {
                int HamFiyat4 = 8000;
                KDVli_Fiyat4 = HamFiyat4 * 1.18 * SecilenAdet3;
                return KDVli_Fiyat4;
            }
            public double SepeteUrunEkle()
            {
                //KDV'li toplam fiyat hesaplanıyor.
                double KDVli_ToplamFiyat = KDVli_Fiyat1 + KDVli_Fiyat2 + KDVli_Fiyat3 + KDVli_Fiyat4;
                return KDVli_ToplamFiyat;

            }


        }
        
        //Ürünleri sepete ekle butonu
        private void button1_Click(object sender, EventArgs e)
        {
           
            Sepet sepet = new Sepet();
            
            //Seçilen adet sayılarının 0 olmaması koşuluyla gerçekleştiriliyor.
            if (numericUpDown1.Value != 0)
            {
                //Seçilen adet sayısı listBox1'e ekleniyor.
                listBox1.Items.Add(numericUpDown1.Value);
                //Seçilen ürün listbox2'ye ekleniyor.
                listBox2.Items.Add("Buzdolabi");
                sepet.SecilenAdet1 = Convert.ToInt32(numericUpDown1.Value);
                int toplam1 = (int)sepet.KdvUygula_Buzdolabi();
                    
                //Ürüne ait KDV'li fiyat hesaplanıyor
                listBox3.Items.Add(toplam1);
                //Seçilen adet stok fiyatından düşürülüyor.
                stok1.Text = (Convert.ToInt32(stok1.Text)-Convert.ToInt32(numericUpDown1.Value)).ToString();
                

            }
            if (numericUpDown2.Value != 0)
            {

                listBox1.Items.Add(numericUpDown2.Value);
                listBox2.Items.Add("Cep Telefonu");
                sepet.SecilenAdet2 = Convert.ToInt32(numericUpDown2.Value);
                int toplam2 = (int)sepet.KdvUygula_CepTelefonu();
                listBox3.Items.Add(toplam2);
                stok2.Text = (Convert.ToInt32(stok2.Text) - Convert.ToInt32(numericUpDown2.Value)).ToString();
            }
        
            if (numericUpDown3.Value != 0)
            {
                listBox1.Items.Add(numericUpDown3.Value);
                listBox2.Items.Add("Laptop");
                sepet.SecilenAdet3 = Convert.ToInt32(numericUpDown3.Value);
                int toplam3 = (int)sepet.KdvUygula_Laptop();
                listBox3.Items.Add(toplam3);
                stok3.Text = (Convert.ToInt32(stok3.Text) - Convert.ToInt32(numericUpDown3.Value)).ToString();

            }
            if (numericUpDown4.Value != 0)
            {
                listBox1.Items.Add(numericUpDown4.Value);
                listBox2.Items.Add("Led Tv");
                sepet.SecilenAdet4 = Convert.ToInt32(numericUpDown4.Value);
                int toplam4 = (int)sepet.KdvUygula_LedTv();
                listBox3.Items.Add(toplam4);
                stok4.Text = (Convert.ToInt32(stok4.Text) - Convert.ToInt32(numericUpDown4.Value)).ToString();
            }
             KDV.Text =sepet.SepeteUrunEkle().ToString();

        }

        //Sepeti temizle butonu
        private void button2_Click(object sender, EventArgs e)
        {
            Sepet sepet = new Sepet();
            //ListBox'ları temizliyor.
            listBox1.Items.Clear();
            listBox2.Items.Clear();
            listBox3.Items.Clear();
         
            //Sepeti temizlediğinde seçilen ürünlerin adet sayısını stok adedine ekler.
            stok1.Text = (Convert.ToInt32(stok1.Text) + Convert.ToInt32(numericUpDown1.Value)).ToString();
            stok2.Text = (Convert.ToInt32(stok2.Text) + Convert.ToInt32(numericUpDown2.Value)).ToString();
            stok3.Text = (Convert.ToInt32(stok3.Text) + Convert.ToInt32(numericUpDown3.Value)).ToString();
            stok4.Text = (Convert.ToInt32(stok4.Text) + Convert.ToInt32(numericUpDown4.Value)).ToString();
            numericUpDown1.Value = 0;
            numericUpDown2.Value = 0;
            numericUpDown3.Value = 0;
            numericUpDown4.Value = 0;
            KDV.Text=(0).ToString();
            

        }

        
    }

}
