#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QFile>
#include <QSqlQuery>

//Fonction pour connecter la base de données
bool connectToDatabase()
{  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "C:\\Users\\Y-G\\Documents\\Projet programmation concurrente\\Restaurant_final\\build\\Desktop_Qt_6_8_0_MinGW_64_bit-Debug\\restaurant.sqlite";

    QFile file(dbPath);
    if (!file.exists()) {
        qDebug() << "Fichier de base de données introuvable: " << dbPath;
        return false;
    }
    db.setDatabaseName(dbPath);

    if (db.open()) {
        qDebug() << "Connexion réussie à la base de données";
        return true;
    } else {
        qDebug() <<"Erreur de connexion à la base de données:" << db.lastError().text();
        return false;
    }
}





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "Application démarrée.";

    if (!connectToDatabase()) {
        qDebug() << "Échec de la connexion à la base de données.";
        return -1; // Quitter si la base de données n'est pas accessible
    }
    qDebug() << "Connexion à la base de données réussie.";

    MainWindow w;
    qDebug() << "Fenêtre principale initialisée.";
    w.show();
    qDebug() << "Fenêtre principale affichée.";

    return a.exec();



}

