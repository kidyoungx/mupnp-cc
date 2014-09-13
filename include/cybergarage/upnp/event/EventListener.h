/******************************************************************
*
*  CyberLink for C++
*
*  Copyright (C) Satoshi Konno 2002
*
*  File: EventListener.h
*
*  Revision;
*
*  08/12/03
*    - first revision
*
******************************************************************/

#ifndef _CLINK_EVENTLISTENER_H_
#define _CLINK_EVENTLISTENER_H_

#include <uhttp/util/Listener.h>

namespace CyberLink {

class EventListener : public uHTTP::Listener {
public:
  virtual bool eventNotifyReceived(const std::string &uuid, long seq, const std::string &varName, const std::string &value) = 0;
};

}

#endif

