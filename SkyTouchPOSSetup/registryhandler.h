#ifndef REGISTRYHANDLER_H
#define REGISTRYHANDLER_H

#include "global.h"
#include "softwareinfo.h"


class RegistryHandler
{
public:
    RegistryHandler();
    ~RegistryHandler();
    QString getCurrRegDataVal(QString val);
    QString getPolicyVal(QString policyName);
    void setPolicyVal(QString policyName, QVariant value);
    bool addReg(QString key, QString policyName, QVariant value);
    bool deleteKey(QString policyName);
    void setDefaultValues();


private:

    QMap<QString, QString> policyNameToKey;

    QString HKCU = "HKEY_CURRENT_USER";
    QString HKLM = "HKEY_LOCAL_MACHINE";


    QString hkcuPolicyWinKey = HKCU+"\\Software\\Policies\\Microsoft\\Windows";
    QString hkcuPolicyKey = HKCU+"\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies";
    QString hkcuRunKey = HKCU+"\\Software\\Microsoft\\Windows\\CurrentVersion\\Run";
    QString hkcuPolicyPushNotiKey = HKCU+"\\SOFTWARE\\Policies\\Microsoft\\Windows\\CurrentVersion\\PushNotifications";

    QString hklmPolicyPersonalKey = HKLM+"\\Software\\Policies\\Microsoft\\Windows\\Personalization";
    QString hklmPolicyKey = HKLM+"\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer";

};

#endif // REGISTRY_H
