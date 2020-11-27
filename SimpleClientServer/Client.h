#include <iostream>
#include "MsgBox.h"

#pragma once

class Client
{
public:
    Client(MsgBox& _mb, string _name)
    : m_mb(_mb),
      m_name(_name)
    {
    }

    ~Client() {
        // Do nothing
    }

    void Run() {
        msg = m_name + " to server says Hello!";
        m_mb.SendMsg(msg);
    }

private:
    MsgBox& m_mb;
    string m_name;
    std::string msg;
};