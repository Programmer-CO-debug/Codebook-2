#include <iostream>
#include <string>
#include <utility>
//create class Person with protected member name and public member function displayName
class Person {
protected:
std::string name;

public:
explicit Person(std::string personName) : name(std::move(personName)) {}

void displayName() const {
std::cout << "Name: " << name << '\n';
}
};

class Student : public Person {
private:

int rollNumber;

public:
Student(std::string studentName, int roll)
: Person(std::move(studentName)), rollNumber(roll) {}

void displayStudent() const {
displayName();
std::cout << "Roll Number: " << rollNumber << '\n';
}
};

int main() {
Student student("Akshay", 2101);
student.displayStudent();
return 0;
}
