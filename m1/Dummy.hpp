#ifndef DUMMY_HPP
#define DUMMY_HPP
#pragma once
#include <ios>
#include "ATarget.hpp"
#include "ASpell.hpp"

class Dummy : public ATarget
{
	private:
		
	public:

		Dummy* clone();

		Dummy();
		~Dummy();
};

#endif
