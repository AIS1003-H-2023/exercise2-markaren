
#include "Person.hpp"

// It's up to you whether you implement the member functions of Person in this
// file or within the header
Person::Person(const std::string &firstName, const std::string &lastName)
    : firstName(firstName), lastName(lastName) {}

std::string Person::getFirstName() const { return firstName; }

std::string Person::getLastName() const { return lastName; }

std::string Person::getFullName() const { return firstName + " " + lastName; }
