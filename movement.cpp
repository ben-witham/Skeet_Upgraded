#include "movement.h"
#include <random>
#include <cassert>
#include "random.h"



/************************************************
 *
 ************************************************/
void AntiGravity::applyMovement(Bird* pBird)
{
   pBird->v.addDy(0.05);
}

/************************************************
 *
 ************************************************/
void Gravity::applyMovement(Bird* pBird)
{
   pBird->v.addDy(-0.07);
}

/************************************************
 *
 ************************************************/
void Drag::applyMovement(Bird* pBird)
{
   pBird->v *= drag;
}

/************************************************
 *
 ************************************************/
void Increment::applyMovement(Bird* pBird)
{
   pBird->pt.add(pBird->v);
}

/************************************************
 *
 ************************************************/
void CrazyMove::applyMovement(Bird* pBird)
{
   if (randomInt(0, 15) == 0)
   {
      pBird->v.addDy(randomFloat(-1.5, 1.5));
      pBird->v.addDx(randomFloat(-1.5, 1.5));
   }
}


