/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:21:41 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 01:51:41 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib> 

int main()
{
	try
    {

		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span:  " << sp.longestSpan() << std::endl;

        
        int size = 100;
        std::vector<int> arr;
        arr.reserve(size);
        for (int i = 0; i < size; i++)
        {
            arr.push_back(i);
        }

        Span sp_multi(size + 1);
        sp_multi.addNumbers(arr.begin(), arr.end());

		std::cout << "\nsp_multi contents after addNumbers:" << std::endl;
        for (int i = 0; i < size; i++)
        {
            std::cout << sp_multi.getStore(i) << " ";
        }
        std::cout << std::endl;

        
        std::cout << "Shortest Span (sp_multi): " << sp_multi.shortestSpan() << std::endl;
        std::cout << "Longest Span (sp_multi): " << sp_multi.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
