WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef _DEPOSITSERVICE_H_
#define _DEPOSITSERVICE_H_

#include "HttpService.h"
#include "Database.h"

#include <string>

class DepositService : public HttpService {
 public:
  DepositService();
  virtual void post(HTTPRequest *request, HTTPResponse *response);
};

#endif
