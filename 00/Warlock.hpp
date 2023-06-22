#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <stdio.h>
#include <unistdio.h>
#include <cstdio>
#include <cstdlib>
#include <stdlib.h>
#include <sstream>
#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock(Warlock &src);
		Warlock& operator=(Warlock &src);

	public:

		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& str);
		void introduce() const;
		Warlock(std::string name, std::string title);
		~Warlock();
};

#endif
