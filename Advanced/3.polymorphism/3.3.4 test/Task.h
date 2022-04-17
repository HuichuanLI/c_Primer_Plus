#ifndef TASH_H
#define TASH_H

class Task 
{
public:
	Task() {}
	virtual ~Task() {}
	virtual void executeTask() = 0;
};

#endif // TASH_H