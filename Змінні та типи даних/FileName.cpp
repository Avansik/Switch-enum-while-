
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





















//
////26.03.2025
//
//
//
////
////
////Завдання 1.
////Дано текст та символ(ввести з клавіатури).
////Порахувати кількість входжень цього символа у рядку. (strchr)
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() 
//{
//    char text[100];
//    char symbol;
//    cout << "Enter a text: ";
//    cin.getline(text, 100);
//    cout << "Enter a symbol to count: ";
//    cin >> symbol;
//
//    int count = 0;
//    char* ptr = text;
//
//    while ((ptr = strchr(ptr, symbol)) != nullptr)
//    {
//        count++;
//        ptr++;
//    }
//
//    cout << "The symbol '" << symbol << "' appears " << count << " times in the text." << endl;
//  
//}
////Завдання 2.
////Дано текст та два символи(ввести з клавіатури).
////Замінити у тексті один символ на інший. (strchr)
////* *Зробити це не більше чим N разів
//
//
//
//
//
//
//
//
//
//int main()
//{
//    char text[100];
//    char oldChar, newChar;
//    int N;
//
//    cout << "Enter a text: ";
//    cin.getline(text, 100);
//    cout << "Enter the symbol to replace: ";
//    cin >> oldChar;
//    cout << "Enter the symbol to replace with: ";
//    cin >> newChar;
//    cout << "Enter the maximum number of replacements: ";
//    cin >> N;
//
//    int count = 0;
//    char* ptr = text;
//
//    while ((ptr = strchr(ptr, oldChar)) != nullptr && count < N) {
//        *ptr = newChar;
//        count++;
//        ptr++;
//    }
//
//    cout << "Modified text: " << text << endl;
//}
//
//
//
//
//
//
//
//
////Завдання 3.
////Вводиться послідовність N слів(N вводиться з клавіатури).Об'єднати у окремий рядок слова, що  починаються та закінчуються на однакову букву.
////strcat, strlen()
//
//int main() {
//    int N;
//    cout << "Enter the number of words: ";
//    cin >> N;
//
//    char words[100][100], result[1000] = "";
//
//    cout << "Enter the words:" << endl;
//    for (int i = 0; i < N; i++) {
//        cin >> words[i];
//    }
//
//    for (int i = 0; i < N; i++) {
//        int len = strlen(words[i]);
//        if (words[i][0] == words[i][len - 1]) {
//            strcat(result, words[i]);
//            strcat(result, " ");
//        }
//    }
//
//    cout << "Resulting string: " << result << endl;
//    return 0;
//}















//03.21.2025
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int countA = 0, countO = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            countA++;
        }
        if (str[i] == 'o' || str[i] == 'O') {
            countO++;
        }
    }

    cout << "Count of 'a': " << countA << endl;
    cout << "Count of 'o': " << countO << endl;

    if (countA > countO) {
        cout << "More 'a' letters." << endl;
    }
    else if (countO > countA) {
        cout << "More 'o' letters." << endl;
    }
    else {
        cout << "Equal number of 'a' and 'o' letters." << endl;
    }

    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int letters = 0, digits = 0, spaces = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        }
    }

    cout << "Latin letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
 
   
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Original string: " << str << endl;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }

    cout << "Modified string: " << str << endl;
 
}






























//26.03.2025
//#include <iostream>
//#include <cstdlib>
//#include <ctime>

//using namespace std;


//int* createArray(int size) {
//    return new int[size];
//}


//void fillArray(int* arr, int size, int min = -10, int max = 10) {
////    for (int i = 0; i < size; i++) {
//        arr[i] = min + rand() % (max - min + 1);
//    }
//}


//void printArray(const int* arr, int size) {
//    for (int i = 0; i < size; i++) {
////        cout << arr[i] << " ";
  //  }
  //  cout << endl;
//}


//void addToFront(int*& arr, int& size, int value) {
//    int* newArr = new int[size + 1];
  //  newArr[0] = value;
  //  for (int i = 0; i < size; i++) {
  //      newArr[i + 1] = arr[i];
 //   }
  //  delete[] arr;
 //   arr = newArr;
  //  size++;
//}

//void addToEnd(int*& arr, int& size, int value) {
//    int* newArr = new int[size + 1];
//    for (int i = 0; i < size; i++) {
//        newArr[i] = arr[i];
//    }
//    newArr[size] = value;
 //   delete[] arr;
 //   arr = newArr;
 //   size++;
//}

//void removeLast(int*& arr, int& size) {
//    if (size == 0) return;
//    int* newArr = new int[size - 1];
//    for (int i = 0; i < size - 1; i++) {
 //       newArr[i] = arr[i];
  //  }
  //  delete[] arr;
  //  arr = newArr;
 //   size--;
//}


////void removeFirst(int*& arr, int& size) {
//    if (size == 0) return;
//    int* newArr = new int[size - 1];
//    for (int i = 1; i < size; i++) {
   //     newArr[i - 1] = arr[i];
   // }
  //  delete[] arr;
   // arr = newArr;
  //  size--;
//}

//void removeAt(int*& arr, int& size, int index) {
//    if (index < 0 || index >= size) return;
////    int* newArr = new int[size - 1];
//    for (int i = 0, j = 0; i < size; i++) {
//        if (i != index) {
//            newArr[j++] = arr[i];
//        }
//    }
 //   delete[] arr;
 //   arr = newArr;
 //   size--;
//}


//void insertAt(int*& arr, int& size, int index, int value) {
//    if (index < 0 || index > size) return;
//    int* newArr = new int[size + 1];
 //   for (int i = 0, j = 0; i < size + 1; i++) {
 //       if (i == index) newArr[i] = value;
  //      else newArr[i] = arr[j++];
 //   }
  //  delete[] arr;
  //  arr = newArr;
  //  size++;
//}


//void removeNegatives(int*& arr, int& size) {
////    for (int i = 0; i < size; ) {
//        if (arr[i] < 0)
  //          removeAt(arr, size, i);
   //     else
       //     i++;
  //  }
//}


//void addBlock(int*& arr, int& size, const int* block, int sizeBlock) {
//    int* newArr = new int[size + sizeBlock];
//    for (int i = 0; i < size; i++) newArr[i] = arr[i];
//    for (int i = 0; i < sizeBlock; i++) newArr[size + i] = block[i];
//    delete[] arr;
//    arr = newArr;
//    size += sizeBlock;
//}

//void removeBlock(int*& arr, int& size, int index, int length) {
//    if (index < 0 || index >= size || length <= 0 || index + length > size) return;
//    int* newArr = new int[size - length];
//    for (int i = 0, j = 0; i < size; i++) {
//        if (i < index || i >= index + length) newArr[j++] = arr[i];
//    }
//    delete[] arr;
//    arr = newArr;
//    size -= length;
//}

//int* intersect(const int* a, int sizeA, const int* b, int sizeB, int& sizeOut) {
//   int* temp = new int[min(sizeA, sizeB)];
////    sizeOut = 0;
  //  for (int i = 0; i < sizeA; i++) {
   //     for (int j = 0; j < sizeB; j++) {
    //        if (a[i] == b[j]) {
     //      
      //          bool exists = false;
        //        for (int k = 0; k < sizeOut; k++) {
        //            if (temp[k] == a[i]) {
        //               exists = true;
         //              break;
           //         }
           //     }
           //     if (!exists) {
            //        temp[sizeOut++] = a[i];
           //     }
         //       break;
       //     }
     //   }
  //  }
 //   int* result = new int[sizeOut];
 //   for (int i = 0; i < sizeOut; i++) result[i] = temp[i];
 //   delete[] temp;
 //   return result;
//}


//int main() {
//    srand(time(nullptr));
//
 //   int size = 5;
   // int* arr = createArray(size);
  //  fillArray(arr, size);
  //  cout << "Початковий масив: ";
  //  printArray(arr, size);

//    addToFront(arr, size, 100);
//    cout << "Після додавання 100 на початок: ";
 //   printArray(arr, size);
//
//    addToEnd(arr, size, 200);
//    cout << "Після додавання 200 в кінець: ";
//    printArray(arr, size);

//    removeFirst(arr, size);
//    cout << "Після видалення першого елемента: ";
//    printArray(arr, size);
//
   // removeLast(arr, size);
  //  cout << "Після видалення останнього елемента: ";
   // printArray(arr, size);

  //  insertAt(arr, size, 2, 555);
  //  cout << "Після вставки 555 на позицію 2: ";
  //  printArray(arr, size);

  //  removeAt(arr, size, 2);
 //   cout << "Після видалення елемента з позиції 2: ";
 //   printArray(arr, size);

  //  removeNegatives(arr, size);
 //   cout << "Після видалення від’ємних: ";
 //   printArray(arr, size);

  //  int block[] = {9, 8, 7};
//    addBlock(arr, size, block, 3);
//    cout << "Після додавання блоку {9, 8, 7}: ";
 //   printArray(arr, size);

   // removeBlock(arr, size, 1, 3);
    // // cout << "Після видалення блоку з позиції 1 довжиною 3: ";
    // printArray(arr, size);

   //  int a[] = {1, 2, 3, 4, 5};
    // int b[] = {3, 4, 5, 6, 7};
    // int sizeInt;
   // int* c = intersect(a, 5, b, 5, sizeInt);
 //   cout << "Перетин масивів A і B: ";
   // printArray(c, sizeInt);
  //  delete[] c;

   // delete[] arr;
 //   return 0;
//}










































//28.03.2025
 //#include <iostream>
 //#include <cstdlib>
 //#include <ctime>

 //using namespace std;
 //int** createMatrix(int rows, int cols) {
  //   int** matrix = new int*[rows];
   //  for (int i = 0; i < rows; i++)
  //       matrix[i] = new int[cols];
 //    return matrix;
 //}
 //void fillMatrix(int** matrix, int rows, int cols, int min = -10, int max = 10) {
 //    for (int i = 0; i < rows; i++)
 //  //       for (int j = 0; j < cols; j++)
    //         matrix[i][j] = min + rand() % (max - min + 1);
 //}


 //void printMatrix(int** matrix, int rows, int cols) {
 //    for (int i = 0; i < rows; i++) {
  //  //      for (int j = 0; j < cols; j++)
   //          cout << matrix[i][j] << "\t";
   //      cout << endl;
 //    }
 //}


 //void addRowToTop(int**& matrix, int& rows, int cols, int* newRow) {
 //    int** newMatrix = new int*[rows + 1];
 //    newMatrix[0] = newRow;
 //    for (int i = 0; i < rows; i++)
  //       newMatrix[i + 1] = matrix[i];
 //    delete[] matrix;
 //    matrix = newMatrix;
 //    rows++;
 //}


 //void removeRowAt(int**& matrix, int& rows, int index) {
  //   if (index < 0 || index >= rows) return;
  //   delete[] matrix[index];
 //    int** newMatrix = new int*[rows - 1];
 //    for (int i = 0, j = 0; i < rows; i++) {
    //     if (i != index)
    // //         newMatrix[j++] = matrix[i];
  //   }
  //   delete[] matrix;
  //   matrix = newMatrix;
  //   rows--;
 //}


 //void insertRowAt(int**& matrix, int& rows, int cols, int index, int* newRow) {
 //    if (index < 0 || index > rows) return;
   //  int** newMatrix = new int*[rows + 1];
 //    for (int i = 0, j = 0; i < rows + 1; i++) {
  // //       if (i == index)
  //           newMatrix[i] = newRow;
 //        else
  //           newMatrix[i] = matrix[j++];
 //    }
 //    delete[] matrix;
 //    matrix = newMatrix;
 //    rows++;
 //}


 //int** createTrianMatrix(int rows) {
 //    int** matrix = new int*[rows];
 //    for (int i = 0; i < rows; i++)
 //        matrix[i] = new int[i + 1];
 //    return matrix;
 //}


 //void fillRandTrianMatrix(int** matrix, int rows, int left = 0, int right = 100) {
  //   for (int i = 0; i < rows; i++)
   //      for (int j = 0; j <= i; j++)
 //            matrix[i][j] = left + rand() % (right - left + 1);
 //}

 //void printTrianMatrix(int** matrix, int rows) {
 //    for (int i = 0; i < rows; i++) {
 //    //     for (int j = 0; j <= i; j++)
     //        cout << matrix[i][j] << "\t";
    //     cout << endl;
  //   }
 //}


 //int** transposeMatrix(int** matrix, int rows, int cols) {
 //    int** transposed = new int*[cols];
 //    for (int i = 0; i < cols; i++) {
 //        transposed[i] = new int[rows];
  //       for (int j = 0; j < rows; j++) {
  //           transposed[i][j] = matrix[j][i];
  //      }
  //   }
 // //    return transposed;
 //}

 //int main() {
 //    srand(time(nullptr));

  //   int rows = 3, cols = 4;
   //  int** matrix = createMatrix(rows, cols);
   //  fillMatrix(matrix, rows, cols);

   //  cout << "Початкова матриця:\n";
   //  printMatrix(matrix, rows, cols);

   //  int* newRow = new int[cols]{1, 2, 3, 4};
   // //  addRowToTop(matrix, rows, cols, newRow);
  //   cout << "\nПісля додавання нового рядка на початок:\n";
   //  printMatrix(matrix, rows, cols);

   //  int* insertedRow = new int[cols]{9, 9, 9, 9};
  //   insertRowAt(matrix, rows, cols, 2, insertedRow);
  //   cout << "\nПісля вставки рядка на позицію 2:\n";
   //  printMatrix(matrix, rows, cols);

   //  removeRowAt(matrix, rows, 1);
   //  cout << "\nПісля видалення рядка з позиції 1:\n";
   //  printMatrix(matrix, rows, cols);

   //  int** transposed = transposeMatrix(matrix, rows, cols);
  //   cout << "\nТранспонована матриця:\n";
  //   printMatrix(transposed, cols, rows);

   //  cout << "\nТрикутна матриця:\n";
   //  int** triMatrix = createTrianMatrix(5);
  //  fillRandTrianMatrix(triMatrix, 5);
  //  printTrianMatrix(triMatrix, 5);

//    return 0;
//}





//31.03.2025
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;

// Завдання 1
//using FUN = void(*)(int);

//void square(int side) {
//    for (int i = 0; i < side; ++i) {
       // for (int j = 0; j < side; ++j)
     //       cout << "* ";
       // cout << endl;
//    }
//}

//void triangle(int height) {
//    for (int i = 1; i <= height; ++i) {
//        for (int j = 0; j < i; ++j)
  //          cout << "* ";
    //    cout << endl;
  //  }
//}

// Завдання 2
//void forEach(int* arr, int size, void(*func)(int&)) {
    //for (int i = 0; i < size; ++i)
        //func(arr[i]);
//}

//void inc(int& x) { x++; }
//void dbl(int& x) { x *= 2; }
//void dec(int& x) { x--; }

// Завдання 3
//void arraysAction(int* a1, int* a2, int* a3, int size, int(*op)(int, int)) {
    //for (int i = 0; i < size; ++i)
       // a3[i] = op(a1[i], a2[i]);
//}

//int add(int a, int b) { return a + b; }
//int sub(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//int maxx(int a, int b) { return (a > b) ? a : b; }
//int avg(int a, int b) { return (a + b) / 2; }

// Завдання 4 (макроси)
//#define MIN(a,b) (((a)<(b))?(a):(b))
//#define MAX(a,b) (((a)>(b))?(a):(b))
//#define SQR(x) ((x)*(x))
//#define EVEN(x) (((x)%2==0)?"even":"odd")

//int main() {
 //   srand(time(nullptr));

    // Завдання 1: Вказівник на функцію
  //  FUN ptr = square;
 //   cout << "Square 4x4:\n";
 //   ptr(4);
//    ptr = triangle;
   // cout << "\nTriangle height 4:\n";
//    ptr(4);

    // Завдання 2: Обробка масиву через вказівник на функцію
 //   int arr[] = {1, 2, 3, 4, 5};
 //   int size = sizeof(arr) / sizeof(arr[0]);
//    forEach(arr, size, inc);
//    cout << "\nArray after inc: ";
//    for (int x : arr) cout << x << " "; cout << endl;

    // Завдання 3: arraysAction
//   int a1[] = {1, 2, 3, 4, 5};
//    int a2[] = {5, 4, 3, 2, 1};
 //   int a3[5];
//    arraysAction(a1, a2, a3, 5, maxx);
//    cout << "\nArray of max values: ";
//    for (int x : a3) cout << x << " "; cout << endl;

    // Завдання 4: Макроси
//    int x = 3, y = 7;
 //   cout << "\nMIN: " << MIN(x, y);
 //   cout << "\nMAX: " << MAX(x, y);
 //   cout << "\nSQR(x): " << SQR(x);
//    cout << "\nx is " << EVEN(x) << endl;

 //   return 0;
//}




