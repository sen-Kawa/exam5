#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class Polymorph : public ASpell
{
	private:

	protected:

	public:

		Polymorph* clone() const;

		Polymorph();
		~Polymorph();
};
#endif
