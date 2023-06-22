#include "Warlock.hpp"

const std::string& Warlock::getName() const
{
	return (this->name);
}

const std::string& Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(const std::string &str)
{
	title = str;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

Warlock::Warlock()
{
	return ;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl; 
	return ;
}

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl; 
	return ;
}
