/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:21:41 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/06 20:31:21 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include <iostream>
#include <vector>
#include <stdlib.h>

class Span
{
private:
	std::vector<int> _store;
	unsigned int _N;
public:
	Span(int n){
		_N = n;
	};
	~Span(){};
	
	void addNumber(int i){
		if(_store.size() < _N)
			_store.push_back(i);
		else
			std::cout << "store is full" << std::endl;
			//trow(std::out_of_range ("store is full"));
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
				std::cout << "store[i] = " <<_store[i] << " store[j] = " << _store[j] << " distance = " << dist << std::endl;
				
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
};

  int longestSpan() const {
        if (numbers.size() < 2)
            throw std::logic_error("Not enough numbers to calculate a span!");

        int min_value = *std::min_element(numbers.begin(), numbers.end());
        int max_value = *std::max_element(numbers.begin(), numbers.end());

        return max_value - min_value;
    }


int main()
{
	Span sp = Span(44);
	sp.addNumber(6);
	sp.addNumber(33);
	sp.addNumber(17);
	sp.addNumber(99);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	//std::cout << sp.longestSpan() << std::endl;
return 0;
}