/*
 * SystemFileFinder.hh
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#ifndef SYSTEMFILEFINDER_HH_
#define SYSTEMFILEFINDER_HH_

#include "FileFinder.hh"
#include <vector>

class SystemFileFinder : public FileFinder
{
public:
	SystemFileFinder (std::string v_path);

	~SystemFileFinder();

	void find();

private:
	std::vector<std::string> findResult;
};


#endif /* SYSTEMFILEFINDER_HH_ */
