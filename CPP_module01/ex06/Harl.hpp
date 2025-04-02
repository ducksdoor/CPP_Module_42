

#ifndef HARL_HPP
# define HARL_HPP
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define YELLOW  "\033[0;93m"
# define RED    "\033[0;91m"
# define RESET  "\033[0m"

#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl();
		~Harl();
		void complain(std::string level);

};

#endif
