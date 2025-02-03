#include <iostream>
#include <vector>

int main(){
	std::vector<int> tmp = { 1,2,3,4,5};
	tmp.push_back(2);
	tmp.push_back(12);
	tmp.push_back(7);

	std::cout << "amount element to vector is: " << tmp.size() << std::endl;
	int size = tmp.size();
	tmp[2] = 1000;
	for (int i = 0; i < tmp.size(); i++)
	{
		std::cout << " element # " << i << " equal " << tmp[i] << std::endl;
	}
	std::cout << "attempting out bound: " << tmp[10] << std::endl;
	tmp.push_back(2);
	tmp.push_back(12);
	tmp.push_back(7);
	tmp.pop_back();
	std::cout << "run pop_back " << "amount element to vector is: " << tmp.size() << std::endl;
	for (int i = 0; i < tmp.size(); i++)
	{
		std::cout << " element # " << i << " equal " << tmp[i] << std::endl;
	}


	std::cout << "amount element to vector is: " << tmp.size() << std::endl;
	for (int i = 0; i < tmp.size(); i++)
	{
		std::cout << " element # " << i << " equal " << tmp[i] << std::endl;
	}
	tmp.reserve(100);
	std::cout << "capacity vector: " << tmp.capacity() << std::endl;
	std::cout << "bool is empty: " << tmp.empty() << std::endl;
	tmp.clear();
	std::cout << "bool is empty: " << tmp.empty() << std::endl;
	
	return 0;
}
