using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace in_class_cons_app2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //ArrayList list_1 = new ArrayList();
            var list_1 = new ArrayList(); // recommended

            //list_1.Add(1);
            //list_1.Add("Bill");
            //list_1.Add(" ");
            //list_1.Add(true);
            //list_1.Add(4.5);
            //list_1.Add(null);

            foreach (var item in list_1)
            {
                Console.Write(item + ", ");
            }

            for (int i = 0; i < list_1.Count; i++)
            {
                Console.Write(list_1[i] + ", ");
            }
        }
    }
}
