/*
 * FinderFactory.cc
 *
 *  Created on: Oct 27, 2019
 *      Author: thu
 */
#include "FinderFactory.hh"
#include "../Finder/NetworkFileFinder.hh"
#include "../Finder/SystemFileFinder.hh"
#include <experimental/filesystem>
#include <iostream>

namespace fs=std::experimental::filesystem;

FinderFactory::FinderFactory()
{}

FinderFactory::~FinderFactory()
{}

bool FinderFactory::isDirectory(string path)
{
	fs::path p(path);
	return fs::is_directory(p) ? true : false;
}

FileFinder* FinderFactory::createFinder(string userInput)
{
	FileFinder* finder = NULL;

	if (userInput == "network")
	{
		finder = new NetworkFileFinder(userInput);
	}
	else if (isDirectory(userInput))
	{
		finder = new SystemFileFinder(userInput);
	}
	else
	{
		cout << "Bad Input!!!" << endl;
	}

	return finder;
}
