#include <iostream>
#include <vector>
#include <list>
#include <forward_list>


int main(){
	std::forward_list<int> fl= { 3, 5, 7};

	fl.push_front(11);
	fl.push_front(17);
	fl.push_front(19);

	std::forward_list<int>::iterator it = fl.begin();
	it++;
	it++;
	fl.insert_after(it, 6);
	//fl.erase(it);
	for (it = fl.begin(); it != fl.end(); it++)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}