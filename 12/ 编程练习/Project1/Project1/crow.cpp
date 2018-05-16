#include"crow.h"
#include<string>
#include<iostream>
Crow::Crow()
{
	hobby = new char [1];
	hobby[0] = '\0';
	weight = 0;
}
Crow::Crow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}
Crow::Crow(const Crow &c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight =c.weight;
}
Crow::~Crow()
{
	delete [] hobby;
}
Crow & Crow::operator=(const Crow & c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return (*this);
}
void Crow::ShowCrow()const
{
	std::cout <<"\nname: "<< name 
		<<"\nhobby: "<< hobby
		<<"\nweight: "<< weight
		<<"\n";
}