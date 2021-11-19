#include "arrayFuncs.h"
#include <iostream>
int sumOfArray(int a[], int size) {
 int arraySum = 0;
  for (int i = 0; i < size; ++i) {
    arraySum = arraySum + a[i];
 }
 return arraySum;
}
