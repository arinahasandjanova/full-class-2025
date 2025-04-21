#include "label.h"
#include <QFont>
#include <QVBoxLayout>

Label::Label(QWidget* parent): QWidget(parent){
    QString text = R"(

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur pulvinar libero lobortis viverra euismod.
Integer vulputate non orci at semper. Quisque bibendum euismod diam ac scelerisque. Duis aliquet ipsum ut lobortis malesuada.
Vestibulum hendrerit, turpis et aliquam faucibus, nisi dolor mollis lorem, ac sagittis nisl quam ut leo. Quisque maximus tempus vestibulum.
Sed ullamcorper mi nec orci gravida viverra. Donec ac tincidunt felis. Aenean accumsan malesuada arcu, ut tincidunt elit molestie et.
Phasellus tempor egestas massa, eget varius mi accumsan non. Morbi auctor quam et massa sodales auctor.
Proin nulla ligula, vehicula ut ultrices vitae, eleifend nec urna. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut convallis ornare neque eu elementum.

Nulla rhoncus, nibh sed vehicula hendrerit, ipsum lorem dapibus odio, eget pharetra mi felis id lorem. Phasellus vestibulum augue et dui eleifend, id imperdiet risus venenatis.
Donec imperdiet enim nec purus tincidunt dapibus. In egestas sodales blandit. Quisque venenatis quis ante vel gravida.
 Maecenas arcu sapien, posuere ac metus ac, semper sodales massa. Nam sit amet dui luctus, gravida enim et, elementum nulla.
Integer condimentum, tellus vel placerat laoreet, eros lacus tincidunt massa, eu mattis purus libero at elit. Fusce pellentesque porta ex sed euismod.
Sed eu facilisis ipsum. Mauris fermentum, nunc vitae scelerisque commodo, lacus odio pharetra odio, vitae faucibus leo lorem ac velit.
In iaculis elit elit, nec tincidunt ipsum faucibus quis. Praesent varius vel mi sed iaculis. Nulla accumsan sit amet nisl at cursus. Sed aliquet rhoncus elit sit amet efficitur.

Morbi vel porta lorem. Ut ullamcorper tortor a felis efficitur, in laoreet mi sollicitudin. Morbi vel nisi non tortor pretium sodales.
Nullam convallis vel lectus id ultricies. Nullam laoreet vestibulum ligula nec tristique. Quisque sit amet ligula quis velit blandit rutrum.
Aliquam eleifend rhoncus nisl, eu condimentum elit tristique sit amet.

Duis blandit eu neque non placerat. Sed suscipit sollicitudin tincidunt. Nunc lobortis, felis a consequat ultrices, tellus ex sagittis eros, sed bibendum nunc sapien non quam.
Donec euismod mi eget ultrices hendrerit. Nulla a lacus accumsan, pellentesque ante tincidunt, ultricies arcu. Pellentesque ac dui sit amet odio facilisis gravida.
 In efficitur elementum lectus ac commodo. Vestibulum lobortis eget neque sit amet pharetra. Cras fringilla eros dapibus orci rutrum, ut eleifend est interdum.
Nam sed nulla commodo, dapibus mi a, ornare velit. Quisque porta, lacus ac porta dapibus, lorem elit luctus ligula, sit amet imperdiet arcu magna faucibus nulla.
Ut blandit, elit ut lacinia elementum, nisi sem volutpat justo, sit amet semper elit sem sit amet libero.

Nullam enim mi, finibus ut orci eget, suscipit laoreet nulla. Fusce scelerisque ipsum non fringilla congue. Maecenas aliquet imperdiet augue.
Vestibulum efficitur felis et lorem maximus, vitae pretium lacus consectetur. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse eu sapien est.
Pellentesque eget elementum dolor. Duis sollicitudin pharetra nisl ut condimentum. Nunc posuere ultricies erat, et pharetra ligula ultrices eu.
Vivamus eget enim lobortis, rutrum ligula sit amet, cursus sem. )";
    label = new QLabel(text,this);
    label->setFont(QFont("Purisa", 10));
    QVBoxLayout* vbox = new QVBoxLayout();
    vbox->addWidget(label);
    setLayout(vbox);
}
