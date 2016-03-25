/*
 * udpHandle.h
 *
 *  Created on: 25.03.2016
 *      Author: max
 */

#ifndef UDPHANDLE_H_
#define UDPHANDLE_H_

using namespace std;

class udpHandle
{
public:
  udpHandle();
  void sendUDP(string* message);
private:
  char buffer[256];
  int sockfd;

};


#endif /* UDPHANDLE_H_ */
