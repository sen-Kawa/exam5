#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget* newTarget)
{
	if (targets.count(newTarget->getType()) == 0)
		targets[newTarget->getType()] = newTarget->clone();
}

void TargetGenerator::forgetTargetType(std::string const& nameTarget)
{
	if (targets.count(nameTarget) > 0)
	{
		delete targets[nameTarget];
		targets.erase(nameTarget);
	}
}

ATarget* TargetGenerator::createTarget(std::string const& nameTarget)
{
	if (targets.count(nameTarget) > 0)
		return targets[nameTarget]->clone();
	return NULL;
}

TargetGenerator::TargetGenerator()
{
	return ;
}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator it = targets.begin();
	std::map<std::string, ATarget*>::iterator ite = targets.end();
	while (it != ite)
	{
		delete it->second;
		it++;
	}
	return ;
}

TargetGenerator::TargetGenerator(TargetGenerator const& obj)
{
	targets = obj.targets;
}

TargetGenerator& TargetGenerator::operator=(TargetGenerator const& rhs)
{
	targets = rhs.targets;
	return (*this);
}
