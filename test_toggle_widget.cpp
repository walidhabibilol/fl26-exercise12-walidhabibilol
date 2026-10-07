#include <QtTest/QtTest>
#include <QtWidgets>
#include <QDebug>

#include "toggle_widget.h"

class TestToggleWidget : public QObject {
  Q_OBJECT

private slots:

  // Define tests here
  void testToggle();
  
};

// Implement the tests here

void TestToggleWidget::testToggle()
{
    ToggleWidget toggleWidget;

    auto btn = toggleWidget.findChild<QPushButton *>();

    QVERIFY(btn != nullptr);
    QVERIFY(toggleWidget.isOn() == false);

    QTest::mouseClick(btn, Qt::LeftButton);
    QVERIFY(toggleWidget.isOn() == true);

    QTest::mouseClick(btn, Qt::LeftButton);
    QVERIFY(toggleWidget.isOn() == false);
}

QTEST_MAIN(TestToggleWidget)
#include "test_toggle_widget.moc"
