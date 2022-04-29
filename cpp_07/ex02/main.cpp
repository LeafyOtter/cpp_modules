#include <iostream>
#include <string>
#include "Array.hpp"

using std::string;

#define log(x) std::cout << x << std::endl;

#define MAX 5

template<typename T>
void	printArray(Array<T> arr)
{
	for (unsigned int i = 0; i < MAX; i++) {
		log(arr[i]);
	}
}

int main(int, char **)
{
	Array<string> words(MAX);
	words[0] = "Hello";
	words[1] = "world";
	words[2] = "olleh";
	words[3] = "dlrow";
	words[4] = "!!!!!";

	printArray(words);

	Array<string> words2(words);

	log("----- Test constructeur par copie");
	printArray(words2);

	Array<string> words3;

	words3 = words;
	log("----- Test copie");
	printArray(words3);

	try
	{
		log("----- Test index trop elevee")
		words[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		log("----- Test index trop faible")
		words[-1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	log("----- Test de la fonction membre size()")
	log("Size de l'array: " << words.size());
		

}