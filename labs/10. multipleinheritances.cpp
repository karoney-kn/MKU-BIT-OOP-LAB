#include <iostream>
using namespace std;

class Student {
protected:
    int rno, m1, m2;
public:
    void getdata() {
        cout << "Enter the roll no: ";
        cin >> rno;
        cout << "Enter the two subjects marks: ";
        cin >> m1 >> m2;
    }
};

class Sports {
protected:
    int sm;
public:
    void getsm() {
        cout << "\nEnter the sports mark: ";
        cin >> sm;
    }
};

class Statement : public Student, public Sports {
    int tot, avg;
public:
    void display() {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << "\nRoll No: " << rno;
        cout << "\nTotal: " << tot;
        cout << "\nAverage: " << avg;
    }
};

int main() {
    Statement S;
    S.getdata();
    S.getsm();
    S.display();
    return 0;
}