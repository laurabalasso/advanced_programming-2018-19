#ifndef _UTILITY_
#define _UTILITY_

#include <iostream> //for std::cout
#include <string>
#include <algorithm>

std::string to_upper(const std::string& os){
  static int n;
  ++n;
  auto s = os;
  std::transform(s.begin(), s.end(), s.begin(), ::toupper);
  std::cout << "function " << __func__ << " has been called " << n << " times\n";
  return s;
}

std::string to_lower(const std::string& os){
  auto s = os;
  std::transform(s.begin(), s.end(), s.begin(), ::tolower);
  return s;
}


#endif
