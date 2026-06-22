#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Default constructor called for " << this->type << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Copy constructor called for " << cpy.type << std::endl;
	*this = cpy;
}

Cat::~Cat()
{
	std::cout << "Destructor called for " << this->getType() << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	this->type = src.type;
	return(*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": mauw :3\n";
}
