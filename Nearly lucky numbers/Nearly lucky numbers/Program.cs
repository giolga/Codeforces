using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nearly_lucky_numbers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            long lucky = 0;

            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] == '4' || s[i] == '7')
                {
                    lucky++;
                }
            }

            if (lucky == 4 || lucky == 7)
            {
                Console.WriteLine("Yes".ToUpper());
            }
            else
            {
                Console.WriteLine("No".ToUpper());
            }

            //Console.ReadKey();
        }
    }
}
