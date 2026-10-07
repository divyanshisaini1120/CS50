#include <stdio.h>

int global_counter = 42;

int add_numbers(int a, int b){
   return a+b;   
}

int main(){
   printf("Result: %i\n", add_numbers(5,10));
   
   return 0;
}
 