using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InSearchofanEasyProblem
{
    internal class Program
    {
        static void Main(string[] args)
        {
            sbyte n = sbyte.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');

            sbyte ans = 0;

            for (int i = 0; i < n; i++)
            {
                ans ^= sbyte.Parse(s[i]);
                if (ans == 1)
                {
                    Console.WriteLine("Hard".ToLower());
                    return;
                }
                
            }

            Console.WriteLine("Easy".ToLower());


            Console.ReadKey();
        }
    }
}
