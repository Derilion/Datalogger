/*
 * fileHandle.h
 *
 *  Created on: 25.03.2016
 *      Author: max
 * Description: handles all actions related to the outputfile onboard of the datalogger
 */

#ifndef FILEHANDLE_H_
#define FILEHANDLE_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class fileHandle
{
public:
  fileHandle(char* name);
  void writeToFile(string* message);
private:
  ofstream file;
  char* name;
};


#endif /* FILEHANDLE_H_ */
