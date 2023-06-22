#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <ios>

class ASpell
{
	private:
	protected:
		std::string name;
		std::string effects;
	public:
		virtual std::string getName() = 0;
		virtual std::string getEffects() = 0;
		virtual ASpell* Clone() = 0;

		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
};

#endif
