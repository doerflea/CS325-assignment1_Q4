#include<iostream>
#include<vector>
#include<string>

#include "mergeSort.hpp"
#include "randArrayGen.hpp"

int main(){

   for(int i = 1; i <= 10; i++){
      std::vector<int>array = genRand(i);
      std::cout << "Array " << i << " size: " << array.size() << std::endl;
      mergeSort(array,0,array.size()-1);
   }

   return 0;
}
