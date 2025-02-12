/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:06:49 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 01:40:05 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"
#include "easyfind.tpp"

int main()
{
    // Test  std::vector
    std::vector<int> v;
    for (int i = 0; i < 20; i++)
        v.push_back(i);

    int searchVal1 = 22;
    try
    {
        std::vector<int>::iterator it = easyfind(v, searchVal1);
        if (it != v.end())
        {
            std::cout << "Found value in vector: " << *it << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Error searching for " << searchVal1 << ": " << e.what() << std::endl;
    }

    // Test std::list
    std::list<int> myList;
    for (int i = 0; i < 20; i++)
        myList.push_back(i);

    int searchVal2 = 10;
    try
    {
        std::list<int>::iterator it = easyfind(myList, searchVal2);
        if (it != myList.end())
        {
            std::cout << "Found value in list: " << *it << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Error searching for " << searchVal2 << ": " << e.what() << std::endl;
    }

    return 0;
}
