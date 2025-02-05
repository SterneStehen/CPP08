/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:06:49 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/05 12:14:41 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <list>
#include "easyfind.hpp"


int main(){
	std::vector<int> v;
	for (size_t i = 0; i < 20; i++)
	{
		v.push_back(i);
	}
	
	int i = 16;
	try{
		std::vector<int>::iterator res = easyfind(v, i);
		if(res != v.end()){
			std::cout << *res << " distance: "<< std::distance(v.begin(), res) << std::endl;
		}
	}
	catch(std::runtime_error &e){
		std::cout <<"Error "<< i << " "<< e.what() << std::endl;
	}

	std::list<int> l;
	for (size_t i = 0; i < 20; i++)
	{
		l.push_back(i);
	}
	int i2 = 19;
	try{
		std::list<int>::iterator res = easyfind(l, i2);
		if(res != l.end()){
			std::cout << *res << " distance: "<< std::distance(l.begin(), res) << std::endl;
		}
	}
	catch(std::runtime_error &e){
		std::cout <<"Error "<< i2 << " "<< e.what() << std::endl;
	}
}