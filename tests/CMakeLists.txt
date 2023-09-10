
add_executable(test_person test_person.cpp)
target_link_libraries(test_person PRIVATE personLib Catch2::Catch2WithMain)
