/*
 * fileHandle.cpp
 *
 *  Created on: 25.03.2016
 *      Author: max
 */

#include <iostream>
#include <fstream>
#include <string>

#include "fileHandle.h"

using namespace std;

fileHandle::fileHandle(char* name)
{
	this->name = name;
    cout << "fileHandle is being created by name of " << this->name << endl;
}

void fileHandle::writeToFile(string* message)
{
	this->file.open(this->name,ios::out | ios::app); // ios::binary
	this->file << *message << endl;
	this->file.close();
}

