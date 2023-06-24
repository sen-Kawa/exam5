#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#pragma once
#include <ios>
#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"
class ATarget;
class ASpell;
class SpellBook;
class Warlock
{
	private:

		std::string name;
		std::string title;
		SpellBook spells;

		Warlock();
		Warlock(Warlock const& obj);
		Warlock& operator=(Warlock const& rhs);

	public:

		std::string const& getName() const;
		std::string const& getTitle() const;
		void setTitle(std::string const& newTitle);
		void introduce() const;
		void learnSpell(ASpell* newSpell);
		void forgetSpell(std::string nameSpell);
		void launchSpell(std::string nameSpell, ATarget&);

		Warlock(std::string const name, std::string const title);
		~Warlock();
};
#endif
