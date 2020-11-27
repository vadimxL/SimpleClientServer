#include <iostream>
#include <queue>
#include <string>

#pragma once

using namespace std;

class MsgBox
{
    public:
    MsgBox(queue<string>& sendQueue, queue<string>& recvQueue);
    ~MsgBox();
    void SendMsg(string msg);
    string RecvMsg();

    private:
    // HANDLE mtx;
    queue<string>& sendQueue;
    queue<string>& recvQueue;

};