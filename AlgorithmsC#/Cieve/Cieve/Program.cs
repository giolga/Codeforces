using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Eratosthene_Sieve
{
    internal class Program
    {
        static int[] arr = new int[1000001];
        static int n;

        static void Sieve()
        {
            for(int i = 2; i <=n; i++)
            {
                if (arr[i] > 0)
                    continue;
                else
                {
                    for(int j = i*i; j <=n; j += i)
                    {
                        if(arr[j] == 0)
                        {
                            arr[j] = i;
                        }
                    }
                }
            }
        }
        
        static void Main(string[] args)
        {
            n = int.Parse(Console.ReadLine());

            Sieve();

            Console.ReadKey();
        }
    }
}
