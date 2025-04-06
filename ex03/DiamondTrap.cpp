/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhwang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 01:10:56 by sanhwang          #+#    #+#             */
/*   Updated: 2025/04/06 03:05:36 by sanhwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    name = "Default";
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
    this->name = name;
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is \"" << name
              << "\", ClapTrap name is \"" << ClapTrap::name << "\"" << std::endl;
}

void DiamondTrap::showStats() {
    std::cout << "DiamondTrap " << name << " Stats: " << std::endl;
    std::cout << "Hit points: " << this->hitPoint << " (FragTrap)" << std::endl;
    std::cout << "Energy points: " << this->energyPoint << " (ScavTrap)"  << std::endl;
    std::cout << "Attack damage: " << this->attackDamage << " (FragTrap)" << std::endl;
}