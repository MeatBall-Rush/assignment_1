#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Marble{
    public:
        string color;
        int no;

        string get_color();
        int get_no();
        void set_color(string);
        void set_no(int);
};

string Marble::get_color(){
    return color;
}

int Marble::get_no(){
    return no;
}

void Marble::set_color(string a){
    color = a;
}

void Marble::set_no(int a){
    no = a;
}



int main(){
    srand(time(0));
    Marble a;
    string str[] = {"red","blue","green"};
    a.set_color(str[rand()%3]);
    a.set_no(rand()%100);
    cout << a.get_color() << a.get_no() << endl;
    return 0;
}