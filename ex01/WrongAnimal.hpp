#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& src);

		void	makeSound(void) const;
		std::string getType(void) const;

	protected:
		std::string type;
};

#endif