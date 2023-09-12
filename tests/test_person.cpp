
#include <catch2/catch_test_macros.hpp>

#include <string>

#include "Person.hpp"

TEST_CASE("test_person") {

    std::string firstName = "Jon";
    std::string lastName = "Nilsen";
    Person p(firstName, lastName);

    CHECK(p.getFirstName() == firstName);
    CHECK(p.getLastName() == lastName);

    auto fullName = firstName + " " + lastName;
    CHECK(p.getFullName() == fullName);

}