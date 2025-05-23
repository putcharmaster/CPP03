/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:49:17 by sanhwang          #+#    #+#             */
/*   Updated: 2025/03/25 18:50:57 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int     main(){
    ScavTrap scav("Serena");

    std::cout << "=================================================" << std::endl;

    scav.attack("enemy");
    scav.guardGate();
    std::cout << "=================================================" << std::endl;
    return 0;
}