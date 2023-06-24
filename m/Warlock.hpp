#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <ios>
#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock
{
	private:

		std::string name;
		std::string title;
		SpellBook	spells;

		Warlock();
		Warlock(Warlock const& obj);
		Warlock&	operator=(Warlock const& rhs);

	public:

		void	learnSpell(ASpell* newSpell);
		void	forgetSpell(std::string nameSpell);
		void	launchSpell(std::string nameSpell, ATarget& ref);
		std::string const&	getName() const;
		std::string const&	getTitle() const;
		void	setTitle(std::string const& newTitle);
		void	introduce() const;

		Warlock(std::string const name, std::string const title);
		~Warlock();

};
#endif
