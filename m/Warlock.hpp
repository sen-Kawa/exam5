#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <ios>
#include <iostream>

class Warlock
{
	private:

		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const& obj);
		Warlock&	operator=(Warlock const& rhs);

	public:

		std::string const&	getName() const;
		std::string const&	getTitle() const;
		void	setTitle(std::string const& newTitle);
		void	introduce() const;

		Warlock(std::string const name, std::string const title);
		~Warlock();

};
#endif
