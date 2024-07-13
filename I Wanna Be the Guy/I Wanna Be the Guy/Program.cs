using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace I_Wanna_Be_the_Guy
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            string[] s1 = Console.ReadLine().Split(' ');
            string[] s2 = Console.ReadLine().Split(' ');

            int x = int.Parse(s1[0]);
            int y = int.Parse(s2[0]);

            SortedSet<int> levels = new SortedSet<int>();

            for (int i = 1; i < s1.Length; i++)
            {
                levels.Add(int.Parse(s1[i]));
            }

            for (int i = 1; i < s2.Length; i++)
            {
                levels.Add(int.Parse(s2[i]));
            }

            if (levels.Count == n)
            {
                Console.WriteLine("I become the guy.");
            }
            else
            {
                Console.WriteLine("Oh, my keyboard!");
            }

            Console.ReadKey();
        }
    }
}
