#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <stdio.h>
#include <unistdio.h>
#include <cstdio>
#include <cstdlib>
#include <stdlib.h>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <sstream>
#include <iostream>
#include <map>

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spells;
		Warlock();
		Warlock(Warlock &src);
		Warlock& operator=(Warlock &src);

	public:

		void learnSpell(ASpell* newSpell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget& target);

		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& str);
		void introduce() const;
		Warlock(std::string name, std::string title);
		~Warlock();
};

#endif
