using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sereja_and_Dima
{
    internal class Program
    {
        static void Main(string[] args)
        {
            if (int.TryParse(Console.ReadLine(), out int n))
            {
                List<int> s = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).ToList();

                int sereja = 0;
                int dima = 0;

                bool sery = true;

                while (s.Count > 0)
                {
                    if (sery)
                    {
                        int tmp = Math.Max(s.First(), s.Last());
                        sereja += tmp;
                        s.Remove(tmp);

                        sery = false;
                    }
                    else
                    {
                        int tmp = Math.Max(s.First(), s.Last());
                        dima += tmp;
                        s.Remove(tmp);

                        sery = true;
                    }
                }

                Console.WriteLine(string.Format("{0} {1}", sereja, dima));
            }
            else
            {
                Console.WriteLine("Error!");
            }


            //Console.ReadKey();
        }
    }
}
