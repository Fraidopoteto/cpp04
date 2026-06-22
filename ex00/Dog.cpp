#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Default constructor called for " << this->type << std::endl;
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Copy constructor called for " << cpy.type << std::endl;
	*this = cpy;
}

Dog::~Dog()
{
	std::cout << "Destructor called for " << this->getType() << std::endl;
}

Dog &Dog::operator=(const Dog& src)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	this->type = src.type;
	return(*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": bark >:c\n";
}
