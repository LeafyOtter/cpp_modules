#include "Data.hpp"
#include <string>
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int	main(void) {
	Data 		data = {21, 42, 92};
	Data 		*old_ptr = &data; 
	Data 		*new_ptr;
	uintptr_t	raw;

	raw = serialize(old_ptr);
	new_ptr = deserialize(raw);

	std::cout << "old ptr: " << old_ptr << std::endl;
	std::cout << "new ptr: " << new_ptr << std::endl;
	std::cout << old_ptr->var1 << " " << new_ptr->var1 << std::endl;
}