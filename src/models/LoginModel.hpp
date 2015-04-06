/*
 * LoginModel.hpp
 *
 *  Created on: 06 Apr 2015
 *      Author: sam
 */

#ifndef LOGINMODEL_HPP_
#define LOGINMODEL_HPP_

#include <QObject>
#include <bb/cascades/WebView>

using namespace bb::cascades;

namespace models
{

    class LoginModel : public QObject
    {
        Q_OBJECT

        public:
            LoginModel(QObject *parent=0);

            void authorize(WebView *webview);
    };

} /* namespace models */

#endif /* LOGINMODEL_HPP_ */
