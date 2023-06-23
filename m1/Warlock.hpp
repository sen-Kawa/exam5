#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <map>
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		SpellBook	spellBook;

		Warlock();
		Warlock(Warlock const& obj);
		Warlock& operator=(Warlock const& rhs);

	public:
		
		void	learnSpell(ASpell* newSpell);
		void	forgetSpell(std::string nameSpell);
		void	launchSpell(std::string nameSpell, ATarget& target);

		const std::string& getName() const;
		const std::string& getTitle() const;
		void	setTitle(const std::string& newTitle);
		void	introduce() const;

		Warlock(std::string const name, std::string const title);
		~Warlock();
};

#endif
