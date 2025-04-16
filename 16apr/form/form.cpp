#include "form.h"
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>

FormEx::FormEx(QWidget* parent):QWidget(parent){
    auto* nameEdit = new QLineEdit(this);
    auto* addrEdit = new QLineEdit(this);
    auto* occpEdit = new QLineEdit(this);
    auto* formLayout = new QFormLayout;
    formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignCenter);
    formLayout->addRow("Name", nameEdit);
    formLayout->addRow("Email", addrEdit);
    formLayout->addRow("Age", occpEdit);
    setLayout(formLayout);
}
