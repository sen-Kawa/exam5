#include "BrickWall.hpp"

BrickWall* BrickWall::clone() const
{
	return (new BrickWall());
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
