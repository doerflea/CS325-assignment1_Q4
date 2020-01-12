#include<iostream>
#include<vector>
#include<ctime>

#include "insertionSort.hpp"
#include "randArrayGen.hpp"


int main(){

   for(int i = 1; i <= 10; i++){
      std::vector<int>array = genRand(i); //Generates rand array
      std::cout << "Array " << i << " size: " << array.size() << std::endl;

      float total = 0;
      float average = 0;
      float seconds = 0;

      for(int j = 1; j <= 3; j++){

	 clock_t  start_time;
	 start_time  = clock(); //start time

	 insertionSort(array);

	 seconds = (clock()- start_time)/(float)CLOCKS_PER_SEC; //total time of current run
	 total += seconds; //running total of all 3 runs

	 std::cout << "Time run " << j << ": " << seconds << std::endl; 
      }
      average = total/3; //average time over 3 runs

      std::cout << "Average: " << average << std::endl;
      std::cout << std::endl;


   }
   return 0;
}
