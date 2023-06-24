#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class BrickWall : public ATarget
{
	private:

	protected:

	public:

		BrickWall* clone() const;

		BrickWall();
		~BrickWall();
};
#endif
