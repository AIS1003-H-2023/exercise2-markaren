
#include <catch2/catch_test_macros.hpp>

#include <string>

TEST_CASE("test_person") {

    std::string firstName = "Jon";
    std::string lastName = "Nilsen";
    Person p(firstName, lastName);

    CHECK(p.firstName() == firstName);
    CHECK(p.lastName() == lastName);

    auto fullName = firstName + " " + lastName;
    CHECK(p.fullName() == fullName);

}