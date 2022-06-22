#include "header.h"

int main() {
	setlocale(LC_ALL, "");

#ifdef  INTEGER
	INTEGER* arr = new INTEGER[100];
	arr = FillArray(arr, 100);
	ShowArray(arr, 100);
	cout << endl;
	INTEGER min = MinElementArray(arr, 100);
	cout << "Минимальный элемент INTEGER " << min << endl;
	INTEGER max = MaxElementArray(arr, 100);
	cout << "Максимальный элемент INTEGER " << max << endl;
	arr = SortArray(arr, 100);
	cout << "Отсортированный массив INTEGER" << endl;
	ShowArray(arr, 100);
	cout << endl;

#endif //  INTEGER

#ifdef CHAR
	CHAR * arr1 = new CHAR[100];
	arr1 = FillArray(arr1, 100);
	ShowArray(arr1, 100);
	cout << endl;
	CHAR min1 = MinElementArray(arr1, 100);
	cout << "Минимальный элемент CHAR " << min1 << endl;
	CHAR max1 = MaxElementArray(arr1, 100);
	cout << "Максимальный элемент CHAR " << max1 << endl;
	arr1 = SortArray(arr1, 100);
	cout << "Отсортированный массив CHAR" << endl;
	ShowArray(arr, 100);
	cout << endl;

#endif

#ifdef FLOAT

	FLOAT * arr2 = new FLOAT[100];
	arr2 = FillArray(arr2, 100);
	ShowArray(arr2, 100);
	cout << endl;
	FLOAT min2 = MinElementArray(arr2, 100);
	cout << "Минимальный элемент FLOAT " << min2 << endl;
	FLOAT max2 = MaxElementArray(arr2, 100);
	cout << "Максимальный элемент FLOAT " << max2 << endl;
	arr2 = SortArray(arr2, 100);
	cout << "Отсортированный массив FLOAT" << endl;
	ShowArray(arr, 100);
	cout << endl;
#endif

	

	return 0;
}