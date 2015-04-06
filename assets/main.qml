import bb.cascades 1.4

Page {
    WebView {
        id: oauthWebview
        horizontalAlignment: HorizontalAlignment.Fill
        verticalAlignment: VerticalAlignment.Fill
        settings.javaScriptEnabled: true;
        preferredHeight: Infinity;
    }
    
    onCreationCompleted: {
        loginController.authorize(oauthWebview);
    }
}
