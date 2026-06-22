#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "========EX00 TEST========\n\n";

	std::cout << "======CONSTRUCTOR======\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n=========TYPE=========\n";
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\n========SOUND=========\n";
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "\n=====DECONSTRUCTOR=====\n";
	delete meta;
	delete j;
	delete i;

	return (0);
}
