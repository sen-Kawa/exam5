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

		std::string const&	getType() const;
		void	getHitBySpell(ASpell const& spell);
		virtual ATarget* clone() = 0;

		ATarget();
		ATarget(std::string const type);
		ATarget(ATarget const& obj);
		ATarget&	operator=(ATarget const& rhs);
		virtual ~ATarget();

};
#endif
