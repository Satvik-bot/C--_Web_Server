#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

namespace HDE
{
class SimpleSocket
{
    private:
    struct sockaddr_in address;
    int sock;
    int connection;
    
    public:
    // Constructor
    SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
    
    // Virtual function to connect to a network
    virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
    
    // Test function for sockets and connections
    void test_connection(int);
    
    // Getter fns
    struct sockaddr_in get_address();
    int get_sock();
    int get_connection();

    // Setter function
    void set_connection(int domain);
};
}

#endif /* SimpleSocket_hpp */

