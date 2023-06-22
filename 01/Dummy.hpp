#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <ios>
#include "ATarget.hpp"

class ASpell;

class Dummy : public ATarget
{
	private:
	public:
		Dummy* Clone();

		Dummy();
		~Dummy();
};

#endif
