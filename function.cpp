#include "header.h"

int* fillArr(int* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
	return arr;
}

float* fillArr(float* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		float a = rand() % 100;
		arr[i] = a;
	}
	return arr;
}

char* fillArr(char* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		arr[i] = (char)rand() % 126;
	}
	return arr;
}

void consoleOut(char* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << (char)arr[i] << ", ";
	}

}

void consoleOut(int* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << ", ";
	}

}

void consoleOut(float* arr, size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << ", ";
	}

}

float minEl(float* arr, size_t size) {

	float min = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	return min;
}

int minEl(int* arr, size_t size) {

	int min = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	return min;
}

char minEl(char* arr, size_t size) {

	char min = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	return min;
}

int maxEl(int* arr, size_t size) {

	int max = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}

char maxEl(char* arr, size_t size) {

	char max = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}

float maxEl(float* arr, size_t size) {

	char max = arr[0];
	for (size_t i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}

char* sortArr(char* arr, size_t size) {

	char min = arr[0];
	for (size_t i = 0; i < size; i++) {
		for (size_t j = i + 1; j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}

	return arr;
}

float* sortArr(float* arr, size_t size) {

	float min = arr[0];
	for (size_t i = 0; i < size; i++) {
		for (size_t j = i + 1; j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}

	return arr;
}


int* sortArr(int* arr, size_t size) {

	
	for (size_t i = 0; i < size; i++) {
		int min = arr[i];
		for (size_t j = i + 1; j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}

	}

	return arr;
}

int* editArr(int* arr, size_t size, int newval, int index) {
	arr[index] = newval;
	return arr;
}

char* editArr(char* arr, size_t size, char newval, int index) {
	arr[index] = newval;
	return arr;
}

float* editArr(float* arr, size_t size, float newval, int index) {
	arr[index] = newval;
	return arr;
}





