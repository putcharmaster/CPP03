/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:31:59 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/06 03:04:09 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    DiamondTrap dia("Sam");
    std::cout << std::endl;

    dia.whoAmI();
    std::cout << std::endl;

    dia.showStats();
    std::cout << std::endl;


    dia.FragTrap::attack("musk");
    std::cout << std::endl;

    dia.highFivesGuys();
    std::cout << std::endl;

    dia.guardGate();
    std::cout << std::endl;

    return 0;


}