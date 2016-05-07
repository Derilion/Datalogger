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
#include "udpHandle/udpHandle.h"
using namespace std;

int main() {

	//Initialize sendMessageBuilder

	sendMessage message;
	fileHandle handle("test.txt");
	string filename = "Hello";
	string* lulu = &filename; //filename dynamisch?
	//Initialize spi connection

	//Initialize udp
	udpHandle serviceStation(12000, "127.0.0.1");
	//Initialize Hashing Compression

	//SPI to thingy // not going to happen

	//calc used space

	//build message

	//sent message

	//write message to emmc


	handle.writeToFile(lulu);
	serviceStation.sendUDP("Hallo");
	message.printMessage();

	cout << "It Works!" << endl; // prints It Works!
	return 0;
}

