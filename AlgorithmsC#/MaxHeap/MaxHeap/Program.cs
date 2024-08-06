using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MaxHeap
{
    internal class Program
    {
        static void MaxHeap(int[] arr, int i, int n)
        {
            int temp, j;

            temp = arr[i];
            j = i * 2;

            while (j <= n)
            {
                if (j < n && arr[j + 1] > arr[j]) j++;
                if (temp > arr[j]) break;
                else if (temp <= arr[j])
                {
                    arr[j / 2] = arr[j];
                    j *= 2;
                }
            }

            arr[j / 2] = temp;

            for (int k = 1; k <= n; k++)
            {
                Console.Write(arr[k] + " ");
            }
        }

        static void MinHead(int[] arr, int i, int n)
        {
            int temp, j;
            temp = arr[i];
            j = i * 2;

            while (j <= n)
            {
                if (j < n && arr[j + 1] < arr[j]) j++;
                if (temp < arr[j]) break;
                else if (temp >= arr[j])
                {
                    arr[j / 2] = arr[j];
                    j *= 2;
                }
            }

            arr[j / 2] = temp;

            Console.Write('\t');
            for (int k = 1; k <= n; k++)
            {
                Console.Write(arr[k] + " ");
            }
        }


        static void BuildHeap(int[] arr, int n)
        {
            for (int i = n / 2; i >= 1; i--)
            {
                //MaxHeap(arr, i, n);
                MinHead(arr, i, n);
                Console.WriteLine();
            }
        }

        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            int[] arr = new int[n + 1];

            //Array init
            for (int i = 1; i <= n; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine($"Max Heap \t\tMin Heap");

            BuildHeap(arr, n);

            Console.ReadKey();
        }
    }
}

/*
 7
12
9
17
6
14
23
18
 */