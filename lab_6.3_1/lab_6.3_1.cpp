// lab_6.3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int Sum(int mas[], const int n);
int main()
{
	const int k = 4; // кількість елементів масиву
	int b[k] = { 3 ,4 ,5 ,6 };
	int a[k] = { 3 * 3,4 * 4,5 * 5,6 * 6 }; // оголосили та ініціалізували масив
	cout << "S2 = " << Sum(b, k) << endl;
	cout << "S = " << Sum(a, k) << endl;

	return 0;
}
int Sum(int mas[], const int n) // ітераційний спосіб
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += mas[i];
	return s;
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
