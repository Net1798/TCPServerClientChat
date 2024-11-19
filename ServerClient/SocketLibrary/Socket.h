#pragma once

#include <winsock2.h>
#include <string>
#include <stdexcept>






class Socket {
public:
	Socket(); //init socket
	virtual ~Socket(); //decontruct-cleanup socket
	void closeSocket(); //close socket


};





