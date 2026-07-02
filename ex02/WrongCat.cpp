#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "Default constructor called for " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
    std::cout << "Copy constructor called for " << cpy.type << std::endl;
    *this = cpy;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called for " << this->getType() << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    std::cout << "WrongCat copy assignment operator called." << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << this->type << ": wrong mauw :3\n";
}
