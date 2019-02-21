#include <iostream>

int main(){

const int size = 100;  
  
int * prime{new int[size/2]};
prime[0] = 2;
int index{1};

for(int i{3}; i <= size; i++) {
  bool check = true;
  for(int j{2}; j < i ; j++) {

    if(i%j==0){
      check = false;
      break;
    }
   
  }
  if(check == true)
   {
     prime[index] = i;
     index ++;
   }
 }


 std::cout << "The prime numbers up to 100 are:\n" ;
 for(int i{0}; i<index; i++){
   std::cout << prime[i] << std::endl;

 }

 delete[] prime;
   
}
