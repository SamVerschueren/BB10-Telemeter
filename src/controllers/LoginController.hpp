/*
 * LoginController.hpp
 *
 *  Created on: 06 Apr 2015
 *      Author: sam
 */

#ifndef LOGINCONTROLLER_HPP_
#define LOGINCONTROLLER_HPP_

#include <QObject>
#include <bb/cascades/WebView>

using namespace bb::cascades;

namespace models {
    class LoginModel;
}

using namespace models;

namespace controllers
{

    class LoginController : public QObject
    {
        Q_OBJECT

        private:
            LoginModel *model;

        public:
            LoginController(QObject *parent=0);

            Q_INVOKABLE void authorize(WebView *webview);
    };

} /* namespace controllers */

#endif /* LOGINCONTROLLER_HPP_ */
