#include <iostream>

#include "MsgBox.h"
#include "Server.h"
#include "Client.h"

using namespace std;

int main()
{
    queue<string> sendQueue;
    queue<string> recvQueue;

    MsgBox mBoxServer(sendQueue, recvQueue); // send to client , recv from client
    MsgBox mBoxClient(recvQueue, sendQueue); // recv from server, send to server

    Server s1(mBoxServer);
    Client c1(mBoxClient, "c1");
    Client c2(mBoxClient, "c2");

    int cnt = 6;
    while(cnt--) {
        s1.Run();
        c1.Run();
        c2.Run();
    }
}
