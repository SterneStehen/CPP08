/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:06:49 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/05 11:55:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <list>


template <typename T>
typename T::iterator easyfind(T &v, int i){
	typename T::iterator res =  std::find(v.begin(), v.end(), i);
	if(res != v.end()){
		std::cout << *res << " distance: "<< std::distance(v.begin(), res) << std::endl;
	}
	else
		throw(std::runtime_error  (" element not found "));
	return res;
}


int main(){
	std::vector<int> v = {3, 5, 6, 55, 66, 72};
	int i = 66;
	try{
		std::vector<int>::iterator res = easyfind(v, i);
		if(res != v.end()){
			std::cout << *res << " distance: "<< std::distance(v.begin(), res) << std::endl;
		}
	}
	catch(std::runtime_error &e){
		std::cout <<"Error "<< i << " "<< e.what() << std::endl;
	}

	std::list<int> l = {10, 20, 30, 40, 50};
	int i2 = 30;
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