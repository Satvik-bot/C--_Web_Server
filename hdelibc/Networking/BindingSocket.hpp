#include <iostream>
#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{

class BindingSocket: public SimpleSocket
{
    public: 
    // Constructor
    BindingSocket(int domain, int service, int protocol, int port, u_long interface);

    // virtual function from parent
    int connect_to_network(int sock, struct sockaddr_in address);

};
} 