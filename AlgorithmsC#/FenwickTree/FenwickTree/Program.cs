using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FenwickTree
{
    internal class Program
    {
        private static int[] tree = new int[155];
        static void Update(int idx, int val, int n)
        {
            while (idx <= n)
            {
                tree[idx] += val;
                idx += (idx & -idx);
            }
        }

        static int Read(int idx)
        {
            int sum = 0;
            while (idx > 0)
            {
                sum += tree[idx];
                idx -= (idx & -idx);
            }

            return sum;
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            int[] arr = new int[n + 1];

            for (int i = 1; i <= n; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
                Update(i, arr[i], n);
            }

            for (int i = 1; i <= n; i++)
            {
                Console.Write(tree[i] + " ");
            }
            Console.WriteLine();
            Console.WriteLine(Read(4));

            Console.ReadKey();
        }
    }
}
