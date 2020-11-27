#include "MsgBox.h"

MsgBox::MsgBox(queue<string>& sendQueue, queue<string>& recvQueue)
: sendQueue(sendQueue),
  recvQueue(recvQueue)
{
}

MsgBox::~MsgBox()
{
}

void MsgBox::SendMsg(string msg)
{
    sendQueue.push(msg);
}
string MsgBox::RecvMsg()
{
    string msg = "Default";
    if(!recvQueue.empty())
    {
        msg = recvQueue.front();
        recvQueue.pop();
    }

    return msg;
}
