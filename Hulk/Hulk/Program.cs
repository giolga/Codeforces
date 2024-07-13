using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hulk
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string ans = "";

            int n = int.Parse(Console.ReadLine());
            bool disdain = true;

            for (int i = 1; i <= n; i++)
            {
                if (disdain)
                {
                    ans += "I hate ";
                    disdain = false;
                }
                else
                {
                    ans += "I love ";
                    disdain = true;
                }

                if (i == n)
                {
                    ans += "it ";
                }
                else
                {
                    ans += "that ";
                }

            }

            Console.WriteLine(ans);

            Console.ReadKey();

        }
    }
}
