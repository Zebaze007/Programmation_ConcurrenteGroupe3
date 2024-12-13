//#include <QtTest/QtTest>
//#include "mainwindow.h"
//#include "client.h"
//#include "rankchief.h"
//#include "washer.h"
//#include "cooker.h"
//#include "dish.h"

//class TestMainWindow : public QObject {
    //Q_OBJECT

//private:
    //MainWindow *mainWindow;

//private slots:
    //void initTestCase();      // Initialisation avant les tests
    //void cleanupTestCase();   // Nettoyage après les tests

    // Tests unitaires
   // void testStartButton();
    //void testMoveClientOnce();
    //void testMoveWasherInLoop();
    //void testMoveCookerInLoop();
    //void testDishMovement();
//};

//void TestMainWindow::initTestCase() {
    //mainWindow = new MainWindow(nullptr);
//}

//void TestMainWindow::cleanupTestCase() {
    //delete mainWindow;
//}

//void TestMainWindow::testStartButton() {
    // Simule l'appui sur le bouton "Start"
    //QSignalSpy spy(mainWindow, &MainWindow::onStartButtonClicked);
    //mainWindow->onStartButtonClicked();
    //QCOMPARE(spy.count(), 1); // Vérifie que le signal a été émis une fois
//}

//void TestMainWindow::testMoveClientOnce() {
    // Préparation des données
   // Client client("client_image.png", 1);  // Utilisation du constructeur par défaut
    //QPoint start(0, 0);
   // QPoint end(100, 100);
    //int speed = 10;

    // Appel de la méthode
   // mainWindow->moveClientOnce(&client, start, end, speed);

    // Vérifications : position finale du client (via graphicsItem)
   // QCOMPARE(client.getGraphicsItem()->pos(), end);
//}

//void TestMainWindow::testMoveWasherInLoop() {
    // Préparation des données
   // Washer washer;
    //QPoint start(0, 0);
  //  QPoint end(50, 50);
  //  int speed = 5;

    // Appel de la méthode
   // mainWindow->moveWasherInLoop(&washer, start, end, speed);

    // Vérifications : position finale de Washer
  //  QCOMPARE(washer.getGraphicsItem()->pos(), end);
//}

//void TestMainWindow::testMoveCookerInLoop() {
    // Préparation des données
   // Cooker cooker;
   // QPoint start(0, 0);
   // QPoint end(200, 200);
  //  int speed = 15;

    // Appel de la méthode
  //  mainWindow->moveCookerInLoop(&cooker, start, end, speed);

    // Vérifications : position finale de Cooker
   // QCOMPARE(cooker.getGraphicsItem()->pos(), end);
//}

//void TestMainWindow::testDishMovement() {
    // Préparation des données
   // Dish dish;
  //  QPoint start(10, 10);
  //  QPoint end(100, 100);
  //  int speed = 20;

    // Appel de la méthode
  //  mainWindow->moveDishInLoop(&dish, start, end, speed);

    // Vérifications : position finale de Dish
   // QCOMPARE(dish.getGraphicsItem()->pos(), end);
//}

// Assurez-vous que c'est QTEST_MAIN et non qMain
//QTEST_MAIN(TestMainWindow)
//#include "test_classes.moc"
