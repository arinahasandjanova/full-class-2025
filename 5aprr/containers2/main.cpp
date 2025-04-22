#include <QTextStream>
#include <QList>
#include <algorithm>
#include "student.cpp"

int main(){
    QTextStream out(stdout);
    QList<Student> students = {Student("Сперанская Александра", "Прикмат"),
                               Student("Даша Путешественница", "Психфак"),
                               Student("Месси", "Химфак"),
                               Student("Джек Потрошитель", "Физфак"),
                               Student("Джастин Бибер", "Эконом"),
                               Student("Майкл Джексон", "Филфак")};
    std::sort(students.begin(), students.end(),
              [](const Student& s1, const Student& s2){
                  return s1.getName() < s2.getName();});
    foreach(Student  student,students){
        out <<student.getName() << " : " << student.getFaculty() << endl;
    }

    return 0;
}
