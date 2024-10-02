using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace in_class_cons_app
{
    internal class Program
    {
        double getAverage(int[] arr, int size)
        {
            int i;
            double avg;
            int sum = 0;

            for (i = 0; i < size; i++)
            {
                sum += arr[i];
            }
            avg = (double)sum / size;
            return avg;
        }
        static void Main(string[] args)
        {
            Program app = new Program();

            int[] balance = new int[] { 100, 2, 3, 17, 50 };
            double avg;

            avg = app.getAverage(balance, 5);

            Console.WriteLine("Average value is: {0} ", avg);
            Console.ReadKey();
        }
    }
}

