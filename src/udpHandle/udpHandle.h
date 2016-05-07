/*
 * udpHandle.h
 *
 *  Created on: 25.03.2016
 *      Author: max
 */

#ifndef UDPHANDLE_H_
#define UDPHANDLE_H_

#include<string.h>

using namespace std;

class udpHandle
{
public:
  udpHandle(int newSocket, char* newIP);
  void sendUDP(char* message);
  void error(char *msg);
private:
  int ipsocket;
  char* ip;
};


#endif /* UDPHANDLE_H_ */
