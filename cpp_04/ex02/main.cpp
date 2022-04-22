#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}
	std::cout << "-----------------------------------------" << std::endl;
	{
		Dog dog;

		dog.newIdea("Watermelon");
		dog.newIdea("Pineapple");
		dog.newIdea("Apple");
		dog.newIdea("Pear");
		dog.newIdea("HotDog");
		dog.printIdeas();

		Dog dog2;
		dog2 = dog;
		dog2.printIdeas();
	}
/*
	std::cout << "-----------------------------------------" << std::endl;
	{
		size_t	count = 6;
		AAnimal*	animals[count];

		for (size_t i = 0; i < count; i++){
			if (i % 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (size_t i = 0; i < count; i++)
			delete animals[i];
	}
*/
	return (0);
}
