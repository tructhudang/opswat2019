/*
 * FileFinder.hh
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#ifndef FILEFINDER_HH_
#define FILEFINDER_HH_

#include <string>

class FileFinder
{
public:
	virtual ~FileFinder() {}

	virtual void find() = 0;

protected:
	std::string path;
};


#endif /* FILEFINDER_HH_ */
