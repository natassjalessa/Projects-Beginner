using System;

namespace numero_par_ou_impar
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, i, n;
            Console.Clear();
            Console.WriteLine("\n\tDigite um número inteiro:");
            x = int.Parse(Console.ReadLine());
            for (i = 1; i < x; i++)
            {
                n = i%2;
                if (n%2 != 0)
                {
                    Console.WriteLine(i);
                }
            }
            Console.ReadKey();
        }
    }
}
