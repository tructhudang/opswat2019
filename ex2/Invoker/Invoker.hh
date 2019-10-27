/*
 * Invoker.hh
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#ifndef INVOKER_HH_
#define INVOKER_HH_

#include "../FinderFactory/FinderFactory.hh"
#include "Waiter.hh"

class Invoker
{
public:
	Invoker(Waiter* waiter);
	~Invoker();

	void request(string userInput);

private:
	Waiter* waiter;
	FinderFactory * factory;
};


#endif /* INVOKER_HH_ */
