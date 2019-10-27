/*
 * Program.cc
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#include "Program.hh"
#include <iostream>

using namespace std;

Program::Program()
{
	userInput = "";
	factory = new FinderFactory();
}

Program::~Program()
{
	if (factory)
		delete factory;
}

void Program::getUserInput()
{
    cout << "Input here: ";
    cin >> userInput;
}

void Program::start()
{
	while (true)
	{
		getUserInput();
		FileFinder* finder = factory->createFinder(userInput);
		if (finder)
			finder->find();
	}
}

