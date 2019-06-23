#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
#include "StudentWorld.h"
// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp
class Actor:public StudentWorld {
public:
	virtual void doSomething()=0;
		
};
#endif // ACTOR_H_
