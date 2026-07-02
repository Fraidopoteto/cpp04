#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Default constructor called for " << this->type << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << "Copy constructor called for " << cpy.type << std::endl;
	this->brain = new Brain();
	*this = cpy;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor called for " << this->getType() << std::endl;
}

Dog &Dog::operator=(const Dog& src)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	this->type = src.type;
	if (this->brain && src.brain)
            *(this->brain) = *(src.brain);
	return(*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": bark >:c\n";
}

Brain* Dog::getBrain(void) const
{
    return (this->brain);
}
