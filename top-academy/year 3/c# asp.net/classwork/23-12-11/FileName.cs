using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23_12_11
{
    public class FileName
    {
        SqlConnection conn;
        public FileName()
        {
            conn = new SqlConnection();
            string connectionString =
                @"Data Source=.\SQLEXPRESS;Initial Catalog=Northwind;Integrated Security=True";
        }
        static void Main(string[] args)
        {
            FileName pr = new FileName();
        }
        public void InsertQuery()
        {
            try
            {
                conn.Open();
                string insertString = @"insert into Authors (FirstName, LastName) values ('Roger', 'Zelazny')";
                SqlCommand cmd = new SqlCommand(insertString, conn);
                cmd.ExecuteNonQuery();
            }
            finally
            {
                if (conn != null)
                {
                    conn.Close();
                }
            }
        }
    }
}
