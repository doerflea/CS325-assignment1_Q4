
#include "randArrayGen.hpp"



std::vector<int> genRand(int i){
   srand(time(NULL));
   i = 3400 * i;
   std::vector<int>array;
   for(int j = 0; j < i; j++){
      int num = rand() % 10000;
      array.push_back(num);
   }
   return array;
}
      

