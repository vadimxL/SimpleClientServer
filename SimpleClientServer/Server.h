#include <iostream>
#include <vector>
#include "MsgBox.h"

#pragma once

class Server
{
public:
    Server(MsgBox& _mb)
    : m_mb(_mb) {

    }

    ~Server() {

    }

    void Run() {
        msgs.push_back(m_mb.RecvMsg());
        //cout << "New message received " << endl << msgs.front() << endl; // PrintNewMsg
        PrintAllMsgs();
    }

    void PrintAllMsgs() {
            for (auto it = msgs.begin() ; it != msgs.end(); ++it)
            {
                cout << *it << endl;
            }
            cout << endl;
    }
private:
    MsgBox& m_mb;
    std::vector<std::string> msgs;
};
