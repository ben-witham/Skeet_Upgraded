#include "movement.h"
#include <random>
#include <cassert>
#include "random.h"



/************************************************
 *
 ************************************************/
void AntiGravity::applyMovement(Bird* pBird)
{
   pBird->getVelocity().addDy(0.05);
}

/************************************************
 *
 ************************************************/
void Gravity::applyMovement(Bird* pBird)
{
   pBird->getVelocity().addDy(-0.07);
}

/************************************************
 *
 ************************************************/
void Drag::applyMovement(Bird* pBird)
{
   pBird->getVelocity() *= drag;
}

/************************************************
 *
 ************************************************/
void Increment::applyMovement(Bird* pBird)
{
   pBird->getPosition().add(pBird->getVelocity());
}

/************************************************
 *
 ************************************************/
void CrazyMove::applyMovement(Bird* pBird)
{
   if (randomInt(0, 15) == 0)
   {
      pBird->getVelocity().addDy(randomFloat(-1.5, 1.5));
      pBird->getVelocity().addDx(randomFloat(-1.5, 1.5));
   }
}


