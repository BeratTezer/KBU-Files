using System;
using System.Collections.Generic;
using System.Data.Odbc;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace in_class_cons_app3
{
    internal class Program
    {
        public void swap(int x, int y) // calismayacak
        {
            int temp;

            temp = x;
            x = y;
            y = temp;
        }
        public void swap2(ref int x, ref int y) // calisacak
        {
            int temp;

            temp = x;
            x = y;
            y = temp;
        }
        public void swap3(out int x, out int y) // calisacak
        {
            int temp;

            temp = x;
            x = y;
            y = temp;
        }

        public void getValue(out int x)
        {
            int temp = 5;
            x = temp;
        }
        static void Main(string[] args)
        {
            Program n = new Program();

            int a = 100;
            int b = 200;

            Console.WriteLine("Before swap, value of a : {0}", a);
            Console.WriteLine("Before swap, value of b : {0}", b);

            n.swap(a, b);

            Console.WriteLine("After swap, value of a : {0}", a);
            Console.WriteLine("After swap, value of b : {0}", b);

            n.swap2(ref a, ref b);

            Console.WriteLine("After swap2, value of a : {0}", a);
            Console.WriteLine("After swap2, value of b : {0}", b);

            //n.swap3(out a, out b);

            //Console.WriteLine("After swap3, value of a : {0}", a);
            //Console.WriteLine("After swap3, value of b : {0}", b);

            n.getValue(out a);

            Console.WriteLine("After getValue, value of a : {0}", a);

            Console.ReadLine();
        }
    }
}
