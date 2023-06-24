#ifndef DUMMY_HPP
#define DUMMY_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;
class Dummy : public ATarget
{
	private:

	public:

		Dummy* clone();

		Dummy();
		~Dummy();

};
#endif
