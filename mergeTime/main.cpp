#include<iostream>
#include<vector>
#include<string>

#include "mergeSort.hpp"
#include "randArrayGen.hpp"

int main(){
   
   for(int i = 1; i <= 10; i++){

      std::vector<int>array = genRand(i);
      std::cout << "Array " << i << " size: " << array.size() << std::endl;

      float total = 0;
      float average = 0;

      for(int j = 1; j <= 3; j++){

	 clock_t start_time;
	 start_time = clock();

	 mergeSort(array,0,array.size()-1);

	 float seconds = ((float)clock() - start_time)/ (float)CLOCKS_PER_SEC;
	 total += seconds;

	 std::cout << "Time run: " << j << ": " <<  seconds << std::endl;
      }
      average = total/3;
      std::cout << "Average: " << average << std::endl;
      std::cout << std::endl;
   }

   return 0;
}
