#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* newTarget)
{
	if (targets.count(newTarget->getType()) == 0)
		targets[newTarget->getType()] = newTarget->clone();
}

void TargetGenerator::forgetTargetType(std::string const& nameTarget)
{
	if (targets.count(nameTarget) > 0)
		targets.erase(nameTarget);
}

ATarget* TargetGenerator::createTarget(std::string const& nameTarget)
{
	if (targets.count(nameTarget) > 0)
		return targets[nameTarget]->clone();
	else
		return (NULL);
}

TargetGenerator::TargetGenerator(TargetGenerator const& obj)
{
	targets = obj.targets;
	return ;
}

TargetGenerator& TargetGenerator::operator=(TargetGenerator const& rhs)
{
	targets = rhs.targets;
	return (*this);
}

TargetGenerator::TargetGenerator()
{
	return ;
}

TargetGenerator::~TargetGenerator()
{
	return ;
}
