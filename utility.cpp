// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  if ((x % 2 == 1) || (x % 2 == -1)) {
   return true;
 }
  else{
   return false;
 }
}
bool isEven(int x) { 
  if ((x % 2 == 1) || (x % 2 == -1)) {
   return false;
 }
  else{
   return true;
 }
}
bool isPrime(int x) { 
  if ((x == 2) || (x == 3) || (x == 5) || (x == 7)) {
   return true;
 }
 if (x <= 1) {
   return false;
 }
  for (int i = 2; i < x; ++i) {
   if (x % i == 0) {
     return false;
  }
 }
  return true;
}
