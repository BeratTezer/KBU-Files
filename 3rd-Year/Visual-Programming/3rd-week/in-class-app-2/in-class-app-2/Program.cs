using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace in_class_app_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] list = { 34, 72, 13, 44, 25, 30, 10 };
            int[] temp = list;
            Console.Write("Orginal Array: ");

            foreach (int i in list)
            {
                Console.Write(i + " ");
            }
            Console.WriteLine();

            Array.Reverse(temp);
            Console.Write("Reversed Array: ");

            foreach (int i in list)
            {
                Console.Write(i + " ");
            }
            Console.WriteLine();

            Array.Sort(temp);
            Console.Write("Sorted Array: ");

            foreach (int i in list)
            {
                Console.Write(i + " ");
            }
            Console.WriteLine();
            Console.ReadKey();
        }
    }
}
