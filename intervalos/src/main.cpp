/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

//1= 0-24
//2= 25-49
//3= 50-74
//4= 75-99
//5= <0-100<
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;


int main(void)
{
int x, inter1=0,inter2=0,inter3=0,inter4=0,fora=0;
double total=0;
while  ( cin >> std::ws >> x) {
    if( x >= 0 && x < 25){
        inter1++;
    }
    if( x >= 25 && x < 50){
        inter2++;
    }
    if( x >= 50 && x < 75){
        inter3++;
    }
    if( x >= 75 && x < 100){
        inter4++;
    }
    if( x < 0 || x >=100)
    fora++;
}
 total= inter1 + inter2 + inter3 + inter4 + fora;
 cout << setprecision(4) << 100/(total/inter1) << endl;
 cout << setprecision(4) << 100/(total/inter2) << endl;
 cout << setprecision(4) << 100/(total/inter3) << endl;
 cout << setprecision(4) << 100/(total/inter4) << endl;
 cout << setprecision(4) << 100/(total/fora) << endl;

  return 0;
}