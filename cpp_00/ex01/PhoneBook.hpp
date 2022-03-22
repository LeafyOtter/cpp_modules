#include <string>
#include "Contact.hpp"

class PhoneBook {

	public:
	PhoneBook ();

	void Add();
	void Search();

	private:
	int			sizeArray;
	int			indexLastContact;
	bool		isFull;
	Contact		ContactArray[8];
};