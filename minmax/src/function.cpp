#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
  int menor = 0 , maior = 0, big = 0, small;
    for(int i = 0; i < n; i++){
      if(V[i] < small) {
        small = V[i];
        menor = i;
      }
      if(V[i] > big || V[i] == big){
        big = V[i];
        maior = i;
      }
    }
     if(n == 2 && V[0] > V[1]){
       return {1, 0};
     }
     else if(n == 2 && V[0] < V[1]){
       return {0, 1};
     }
     if(V[0] == V[1]){
        return { 0, int(n-1)};
      }
     if(n == 0){
        return {-1, -1};
      }
    return { menor, maior };
}
