#include <iostream>
#include <array>
#include<algorithm>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
  std::array< std::string,SIZE > aux;
  int j = 0;
    for(int i = SIZE-1; i >= 0 ; i--){
      aux[j] = arr[i];
      j++;
    }
    std::swap(arr,aux);
}
