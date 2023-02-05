#include <iostream>
#include <string>

using namespace std;

void fizzbuzz (int i){
    //a number divisible by 3 and 5 will always be divisible by 15
    if (( i % 15) == 0 ){
        printf ("fizzbuzz\t");
    }
    //if number is divisible by 3, printf 'fizz'
    else if (( i % 3 ) == 0) {
            printf("fizz\t");                
    }
        // number divisible by 5, printf 'buzz' 
        // in place of the number
    else if (( i % 5 ) == 0){                      
            printf("buzz\t");                
    }
    else {
     // printf the number
        printf("%d", i);
    }

}

int main ()
   {
     for (int n=1; n<=50; ++n)
     {
       fizzbuzz(n);
     }
  }

