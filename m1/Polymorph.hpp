#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#pragma once
#include <ios>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	private:
		
	public:

		Polymorph* Clone();

		Polymorph();
		~Polymorph();
};

#endif
