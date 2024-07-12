using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Divisibility_Problem
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            while (n > 0)
            {
                string[] input = Console.ReadLine().Split(' ');

                int a = int.Parse(input[0]), b = int.Parse(input[1]);

                if(a < b)
                {
                    Console.WriteLine(b - a);
                }
                else
                {
                    Console.WriteLine((b - a % b) % b);
                }
                n--;
            }

            Console.ReadKey();
        }
    }
}
