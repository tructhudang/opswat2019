/*
 * SystemFileFinder.cc
 *
 *  Created on: Oct 26, 2019
 *      Author: thu
 */

#include "SystemFileFinder.hh"
#include <string>
#include <iostream>
#include <experimental/filesystem>

using namespace std;
namespace fs=std::experimental::filesystem;

SystemFileFinder::SystemFileFinder (string v_path)
{
	path = v_path;
}

SystemFileFinder::~SystemFileFinder()
{
}

void SystemFileFinder::find()
{
	cout << "SystemFileFinder::find()" << endl;
	fs::path m_path(path);

	for (auto& iter : fs::directory_iterator(m_path))
	{
		if (fs::is_regular_file(iter.path()))
		{
			findResult.emplace_back(iter.path().c_str());
		}
	}

	for (auto& iter : findResult)
	{
		cout << iter << endl;
	}
}


