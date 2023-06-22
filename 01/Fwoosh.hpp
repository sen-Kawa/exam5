#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <ios>
#include "ASpell.hpp"

class ATarget;

class Fwoosh : public ASpell
{
	private:
	public:
		Fwoosh* Clone();

		Fwoosh(void);
		~Fwoosh();
};

#endif
