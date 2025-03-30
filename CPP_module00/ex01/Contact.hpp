
#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
# include <iostream>

class Contact 
{
private:
//	std::string format_string(std::string work);
	
public:
	int	index;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string secret;
	void little_see();
    Contact() : index (), name (""), lastname (""), nickname (""),
		phonenumber (""),
		secret ("")
	{}
};

#endif
