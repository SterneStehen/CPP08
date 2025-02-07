#include <iostream>
#include <vector>
#include <array>

int main(){
	std::array<int, 4> arr = {2, 5, 7, 9};

	arr.fill(5);
	std::cout << arr[0] << std::endl;
	try{
		std::cout << arr.at(1) << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}