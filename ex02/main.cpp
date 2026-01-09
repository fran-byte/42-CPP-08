/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 11:41:47 by p4c0              #+#    #+#             */
/*   Updated: 2026/01/09 20:51:27 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

/*
 * This exercise shows how MutantStack works
 * It's like a normal stack, but we added iterators so we can go through all elements
 * The regular std::stack does not have begin() or end() methods
 */

int main()
{
    /* Subject Tests*/
    std::cout << std::endl
              << GREEN "Subject Tests: MutantStack<int> mstack" RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    /* My Tests */

    /* Copy & assignation */

    std::cout << std::endl
              << GREEN "My Tests: " RESET << std::endl
              << std::endl;

    MutantStack<int> mstack2 = mstack;
    MutantStack<int> mstack3;
    mstack3 = mstack;

    MutantStack<int>::iterator it2 = mstack2.begin();
    MutantStack<int>::iterator ite2 = mstack2.end();

    std::cout << GREEN "mstack2 (Copy Constructor):" RESET << std::endl;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    MutantStack<int>::iterator it3 = mstack3.begin();
    MutantStack<int>::iterator ite3 = mstack3.end();

    std::cout << std::endl
              << GREEN "mstack3 (Operator Assignment):" RESET << std::endl;
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }

    /* Comparison with std::list */
    std::cout << std::endl
              << BLUE "Comparison with std::list<int> lst" RESET << std::endl;

    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << std::endl;

    return 0;
}