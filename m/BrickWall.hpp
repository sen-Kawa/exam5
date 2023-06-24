#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;
class BrickWall : public ATarget
{
	private:

	public:

		BrickWall* clone();

		BrickWall();
		~BrickWall();

};
#endif
