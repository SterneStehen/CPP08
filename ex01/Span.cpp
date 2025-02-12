/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:21:52 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 02:43:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "Span.hpp"


Span::Span(void): _N(0){}
Span::Span(unsigned int n)
{
	_N = n;
}

Span::Span(const Span &sp)
{
	_N = sp._N;
	_store = sp._store;
}

Span &Span::operator=(const Span &sp)
{
	if (this != &sp)
	{
		_N = sp._N;
		_store = sp._store;
	}
	return *this;
}

Span::~Span()
{
}


void Span::addNumber(int i)
{
	if (_store.size() < _N)
		_store.push_back(i);
	else
	{
		throw std::logic_error("store is full");  
	}
}

int Span::longestSpan() const
{
    if (_store.size() < 2)
        throw std::logic_error("Not enough elements to calculate a span.");

    int min_value = *std::min_element(_store.begin(), _store.end());
    int max_value = *std::max_element(_store.begin(), _store.end());
    return max_value - min_value;
}
 
int Span::shortestSpan()
{
    if (_store.size() < 2)
        throw std::logic_error("Not enough elements to calculate a span.");  
    int res = 2147483647; 
    for (size_t i = 0; i < _store.size(); i++)
    {
        for (size_t j = i + 1; j < _store.size(); j++)
        {
            int dist = std::abs(_store[i] - _store[j]);
            if (dist < res)
                res = dist;
        }
    }
    return res;
}

int Span::getStore(int i)
{
    return _store.at(i); 
    
}
