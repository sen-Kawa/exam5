#ifndef DUMMY_HPP
#define DUMMY_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class Dummy : public ATarget
{
	private:

	protected:

	public:

		Dummy* clone() const;

		Dummy();
		~Dummy();
};
#endif
