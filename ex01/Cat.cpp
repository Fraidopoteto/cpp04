#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Default constructor called for " << this->type << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	std::cout << "Copy constructor called for " << cpy.type << std::endl;
	this->brain = new Brain();
	*this = cpy;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor called for " << this->getType() << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	this->type = src.type;
	if (this->brain && src.brain)
            *(this->brain) = *(src.brain);
	return(*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": mauw :3\n";
}

Brain* Cat::getBrain(void) const
{
    return (this->brain);
}
