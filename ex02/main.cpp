/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:29:39 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 02:41:06 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/



#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main()
{
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);

		mstack.push(737);
		//[...]
		mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "Iterating MutantStack: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

		std::stack<int> s(mstack);
	

	std::cout << std::endl;

	{
		//list
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();

	std::cout << "Iterating list is : " << std::endl;
	int i = 0;
	while (it != ite)
	{
		std::cout << "i = " << i << "    it = " << *it << std::endl;
			++it;
			i++;
		}
	}
	return 0;
}
