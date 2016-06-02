/*
 * udpHandle.cpp
 *
 *  Created on: 25.03.2016
 *      Author: max
 */


#include<iostream>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "udpHandle.h"

using namespace std;
//new comment
udpHandle::udpHandle(int newSocket, char* newIP)
{
	this->ipsocket = newSocket;
	this->ip = newIP;
}

void udpHandle::sendUDP(char* message)
{
	int sockfd;
	sockfd = socket(AF_INET,SOCK_DGRAM,0);
	struct sockaddr_in serv;

	serv.sin_family = AF_INET;
	serv.sin_port = htons(this->ipsocket);
	serv.sin_addr.s_addr = inet_addr(this->ip);

	socklen_t m = sizeof(serv);
	sendto(sockfd,message,sizeof(message),0,(struct sockaddr *)&serv,m);
	cout<<"message sent "<<message<<endl;
}
