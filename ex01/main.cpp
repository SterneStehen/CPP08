/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:21:41 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/07 13:52:28 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

class Span
{
private:
	std::vector<int> _store;
	unsigned int _N;
public:
	Span(int n){
		_N = n;
	};
	Span(const Span &sp){
		_N = sp._N;
		_store = sp._store;
	}
	Span & operator=(const Span &sp){
		if (this != &sp){
			_N = sp._N;
			_store = sp._store;
		}
		return *this;
	}
	~Span(){};
	
	void addNumber(int i){
		if(_store.size() < _N)
			_store.push_back(i);
		else
			std::cout << "store is full" << std::endl;
			//trow(std::out_of_range ("store is full"));
	}
	
	int longestSpan() const {
    	if (_store.size() < 2)
        	throw std::logic_error("Not enough _store to calculate a span!");

    	int min_value = *std::min_element(_store.begin(), _store.end());
    	int max_value = *std::max_element(_store.begin(), _store.end());

    	return max_value - min_value;
	}

	
	template <typename InputIterator>
	void addNumbers(InputIterator first, InputIterator last){
		int dist = std::distance(first, last);
		std::cout<< "dist is " << dist <<  " _store.size() is " << _store.size() << " _n is " << _N << std::endl;
		if((dist + _store.size()) > _N){
			throw(std::invalid_argument("_store is FUll"));
		}
		_store.insert(_store.end(), first, last);
		// for (size_t i = 0; i < _store.size(); i++)
		// {
		// 	std::cout << _store[i] << std::endl;
		// }
		
	}
	int shortestSpan(){
		int res = 99;
		int j = 0;
		int dist = 0;
		for (int i = 0; i < _store.size(); ++i)
		{
			j=0;
			while (j < _store.size())
			{
				dist = abs(_store[i] - _store[j]);
				//std::cout << "store[i] = " <<_store[i] << " store[j] = " << _store[j] << " distance = " << dist << std::endl;
				
				if(dist == 0)
				{
					j++;
					continue;
				}
				if(dist < res)
					res = dist;
				j++;
				
			}
			
			
		}
		return res;
	}
	int getStore(int i){
		return _store[i];
	}
	
	
};



int main()
{
	try{
		Span sp = Span(44);
		sp.addNumber(6);
		sp.addNumber(33);
		sp.addNumber(17);
		sp.addNumber(99);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		int size = 10;
		std::vector<int> arr;
		for (size_t i = 0; i < size; i++){
			arr.push_back(i);
		}
		//std::vector<int> numbers = {10, 20, 30, 40, 50};
		Span sp_multi(size + size);
		sp_multi.addNumbers(arr.begin(), arr.end());
		for (size_t i = 0; i < size; i++)
		{
			std::cout << sp_multi.getStore(i) << std::endl;
		}
		
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	

return 0;
}