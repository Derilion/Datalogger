/*
 * sendMessage.h
 *
 *  Created on: 21.03.2016
 *      Author: max
 * Description: used to built up the message according to the specified protocol. Used as messagebuffer.
 */

#ifndef SENDMESSAGE_H_
#define SENDMESSAGE_H_


class sendMessage
{
public:
	//Constructor
	sendMessage();
	sendMessage(char* message);

	//Destructor
	virtual  ̃sendMessage();

	//utility Functions
	void setNext(sendMessage *next);
	void setLast(sendMessage *last);
	void setMessage(char* message);

	void getLast();
	void getNext();
	void getMessage();

	void printMessage();

	//Saved Variables
protected:
	char* sMessage;
	sendMessage *pLast;
	sendMessage *pNext;
};



#endif /* SENDMESSAGE_H_ */
