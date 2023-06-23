#include "BrickWall.hpp"

BrickWall* BrickWall::clone()
{
	return (new BrickWall(*this));
}

BrickWall::BrickWall()
{
	type = "Inconspicuous Red-brick Wall";
	return ;
}

BrickWall::~BrickWall()
{
	return ;
}
