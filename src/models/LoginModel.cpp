/*
 * LoginModel.cpp
 *
 *  Created on: 06 Apr 2015
 *      Author: sam
 */

#include "LoginModel.hpp"

namespace models
{

    LoginModel::LoginModel(QObject *parent) : QObject(parent) {

    }

    void LoginModel::authorize(WebView *webview) {
        webview->setUrl(QUrl("https://mijn.telenet.be"));
    }
} /* namespace models */
