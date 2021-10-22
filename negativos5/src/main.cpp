#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int inteiros[5], negativos = 0;
    for(int i=0;i < 5; i++){
        std::cin >> inteiros[i];
    }
    for(int i = 0; i < 5; i++){
        if (inteiros[i] < 0){
         negativos++;
        }
    }
    cout << negativos ;
    return 0;
}
