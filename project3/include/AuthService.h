WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef _AUTHSERVICE_H_
#define _AUTHSERVICE_H_

#include "HttpService.h"

#include <string>

class AuthService : public HttpService {
 public:
  AuthService();

  virtual void post(HTTPRequest *request, HTTPResponse *response);
  virtual void del(HTTPRequest *request, HTTPResponse *response);
};

#endif
