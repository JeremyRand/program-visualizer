/********************************************************************************
** Form generated from reading UI file 'ProgramVisualizer.ui'
**
** Created: Wed Jun 9 21:15:42 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMVISUALIZER_H
#define UI_PROGRAMVISUALIZER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgramVisualizer
{
public:
    QGraphicsView *viewer;
    QTreeWidget *treeWidget;
    QTextEdit *textEdit;
    QLabel *treeWidgetLabel;
    QLabel *textEditLabel;
    QLabel *viewerLabel;
    QLabel *functionSelectorLabel;
    QComboBox *functionSelector;
    QPushButton *Refresh;
    QFrame *line;
    QPushButton *updateSourceFile;
    QPushButton *jumpTo;
    QPushButton *changeFunction;

    void setupUi(QWidget *ProgramVisualizer)
    {
        if (ProgramVisualizer->objectName().isEmpty())
            ProgramVisualizer->setObjectName(QString::fromUtf8("ProgramVisualizer"));
        ProgramVisualizer->resize(1079, 629);
        viewer = new QGraphicsView(ProgramVisualizer);
        viewer->setObjectName(QString::fromUtf8("viewer"));
        viewer->setGeometry(QRect(290, 10, 781, 381));
        viewer->setTransformationAnchor(QGraphicsView::NoAnchor);
        treeWidget = new QTreeWidget(ProgramVisualizer);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 271, 381));
        treeWidget->setFrameShape(QFrame::StyledPanel);
        treeWidget->setFrameShadow(QFrame::Sunken);
        treeWidget->header()->setVisible(false);
        textEdit = new QTextEdit(ProgramVisualizer);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 470, 1061, 151));
        treeWidgetLabel = new QLabel(ProgramVisualizer);
        treeWidgetLabel->setObjectName(QString::fromUtf8("treeWidgetLabel"));
        treeWidgetLabel->setGeometry(QRect(10, 390, 111, 31));
        QFont font;
        font.setPointSize(12);
        treeWidgetLabel->setFont(font);
        textEditLabel = new QLabel(ProgramVisualizer);
        textEditLabel->setObjectName(QString::fromUtf8("textEditLabel"));
        textEditLabel->setGeometry(QRect(10, 440, 201, 31));
        textEditLabel->setFont(font);
        viewerLabel = new QLabel(ProgramVisualizer);
        viewerLabel->setObjectName(QString::fromUtf8("viewerLabel"));
        viewerLabel->setGeometry(QRect(300, 390, 131, 31));
        viewerLabel->setFont(font);
        functionSelectorLabel = new QLabel(ProgramVisualizer);
        functionSelectorLabel->setObjectName(QString::fromUtf8("functionSelectorLabel"));
        functionSelectorLabel->setGeometry(QRect(540, 400, 101, 16));
        functionSelector = new QComboBox(ProgramVisualizer);
        functionSelector->setObjectName(QString::fromUtf8("functionSelector"));
        functionSelector->setGeometry(QRect(660, 400, 291, 22));
        functionSelector->setLayoutDirection(Qt::LeftToRight);
        Refresh = new QPushButton(ProgramVisualizer);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(140, 400, 101, 21));
        line = new QFrame(ProgramVisualizer);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 420, 1061, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        updateSourceFile = new QPushButton(ProgramVisualizer);
        updateSourceFile->setObjectName(QString::fromUtf8("updateSourceFile"));
        updateSourceFile->setEnabled(false);
        updateSourceFile->setGeometry(QRect(410, 440, 111, 21));
        jumpTo = new QPushButton(ProgramVisualizer);
        jumpTo->setObjectName(QString::fromUtf8("jumpTo"));
        jumpTo->setGeometry(QRect(240, 440, 111, 21));
        changeFunction = new QPushButton(ProgramVisualizer);
        changeFunction->setObjectName(QString::fromUtf8("changeFunction"));
        changeFunction->setGeometry(QRect(580, 440, 111, 21));
        changeFunction->setAutoDefault(false);
        changeFunction->setDefault(false);
        changeFunction->setFlat(false);

        retranslateUi(ProgramVisualizer);

        QMetaObject::connectSlotsByName(ProgramVisualizer);
    } // setupUi

    void retranslateUi(QWidget *ProgramVisualizer)
    {
        ProgramVisualizer->setWindowTitle(QApplication::translate("ProgramVisualizer", "Program Visualization", 0, QApplication::UnicodeUTF8));
        treeWidgetLabel->setText(QApplication::translate("ProgramVisualizer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Program Browser</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        textEditLabel->setText(QApplication::translate("ProgramVisualizer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Text of Currently Selected Item</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        viewerLabel->setText(QApplication::translate("ProgramVisualizer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Program Visualization</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        functionSelectorLabel->setText(QApplication::translate("ProgramVisualizer", "Function Displayed:", 0, QApplication::UnicodeUTF8));
        Refresh->setText(QApplication::translate("ProgramVisualizer", "Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        updateSourceFile->setWhatsThis(QApplication::translate("ProgramVisualizer", "Update the main source file to reflect changes made in the text editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        updateSourceFile->setText(QApplication::translate("ProgramVisualizer", "Update Source File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        jumpTo->setWhatsThis(QApplication::translate("ProgramVisualizer", "Move cursor in main editor window to the location of this item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        jumpTo->setText(QApplication::translate("ProgramVisualizer", "Take Me There!", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        changeFunction->setWhatsThis(QApplication::translate("ProgramVisualizer", "Make the function called in this item the currently displayed function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        changeFunction->setText(QApplication::translate("ProgramVisualizer", "Display This Function", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProgramVisualizer: public Ui_ProgramVisualizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMVISUALIZER_H
