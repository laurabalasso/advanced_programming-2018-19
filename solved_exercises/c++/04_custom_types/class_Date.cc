
#include <iostream>


 enum class Month {January = 1 , February, March, April, May, June, July, August, September, October, November, December};

class Date {

  int Day;
  Month Mon;
  int Year;
  
  void add_aday();
  
public:
  Date(const int d, const Month m, const int y){
    Day = d;
    Mon = m;
    Year = y;
  }
  
  int day() const {return Day;}
  int  year() const {return Year;}
  Month month() const {return Mon;}
  
  void add_days(const unsigned int n){
    for(std::size_t i{1}; i <= n; i++) {
      add_aday();
    }
   }
};


void Date::add_aday() {

  
   int num_month = static_cast<int>(Mon);

   switch(num_month) {

  case 1: case 3: case 5:
  case 7:  case 8: case 10:
    
    if(Day == 31) {
      
      Mon = (Month) (num_month + 1) ;
      Day = 1;
    }
    else
      Day = Day + 1;
    break;

   case 4: case 6: case 9: case 11:
      
    if (Day == 30) {
      
      Mon = (Month)( num_month + 1) ;
      Day = 1;

    }
    else
      Day = Day + 1;
     break;

  case 2:
    if(Day==28) {

     Mon  = Month::March;
     Day  = 1;

    }
    else
      Day = Day + 1;
     break;
     
  case 12:
    if(Day == 31){
      
     Day = 1;
     Mon = Month::January;
     Year = Year + 1;
      
      }
    else
      Day = Day + 1;
      break; 

  };
  
 

}



bool operator==(const Date& lhs, const Date& rhs) {

  return lhs.day()== rhs.day() && lhs.month() == rhs.month()
    && lhs.year()==rhs.year();

}


bool operator!=(const Date& lhs, const Date& rhs) {

  return !(lhs==rhs);

}

std::ostream& operator<<(std::ostream& os, const Date& d ) {
 
  os<< d.day() << "/" << (int) d.month() << "/" << d.year()<< std::endl ;
  return os;

}

bool is_leap(const int y) {
  return y%4 == 0 && y%400!= 0;
}


  int main(){

   Date today ( 1, Month::February, 2019);
   Date birthday (11 , Month::May, 2019);
   
   std::cout << "Today is: " << today << std::endl;
   
   std::cout << "My bithday is: " << birthday << std::endl;
   
   if(today != birthday){
     std::cout << "Today is not my birthday!\n";
   }
   else {
     std::cout << "Today is my birthday!\n";
   }

     
  }
