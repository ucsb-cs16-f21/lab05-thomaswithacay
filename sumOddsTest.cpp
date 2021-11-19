#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
  
  int zero[3]={1,0,-1};
  assertEquals(0,
               sumOdds(zero,3),
               "sumOdds(zero,3)" );

  int two[4] = {-5, 4, 4, 7};
  assertEquals(2,
               sumOdds(two,4),
               "sumOdds(two,4)" );

  int negSixteen[2] = {15, -31 };
  assertEquals(-16,
               sumOdds(negSixteen,2),
               "sumOdds(negSixteen,2)" );
 
  int fiftySix[8] = {7, 7, 7, 7, 7, 7, 7, 7};
  assertEquals(56,
                sumOdds(fiftySix,8),
                "sumOdds(fiftySix,8)" );
  
  
  return 0;
}
