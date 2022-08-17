namespace lesson1
{
    class Program
    {
        
        static void Main()
        {
            List<int> arr = new List<int>();
            Random rnd = new Random();
            #region cicles
            // ########## for
            int totalNumbers = rnd.Next(1, 100);
            for(int i = 0; i < totalNumbers; i++)
            {
                arr.Add(rnd.Next());
                Console.WriteLine(arr[i]);
            }

            // ########## while
            int k = 0;
            while(k <= totalNumbers) //notice that here we put <=
            {
                Console.WriteLine(arr[k++]);
            }

            // ########## do while
            do { Console.WriteLine(arr[k++]); }
            while (k < totalNumbers); // and here we should use < because first we run task

            // ########## foreach
            foreach (int item in arr)
            {
                Console.WriteLine(item);
            }

            // ########## switch case
            int sex = 1;
            switch (sex)
            {
                case 1:
                    Console.WriteLine("");
                    break;
                case 2:
                    Console.WriteLine("");
                    break;
                case 3:
                    Console.WriteLine("");
                    break;
            }

            #endregion
            #region arrays
            // arrays
            int[] myArray = new int[5];
            for(int i = 0; i <= 4; i++)
            {
                myArray[i] = rnd.Next();
            }
            int[,] myArray2 = new int[5,5];
            for (int i = 0; i <= 4; i++)
            {
                for(int j = 0; j <= 4; j++)
                {
                    myArray2[i,j] = rnd.Next();
                }
            }

            //myArray.Length(); myArray.Rank();
            string name = "Assir";
            string sName = "Abdukhalik";
            string fullName = string.Concat(name, " ", sName); // returns name and sname values with space between

            if (name.CompareTo(sName) > 0) { Console.WriteLine("name longer then sname"); }
            /*
             compare to returns int
            if a > b returns value>0
            if a < b returns value<0
            if a=b returns 0

            name.Equals(sName);
             */
            #endregion

            #region strings
            char shortName = name[0];
            string shortName_ = name[0].ToString();

            if(name == shortName_)
            {
                Console.WriteLine("hello " + "world");
            }

            foreach(char item in name)
            {

            }

            // contains
            bool exsist = fullName.Contains("Assir");

            //StartWith / EndWith
            bool start = fullName.StartsWith("Ass");
            bool end = fullName.EndsWith("khalik");

            // IndexOf
            string url = "https://google.com";
            int pos = url.IndexOf(":"); // returns -1 if wrong

            // Split / Join
            string cardNumber = "4400 1234 4536 2342";
            var arrCardNumber = cardNumber.Split(' '); //create 4 strings with meanings: "4400", "1234", "4536", "2342"
            Console.WriteLine("card number: " + arrCardNumber[0] + " **** **** ****");

            string tmp = string.Join("-", arrCardNumber);

            //Trim
            cardNumber = cardNumber.Trim();

            //Insert Remove Replace
            cardNumber = cardNumber.Replace("4400", "4440"); // replace first data with second

            //ToUpper ToLower
            string nameL = name.ToLower();  //assir
            string nameU = name.ToUpper();  //ASSIR

            //Substring
            string typeCard = cardNumber.Substring(0, 4);
            #endregion
        }
        
        static void task1()
        {
            // ########################################
            Random rnd = new Random();

            int[] A = new int[5];
            double[,] B = new double[3,4];

            foreach (int item in A)
            {
                A[item] = Convert.ToInt32(Console.ReadLine());
            }

            for(int i = 0; i <= 3; i++)
            {
                for(int j = 0; j <= 4; j++)
                {
                    B[i, j] = rnd.Next();
                }
            }
            // ########################################
        }

        static void task2()
        {
            /*Даны 2 массива размерности M и N соответственно. Необходимо переписать в третий массив общие элементы первых двух массивов без повторений. */
            // ########################################
            int[] M = new int[10];
            int[] N = new int[10];
            Random rnd = new Random();

            for (int j = 0; j <= 4; j++)
            {
                M[j] = rnd.Next(1, 10);
                N[j] = rnd.Next(1, 10);
            }

            int mlen = M.Length, nlen = N.Length, len = M.Length + N.Length;
            int[] pos = new int[len];
            
            int[] summ = new int[len];

            for (int i = 0; i < mlen; i++)
            {
                for(int j = 0; j <= i; j++)
                {
                    if (summ[i] == summ[j]) { }
                    else summ[i] = M[i];
                }
            }
            for (int i = mlen; i < len; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    if (summ[i] == summ[j]) { }
                    else summ[i] = N[i];
                }
            }
            // ########################################
        }

        static void task3()
        {
            /*Пользователь вводит строку. Проверить, является ли эта строка палиндромом. Палиндромом называется строка, которая одинаково читается слева направо и справа налево*/
            string word = Convert.ToString(Console.ReadLine());
            int len = word.Length;
            for(int i = 0; i <= len; i++)
            {
                for(int j = len; j >= 0; j++)
                {

                }
            }
        }
    }
    
}