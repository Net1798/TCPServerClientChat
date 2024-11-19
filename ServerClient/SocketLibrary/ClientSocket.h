#pragma once
#include "Socket.h"





class ClientSocket : public Socket {
public:
	void connectToServer(const std::string& host, int port); //connects to server-ip and port
	void sendMessage(const std::string& message); //sends message
	std::string receiveMessage();

};