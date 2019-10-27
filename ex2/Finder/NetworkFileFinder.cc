/*
 * NetworkFileFinder.cc
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#include "NetworkFileFinder.hh"
#include "../Writer/ConsoleWriter.hh"
#include <string>
#include <iostream>

using namespace std;

NetworkFileFinder::NetworkFileFinder(std::string v_path)
{
	path = v_path;
	Writer* writer = new ConsoleWriter;
	addWriter(writer);
}

NetworkFileFinder::~NetworkFileFinder()
{
}

void NetworkFileFinder::find()
{
	cout << "NetworkFileFinder::find" << endl;
	notify();
}


