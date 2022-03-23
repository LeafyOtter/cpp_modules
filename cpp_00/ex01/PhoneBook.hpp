#include <string>
#include "Contact.hpp"

class PhoneBook {

	public:
	PhoneBook ();

	void add();
	void search();

	Contact		ContactArray[8];

	private:
	int			nbrContact;
	int			indexLastContact;
};