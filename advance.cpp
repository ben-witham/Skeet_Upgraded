#include <cassert>
#include "advance.h"
#include "bird.h"
#include "point.h"


void Inertia::advance(Bird & bird, Point & point, int & points)
{
    bird.getVelocity().addDx(-0.1);
    bird.getVelocity().addDy(-0.1);

    point.add(bird.getVelocity());

    if (bird.isOutOfBounds())
    {
        bird.kill();
        points *= -1; // points go negative when it is missed!
    }
}