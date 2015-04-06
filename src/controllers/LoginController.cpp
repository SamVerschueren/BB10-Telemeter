/*
 * LoginController.cpp
 *
 *  Created on: 06 Apr 2015
 *      Author: sam
 */

#include "LoginController.hpp"

#include "models/LoginModel.hpp"

using namespace models;

namespace controllers
{
    LoginController::LoginController(QObject *parent) : QObject(parent) {
        this->model = new LoginModel(this);
    }

    void LoginController::authorize(WebView *webview) {
        this->model->authorize(webview);
    }
} /* namespace controllers */
