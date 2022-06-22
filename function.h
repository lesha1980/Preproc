#pragma once

int* fillArr(int*, size_t);
float* fillArr(float*, size_t);
char* fillArr(char*, size_t);
void consoleOut(char*, size_t);
void consoleOut(int*, size_t);
void consoleOut(float*, size_t);
float minEl(float*, size_t);
int minEl(int*, size_t);
char minEl(char*, size_t);
int maxEl(int*, size_t);
char maxEl(char*, size_t);
float maxEl(float*, size_t);
char* sortArr(char*, size_t);
float* sortArr(float*, size_t);
int* sortArr(int*, size_t);
int* editArr(int*, size_t, int, int);
char* editArr(char*, size_t, char, int);
float* editArr(float*, size_t, float, int);

#define INTEGER int
#define FLOAT float
#define CHAR char


#define ShowArray consoleOut
#define FillArray fillArr
#define MinElementArray minEl
#define MaxElementArray maxEl
#define SortArray sortArr
#define EditElementArray editArr
 












