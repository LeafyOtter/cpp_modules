#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	this->sizeArray = 8;
	this->indexLastContact = 0;
	this->isFull = false;
}

void	PhoneBook::Add() {
	if (this->indexLastContact + 1 == this->sizeArray) {
		this->isFull = true;
	}
}