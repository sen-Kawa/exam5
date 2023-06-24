#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;
class Fireball : public ASpell
{
	private:

	public:

		Fireball* clone();

		Fireball();
		~Fireball();

};
#endif
