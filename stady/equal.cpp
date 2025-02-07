#include <iostream>
#include <array>


int main(){
	std::array<int, 4> arr1 = { 3, 5, 7, 8};
	std::array<int, 4> arr2 = { 3, 5, 7, 7};

	bool res = (arr1 == arr2);
	std::cout << res << std::endl;

	res = (arr1 > arr2);
	std::cout << res << std::endl;
}