using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void textBox7_TextChanged(object sender, EventArgs e)
        {

        }

        private void label10_Click(object sender, EventArgs e)
        {

        }

        private void textBox10_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {





            if (radioButton1.Checked == true && radioButton2.Checked == false && radioButton3.Checked == false && radioButton4.Checked == false) //Fırçalı DC
            { // double Direnc = Convert.ToDouble(textBox6.Text); 
                double Enduktans = Convert.ToDouble(textBox7.Text);


            }
            if (radioButton1.Checked == true && radioButton2.Checked == false && radioButton3.Checked == false && radioButton4.Checked == false) //Fırçasız DC

                if (radioButton1.Checked == false && radioButton2.Checked == true && radioButton3.Checked == false && radioButton4.Checked == false) //Asenkron
                {
                    double Frekans = Convert.ToDouble(textBox8.Text);
                    double Kutup = Convert.ToDouble(textBox1.Text);
                    double Hiz = Convert.ToDouble(textBox2.Text);
                    double Guc = Convert.ToDouble(textBox3.Text);
                    double Tork = Convert.ToDouble(textBox4.Text);
                    double Akım = Convert.ToDouble(textBox5.Text);
                    double Kayma = Convert.ToDouble(textBox14.Text);
                    double Direnc = Convert.ToDouble(textBox6.Text);
                    double Enduktans = Convert.ToDouble(textBox7.Text);
                    double cos = Convert.ToDouble(textBox15.Text);
                    double Voltaj = Convert.ToDouble(textBox16.Text);
                    double ns = (120 * Frekans) / (2 * Kutup);
                    double nr = ns - (ns * Kayma);
                    Hiz = nr;
                    double aci = (nr * 2 * 3.14 / 60);
                    double Gucin = Voltaj * Akım * 3 * cos;
                    double Kayıp = Akım * Direnc * 3 * Akım;
                    double Gucag = Gucin - Kayıp;
                    double Gucout = Gucag * (1 - Kayma);
                    Tork = Gucout / aci;
                    double sonuc = Akım + Kayma;

                    textBox6.Text = sonuc.ToString();
                }

            if (radioButton1.Checked == true && radioButton2.Checked == false && radioButton3.Checked == false && radioButton4.Checked == false) //Relüktans
            {
                double Sarım = Convert.ToDouble(textBox9.Text);
                double Sacak = Convert.ToDouble(textBox10.Text);
                double Bagıl = Convert.ToDouble(textBox11.Text);
                double AkıYog = Convert.ToDouble(textBox12.Text);
                double Hava = Convert.ToDouble(textBox13.Text);
                double Uzunluk = Convert.ToDouble(textBox17.Text);
                double Bosluk = Convert.ToDouble(textBox18.Text);
                double Reluktans1 = Uzunluk / ((Bagıl * 4 * 3.14 * Bosluk) / 1000000);
                double Reluktans2 = Hava / ((4 * 3.14 * Bosluk * Sacak) / 1000000);
                double Reluk = Reluktans1 + Reluktans2;
                double Akımı = AkıYog * Bosluk * Reluk / Sarım;

                textBox99.Text = Reluk.ToString();
            }
        }
    }
}

