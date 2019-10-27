/*
 * Invoker.cc
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#include "Invoker.hh"

Invoker::Invoker(Waiter* waiter)
{
	this->waiter = waiter;
	factory = new FinderFactory();
}

Invoker::~Invoker()
{
	if (waiter)
		delete waiter;
	if (factory)
		delete factory;
}

void Invoker::request(string userInput)
{
	FileFinder *finder = factory->createFinder(userInput);
	if (finder)
		waiter->invokeFinder(finder);
}


