
#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>
# include <iostream>

class Contact 
{
private:
	int	index;
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string phoneNumber;
	std::string secret;
//	std::string format_string(std::string work);
	
public:

	void little_see();
	Contact() : index(0) {}
    Contact(int x) : index(x) 
	{
        std::cout << "Created with index " << index << std::endl;
    }

};

#endif
