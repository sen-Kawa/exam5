#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#pragma once
#include <ios>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Fireball : public ASpell
{
	private:
		
	public:

		Fireball* Clone();

		Fireball();
		~Fireball();
};

#endif
