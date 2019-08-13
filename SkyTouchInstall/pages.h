#ifndef PAGES_H
#define PAGES_H



#include "network.h"
#include "installconfirmation.h"
#include "global.h"


class SoftwareDownloadPage : public QWidget {
    Q_OBJECT
public:
    SoftwareDownloadPage(QWidget *parent = 0);
    void initPage(vector<SoftwareInfo*> &softwareL, Network *network);

   // ~SoftwareInstallationPage();

public slots:
    void downloadButtonCliked();
    void searchForLocalFiles();
    void viewDownloadProg();
    void showReadyToInstall();
    void backToSoftwareList();
    void finishedDownloading();
    void addFileToInstallList();


private:
    bool readyToInstall;
    bool downloadConfirmed;
    bool addLocalFilesToInstallQ;

    QVBoxLayout *mainLayout;
    Network *network;

    QPushButton *viewDownloadProgButton;
    QPushButton *readyToInstallButton;
    QPushButton *stopDownloadBtn;


    vector<SoftwareInfo*> softwareList;
    QMap<QString,LocalFile*> localFilesMap;

    void showDownloadProgress();
    void startDownloads();
    void stopDownloads();
    bool isDownloadInProgress();
    bool isReadyForInstall();



};



class ConfigurationPage : public QWidget{
public:
    ConfigurationPage(QWidget *parent = 0);
    //~ConfigurationPage();
};

void clearWidgetsAndLayouts(QLayout * layout);



#endif // PAGES_H
