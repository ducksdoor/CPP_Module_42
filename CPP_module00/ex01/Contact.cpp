/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:53:06 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:53:08 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <iostream> 
#include <cstddef>


std::string Contact::truncate_and_add_dot(const std::string& str, size_t max_len)
{
	if (str.length() > max_len)
	{
		return str.substr(0, max_len - 1) + ".";
	}
	return str;
}

void Contact::little_see()
{
	std::cout << "+        " << index << "|";
	std::cout << std::setw(10) << std::right << truncate_and_add_dot(name, 10) << "|";
	std::cout << std::setw(10) << std::right << truncate_and_add_dot(lastname, 10) << "|";
	std::cout << std::setw(10) << std::right << truncate_and_add_dot(nickname, 10) << "|" ;
	std::cout <<	"     +"<< std::endl;
}

void Contact::print_data()
{
	std::cout << "+    Name: " << this->name  << std::endl;
	std::cout << "+    Lastname: " << this->lastname << std::endl;
	std::cout << "+    Nickname: " << this->nickname << std::endl;
	std::cout << "+    Phone number: " << this->phonenumber << std::endl;
	std::cout << "+    Secret: " << this->secret << std::endl;
}

void Contact::get_name(std::string input)
{
	name = input;
}

void Contact::get_lastname(std::string input)
{
	lastname = input;
}
void Contact::get_nickname(std::string input)
{
	nickname = input;
}
void Contact::get_phonenumber(std::string input)
{
	phonenumber = input;
}
void Contact::get_secret(std::string input)
{
	secret = input;
}


std::string	Contact::send_name()
{
	return name;
}
