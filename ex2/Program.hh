/*
 * Program.hh
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#ifndef PROGRAM_HH_
#define PROGRAM_HH_

#include "FinderFactory/FinderFactory.hh"

class Program
{
public:
	Program();
	~Program();

	void start();
	void getUserInput();

private:
	std::string userInput;
};


#endif /* PROGRAM_HH_ */
