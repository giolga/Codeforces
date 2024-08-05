using System;

namespace Magnets
{
    internal class Program
    {
        static void Main(string[] args)
        {   
            string previous = "";
            int n = int.Parse(Console.ReadLine());
            int groups = 1;

            for (int i = 0; i < n; i++)
            {
                //Console.WriteLine('\t' + previous);
                string magnet = Console.ReadLine();

                if (previous == "")
                {
                    previous = magnet;
                    continue;
                }

                if (previous[previous.Length - 1] != magnet[0])
                {
                    previous += magnet;
                }
                else
                {
                    previous = magnet;
                    groups++;
                }

            }

            Console.WriteLine(groups);
            //Console.ReadKey();
        }
    }
}
