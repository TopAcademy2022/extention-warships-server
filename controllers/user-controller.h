#pragma once


#include <drogon/HttpSimpleController.h>
using namespace drogon;

class UserController : public drogon::HttpSimpleController<UserController>
{
public:
    virtual void asyncHandleHttpRequest(const HttpRequestPtr &req,
                                        std::function<void (const HttpResponsePtr &)> &&callback)override;
    PATH_LIST_BEGIN

    PATH_ADD("/user", Get);
    PATH_LIST_END
};