#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Default constructor called for " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    std::cout << "Copy constructor called for " << cpy.type << std::endl;
    *this = cpy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called for " << this->getType() << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << "WrongAnimal copy assignment operator called." << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << this->type << ": wrong noise... \n";
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}
