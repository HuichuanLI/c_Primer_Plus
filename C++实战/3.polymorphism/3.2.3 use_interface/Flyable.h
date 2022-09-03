#ifndef FLYABLE_H
#define FLYABLE_H

class Flyable 
{
public:
	virtual ~Flyable() {};
	virtual void fly() = 0;
};

#endif // FLYABLE_H