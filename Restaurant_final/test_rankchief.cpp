// test_rankchief.cpp
#include "test_rankchief.h"

void TestRankChief::testInitialization()
{
    RankChief rankChief(":/images/rankchief.png", 1);
    QVERIFY(rankChief.getGraphicsItem() != nullptr);
    QCOMPARE(rankChief.getId(), 1);
}

void TestRankChief::testSetPosition()
{
    RankChief rankChief(":/images/rankchief.png", 1);
    rankChief.setPosition(50, 100, 150.0);

    auto item = rankChief.getGraphicsItem();
    QVERIFY(item != nullptr);
    QCOMPARE(item->pos(), QPointF(50, 100));
    QCOMPARE(item->scale(), 1.5);
}

void TestRankChief::testMovement_data()
{
    QTest::addColumn<int>("startX");
    QTest::addColumn<int>("startY");
    QTest::addColumn<int>("endX");
    QTest::addColumn<int>("endY");
    QTest::addColumn<int>("moveX");
    QTest::addColumn<int>("moveY");

    QTest::newRow("basic movement") << 0 << 0 << 100 << 100 << 50 << 50;
    QTest::newRow("negative movement") << 100 << 100 << 0 << 0 << -50 << -50;
}

void TestRankChief::testMovement()
{
    QFETCH(int, startX);
    QFETCH(int, startY);
    QFETCH(int, endX);
    QFETCH(int, endY);
    QFETCH(int, moveX);
    QFETCH(int, moveY);

    RankChief rankChief(":/images/rankchief.png", 1);
    rankChief.setPosition(startX, startY);

    rankChief.setPosition(startX + moveX, startY + moveY);
    QCOMPARE(rankChief.getGraphicsItem()->pos(), QPointF(startX + moveX, startY + moveY));

    rankChief.setPosition(endX, endY);
    QCOMPARE(rankChief.getGraphicsItem()->pos(), QPointF(endX, endY));
}

QTEST_MAIN(TestRankChief)
//#include "test_rankchief.moc"
