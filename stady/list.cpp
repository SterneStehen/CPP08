#include <iostream>
#include <vector>
#include <list>

void annonce(const std::list<int> &list_an){
	
	std::list<int>::const_iterator it = list_an.cbegin();
	
	//std::list<int>::iterator it = list1.begin();
	for (it; it != list_an.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	
	std::cout << "amout element in list is: " << list_an.size() << std::endl;
	std::cout << "======================================" << std::endl;
	
	
	
}


int main(){
	std::list<int> list1 = {1,2,3};
	list1.push_back(4);
	list1.push_back(28);
	list1.push_back(11);
	list1.push_front(33);
	list1.push_front(12);
	list1.push_front(7);

	annonce(list1);

	
	std::list<int>::iterator it1 = list1.begin();

	std::cout << "======================================" << std::endl;
	
	advance(it1, 2);
	std::cout << *it1 << std::endl;
	std::cout << "======================================" << std::endl;
	
	list1.sort();
	annonce(list1);
	list1.pop_front();
	annonce(list1);
	list1.reverse();
	annonce(list1);


	it1++;
	list1.insert(it1, 77);
	annonce(list1);

	advance(it1, 4);
	list1.insert(it1, 77);
	annonce(list1);
	list1.erase(it1);
	annonce(list1);

	list1.remove(77);
	annonce(list1);

	
	list1.clear();
	annonce(list1);

	list1.assign(5, 99);
	annonce(list1);
	std::list<int> myList;

	myList.assign(list1.begin(), list1.end());
	annonce(myList);

	std::list<int> list2;
	for (size_t i = 0; i < 15; i++)
	{
		list2.push_back(i);
	}
	annonce(list2);
	
	

	std::list<int> list3;
	list3.assign(list2.begin(), list2.end());
	annonce(list3);


	std::list<int> list4;
	it1 = list3.begin();
	advance(it1, 5);
	list4.assign(list3.begin(), it1);
	annonce(list4);

	

}