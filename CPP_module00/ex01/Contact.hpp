
#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
# include <iostream>

class Contact 
{
private:
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string secret;
	
public:
	int	index;
	void		get_name(std::string input);
	void		get_lastname(std::string input);
	void		get_nickname(std::string input);
	void		get_phonenumber(std::string input);
	void		get_secret(std::string input);
	std::string	send_name();
	void		print_data();
	std::string	truncate_and_add_dot(const std::string& str, size_t max_len);
	void		little_see();
    Contact() : name (""), lastname (""), nickname (""),
		phonenumber (""),
		secret (""), index ()
	{}
};

#endif
