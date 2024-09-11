using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TeamOlympiad
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] s = Console.ReadLine().Split(' ');

            List<int> math = new List<int>(), prog = new List<int>(), sport = new List<int>();

            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] == "1")
                {
                    prog.Add(i + 1);
                }
                else if (s[i] == "2")
                {
                    math.Add(i + 1);
                }
                else
                {
                    sport.Add(i + 1);
                }
            }

            int maxTeam = Math.Min(math.Count, Math.Min(prog.Count, sport.Count));

            Console.WriteLine(maxTeam);

            for (int i = 0; i < maxTeam; i++)
            {
                Console.WriteLine(prog[i] + " " + math[i] + " " + sport[i]);
            }

            //Console.ReadKey();
        }
    }
}
