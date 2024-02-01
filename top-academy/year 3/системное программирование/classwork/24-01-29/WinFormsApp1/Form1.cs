using System.Numerics;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private async void button1_Click(object sender, EventArgs e)
        {
            if (int.TryParse(numberTextBox.Text, out int number))
            {
                try
                {
                    BigInteger factorial = await CalculateFactorialAsync(number);

                    resultTextBox.Text = factorial.ToString();
                }
                catch (Exception ex)
                {
                    MessageBox.Show($"������ ��� ���������� ����������: {ex.Message}");
                }
            }
            else
            {
                MessageBox.Show("������� ����������� �����");
            }
        }
        private Task<BigInteger> CalculateFactorialAsync(int number)
        {
            return Task.Run(() =>
            {
                if (number < 0)
                {
                    throw new ArgumentException("����� �� ������ ���� �������������");
                }
                BigInteger factorial = 1;

                for (int i = 2; i <= number; i++)
                {
                    factorial *= i;
                }
                return factorial;
            });
        }
    }
}