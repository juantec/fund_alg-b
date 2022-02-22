#include <stdio.h>
#include <stdbool.h>

int main(){
  int numberTotest  = 10;
  int result = numberTotest % 2;
  bool hasModule = ( result > 0);

  if (hasModule) {
      printf("odd");
  } else {
      printf("Pair"); 
  }
}

//
//g++ even_odd.c  -o pairtask
// ./pairtask