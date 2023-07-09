/**********************************************************************************************************************************************************
**                                           SAKARYA ÜNİVERSİTESİ
**                                  BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ 
**                                        BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**                                      NESNEYE DAYALI PROGRAMLAMA DERSİ
**                                           2020-2021 BAHAR DÖNEMİ 
**                          
**                                       ÖDEV NUMARASI..........:Ödev2
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

namespace WindowsFormsApp20
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
        //Yeni nesneler oluşturuluyor.
        ListBox listBox1 = new ListBox();
        ListBox listBox2 = new ListBox();
        TextBox textBox3 = new TextBox();
        TextBox textBox4 = new TextBox();

        private void button1_Click(object sender, EventArgs e)
        {
            
             int i, j;
             int sayi1, sayi2;
             int sol1 = 460;
             int sol2 = 600;
             int yukari1 = 75;
             int yukari2 = 260;
             int toplam1 = 0;
             int toplam2 = 0;
             
             //Oluşturulan listBox1'in konumu belirleniyor.
             listBox1.Top = yukari1;
             listBox1.Left = sol1;
             this.Controls.Add(listBox1);
             listBox1.Height = 180;
             listBox1.Width = 100;
             
             //Temizleme işlemi yapılıyor.
             listBox1.Items.Clear();

             sayi1 = int.Parse(textBox1.Text);
             //Çarpanlara ayrılıyor.
             for (i = 1; i < sayi1; i++)
             { 
                 if (sayi1 % i == 0)
                 {
                    //listBox1'e ekleme işlemi yapılıyor.
                    listBox1.Items.Add(i);
                    toplam1 = toplam1 + i;
                    
                    
                 }
             }
             
             listBox2.Top = yukari1;
             listBox2.Left = sol2;
             this.Controls.Add(listBox2);
             listBox2.Height = 180;
             listBox2.Width = 100;

             listBox2.Items.Clear();

             sayi2 = int.Parse((textBox2.Text));
             for (j = 1; j < sayi2; j++)
             {
                if (sayi2 % j == 0)
                {
                    listBox2.Items.Add(j);
                    toplam2 = toplam2 + j;
                }
             }
             //textBox3'ün konumu belirleniyor.
             textBox3.Top = yukari2;
             textBox3.Left = sol1;
             this.Controls.Add(textBox3); 
             //Çarpanların toplamı textBox3'e ekleniyor.
             textBox3.Text = Convert.ToString(toplam1);

             textBox4.Top = yukari2;
             textBox4.Left = sol2;
             this.Controls.Add(textBox4);
             textBox4.Text = Convert.ToString(toplam2);

             label3.Text = Convert.ToString("X");
             label4.Text = Convert.ToString("Y");
             label5.Text = Convert.ToString("TOPLAMLAR");

            
            
        }
    }        
}
