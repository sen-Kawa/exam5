#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;
class Fwoosh : public ASpell
{
	private:

	public:

		Fwoosh* clone();

		Fwoosh();
		~Fwoosh();

};
#endif
