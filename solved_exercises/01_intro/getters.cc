#include <iostream>

int get_Integer()
  { 
  int a;
  std::cout << "Please, insert an integer" << std::endl;
  while(!(std::cin >> a)) {

   std::cin.clear();
   std::cin.ignore();
 
   }
  return a;
  }

double get_Double()
 {
   double b;
   std::cout << "Please, insert a double" << std::endl;
   while(!( std::cin >> b)) {

   std::cin.clear();
   std::cin.ignore();
 
   }
   return b;
 }

int main() {

  double x = get_Integer();
  std::cout<< "The integer is: " << x << std::endl; 

}
