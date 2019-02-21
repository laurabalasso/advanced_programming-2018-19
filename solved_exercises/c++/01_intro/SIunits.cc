#include <iostream>
#include <string>

int main() {
  double measure;
  std::string unit;
  double SImeasure;
  std::string SIunit;
  
  std::cout << "Insert the measure you want to convert (value and unit of measure):" << std::endl;
  std::cin >> measure >> unit ;

  if(unit == "inch"|| unit == "inches") {
    SImeasure = measure*0.0254;
    SIunit = "m";
  }
  else if (unit == "pound"|| unit == "pounds"){
    SImeasure = measure*0.453592;
    SIunit = "kg";
  }
   else if (unit == "pint"|| unit == "pints"){
    SImeasure = measure*0.473176;
    SIunit = "L";
  }
  else if (unit == "gallon"|| unit == "gallons"){
    SImeasure = measure*3.78541;
    SIunit = "L";
  }
 
  std::cout<< SImeasure << " " << SIunit<< std::endl;
}
