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

class ServerSocket : public Socket{
public:

	void bindConnection(int port); // bind to port
	void listenConnection(int backlog = 5); //Listen for connections
	void acceptConnection(); //accepts new client connection
};

class ClientSocket : public Socket{
public:
	void connectToServer(const std::string& host,int port); //connects to server-ip and port
	void sendMessage(const std::string& message); //sends message
	std::string receiveMessage();

};

