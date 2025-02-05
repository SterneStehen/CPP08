/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:20:21 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/05 12:08:53 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

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

#endif