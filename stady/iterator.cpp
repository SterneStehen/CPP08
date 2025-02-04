#include <iostream>
#include <vector>


int main(){
	int arr[] = {2,4,6};
	std::cout << arr[1] << std::endl;
	std::cout << *(arr) << std::endl;
	std::vector<int> vect = {2, 44, 3, 63, 14,35,11};
	std::cout << vect[2] << std::endl;
	std::cout << "==========================================" << std::endl;

	std::vector<int>::iterator iter;
	iter = vect.begin();
	std::cout << *iter << std::endl;
	iter+=2;
	iter--;
	std::cout << *iter << std::endl;

	std::cout << "==========================================" << std::endl;
	std::vector<int>::iterator iter2;
	for (iter2 = vect.begin(); iter2 < vect.end(); iter2++)
	{
		std::cout << *iter2 << std::endl;
	}
	std::cout << "==========================================\n reverse_iterator" << std::endl;
	std::vector<int>::reverse_iterator iter3;
	for (iter3 = vect.rbegin(); iter3 < vect.rend(); iter3++)
	{
		std::cout << *iter3 << std::endl;
	}

	std::cout << "==========================================" << std::endl;
	std::vector<int>::iterator it = vect.begin();
	advance(it, 4);
	vect.insert(it, 999);
	for (std::vector<int>::iterator i = vect.begin(); i < vect.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	std::cout << "==========================================" << std::endl;
	std::vector<int>::iterator itera = vect.begin();
	//advance(itera, 4);
	vect.erase(itera, itera+3);
	for (std::vector<int>::iterator i = vect.begin(); i+1 < vect.end(); i++)
	{
		std::cout << *i << std::endl;
	}
	

}