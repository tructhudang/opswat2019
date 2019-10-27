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
	while (true)
	{
		getUserInput();
		Invoker invoker(waiter);
		invoker.request(userInput);
	}
	delete waiter;
}

