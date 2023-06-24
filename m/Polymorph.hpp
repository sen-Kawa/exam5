#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;
class Polymorph : public ASpell
{
	private:

	public:

		Polymorph* clone();

		Polymorph();
		~Polymorph();

};
#endif
