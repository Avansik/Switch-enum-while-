
 /* Switch, enum, while
 #include <iostream>
    using namespace std;
	int main() { */
 // //2.Вивести на екран додатні непарні числа, які не перевищують 100. - while        
 //  int i = 1; 

 //           while (i <= 100) { 
 //               cout << i << " ";
 //               i += 2; 
 //           }
 //       
 
 /*  1.Вивести на екран цілі числа від 14 до 123. - while*/
       /* int i = 14; 
        while (i <= 123) { 
            cout << i << " ";
            i++;
        }*/
     /*   5.Вивести на екран цілі непарні  числа : 100 98 96 94...4  2 1. - do..while*/
        /*    int i = 100; 
            do {
                cout << i << " ";
                i -= 2; 
            } while (i >= 1); 
            return 0;*/
         
        //3.Дано N(N > 0).Вводяться N чисел.Знайти кількість від’ємних серед них. - while
        /*    int countnumber; 
            cout << "Print how many numbers to enter: ";
            cin >> countnumber;
            int i = 0;       
            int number;    
            int negativeCount = 0;
            while (i < countnumber) {
                cout << "Enter number " << i + 1 << ": ";
                cin >> number;

                if (number < 0) { 
                    negativeCount++;
                }
                i++;
            }
            cout << "Count of negative numbers: " << negativeCount << endl;
        }*/







 //24.02.2025                    
//#include <iostream>
// using namespace std;
// int main() {

// 1.
          // I
          //   love
          //       you
          //          C++!
      



    /*    cout <<" I\n  love\n      you\n\t C++";*/
   
    
    


    //2.
      //   Вивести резюме виду(підставити свої дані) :

      //   …:: : RESUME:: : …

       //  Name : Ivan
       //  Surname : Ivanov
      //   Last name : Ivanovich

       //  Date of birth : 22.06.06
       //  City : Rivne
      //   Age : 17

     //    Hobby : C++
       //  ::……………………...................……::




     //cout << "    : ::RESUME:: : \n";
     //cout << " Name :         Artem\n ";
     //cout << "Surname :      Polishchuk\n ";
     //cout << "Last name :    Vasylovich\n ";
 
     //cout << "Date of birth :  30.10.2008\n ";
     //cout << "City :           Rivne\n ";
     //cout << "Age :            16\n ";
     //  
     //cout << "Hobby :          C++\n ";
     //cout << "::...........................::";
 
 




    // 3. Дана діагональ телевізора в дюймах.Написати програму,
     //    що визначає цю ж діагональ у сантиметрах(1 дюйм =
        //     2.54 сантиметрів).
       //  Нижче представлений приклад для перевірки програ -
       //  ми на коректність.

       //  Вхідними даними є :
    // Діагональ телевізора(inch) — > 42
    ////     ––––––––––––––––––––––––
     //    Вихідні дані :
   //  Діагональ телевізора : 107 см.



        /* int diagonal;
         cout << "TV diagonal (inch):   ";
         cin >> diagonal;
         int diagonalInCm = diagonal * 2.54;
         cout << "__________________________" <<;
         cout << "\nTV diagonal: " << diagonalInCm << "sm.";

      */
     






   /*  4. За один день хом'ячок з'їдає K грам корму.Написати
         програму, що визначає закупівлю корму в кілограмах
         на 30 днів.

         Нижче представлений приклад для перевірки програ -
         ми на коректність.

         Вхідними даними є :
     Витрата корму за 1 день(г) -> 20
         –––––––––––––––––––––––
         Вихідні дані :
     Обсяг корму на 30 днів : 0.6 кг.*/
         
     
     
     
     //int food;
     //    cout << "Feed consumption for 1 day (g) -> ";
     //    cin >> food;
     //    double FoodKg = (food * 30) / 1000.0;
     //    cout << "________________________";
     //    cout << "\nFeed volume for 30 days: " << FoodKg << " kg.";




 
 
 
 
 
// }

 //26.02.2025
//#include <iostream>
//using namespace std;
//int main() {
//    //1.Дано сторони прямокутника. Визначити чи прямокутник є квадратом.
//    int length, width;
//    cout << "Enter the length and width of the rectangle: ";
//    cin >> length >> width;
//    if (length == width) {
//        cout << "This is a square." << endl;
//    }
//    else {
//        cout << "This is a rectangle." << endl;
//    }
//
//    // 2.Дано вік дитини. Виначити чи дитина по віку може навчатися у школі, чи може відвідувати дитсадок і т.і.
//    int age;
//    cout << "Enter the child's age: ";
//    cin >> age;
//    if (age >= 6 && age <= 17) {
//        cout << "The child can study at school." << endl;
//    }
//    else if (age >= 3 && age < 6) {
//        cout << "The child can attend kindergarten." << endl;
//    }
//    else {
//        cout << "The child is already older than school age." << endl;
//    }
//
//    //3.Дано 3 числа. Визначити чи рівно два серед них від’ємні.
//    int a, b, c;
//    cout << "Enter three numbers: ";
//    cin >> a >> b >> c;
//    int negativeCount = (a < 0) + (b < 0) + (c < 0);
//    if (negativeCount == 2) {
//        cout << "Exactly two numbers are negative." << endl;
//    }
//    else {
//        cout << "Not exactly two numbers are negative." << endl;
//    }
//
//    
//    // 5.Дано три числа. Визначити чи тільки два з них рівні між собою.
//    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
//        cout << "Exactly two numbers are equal to each other." << endl;
//    }
//    else {
//        cout << "Not exactly two numbers are equal to each other." << endl;
//    }
//
//
//}
//
// 
//10.03.2025
// #include <iostream>
// using namespace std;

// int main() {
//     // Завдання 1
//     int length, width;
//     cout << "Enter the length and width of the rectangle: ";
//     cin >> length >> width;
//     if (length == width) {
//         cout << "This is a square." << endl;
//     }
//     else {
//         cout << "This is a rectangle." << endl;
//     }

//     // Завдання 2
//     int num = 5;
//     int factorial = 1;
//     for (int i = 1; i <= num; ++i) {
//         factorial *= i;
//     }
//     cout << "Factorial of " << num << ": " << factorial << endl;
    

//     // Завдання 3
//     int number = 7;
//     int isPrime = 1;
//     if (number <= 1) {
//         isPrime = 0;
//     }
//     else if (number == 2 || number == 3) {
//         isPrime = 1;
//     }
//     else if (number % 2 == 0 || number % 3 == 0) {
//         isPrime = 0;
//     }
//     else {
//         for (int i = 5; i * i <= number; i += 6) {
//             if (number % i == 0 || number % (i + 2) == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//     }
   


//     // Завдання 5
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;
//     if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
//         cout << "Exactly two numbers are equal." << endl;
//     }
//     else {
//         cout << "Not exactly two numbers are equal." << endl;
//     }

//     return 0;
// }



  
 

  
 // 05.03.2025

#include <iostream>
using namespace std;

int main() {
    //  1. .Вивести на екран n одиниць, потім 2n двійок, 
//потім 3n трійок.Число n вводить користувач.
//(Зробити вкладеним циклом одним)
    //  int n;
    //    cout << "Print  n: ";
    //    cin >> n;
    //    for (int i = 1; i <= 3; ++i) {
    //        for (int j = 0; j < i * n; ++j) {
    //            cout << i;
    //        }
    //        cout << endl;
    //    }
    //}
    // 3..Вивести ряд чисел: десять десяток, дев'ять дев'яток, 
    //вісім вісімок, ..., одну одиницю.
    //Знайти суму всіх цих чисел.
//    int sum_numbers = 0;
//    for (int i = 10; i >= 1; --i) {
//        for (int j = 0; j < i; ++j) {
//            cout << i;
//            sum_numbers += i;
//        }
//        cout << endl;
//    }
//    cout << "Sum all numbers:" << sum_numbers << endl;
//}
// 6.Виведіть на екран таблицю множення для чисел від 1 до 10.
//    for (int i = 1; i <= 10; ++i) {
//        for (int j = 1; j <= 10; ++j) {
//            cout << i << " * " << j << " = " << i * j << "\n";
//        }
//        cout << endl;
//    }
//}





//07.03.2025
//#include <iostream>
//    using namespace std;
//    int countZeros(int arr[3][4])
//  { 
//        int zeroCount = 0;
//        for (int i = 0; i < 3; ++i)
//        {
//            for (int j = 0; j < 4; ++j)
//            {
//                if (arr[i][j] == 0) 
//                {
//                    ++zeroCount;
//                }
//            }
//        }
//        return zeroCount;
//  }
//    int main()
//    {
//        int arr[3][4];
//        cout << "Введіть елементи масиву 3x4:" << endl;
//        for (int i = 0; i < 3; ++i)
//        {
//            for (int j = 0; j < 4; ++j) 
//            {
//                cin >> arr[i][j];
//            }
//        }
//        cout << "Кількість елементів, що дорівнюють нулю: " << countZeros(arr) << endl;
//
//        return 0;
//    }

//12.03.2025
// #include <iostream>
// #include <limits>
// using namespace std;
// int maxValue(int a, int b) 
// {
//     if (a > b) 
//     {
//         return a;
//     } else 
//     {
//         return b;
//     }
// }

// int maxValue(int a, int b, int c) 
// {
//     if (a >= b && a >= c) 
//     {
//         return a;
//     } else if (b >= a && b >= c)
//     {
//        return b;
//     } else 
//     {
//        return c;
//     }
// }


// int minValue(int a, int b) 
// {
//    if (a < b) 
//    {
//         return a;
//    } else
//     {
//         return b;
//     }
// }

// int minValue(int a, int b, int c) 
// {
//     if (a <= b && a <= c) 
//     {
//        return a;
//     } else if (b <= a && b <= c) 
//     {
//         return b;
//     } else 
//     {
//         return c;
//     }
// }


// int average(int arr[], int size) 
// {
//     if (size == 0) throw invalid_argument("The array is empty");
//     int sum = 0;
//     for (int i = 0; i < size; ++i) 
//     {
//        sum += arr[i];
//     }
//     return sum / size;
// }


// int maxInArray(int arr[], int size) 
// {
//     if (size == 0) throw invalid_argument("The array is empty");
//     int maxVal = arr[0];
//     for (int i = 1; i < size; ++i) 
//     {
//         if (arr[i] > maxVal) 
//         {
//             maxVal = arr[i];
//         }
//     }
//     return maxVal;
// }


// int maxIn2DArray(int** arr, int rows, int cols)
// {
//     if (rows == 0 || cols == 0) throw invalid_argument("The array is empty");
//     int maxVal = arr[0][0];
//     for (int i = 0; i < rows; ++i) 
//     {
//        for (int j = 0; j < cols; ++j) 
//        {
//             if (arr[i][j] > maxVal) 
//             {
//                 maxVal = arr[i][j];
//             }
//        }
//     }
//     return maxVal;
// }

// int main()
// {
//     try
//     {

//         cout << "Max(5, 10): " << maxValue(5, 10) << endl;
//         cout << "Max(3, 7, 2): " << maxValue(3, 7, 2) << endl;

//         cout << "Min(5, 10): " << minValue(5, 10) << endl;
//         cout << "Min(3, 7, 2): " << minValue(3, 7, 2) << endl;


//         int arr1D[] = { 1, 2, 3, 4, 5 };
//         cout << "Average of arr: " << average(arr1D, 5) << endl;
//         cout << "Max in arr: " << maxInArray(arr1D, 5) << endl;


//         int rows = 2, cols = 3;
//         int** arr2D = new int* [rows];
//         for (int i = 0; i < rows; ++i)
//         {
//             arr2D[i] = new int[cols] { i + 1, i + 5, i + 3 };
//         }

//         cout << "Max in arr: " << maxIn2DArray(arr2D, rows, cols) << endl;
//     }
// }









// 17.03.2025
#include <iostream>
using namespace std;

// 1.Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох 
//заданих чисел, середє арифметичне, найменше з них, користуючись
//непрямим доступом до чисел(через вказівники).
void task1(int* a, int* b, int* c)
{
    int product = (*a) * (*b) * (*c);
    double average = (*a + *b + *c) / 3.0;
    int minus = min(*a, min(*b, *c));

    cout << "Product: " << product << endl;
    cout << "Arithmetic average: " << average << endl;
    cout << "Minimum value: " << minus << endl;
}

// 2.Дано цілочисельний одновимірний масив. Заповнити його, 
//вивести на екран у прямому та зворотньому порядку та порахувати
//суму елементів з використанням вказівників.
void task2(int* arr, int size)
{
    int sum = 0;
    cout << "Massif: ";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
        sum += *(arr + i);
    }

    cout << "Direct order:  ";
    for (int i = 0; i < size; i++) 
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Inverse: ";
    for (int i = size - 1; i >= 0; i--) 
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Sum of elements: " << sum << endl;
}










////17.03.2025
//#include <iostream>
//using namespace std;
//
//void task3(int* arr, int size)
//{
//    int* min = arr, * max = arr;
//    for (int i = 1; i < size; i++)
//    {
//        if (*(arr + i) < *min) min = arr + i;
//        if (*(arr + i) > *max) max = arr + i;
//    }
//
//    int temp = *min;
//    *min = *max;
//    *max = temp;
//
//    cout << "Array after replacement: ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
















// 19.03.2025

#include <iostream>
#include <algorithm>
using namespace std;
void matiz(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ingridientu(int* arr, int size) 
{
    for (int i = 0; i < size; ++i) 
    {
       if (*(arr + i) < 0)
       {
          *(arr + i) = 0;
       }
    }
}

int main() 
{
    int a = 3, b = -5, c = 7;
    int* A = &a, * B = &b, * C = &c;
    int product = (*A) * (*B) * (*C);
    double average = (*A + *B + *C) / 3.0;
    int  minimum = min({ *A, *B, *C });
    cout << "Product of numbers: " << product << endl;
    cout << "Arithmetic average:" << average << endl;
    cout << "The smallest number: " << minimum << endl;

