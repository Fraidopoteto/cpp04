#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &cpy);
		~Brain();

		Brain &operator=(const Brain &src);

		std::string ideas[100];
};

#endif