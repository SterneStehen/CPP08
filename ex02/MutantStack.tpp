/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:42:10 by smoreron          #+#    #+#             */
/*   Updated: 2025/02/12 02:31:19 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src) : std::stack<T>(src){}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &src)
{
    if (this != &src)
        std::stack<T>::operator=(src);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(){}


template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){ return this->c.begin();}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){ return this->c.end();}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const { return this->c.begin();}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {return this->c.end(); }

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){ return this->c.rbegin();}
template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(){ return this->c.rend();}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const{return this->c.rbegin();}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const { return this->c.rend();}

#endif
