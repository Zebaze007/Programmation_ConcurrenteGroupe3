#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QTableView>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include <QGroupBox>

class Dashboard : public QMainWindow {
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private:
    QLabel *labelClients;
    QLabel *labelTables;
    QTableView *tableViewStock;
    QTableView *tableViewUstensiles;

    void setupUI();      // Fonction pour créer et configurer l'interface
    void setupFakeData(); // Fonction pour ajouter des données fictives
};

#endif // DASHBOARD_H
