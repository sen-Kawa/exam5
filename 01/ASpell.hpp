#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <ios>
class ATarget;
class ASpell
{
	private:
	protected:
		std::string name;
		std::string effects;
	public:
		virtual std::string getName() const;
		virtual std::string getEffects() const;
		virtual void launch(ATarget const& ref) const;
		virtual ASpell* Clone() = 0;

		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
};

#endif
