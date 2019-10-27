/*
 * NetworkFileFinder.hh
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#ifndef NETWORKFILEFINDER_HH_
#define NETWORKFILEFINDER_HH_

#include "FileFinder.hh"
#include "../Writer/Writer.hh"
#include "../Notification/Notification.hh"

class NetworkFileFinder : public FileFinder , public Notification
{
public:
	NetworkFileFinder(std::string v_path);

	~NetworkFileFinder();

	void find();
};


#endif /* NETWORKFILEFINDER_HH_ */
