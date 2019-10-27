/*
 * Notification.cc
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */

#include "Notification.hh"

Notification::Notification()
{}

Notification::~Notification()
{}

void Notification::addWriter(Writer* w)
{
	writers.push_back(w);
}

void Notification::notify()
{
	for (auto w : writers)
	{
		w->write();
	}
}


