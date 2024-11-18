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

	void bindConnection(int port);
	void listenConnection(int backlog = 5);
	void acceptConnection(); //accepts new client connection
};

class ClientSocket : public Socket{
public:
	void connectToServer(std::string& host,int port); //connects to server-ip and port
	void sendMessage(std::string& message); //sends message
	void receiveMessage();

};

