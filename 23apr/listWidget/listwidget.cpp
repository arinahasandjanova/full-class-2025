#include "listwidget.h"
#include <QInputDialog>
#include <QVBoxLayout>

ListWidget::ListWidget(QWidget *parent): QWidget(parent){
    QVBoxLayout* vbox = new QVBoxLayout();
    vbox->setSpacing(10);
    QHBoxLayout* hbox = new QHBoxLayout(this);
    lw = new QListWidget(this);
    lw->addItem("prikmat");
    lw->addItem("filfak");
    lw->addItem("fizfak");
    lw->addItem("psixi");
    lw->addItem("ximfak");
    add = new QPushButton("add", this);
    rename = new QPushButton("rename", this);
    remove = new QPushButton("remove", this);
    removeAll = new QPushButton("remove all", this);
    vbox->addSpacing(3);
    vbox->addStretch(1);
    vbox->addWidget(add);
    vbox->addWidget(rename);
    vbox->addWidget(remove);
    vbox->addWidget(removeAll);
    vbox->addStretch(1);
    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);
    connect(add, &QPushButton::clicked, this, &ListWidget::additem);
    connect(rename, &QPushButton::clicked, this, &ListWidget::renameItem);
    connect(remove, &QPushButton::clicked, this, &ListWidget::removeItem);
    connect(removeAll, &QPushButton::clicked, this, &ListWidget::clearItems);
}
void ListWidget::additem(){
    QString c_text = QInputDialog::getText(this, "Item", "Enter new Item");
    QString s_text = c_text.simplified();
    if(!s_text.isEmpty()){
        lw->addItem(s_text);
        int r = lw->count()-1;
        lw->setCurrentRow(r);
    }
}

void ListWidget::renameItem(){
    QListWidgetItem* curItem = lw->currentItem();
    int r = lw->row(curItem);
    if(r != -1){
        QString c_text = curItem->text();
        QString r_text = QInputDialog::getText(this, "Item", "Enter new Item", QLineEdit::Normal, c_text);
        QString s_text = r_text.simplified();
        if(!s_text.isEmpty()){
            QListWidgetItem* item = lw->takeItem(r);
            delete item;
            lw->insertItem(r, s_text);
            lw->setCurrentRow(r);
        }
    }
}

void ListWidget::removeItem(){
    int r = lw->currentRow();
    if(r != -1){
        QListWidgetItem* item = lw->takeItem(r);
        delete item;
    }
}

void ListWidget::clearItems(){
    if(lw->count() != 0){
        lw->clear();
    }
}
