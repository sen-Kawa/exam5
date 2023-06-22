#ifndef ASPELL_HPP
#define ASPELL_HPP
#pragma once
#include <ios>
#include "ATarget.hpp"
class ATarget;
class ASpell
{
	private:
	protected:
		std::string name;
		std::string effects;
	public:
		std::string getName() const;
		std::string getEffects() const;
		void launch(ATarget const& ref) const;
		virtual ASpell* Clone() = 0;

		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
};

#endif
