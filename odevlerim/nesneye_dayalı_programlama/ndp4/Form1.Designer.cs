namespace projem
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.listBox2 = new System.Windows.Forms.ListBox();
            this.progressBar2 = new System.Windows.Forms.ProgressBar();
            this.kagitBosalt = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.kagit = new System.Windows.Forms.Button();
            this.cikis = new System.Windows.Forms.Button();
            this.yeniOyun = new System.Windows.Forms.Button();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.listBox6 = new System.Windows.Forms.ListBox();
            this.panel1 = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.progressBar1 = new System.Windows.Forms.ProgressBar();
            this.organik = new System.Windows.Forms.Button();
            this.organikBosalt = new System.Windows.Forms.Button();
            this.panel4 = new System.Windows.Forms.Panel();
            this.listBox4 = new System.Windows.Forms.ListBox();
            this.progressBar4 = new System.Windows.Forms.ProgressBar();
            this.metal = new System.Windows.Forms.Button();
            this.metalBosalt = new System.Windows.Forms.Button();
            this.panel5 = new System.Windows.Forms.Panel();
            this.listBox3 = new System.Windows.Forms.ListBox();
            this.progressBar3 = new System.Windows.Forms.ProgressBar();
            this.cam = new System.Windows.Forms.Button();
            this.camBosalt = new System.Windows.Forms.Button();
            this.panel3 = new System.Windows.Forms.Panel();
            this.pictures = new System.Windows.Forms.PictureBox();
            this.panel6 = new System.Windows.Forms.Panel();
            this.baslangıcpuan = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.textBox3 = new System.Windows.Forms.TextBox();
            this.listBox = new System.Windows.Forms.ListBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.timer = new System.Windows.Forms.Timer(this.components);
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.panel4.SuspendLayout();
            this.panel5.SuspendLayout();
            this.panel3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictures)).BeginInit();
            this.panel6.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // listBox2
            // 
            this.listBox2.FormattingEnabled = true;
            this.listBox2.Location = new System.Drawing.Point(13, 29);
            this.listBox2.Name = "listBox2";
            this.listBox2.Size = new System.Drawing.Size(93, 121);
            this.listBox2.TabIndex = 3;
            // 
            // progressBar2
            // 
            this.progressBar2.Location = new System.Drawing.Point(13, 156);
            this.progressBar2.Maximum = 1200;
            this.progressBar2.Name = "progressBar2";
            this.progressBar2.Size = new System.Drawing.Size(93, 23);
            this.progressBar2.TabIndex = 9;
            // 
            // kagitBosalt
            // 
            this.kagitBosalt.Location = new System.Drawing.Point(13, 185);
            this.kagitBosalt.Name = "kagitBosalt";
            this.kagitBosalt.Size = new System.Drawing.Size(93, 30);
            this.kagitBosalt.TabIndex = 10;
            this.kagitBosalt.Text = "BOŞALT";
            this.kagitBosalt.UseVisualStyleBackColor = true;
            this.kagitBosalt.Click += new System.EventHandler(this.kagitBosalt_Click);
            // 
            // textBox1
            // 
            this.textBox1.BackColor = System.Drawing.Color.LemonChiffon;
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.textBox1.Location = new System.Drawing.Point(514, 7);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(246, 28);
            this.textBox1.TabIndex = 22;
            this.textBox1.Text = "      ATIK KUTULARI";
            // 
            // kagit
            // 
            this.kagit.Location = new System.Drawing.Point(13, 3);
            this.kagit.Name = "kagit";
            this.kagit.Size = new System.Drawing.Size(93, 21);
            this.kagit.TabIndex = 23;
            this.kagit.Text = "Kağıt";
            this.kagit.UseVisualStyleBackColor = true;
            this.kagit.Click += new System.EventHandler(this.kagit_Click);
            // 
            // cikis
            // 
            this.cikis.BackColor = System.Drawing.Color.DarkCyan;
            this.cikis.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.cikis.Location = new System.Drawing.Point(13, 218);
            this.cikis.Name = "cikis";
            this.cikis.Size = new System.Drawing.Size(123, 34);
            this.cikis.TabIndex = 0;
            this.cikis.Text = "ÇIKIŞ";
            this.cikis.UseVisualStyleBackColor = false;
            // 
            // yeniOyun
            // 
            this.yeniOyun.BackColor = System.Drawing.Color.DarkCyan;
            this.yeniOyun.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.yeniOyun.Location = new System.Drawing.Point(13, 17);
            this.yeniOyun.Name = "yeniOyun";
            this.yeniOyun.Size = new System.Drawing.Size(123, 44);
            this.yeniOyun.TabIndex = 1;
            this.yeniOyun.Text = "YENİ OYUN";
            this.yeniOyun.UseVisualStyleBackColor = false;
            this.yeniOyun.Click += new System.EventHandler(this.yeniOyun_Click);
            // 
            // textBox2
            // 
            this.textBox2.BackColor = System.Drawing.Color.LightSeaGreen;
            this.textBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.textBox2.ForeColor = System.Drawing.SystemColors.Window;
            this.textBox2.Location = new System.Drawing.Point(13, 74);
            this.textBox2.Multiline = true;
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(123, 23);
            this.textBox2.TabIndex = 2;
            this.textBox2.Text = "          SÜRE";
            // 
            // listBox6
            // 
            this.listBox6.BackColor = System.Drawing.SystemColors.Window;
            this.listBox6.FormattingEnabled = true;
            this.listBox6.Location = new System.Drawing.Point(13, 96);
            this.listBox6.Name = "listBox6";
            this.listBox6.Size = new System.Drawing.Size(123, 43);
            this.listBox6.TabIndex = 3;
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.LightSeaGreen;
            this.panel1.Controls.Add(this.listBox2);
            this.panel1.Controls.Add(this.progressBar2);
            this.panel1.Controls.Add(this.kagit);
            this.panel1.Controls.Add(this.kagitBosalt);
            this.panel1.Location = new System.Drawing.Point(640, 41);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(120, 219);
            this.panel1.TabIndex = 29;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.LightSeaGreen;
            this.panel2.Controls.Add(this.listBox1);
            this.panel2.Controls.Add(this.progressBar1);
            this.panel2.Controls.Add(this.organik);
            this.panel2.Controls.Add(this.organikBosalt);
            this.panel2.Location = new System.Drawing.Point(514, 41);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(120, 219);
            this.panel2.TabIndex = 30;
            // 
            // listBox1
            // 
            this.listBox1.FormattingEnabled = true;
            this.listBox1.Location = new System.Drawing.Point(13, 29);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(93, 121);
            this.listBox1.TabIndex = 3;
            // 
            // progressBar1
            // 
            this.progressBar1.Location = new System.Drawing.Point(13, 156);
            this.progressBar1.Maximum = 700;
            this.progressBar1.Name = "progressBar1";
            this.progressBar1.Size = new System.Drawing.Size(93, 23);
            this.progressBar1.TabIndex = 9;
            // 
            // organik
            // 
            this.organik.Location = new System.Drawing.Point(13, 3);
            this.organik.Name = "organik";
            this.organik.Size = new System.Drawing.Size(93, 21);
            this.organik.TabIndex = 23;
            this.organik.Text = "Organik Atık";
            this.organik.UseVisualStyleBackColor = true;
            this.organik.Click += new System.EventHandler(this.organik_Click);
            // 
            // organikBosalt
            // 
            this.organikBosalt.Location = new System.Drawing.Point(13, 185);
            this.organikBosalt.Name = "organikBosalt";
            this.organikBosalt.Size = new System.Drawing.Size(93, 30);
            this.organikBosalt.TabIndex = 10;
            this.organikBosalt.Text = "BOŞALT";
            this.organikBosalt.UseVisualStyleBackColor = true;
            this.organikBosalt.Click += new System.EventHandler(this.organikBosalt_Click);
            // 
            // panel4
            // 
            this.panel4.BackColor = System.Drawing.Color.LightSeaGreen;
            this.panel4.Controls.Add(this.listBox4);
            this.panel4.Controls.Add(this.progressBar4);
            this.panel4.Controls.Add(this.metal);
            this.panel4.Controls.Add(this.metalBosalt);
            this.panel4.Location = new System.Drawing.Point(640, 266);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(120, 219);
            this.panel4.TabIndex = 31;
            // 
            // listBox4
            // 
            this.listBox4.FormattingEnabled = true;
            this.listBox4.Location = new System.Drawing.Point(13, 29);
            this.listBox4.Name = "listBox4";
            this.listBox4.Size = new System.Drawing.Size(93, 121);
            this.listBox4.TabIndex = 3;
            // 
            // progressBar4
            // 
            this.progressBar4.Location = new System.Drawing.Point(13, 156);
            this.progressBar4.Maximum = 2300;
            this.progressBar4.Name = "progressBar4";
            this.progressBar4.Size = new System.Drawing.Size(93, 23);
            this.progressBar4.TabIndex = 9;
            // 
            // metal
            // 
            this.metal.Location = new System.Drawing.Point(13, 3);
            this.metal.Name = "metal";
            this.metal.Size = new System.Drawing.Size(93, 21);
            this.metal.TabIndex = 23;
            this.metal.Text = "Metal";
            this.metal.UseVisualStyleBackColor = true;
            this.metal.Click += new System.EventHandler(this.metal_Click);
            // 
            // metalBosalt
            // 
            this.metalBosalt.Location = new System.Drawing.Point(13, 185);
            this.metalBosalt.Name = "metalBosalt";
            this.metalBosalt.Size = new System.Drawing.Size(93, 30);
            this.metalBosalt.TabIndex = 10;
            this.metalBosalt.Text = "BOŞALT";
            this.metalBosalt.UseVisualStyleBackColor = true;
            this.metalBosalt.Click += new System.EventHandler(this.metalBosalt_Click);
            // 
            // panel5
            // 
            this.panel5.BackColor = System.Drawing.Color.LightSeaGreen;
            this.panel5.Controls.Add(this.listBox3);
            this.panel5.Controls.Add(this.progressBar3);
            this.panel5.Controls.Add(this.cam);
            this.panel5.Controls.Add(this.camBosalt);
            this.panel5.Location = new System.Drawing.Point(514, 266);
            this.panel5.Name = "panel5";
            this.panel5.Size = new System.Drawing.Size(120, 219);
            this.panel5.TabIndex = 30;
            // 
            // listBox3
            // 
            this.listBox3.FormattingEnabled = true;
            this.listBox3.Location = new System.Drawing.Point(13, 29);
            this.listBox3.Name = "listBox3";
            this.listBox3.Size = new System.Drawing.Size(93, 121);
            this.listBox3.TabIndex = 3;
            // 
            // progressBar3
            // 
            this.progressBar3.Location = new System.Drawing.Point(13, 156);
            this.progressBar3.Maximum = 2200;
            this.progressBar3.Name = "progressBar3";
            this.progressBar3.Size = new System.Drawing.Size(93, 23);
            this.progressBar3.TabIndex = 9;
            // 
            // cam
            // 
            this.cam.Location = new System.Drawing.Point(13, 3);
            this.cam.Name = "cam";
            this.cam.Size = new System.Drawing.Size(93, 21);
            this.cam.TabIndex = 23;
            this.cam.Text = "Cam";
            this.cam.UseVisualStyleBackColor = true;
            this.cam.Click += new System.EventHandler(this.cam_Click);
            // 
            // camBosalt
            // 
            this.camBosalt.Location = new System.Drawing.Point(13, 185);
            this.camBosalt.Name = "camBosalt";
            this.camBosalt.Size = new System.Drawing.Size(93, 30);
            this.camBosalt.TabIndex = 10;
            this.camBosalt.Text = "BOŞALT";
            this.camBosalt.UseVisualStyleBackColor = true;
            this.camBosalt.Click += new System.EventHandler(this.camBosalt_Click);
            // 
            // panel3
            // 
            this.panel3.BackColor = System.Drawing.Color.LemonChiffon;
            this.panel3.Controls.Add(this.pictures);
            this.panel3.Location = new System.Drawing.Point(360, 7);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(148, 182);
            this.panel3.TabIndex = 32;
            // 
            // pictures
            // 
            this.pictures.Location = new System.Drawing.Point(13, 22);
            this.pictures.Name = "pictures";
            this.pictures.Size = new System.Drawing.Size(123, 137);
            this.pictures.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictures.TabIndex = 0;
            this.pictures.TabStop = false;
            // 
            // panel6
            // 
            this.panel6.BackColor = System.Drawing.Color.LemonChiffon;
            this.panel6.Controls.Add(this.baslangıcpuan);
            this.panel6.Controls.Add(this.label1);
            this.panel6.Controls.Add(this.textBox3);
            this.panel6.Controls.Add(this.listBox);
            this.panel6.Controls.Add(this.cikis);
            this.panel6.Controls.Add(this.yeniOyun);
            this.panel6.Controls.Add(this.textBox2);
            this.panel6.Controls.Add(this.listBox6);
            this.panel6.Location = new System.Drawing.Point(360, 193);
            this.panel6.Name = "panel6";
            this.panel6.Size = new System.Drawing.Size(148, 292);
            this.panel6.TabIndex = 33;
            // 
            // baslangıcpuan
            // 
            this.baslangıcpuan.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Left | System.Windows.Forms.AnchorStyles.Right)));
            this.baslangıcpuan.BackColor = System.Drawing.SystemColors.Window;
            this.baslangıcpuan.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.baslangıcpuan.ForeColor = System.Drawing.Color.Turquoise;
            this.baslangıcpuan.Location = new System.Drawing.Point(44, 176);
            this.baslangıcpuan.Name = "baslangıcpuan";
            this.baslangıcpuan.Size = new System.Drawing.Size(58, 24);
            this.baslangıcpuan.TabIndex = 7;
            this.baslangıcpuan.Text = "0";
            this.baslangıcpuan.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label1
            // 
            this.label1.BackColor = System.Drawing.SystemColors.Window;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label1.ForeColor = System.Drawing.Color.Turquoise;
            this.label1.Location = new System.Drawing.Point(61, 102);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(32, 24);
            this.label1.TabIndex = 6;
            this.label1.Text = "60";
            // 
            // textBox3
            // 
            this.textBox3.BackColor = System.Drawing.Color.LightSeaGreen;
            this.textBox3.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.textBox3.ForeColor = System.Drawing.SystemColors.Window;
            this.textBox3.Location = new System.Drawing.Point(13, 145);
            this.textBox3.Multiline = true;
            this.textBox3.Name = "textBox3";
            this.textBox3.Size = new System.Drawing.Size(123, 23);
            this.textBox3.TabIndex = 4;
            this.textBox3.Text = "          PUAN";
            // 
            // listBox
            // 
            this.listBox.BackColor = System.Drawing.SystemColors.Window;
            this.listBox.FormattingEnabled = true;
            this.listBox.Location = new System.Drawing.Point(13, 167);
            this.listBox.Name = "listBox";
            this.listBox.Size = new System.Drawing.Size(123, 43);
            this.listBox.TabIndex = 5;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Location = new System.Drawing.Point(-23, -46);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(100, 50);
            this.pictureBox1.TabIndex = 26;
            this.pictureBox1.TabStop = false;
            // 
            // timer
            // 
            this.timer.Interval = 1000;
            this.timer.Tick += new System.EventHandler(this.timer_Tick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.ClientSize = new System.Drawing.Size(961, 509);
            this.Controls.Add(this.panel6);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel5);
            this.Controls.Add(this.panel4);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.textBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.panel1.ResumeLayout(false);
            this.panel2.ResumeLayout(false);
            this.panel4.ResumeLayout(false);
            this.panel5.ResumeLayout(false);
            this.panel3.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pictures)).EndInit();
            this.panel6.ResumeLayout(false);
            this.panel6.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.ListBox listBox2;
        private System.Windows.Forms.ProgressBar progressBar2;
        private System.Windows.Forms.Button kagitBosalt;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button kagit;
        private System.Windows.Forms.ListBox listBox6;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.Button yeniOyun;
        private System.Windows.Forms.Button cikis;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.ProgressBar progressBar1;
        private System.Windows.Forms.Button organik;
        private System.Windows.Forms.Button organikBosalt;
        private System.Windows.Forms.Panel panel4;
        private System.Windows.Forms.ListBox listBox4;
        private System.Windows.Forms.ProgressBar progressBar4;
        private System.Windows.Forms.Button metal;
        private System.Windows.Forms.Button metalBosalt;
        private System.Windows.Forms.Panel panel5;
        private System.Windows.Forms.ListBox listBox3;
        private System.Windows.Forms.ProgressBar progressBar3;
        private System.Windows.Forms.Button cam;
        private System.Windows.Forms.Button camBosalt;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.Panel panel6;
        private System.Windows.Forms.TextBox textBox3;
        private System.Windows.Forms.ListBox listBox;
        private System.Windows.Forms.PictureBox pictures;
        private System.Windows.Forms.Timer timer;
        private System.Windows.Forms.Label baslangıcpuan;
        private System.Windows.Forms.Label label1;
    }
}

