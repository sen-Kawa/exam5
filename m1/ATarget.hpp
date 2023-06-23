#ifndef ATARGET_HPP
#define ATARGET_HPP
#pragma once
#include <ios>
#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
	private:
	protected:
		std::string type;

	public:

		std::string const& getType() const;
		void	getHitBySpell(ASpell const& target) const;
		virtual ATarget* clone() = 0;

		ATarget();
		ATarget(std::string const type);
		virtual ~ATarget();
		ATarget(ATarget const& obj);
		ATarget& operator=(ATarget const& rhs);
};

#endif
