#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

const int n = 4;

class Developer
{

protected:

	string fullName;
	int age;
	string position;
	string* technologies;

public:

	Developer()
	{
		this->fullName = fullName;
		this->age = age;
		this->position = position;
		this->technologies = NULL;
	}

	virtual void code() = 0;

	void learnNewTechnology(string* technologies) {
		this->technologies = technologies;
	}
};

class JuniorDeveloper : public Developer {
public:
	JuniorDeveloper(string fullName, int age)
	{
		this->fullName = fullName;
		this->age = age;
		this->position = "Junior";
	}
	void code() override;
};

class MiddleDeveloper : public Developer {
public:
	float stazh;
	MiddleDeveloper(string fullName, int age, float stazh)
	{
		this->fullName = fullName;
		this->age = age;
		this->stazh = stazh;
		this->position = "Middle";
	}
	void code() override;
};
class SeniorDeveloper : public Developer {
public:
	string company;
	SeniorDeveloper(string fullName, int age, string company)
	{
		this->fullName = fullName;
		this->age = age;
		this->company = company;
		this->position = "Senior";
	}
	void code() override;
};