/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:31:59 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/06 02:45:22 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    DiamondTrap dia("sam");
    std::cout << std::endl;

    dia.whoAmI();
    std::cout << std::endl;

    dia.FragTrap::attack("musk");
    std::cout << std::endl;

    dia.highFivesGuys();
    std::cout << std::endl;

    dia.guardGate();
    std::cout << std::endl;

    return 0;


}