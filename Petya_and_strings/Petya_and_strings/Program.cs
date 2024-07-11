using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Petya_and_strings
{
    internal class Program
    {
        private static bool StringCompare(string s1, string s2)
        {
            int size = 0;
            while (size < s1.Length)
            {
                if (Convert.ToInt32(s1[size]) < Convert.ToInt32(s2[size]))
                {
                    return false;
                }
                if (Convert.ToInt32(s2[size]) < Convert.ToInt32(s1[size]))
                {
                    return true;
                }

                size++;
            }

            return true;
        }

        static void Main(string[] args)
        {
            string s1 = Console.ReadLine().ToLower();
            string s2 = Console.ReadLine().ToLower();

            if (s1 == s2)
            {
                Console.WriteLine(0);
            }
            else
            {
                if (!StringCompare(s1, s2))
                {
                    Console.WriteLine(-1);
                }
                else
                {
                    Console.WriteLine(1);
                }
            }

            //Console.ReadKey();
        }
    }
}
