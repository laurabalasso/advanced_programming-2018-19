#include <iostream>

int main(){

std::cout<< "Find the prime numbers up to: ";
int max;
std::cin >> max;
 if(max < 2) {
   std::cout << "No prime numbers less or equal to  " << max << std::endl;
 }
 
 
bool sequence[max+1];

for(int i{2}; i <= max; i++) {
   sequence[i] = true;
  }

 for(int i{2}; i <= sqrt(max); i++){
   if(sequence[i]==true) {
     for(int j{i*i}; j<= max; j = j + i){
       sequence[j] = false;
     }
   }
 }

 for(int i{2}; i <= max; i++){
   if(sequence[i]==true) std::cout<< i << std::endl;
 }
 

}
