#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

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

	std::cout << "\n=======WRONG TEST======\n";

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Type: " << wrongCat->getType() << "\n";

	wrongCat->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	return (0);
}
