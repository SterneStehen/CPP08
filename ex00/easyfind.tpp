/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:56:18 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 01:51:52 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "easyfind.hpp"
#include <iterator> 


template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
    {
        std::cout << *it << " distance: " << std::distance(container.begin(), it) << std::endl;
    }
    else
    {
        
        throw std::invalid_argument("Element not found");
    }
    return it;
}
