#pragma once


#include <drogon/HttpSimpleController.h>
using namespace drogon;

class GameFieldController : public drogon::HttpSimpleController<GameFieldController>
{
public:
    virtual void asyncHandleHttpRequest(const HttpRequestPtr &req,
                                        std::function<void (const HttpResponsePtr &)> &&callback)override;
    PATH_LIST_BEGIN

    PATH_ADD("/game-field", Get);
    PATH_LIST_END
};