/**********************************************************************************************************************************************************
**                                           SAKARYA ÜNİVERSİTESİ
**                                  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ 
**                                        BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**                                      NESNEYE DAYALI PROGRAMLAMA DERSİ
**                                           2020-2021 BAHAR DÖNEMİ 
**                          
**                                       ÖDEV NUMARASI..........:Proje
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
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;
//Hocam projede interfaceleri kullanamadım. Elimden bu kadar geldi. 
namespace projem
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();
        }

        int saniye = 59;
        int puan = 0;

        private void Form1_Load(object sender, EventArgs e)
        {
            timer.Interval = 1000;
            timer.Enabled = false;
        }
        private void timer_Tick(object sender, EventArgs e)
        {
            baslangıcpuan.Text = Convert.ToString(puan);

            //Saniyeyi 60'dan geri sayıyor
            label1.Text = Convert.ToString(saniye);
            saniye--;
            if (saniye == -1)
            {
                timer.Stop();
            }

        }
        
        private void yeniOyun_Click(object sender, EventArgs e)
        {

            timer.Start();
            //rastgele resimler oluşturuluyor
            string[] resimler = { "domates", "salatalık", "bardak", "cam şişe", "gazete", "kola kutusu", "salça kutusu", "dergi" };
            Random r = new Random();
            int rastgele = r.Next(0, resimler.Length);
            pictures.ImageLocation = resimler[rastgele] + ".jpg";
        }
        public void ResimEkleme()
        {
            string[] resimler = { "domates", "salatalık", "bardak", "cam şişe", "gazete", "kola kutusu", "salça kutusu", "dergi" };
            Random r = new Random();
            int rastgele = r.Next(0, resimler.Length);
            pictures.ImageLocation = resimler[rastgele] + ".jpg";
        }
        private void organik_Click(object sender, EventArgs e)
        {

            progressBar1.Maximum = 700;
            int organikMax = progressBar1.Maximum;
            int domatesHacim, salatalıkHacim;

            if (pictures.ImageLocation == "domates.jpg")
            {
                listBox1.Items.Add("domates(150)");
                progressBar1.Value += 150;
                domatesHacim = progressBar1.Value;
                puan += 150;

            }
            else if (pictures.ImageLocation == "salatalık.jpg")
            {
                listBox1.Items.Add("salatalık(120)");
                progressBar1.Value += 120;
                salatalıkHacim = progressBar1.Value;
                puan += 120;
            }
            ResimEkleme();
         
            
        }

        private void kagit_Click(object sender, EventArgs e)
        {
            progressBar2.Maximum = 1200;
            int kagitMax = progressBar2.Maximum;
            int gazeteHacim, dergiHacim;

            if (pictures.ImageLocation == "gazete.jpg")
            {
                listBox2.Items.Add("gazete(250)");
                progressBar2.Value += 250;
                gazeteHacim = progressBar2.Value;
                puan += 250;
            }
            else if (pictures.ImageLocation == "dergi.jpg")
            {
                listBox2.Items.Add("dergi(200)");
                progressBar2.Value += 200;
                dergiHacim = progressBar2.Value;
                puan += 200;

            }
            ResimEkleme();
        }

        private void cam_Click(object sender, EventArgs e)
        {
            progressBar3.Maximum = 2200;
            int camMax = progressBar3.Maximum;
            int bardakHacim, camSiseHacim;

            if (pictures.ImageLocation == "bardak.jpg")
            {
                listBox3.Items.Add("bardak(250)");
                progressBar3.Value += 250;
                bardakHacim = progressBar3.Value;
                puan += 250;
            }
            else if (pictures.ImageLocation == "cam şişe.jpg")
            {
                listBox3.Items.Add("cam şişe(600)");
                progressBar3.Value += 600;
                camSiseHacim = progressBar3.Value;
                puan += 600;
            }
            ResimEkleme();

        }

        private void metal_Click(object sender, EventArgs e)
        {
            progressBar4.Maximum = 2300;
            int metalMax = progressBar4.Maximum;
            int kolaKutusuHacim, salcaKutusuHacim;
            if (pictures.ImageLocation == "kola kutusu.jpg")
            {
                listBox4.Items.Add("kola kutusu(350)");
                progressBar4.Value += 350;
                kolaKutusuHacim = progressBar4.Value;
                puan += 350;
            }
            else if (pictures.ImageLocation == "salça kutusu.jpg")
            {
                listBox4.Items.Add("salça kutusu(550)");
                progressBar4.Value += 550;
                salcaKutusuHacim = progressBar4.Value;
                puan += 550;
            }
            ResimEkleme();

        }

        private void organikBosalt_Click(object sender, EventArgs e)
        {
            if (progressBar1.Value >= 525)
            {
                listBox1.Items.Clear();
                progressBar1.Value = 0;
            }
        }

        private void kagitBosalt_Click(object sender, EventArgs e)
        {
            if (progressBar2.Value >= 900)
            {
                listBox2.Items.Clear();
                progressBar2.Value = 0;
                puan += 1000;
            }
        }

        private void camBosalt_Click(object sender, EventArgs e)
        {
            if (progressBar3.Value >= 1650)
            {
                listBox3.Items.Clear();
                progressBar3.Value = 0;
                puan += 600;
            }
        }

        private void metalBosalt_Click(object sender, EventArgs e)
        {
            if (progressBar4.Value >= 1725)
            {
                listBox4.Items.Clear();
                progressBar4.Value = 0;
                puan += 800;
            }
        }
    }
}
