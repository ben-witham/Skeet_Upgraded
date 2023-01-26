#pragma once 

// Forward Delegation
class Bird; 
class Point;
class Advance 
{
public:
    virtual void advance(Bird & bird, Point &point, int & points) = 0;
};


class Inertia : public Advance
{
public:
    void advance(Bird & bird, Point & point, int & points);
};

// class Gravity: public Advance 
// {
// public:
//     void advance(Bird & bird, Point & point);
// };


// class Buoyancy: public Advance 
// {
// public:
//     void advance(Bird & bird, Point & point);
// };

// class Chaos: public Advance 
// {
// public:
//     void advance(Bird& bird, Point &point); 
// };
