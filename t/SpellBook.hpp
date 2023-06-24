#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#pragma once
#include <ios>
#include <iostream>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"
class ATarget;
class ASpell;
class SpellBook
{
	private:

		std::map<std::string, ASpell*> spells;

		SpellBook(SpellBook const& obj);
		SpellBook& operator=(SpellBook const& rhs);

	public:

		void learnSpell(ASpell* newSpell);
		void forgetSpell(std::string const& nameSpell);
		ASpell* createSpell(std::string const& nameSpell);

		SpellBook();
		~SpellBook();
};
#endif
