#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#pragma once
#include <ios>
#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"
class ATarget;
class ASpell;
class Warlock
{
	private:

		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spells;

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
