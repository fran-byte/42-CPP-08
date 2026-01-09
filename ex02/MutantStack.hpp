/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 10:32:45 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/09 20:51:11 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> /* Inherits from std::stack */
{

public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack();
    MutantStack(MutantStack const &copy);
    ~MutantStack();
    MutantStack &operator=(MutantStack const &other);
    iterator begin();
    iterator end();
};

#include "MutantStack.tpp"

#endif
