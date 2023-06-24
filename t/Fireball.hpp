#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class Fireball : public ASpell
{
	private:

	protected:

	public:

		Fireball* clone() const;

		Fireball();
		~Fireball();
};
#endif
