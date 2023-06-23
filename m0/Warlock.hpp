#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <ios>
#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const& obj);
		Warlock& operator=(Warlock const& rhs);

	public:

		const std::string& getName() const;
		const std::string& getTitle() const;
		void	setTitle(const std::string& newTitle);
		void	introduce() const;

		Warlock(std::string name, std::string title);
		~Warlock();
};

#endif
