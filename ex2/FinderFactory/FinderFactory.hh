/*
 * FinderFactory.hh
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#ifndef FINDERFACTORY_HH_
#define FINDERFACTORY_HH_

#include "../Finder/FileFinder.hh"
using namespace std;

enum INPUT_TYPE {NETWORK, SYSTEM, NONE};

class FinderFactory
{
public:
	FinderFactory();
	~FinderFactory();

	FileFinder* createFinder(string userInput);
private:
	bool isDirectory(string path);
};


#endif /* FINDERFACTORY_HH_ */
