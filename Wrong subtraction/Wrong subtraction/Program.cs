using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Wrong_subtraction
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int n = int.Parse(input[0]), k = int.Parse(input[1]);

            while (k > 0)
            {
                if (n % 10 != 0)
                {
                    n--;
                }
                else
                {
                    n /= 10;
                }

                k--;
            }


            Console.WriteLine(n);
            //Console.ReadKey();
        }
    }
}
