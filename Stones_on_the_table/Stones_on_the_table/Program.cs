using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Stones_on_the_table
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string stones = Console.ReadLine();
            Stack<char> st = new Stack<char>();

            for(int i = 0; i < n; i++)
            {
                if(st.Count == 0 || stones[i] != st.Peek())
                {
                    st.Push(stones[i]);
                }
            }

            //st.Push('1');
            //st.Push('2');
            //st.Push('3');

            Console.WriteLine(n - st.Count);
            Console.ReadKey();
        }
    }
}
