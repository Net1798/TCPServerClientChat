#include "Socket.h"


//class Socket

Socket::Socket()
{

}


Socket::~Socket()
{

}

void Socket::closeSocket()
{

}


//class serverSocket
void ServerSocket::bindConnection(int port)
{

}


void ServerSocket::listenConnection(int backlog)
{

}



void ServerSocket::acceptConnection()
{

}

//class clientSocket

void ClientSocket::connectToServer(const std::string& host, int port)
{

}


void ClientSocket::sendMessage(const std::string& message)
{

}

std::string ClientSocket::receiveMessage()
{
	return std::string();
}

