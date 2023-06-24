#include "Warlock.hpp"

std::string const& Warlock::getName() const
{
	return (this->name);
}

std::string const& Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const& newTitle)
{
	this->title = newTitle;
	return ;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

Warlock::Warlock(std::string const name, std::string const title) : name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::Warlock(Warlock const& obj)
{
	name = obj.name;
	title = obj.title;
	return ;
}

Warlock& Warlock::operator=(Warlock const& rhs)
{
	name = rhs.name;
	title = rhs.title;
	return (*this);
}

Warlock::Warlock()
{
	std::cout << name << ": This looks like another boring day." << std::endl;
	return ;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
	return ;
}
