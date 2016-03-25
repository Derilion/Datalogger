//============================================================================
// Name        : datalogger.cpp
// Author      : max
// Version     : 0.1a
// Copyright   : All Rights belong to the DHBW Stuttgart Engineering Team
// Description : Datalogger Program for the BeagleBoneBlack Rev C in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <time.h>
#include "sendMessage/sendMessage.h"
#include "fileHandle/fileHandle.h"
using namespace std;

int main() {

	//Initialize sendMessageBuilder

	sendMessage message;
	fileHandle handle("test.txt");
	string filename = "Hello";
	string* lulu = &filename; //filename dynamisch?
	//Initialize spi connection

	//Initialize udp

	//Initialize Hashing Compression

	//SPI to thingy

	//calc used space

	//build message

	//sent message

	//write message to emmc
	handle.writeToFile(lulu);
	message.printMessage();

	cout << "It Works!" << endl; // prints It Works!
	return 0;
}

