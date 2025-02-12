/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:10:13 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 02:00:28 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>    
#include <stdexcept>    
#include <iterator>     
#include <cmath>        

class Span
{
private:
    std::vector<int> _store;
    unsigned int     _N;

public:
    
    Span(void);
	Span(unsigned int n);
    Span(const Span &sp);
    Span &operator=(const Span &sp);
    ~Span();

    
    void addNumber(int i);

    
    template <typename InputIterator>
    void addNumbers(InputIterator first, InputIterator last)
    {
        
        int dist = std::distance(first, last);

        std::cout << "dist = " << dist << ", _store.size() = " << _store.size() << ", _N = " << _N << std::endl;

        
        if (static_cast<unsigned int>(dist) + _store.size() > _N)
        {
            throw std::invalid_argument("store is full");
        }

        
        _store.insert(_store.end(), first, last);
    }

    
    int longestSpan() const;
    int shortestSpan();

    
    int getStore(int i);
};

#endif
