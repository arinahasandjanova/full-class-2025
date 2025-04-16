#include "review.h"
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>

Review::Review(QWidget* parent):QWidget(parent){
    auto* grid = new QGridLayout(this);
    grid->setVerticalSpacing(15);
    grid->setHorizontalSpacing(10);
    auto* title = new QLabel("Предмет: ", this);
    grid->addWidget(title, 0, 0, 1, 1);
    title->setAlignment(Qt::AlignRight | Qt::AlignCenter);
    auto* edit = new QLineEdit(this);
    grid->addWidget(edit, 0, 1, 1, 1);
    auto* name = new QLabel("Студент: ", this);
    grid->addWidget(name, 1, 0, 1, 1);
    name->setAlignment(Qt::AlignRight | Qt::AlignCenter);
    auto* edit2 = new QLineEdit(this);
    grid->addWidget(edit2, 1, 1, 1, 1);
    auto* grade = new QLabel("Оценка: ", this);
    grid->addWidget(grade, 2, 0, 1, 1);
    grade->setAlignment(Qt::AlignRight | Qt::AlignCenter);
    auto* te = new QTextEdit(this);
    grid->addWidget(te, 2, 1, 3, 1);
    setLayout(grid);
}
