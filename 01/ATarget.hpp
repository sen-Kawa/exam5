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
		const std::string& getType() const;
		void getHitBySpell(ASpell const& ref) const;
		virtual ATarget* Clone() = 0;

		ATarget(std::string type);
		virtual ~ATarget();
};

#endif
