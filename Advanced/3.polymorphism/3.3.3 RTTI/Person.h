#ifndef PERSON_H
#define PERSON_H

class Person 
{
public:
	Person() {}
	virtual ~Person() {}
	virtual void eat() = 0;
};

#endif // PERSON_H