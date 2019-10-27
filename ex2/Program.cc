/*
 * Program.cc
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#include "Program.hh"
#include "Invoker/Waiter.hh"
#include <iostream>
#include "Invoker/Invoker.hh"

using namespace std;

Program::Program()
{
	userInput = "";
}

Program::~Program()
{}

void Program::getUserInput()
{
    cout << "Input here: ";
    cin >> userInput;
}

void Program::start()
{
	Waiter* waiter = new Waiter();
	Invoker* invoker = new Invoker(waiter);
	while (true)
	{
		getUserInput();
		invoker->request(userInput);
	}
	delete invoker;
	delete waiter;
}

