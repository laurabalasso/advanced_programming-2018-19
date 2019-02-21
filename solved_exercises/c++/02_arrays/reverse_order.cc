
#include <iostream>

template <typename T>
T* init(int n);

template <typename T>
void reverse(T* &point, int n);


int main() {

int size;
double* ptr;
std::cout << "Insert the array's length" <<std::endl;
std::cin >> size;
ptr = init<double>(size);
reverse(ptr, size);

}

template <typename T>
T* init(int n)
{
 T* arr{new T[n]};
 std::cout << "Insert array's elements"<< std::endl;
 for(std::size_t i{0}; i<n; i++) {
  std::cin >> arr[i];
	}
 T * ptr = &arr[0];
return ptr ;

}


template <typename T>
void reverse(T * &point, int n) {
  std::cout << "Reversed array:\n" ;
  for(std::size_t i{0}; i < n ; i++) {
    std::cout<< * ( point + n-1-i)  << std::endl;
 }

  delete[] point; 

}
