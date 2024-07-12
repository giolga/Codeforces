using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fox_and_snake
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();

            int n = int.Parse(s[0]), m = int.Parse(s[1]);

            bool left = false;

            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    for (int j = 1; j <= m; j++)
                    {
                        Console.Write('#');
                    }
                    Console.WriteLine();
                    continue;
                }
                else
                {
                    if (!left)
                    {
                        for (int j = 1; j < m; j++)
                        {
                            Console.Write('.');
                        }

                        left = true;
                        Console.WriteLine('#');
                        continue;
                    }
                    else
                    {
                        Console.Write('#');
                        for(int j = 2; j <= m; j++)
                        {
                            Console.Write('.');
                        }

                        Console.WriteLine();
                        left = false;
                        continue ;
                    }
                }
            }

            //Console.ReadKey();
        }
    }
}
