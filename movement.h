#pragma once
#include "bird.h"

class Bird;

class Movement
{
public:
   Movement() {}
   virtual void applyMovement(Bird* pBird) = 0;
};

class AntiGravity : public Movement
{
public:
   AntiGravity() {}
   void applyMovement(Bird* pBird);
};

class Gravity : public Movement
{
public:
   Gravity() {}
   void applyMovement(Bird* pBird);
};

class Drag : public Movement
{
public:
   Drag(float newDrag) : drag(newDrag) {}
   void applyMovement(Bird* pBird);

private:
   float drag;
};

class Increment : public Movement
{
public:
   Increment() {}
   void applyMovement(Bird* pBird);
};

class CrazyMove : public Movement
{
public:
   CrazyMove() {}
   void applyMovement(Bird* pBird);
};