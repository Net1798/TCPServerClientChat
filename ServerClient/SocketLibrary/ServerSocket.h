#pragma once
#include "Socket.h"







class ServerSocket : public Socket {
public:

	void bindConnection(int port); // bind to port
	void listenConnection(int backlog = 5); //Listen for connections
	void acceptConnection(); //accepts new client connection
};