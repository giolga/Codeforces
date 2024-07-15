using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Presents
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');

            Dictionary<int, int> presents = new Dictionary<int, int>();

            for (int i = 1; i <= n; i++)
            {
                presents.Add(int.Parse(s[i - 1]), i);
            }

            var sortedByValue = presents.OrderBy(kvp => kvp.Key).ToList();

            foreach( var kvp in sortedByValue)
            {
                Console.Write($"{kvp.Value} ");
            }

            //Console.ReadKey();
        }
    }
}
