#include "function.h"

using namespace std;

std::vector<unsigned int> fib_below_n( unsigned int n )
{
   vector<unsigned int> fib;
   if(n == 0 || n == 1){
     return fib;
   }
   else{   
     fib.resize(n);
     fib[0] = 1;
     fib[1] = 1;
     int i = 2;
     while(fib[i-1] + fib[i-2] < n){
       fib[i] = fib[i-1]+fib[i-2];
       i++;
       }
     fib.erase(remove(begin(fib), end(fib), 0), end(fib));
     fib.shrink_to_fit();
     return fib;
   }
}
