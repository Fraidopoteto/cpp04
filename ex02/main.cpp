#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "========EX02 TEST=========\n\n";

	std::cout << "======ABSTRACT TEST=======\n";

	// const Animal* testAbstract = new Animal();

	std::cout << "Animal-Klasse ist abstrakt!\n";

	std::cout << "\n======MANDATORY TEST======\n";
	const Animal* j = new Dog();
	const Animal* k = new Cat();

	std::cout << "\n====MANDATORY DESTRUCT====\n";
	delete j;
	delete k;

	std::cout << "\n======ARRAY CREATION======\n";
	const int size = 4;
	Animal* animals[size];

	int i = 0;
	while (i < size)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}

	std::cout << "\n======ARRAY DELETION======\n";
	i = 0;
	while (i < size)
	{
		delete animals[i];
		i++;
	}

	std::cout << "\n======DEEP COPY TEST======\n";
	Dog* originalDog = new Dog();
	originalDog->getBrain()->ideas[0] = "I want a bone!";

	std::cout << "\n======CREATING COPY=======\n";
	Dog* copyDog = new Dog(*originalDog);

	std::cout << "\nOriginal idea: " << originalDog->getBrain()->ideas[0] << std::endl;
	std::cout << "Copy idea    : " << copyDog->getBrain()->ideas[0] << std::endl;

	std::cout << "Original Brain Address: " << originalDog->getBrain() << std::endl;
	std::cout << "Copy Brain Address    : " << copyDog->getBrain() << std::endl;

	std::cout << "\n======MODIFYING COPY======\n";
	copyDog->getBrain()->ideas[0] = "I want to chase a cat!";

	std::cout << "Original idea (should be unchanged): " << originalDog->getBrain()->ideas[0] << std::endl;
	std::cout << "Copy idea (should be changed)      : " << copyDog->getBrain()->ideas[0] << std::endl;

	std::cout << "\n=========CLEAN UP=========\n";
	delete originalDog;
	delete copyDog;

	return (0);
}

