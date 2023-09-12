
#ifndef EXERCISE2_PERSON_HPP
#define EXERCISE2_PERSON_HPP

#include <string>

class Person {

public:
  Person(const std::string &firstName, const std::string &lastName);

  std::string getFirstName() const;
  std::string getLastName() const;

  std::string getFullName() const;

private:
  std::string firstName;
  std::string lastName;
};

#endif //EXERCISE2_PERSON_HPP
