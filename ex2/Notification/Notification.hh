/*
 * Notification.hh
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#ifndef NOTIFICATION_NOTIFICATION_HH_
#define NOTIFICATION_NOTIFICATION_HH_

#include "../Writer/Writer.hh"
#include <vector>
using namespace std;

class Notification
{
public:
	Notification();
	~Notification();
	void addWriter(Writer* w);
	void notify();

private:
	vector<Writer*> writers;
};


#endif /* NOTIFICATION_NOTIFICATION_HH_ */
