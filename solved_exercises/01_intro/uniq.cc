#include <iostream>
#include <string>

int main() {

int i{0};
std::string prev_line;
std::string line;

while(std::getline(std::cin, line)) {
 
  if(line == prev_line || i==0) {
     i++;
      }
  else if(line != prev_line && i!=1) {
    std::cout<<"     " << i << " " << prev_line << std::endl;
    i = 1;
      }

  prev_line = line; 
  }
}

