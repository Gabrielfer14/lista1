/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int x ,y, m , n, b;
    while  ( cin >> std::ws >> x >> y){
      m = x;
      n = y;
      b = x;
        if( n == 0)
        cout << b << endl;
        if (n > 0){
            for(int i = 0; i < n; i++){
                x += m++;
            }
            cout << x-b << endl;
        }
        if( n < 0) {
            for(int j = 0;j > n; j--){
                x += m--;
            }
            cout << x-b << endl;
        }
    }
    return 0;
}
