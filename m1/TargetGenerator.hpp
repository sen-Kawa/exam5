#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget*> targets;

		TargetGenerator(TargetGenerator const& obj);
		TargetGenerator& operator=(TargetGenerator const& rhs);

	public:
		
		void	learnTargetType(ATarget* newTarget);
		void	forgetTargetType(std::string const& nameTarget);
		ATarget* createTarget(std::string const& nameTarget);

		TargetGenerator();
		~TargetGenerator();
};

#endif
