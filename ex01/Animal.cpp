#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Default constructor called for " << this->type << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Copy constructor called for " << cpy.type << std::endl;
	*this = cpy;
}

Animal::~Animal()
{
	std::cout << "Destructor called for " << this->getType() << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << ": noise\n";
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
