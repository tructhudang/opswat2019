/*
 * main.cc
 *
 *  Created on: Oct 25, 2019
 *      Author: thu
 */

#include <iostream>
#include <experimental/filesystem>

using namespace std;
namespace fs=std::experimental::filesystem;

int countTotalFilesInADirectory(fs::path path)
{
    int count = 0;
    for (auto &p : fs::recursive_directory_iterator(path))
    {
    	if (fs::is_regular_file(p.path()))
    	{
    		++count;
    	}
    }
    return count;
}

int main()
{
	fs::path path("/home/thu/app/");
	int num = countTotalFilesInADirectory(path);
	cout << num << endl;
	return 0;
}




