#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = cpy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this != &src)
	{
		int i = 0;

		while (i < 100)
		{
			this->ideas[i] = src.ideas[i];
			i++;
		}
	}
	return (*this);
}
