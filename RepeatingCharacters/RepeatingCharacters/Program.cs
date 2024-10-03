using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RepeatingCharacters
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            List<char> chars = new List<char>();

            for (int i = 0; i < str.Length; i++)
            {
                if (chars.Contains(str[i]))
                {
                    Console.WriteLine($"'{str[i]}'");
                    Console.ReadKey();
                    return;
                }

                chars.Add(str[i]);
            }

            Console.WriteLine("No repeating characters");
            Console.ReadKey();
        }
    }
}
