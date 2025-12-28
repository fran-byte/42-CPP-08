/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:11:15 by frromero          #+#    #+#             */
/*   Updated: 2025/12/28 16:51:09 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

std::vector<int> v; // vector de enteros vacío

int main()
{
    std::vector<int> myContainer;
    std::vector<char> myContainer2;
    
    for(int i = 0; i <=10 ; i=i+2)
        myContainer.push_back(i*2);   


    std::vector<int>::iterator it = std::find(myContainer.begin(), myContainer.end(), 8);
    std::cout << "myContainer <int>  iterator point to : " << *it << std::endl;

    return 0;
}
