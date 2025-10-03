#include <iostream>

class Person			// base class
{
private:
	std::string name;
	

public:
	explicit Person(const std::string& nn)			// copy constructor
		: name{ nn }								// initializer lis
	{
	}

	std::string  getname() const { return this->name; }

};
class Student : public Person
{
private:
	int semester;

public:
	Student(const std::string& nn, int ss)
		: Person::Person{ nn }, semester{ ss }		// initializer lis
		{}
	int getsemester() const { return this->semester; }
};

int main()
{
	Person person{ "John Doe." };
	std::cout << person.getname() << '\n';
	Student student{ "Jane Doe.", 2 };
	std::cout << student.getname() << '\n';
	std::cout << "The semester is: " << student.getsemester() << '\n';
}

