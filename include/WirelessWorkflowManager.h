#ifndef __WIRELESS_WORKFLOW_MANAGER_H__
#define __WIRELESS_WORKFLOW_MANAGER_H__

#include <QtCore>

class WirelessWorkflowManager : public QObject {
    Q_OBJECT
public:
    static WirelessWorkflowManager *sharedInstance();
public slots:
    void openBrowser(const QUrl&);
    void connectWireless();
    void connectWirelessSilently();
    void turnWifiOff();
    void setAirplaneMode(bool bAirMode);

    bool isAirplaneMode();
    bool isConnectedToHotspot();
};

#endif
