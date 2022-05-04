#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;


class MyString {

private:
    char* STR;
    int size;
public:

    MyString() { 
        size = 81;
        STR = new char[size];
    }

    MyString(const char* STR) { 
        int len = strlen(STR) + 1;
        this->STR = new char[len];

        strncpy(this->STR, STR, len); 
    }

    ~MyString()
    {
        delete[] STR;
    }

    char* getMyString() {
        return STR;
    }

    void inputString() {
        cin.getline(STR, size);
    }

    void printString() {
        cout << STR << endl;
        int l = strlen(STR);
        cout << "String size: " << l << endl;
    }


    bool hasSubstring(const char* substr) {
        if (strstr(this->STR, substr)) {
            return true;
        }
        else {
            return false;
        }
    }

  
};

int main() {

    MyString str1;
    cout << "Enter 80 symbols: ";
    str1.inputString();
    str1.printString();

}