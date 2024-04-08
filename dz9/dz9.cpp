// dz9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// dz9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//приклад на стор. 12 - 13

//#include <iostream>
//using namespace std;
//
//
//
//// Обмін з використанням покажчиків
//void interchange_ptr(int* u, int* v) {
//	int temp = *u;
//	*u = *v;
//	*v = temp;
//}
//// Обмін з використанням посилань
//void interchange_ref(int& u, int& v) {
//	int temp = u;
//	u = v;
//	v = temp;
//}
//int main() {
//	int x = 5, y = 10;
//	cout << "Change with pointers:\n";
//	cout << "x = " << x << " y = " << y << "\n";
//	// використаємо покажчики
//	interchange_ptr(&x, &y);
//	cout << "x = " << x << " y = " << y << "\n";
//	cout << "----------------------------- " << "\n";
//	cout << "Change with references:\n";
//	cout << "x = " << x << " y = " << y << "\n";
//	// використаємо посилання
//	interchange_ref(x, y);
//	cout << "x = " << x << " y = " << y << "\n";
//	return 0;
//}

//Storinka 23

//#include<iostream>
//#include<time.h>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "Ukrainian");
//	srand(time(NULL));
//	int size;
//	int* dar;
//	// запит розміру масиву з клавіатури
//	cout << "Enter size:\n";
//	cin >> size;
//	// виділення пам'яті під масив з кількістю
//	// елементів size
//	dar = new int[size];
//	// заповнення масиву та вивід на екран
//	for (int i = 0; i < size; i++) {
//		dar[i] = rand() % 100;
//		cout << dar[i] << "\t";
//	}
//	cout << "\n\n";
//	delete[] dar;
//	return 0;
//}

//Zavdannia 2

//#include <iostream>
//using namespace std;
//
//void incTime(int& H, int& M, int& S, int T) {
//	S += T;
//
//
//	if (S >= 60) {
//		M += S / 60;
//		S %= 60;
//	}
//
//
//	if (M >= 60) {
//		H += M / 60;
//		M %= 60;
//	}
//
//
//	if (H >= 24) {
//		H %= 24;
//	}
//}
//
//int main() {
//	int H = 10, M = 30, S = 45;
//	int T = 120; // Збільшуємо час на 120 секунд
//
//	incTime(H, M, S, T);
//
//	cout << "Novy czas: " << H << " Godz. " << M << " Min. " << S << " Sek." << endl;
//
//	return 0;
//}

//Zavdannia 3

//#include <iostream>
//using namespace std;
//
//void InvertDigits(int& K) {
//    int reversed = 0;
//
//    while (K > 0) {
//        reversed = reversed * 10 + K % 10; 
//        K /= 10; 
//    }
//
//    K = reversed; 
//}
//
//int main() {
//    int num1 = 12345;
//    int num2 = 987654;
//    int num3 = 456789;
//    int num4 = 321;
//    int num5 = 555;
//
//    InvertDigits(num1);
//    InvertDigits(num2);
//    InvertDigits(num3);
//    InvertDigits(num4);
//    InvertDigits(num5);
//
//    cout << "Zvorotni czysla: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << endl;
//
//    return 0;
//}

//Zavdannia 4

#include <iostream>
using namespace std;

void createArrayBetween(int* arr, int size, int from, int to, int*& sub_arr, int& sub_size) {
    if (from < 0 || to >= size || from > to) {
        cout << "Incorrect" << endl;
        sub_arr = nullptr;
        sub_size = 0;
        return;
    }

    sub_size = to - from + 1;
    sub_arr = new int[sub_size];

    for (int i = from, j = 0; i <= to; ++i, ++j) {
        sub_arr[j] = arr[i];
    }
}

int main() {
    int arr[] = { 45, -34, 9, 12, 0, -75, 12, 78, 33, 55 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* sub_arr;
    int sub_size;

    int from = 2;
    int to = 7;

    createArrayBetween(arr, size, from, to, sub_arr, sub_size);

    cout << "sub_arr: ";
    for (int i = 0; i < sub_size; ++i) {
        cout << sub_arr[i] << " ";
    }
    cout <<  endl;

    delete[] sub_arr;

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
