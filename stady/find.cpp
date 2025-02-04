#include <algorithm>
#include <iostream>
#include <vector>
#include <string>


class Person
{
public:
	std::string _Name;
	double _Score;
	Person(std::string name, double score): _Name(name), _Score(score){};
	~Person(){};

	bool operator()(const Person &p){
		return p._Score > 180;
	}
};



int main(){
	std::vector<int> v = {1,5,7,13,1,3,5};
	std::vector<int>::iterator it = find(v.begin(), v.end(), 13);
	if(it != v.end())
		std::cout << *it << std::endl;
	else	
		std::cout << "value not find";


	it = find_if(v.begin(), v.end(), [](int a){
		return a%2==0;
		});
	if(it != v.end())
		std::cout << *it << std::endl;
	else	
		std::cout << "value not find\n";


	std::vector<Person> people = { 
		Person("Nick", 10), 
		Person("Daryna", 3), 
		Person("Alona", 35)
	};

	std::vector<Person>::iterator it1 = find_if(people.begin(), people.end(), [](const Person &p){
		return p._Name == "Alonan";
	});
	if(it1 != people.end())
		std::cout << "success\n" << std::endl;
	else	
		std::cout << "value not find\n";
}