/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:10:13 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/07 13:56:40 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:00:00 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/07 14:00:00 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>    // for min_element, max_element
#include <stdexcept>    // for exceptions
#include <iterator>     // for std::distance
#include <cmath>        // for std::abs

class Span
{
private:
    std::vector<int> _store;
    unsigned int     _N;

public:
    // Constructors & Destructor
    Span(int n);
    Span(const Span &sp);
    Span &operator=(const Span &sp);
    ~Span();

    // Member functions
    void addNumber(int i);

    // Template function to add a range of numbers at once
    template <typename InputIterator>
    void addNumbers(InputIterator first, InputIterator last)
    {
        // Number of elements we're about to insert
        int dist = std::distance(first, last);

        std::cout << "dist = " << dist
                  << ", _store.size() = " << _store.size()
                  << ", _N = " << _N << std::endl;

        // Check capacity
        if (static_cast<unsigned int>(dist) + _store.size() > _N)
        {
            throw std::invalid_argument("store is full");
        }

        // Insert the entire range in one shot
        _store.insert(_store.end(), first, last);
    }

    // Span computations
    int longestSpan() const;
    int shortestSpan();

    // Helper to print or debug
    int getStore(int i);
};

#endif
