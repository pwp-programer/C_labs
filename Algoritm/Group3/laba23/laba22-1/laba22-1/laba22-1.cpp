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

class JuniorDeveloper :public Developer {
public:

	JuniorDeveloper(string fullName, int age) :Developer(fullName, age, "Junior")
	{

	}
	void code() override {
		cout << this->position << " разработчик по имени " << this->fullName << " пишет код...\n";
	}
};


class MiddleDeveloper : public Developer {
private:
	double experience;

public:
	float stazh;
	MiddleDeveloper(string fullName, int age, double experience) :Developer(fullName, age, "Middle")
	{
		this->experience = experience;
	}
	void code() override {
		cout << this->position << " разработчик со стажем " << this->experience << " года пишет код...\n";
	}

};


class SeniorDeveloper : public Developer {
private:
	string company;
public:

	SeniorDeveloper(string fullName, int age, string company) :Developer(fullName, age, "Senior")
	{
		this->company = company;
	}

	void learnNewTechnology(string* technologies)
	{
		this->technologies = technologies;
	}

	void code() override {
		cout << this->position << " разработчик из компании " << this->company << " знает следующие технологии : \n";
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << ". " << technologies[i] << endl;
		}
	}
};



int main()
{

	setlocale(LC_ALL, "rus");

	JuniorDeveloper junior("Настя", 18);
	junior.code();

	MiddleDeveloper middle("Влад", 24, 3.5);
	middle.code();

	SeniorDeveloper senior("Игорь", 30, "iTechArt");
	string* technologies = new string[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " технологию: ";
		cin >> technologies[i];
	}

	senior.learnNewTechnology(technologies);
	senior.code();
	system("pause");
	return 0;
}