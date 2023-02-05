#include <iostream>
#include <string>

using namespace std;

string fizzbuzz (int i){
    //a number divisible by 3 and 5 will always be divisible by 15
    if (( i % 15) == 0 ){
        return ("fizzbuzz\t");
    }
    //if number is divisible by 3, return 'fizz'
    else if (( i % 3 ) == 0) {
            return("fizz\t");                
    }
        // number divisible by 5, return 'buzz' 
        // in place of the number
    else if (( i % 5 ) == 0){                      
            return("buzz\t");                
    }
    else {
     // return the number
        std::string text = "";
        text += std::to_string(i);
        return(text);
    }

}

int main ()
   {
     for (int n=1; n<=50; ++n)
     {
       cout << fizzbuzz(n);
     }
  }
