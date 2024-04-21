WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef _ACCOUNTSERVICE_H_
#define _ACCOUNTSERVICE_H_

#include "HttpService.h"

#include <string>

class AccountService : public HttpService {
 public:
  AccountService();

  virtual void get(HTTPRequest *request, HTTPResponse *response);
  virtual void put(HTTPRequest *request, HTTPResponse *response);
  
};

#endif
