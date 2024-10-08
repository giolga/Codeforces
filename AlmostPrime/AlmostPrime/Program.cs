using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AlmostPrime
{
    internal class Program
    {
        static int[] primeArr = new int[3005];
        static void sieve(int n)
        {
            for (int i = 2; i <= n; i++)
            {
                if (primeArr[i] > 0) continue;
                else
                {
                    for (int j = i * 2; j <= n; j += i)
                    {
                        if (primeArr[j] >= 1) primeArr[j]++;
                        else primeArr[j] = 1;
                    }
                }
            }
        }

        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int cnt = 0;

            sieve(n);

            for(int i = 2; i <= n; i++)
            {
                if (primeArr[i] == 2)
                {
                    cnt++;
                }
            }

            Console.WriteLine(cnt);
            Console.ReadKey();
        }
    }
}
