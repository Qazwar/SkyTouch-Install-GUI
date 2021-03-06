#include "optionsmenu.h"

OptionsMenu::OptionsMenu(QWidget *parent) : QWidget(parent)
{
    tabs = new QTabWidget;
    tabs->setTabPosition(QTabWidget::North);

    mainLayout = new QVBoxLayout;

    QPushButton *closeBtn = new QPushButton(tr("Close"));
    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->addStretch(1);
    btnLayout->addWidget(closeBtn);

    mainLayout->addWidget(tabs);
    mainLayout->addLayout(btnLayout);
    setLayout(mainLayout);

    connect(closeBtn, &QPushButton::clicked, this, &QWidget::close);
}

OptionsMenu::~OptionsMenu()
{
    qDebug() << "OptionsMenu Destructor";
    //if(tabs) delete tabs;
    if(mainLayout) clearLayotAndWidgets(mainLayout);
}

void OptionsMenu::addTab(QWidget *widget, QString tabName)
{
    tabs->addTab(widget, tabName);
}
