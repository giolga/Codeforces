using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CaesarCypher
{
    internal class Program
    {
        static void Main(string[] args)
        {
            List<char> lower = new List<char>()
            {
                'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
            };

            List<char> upper = new List<char>()
            {
                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
            };


            string text = Console.ReadLine();
            int orient = int.Parse(Console.ReadLine());
            int k = int.Parse(Console.ReadLine());

            string ans = string.Empty;

            for (int i = 0; i < text.Length; i++)
            {
                bool isLower = Convert.ToInt32(text[i]) >= 97 ? false : true;
                int character;

                if (isLower)
                {
                    character = Convert.ToInt32(text[i]) - 65;
                }
                else
                {
                    character = Convert.ToInt32(text[i]) - 97;
                }

                if (orient == 2) //right shift
                {
                    character = (character + k) % 26;
                }
                else // shift to the left
                {
                    character = character - k;

                    if (character < 0)
                    {
                        character += 26;
                    }
                }

                ans += Convert.ToChar(isLower ? character + 65 : character + 97);
            }

            Console.WriteLine(ans);
            Console.ReadKey();
        }
    }
}
