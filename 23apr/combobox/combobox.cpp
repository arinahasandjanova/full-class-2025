#include "combobox.h"
#include <QHBoxLayout>

ComboBoxEx::ComboBoxEx(QWidget* parent): QWidget(parent){
    QStringList faculties = {"prikmat", "fizfak", "psixi", "filfak", "ximfak"};
    auto* hbox = new QHBoxLayout(this);
    combobox = new QComboBox();
    combobox->addItems(faculties);
    hbox->addWidget(combobox);
    hbox->addSpacing(15);
    label = new QLabel("HELLO", this);
    hbox->addWidget(label);
    connect(combobox, qOverload<const QString&>(&QComboBox::activated), label, &QLabel::setText);
}
