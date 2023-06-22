#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <ios>
#include "ASpell.hpp"

class ATarget;

class Fwoosh : public ASpell
{
	private:
	public:
		virtual Fwoosh* Clone();

		Fwoosh(std::string name, std::string effects);
		virtual ~Fwoosh();
};

#endif
