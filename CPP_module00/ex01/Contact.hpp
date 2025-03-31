
#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
# include <iostream>

class Contact 
{
private:
	
public:
	int	index;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string secret;
	std::string	truncate_and_add_dot(const std::string& str, size_t max_len);
	void		little_see();
    Contact() : index (), name (""), lastname (""), nickname (""),
		phonenumber (""),
		secret ("")
	{}
};

#endif
