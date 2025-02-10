#ifndef FUNCTION_H
#define FUNCTION_H

#ifdef INTEGER
#define FillArray FillArrayInt
#define ShowArray ShowArrayInt
#define FindMin FindMinInt
#define FindMax FindMaxInt
#define SortArray SortArrayInt
#define EditValue EditValueInt
#endif

#ifdef DOUBLE
#define FillArray FillArrayDouble
#define ShowArray ShowArrayDouble
#define FindMin FindMinDouble
#define FindMax FindMaxDouble
#define SortArray SortArrayDouble
#define EditValue EditValueDouble
#endif

#ifdef CHAR
#define FillArray FillArrayChar
#define ShowArray ShowArrayChar
#define FindMin FindMinChar
#define FindMax FindMaxChar
#define SortArray SortArrayChar
#define EditValue EditValueChar
#endif

void FillArrayInt(int* arr, int size);
void ShowArrayInt(int* arr, int size);
int FindMinInt(int* arr, int size);
int FindMaxInt(int* arr, int size);
void SortArrayInt(int* arr, int size);
void EditValueInt(int* arr, int size, int index, int value);

void FillArrayDouble(double* arr, int size);
void ShowArrayDouble(double* arr, int size);
double FindMinDouble(double* arr, int size);
double FindMaxDouble(double* arr, int size);
void SortArrayDouble(double* arr, int size);
void EditValueDouble(double* arr, int size, int index, double value);

void FillArrayChar(char* arr, int size);
void ShowArrayChar(char* arr, int size);
char FindMinChar(char* arr, int size);
char FindMaxChar(char* arr, int size);
void SortArrayChar(char* arr, int size);
void EditValueChar(char* arr, int size, int index, char value);

#endif
