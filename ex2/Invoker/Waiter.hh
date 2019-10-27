/*
 * Waiter.hh
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#ifndef WAITER_HH_
#define WAITER_HH_

#include "../Finder/FileFinder.hh"

class Waiter
{
public:
	Waiter() {}
	~Waiter() {}

	void invokeFinder(FileFinder* finder)
	{
		finder->find();
	}
};


#endif /* WAITER_HH_ */
