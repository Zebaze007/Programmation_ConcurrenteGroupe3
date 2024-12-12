#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QLabel>
#include <QTableView>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QListWidget>

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
    QListWidget *alertList;   // Liste des alertes
    QLabel *menuLabel;        // Menu du jour

    void setupUI();           // Fonction pour créer et configurer l'interface
    void setupFakeData();     // Fonction pour ajouter des données fictives
    void updateAlerts();      // Fonction pour générer les alertes
    void updateMenu();        // Fonction pour afficher le menu du jour
};

#endif // DASHBOARD_H
