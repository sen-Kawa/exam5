#ifndef ASPELL_HPP
#define ASPELL_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
	private:

	protected:
		
		std::string name;
		std::string effects;

	public:

		std::string const&	getName() const;
		std::string const&	getEffects() const;
		void	launch(ATarget const& target) const;
		virtual ASpell* clone() = 0;

		ASpell();
		ASpell(std::string const name, std::string const effects);
		ASpell(ASpell const& obj);
		ASpell&	operator=(ASpell const& rhs);
		virtual ~ASpell();

};
#endif
