//============================================================================
// Name        : datalogger.cpp
// Author      : max
// Version     : 0.1a
// Copyright   : All Rights belong to the DHBW Stuttgart Engineering Team
// Description : Datalogger Program for the BeagleBoneBlack Rev C in C++, Ansi-style
//============================================================================

#include <glib-2.0/glib.h>
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

void init (void){

	int fd = open( "/sys/class/gpio/gpio7/value", O_RDONLY | O_NONBLOCK );
	GIOChannel* channel = g_io_channel_unix_new( fd );
	GIOCondition cond = GIOCondition( G_IO_PRI );
	guint id = g_io_add_watch( channel, cond, SPI0Handle, 0 );

	fd = open( "/sys/class/gpio/gpio8/value", O_RDONLY | O_NONBLOCK );
	GIOChannel* channel = g_io_channel_unix_new( fd );
	GIOCondition cond = GIOCondition( G_IO_PRI );
	guint id = g_io_add_watch( channel, cond, SPI1Handle, 0 );

	fd = open( "/sys/class/gpio/gpio9/value", O_RDONLY | O_NONBLOCK );
	GIOChannel* channel = g_io_channel_unix_new( fd );
	GIOCondition cond = GIOCondition( G_IO_PRI );
	guint id = g_io_add_watch( channel, cond, SPI2Handle, 0 );

	fd = open( "/sys/class/gpio/gpio10/value", O_RDONLY | O_NONBLOCK );
	GIOChannel* channel = g_io_channel_unix_new( fd );
	GIOCondition cond = GIOCondition( G_IO_PRI );
	guint id = g_io_add_watch( channel, cond, SPI3Handle, 0 );

}

static gboolean SPI0Handle( GIOChannel *channel, GIOCondition condition, gpointer user_data )
{
    return 1;
}

static gboolean SPI1Handle( GIOChannel *channel, GIOCondition condition, gpointer user_data )
{
    return 1;
}
static gboolean SPI2Handle( GIOChannel *channel, GIOCondition condition, gpointer user_data )
{
    return 1;
}
static gboolean SPI3Handle( GIOChannel *channel, GIOCondition condition, gpointer user_data )
{
    return 1;
}

