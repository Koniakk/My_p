// My_programm.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;
const bool t = true;
const bool f = false;

class Data
{
public:
    vector<int> today;
    Data(vector<int> today) : today(today) {}
};

class Oplata
{
public:
    int sum;//сколько оплатить когда
    int day;//день оплаты когда
    Oplata(int sum, int day) : sum(sum), day(day) {}

};
//
//class Kruzok //: public Oplata////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//{
//public:
//  //  Kruzok() : Oplata(int{}, int{}) {};
//    string namek; //что за кружок когда
//    vector<int> dni; //дни недели когда
//    vector<int> time; //время когда
//    Kruzok() : /*Oplata(0, 0),*/ namek(""), dni(), time() {} // Пустой конструктор
//
//    Kruzok(string namek, vector<int> dni, vector<int> time)
//        : /*Oplata(0, 0), */ namek(namek), dni(dni), time(time) {}
//   // Kruzok(string namek, vector<int> dni, vector<int> time) : Oplata(sum, day), namek(namek), dni(dni), time(time) {}
//
//
//
//};



class Kruzok
{
public:
    string namek;
    vector<string>dni;
    Kruzok() : namek(), dni(), time() {}
    vector<int> time;
    Kruzok(string namek, vector<string> dni, vector<int> time)
        : namek(namek), dni(dni), time(time) {}


};

class Child : public Kruzok
{
public:
   // Child() :Kruzok(string{}, vector<int>{}, vector<int>{}) {}

    string name;
    Child() : Kruzok(), name("") {}
    //Child(string name, string namek, vector<int> dni, vector<int> time)
        //: Kruzok(namek, dni, time), name(name) {}
    Child(string name) : Kruzok(namek, dni, time), name(name) {}


};


bool isno(vector<Child> c) {//есть дети?
    if (c.size() > 0) {
        return t;
    }
    return f;
}

void addc(vector<Child> c) {
    string name;
    vector<string> zn;
    cout << "who?\t\t\t";
    cin >> name;


}

int allmoneymonth(vector<int> s) {
    int i = 0;
    for (int u = 0; u < s.size(); u++) {
        i += s[u];
    }
    return i;
}

int key(vector<string> c, string n) {
    for (int i = 0; i < c.size(); i++) {
        if (c[i] == n) {
            return i;
        }
    }
    return -1;
}

bool keey(vector<string> l, string k) {
    for (int i = 0; i < l.size(); i++) {
        if (l[i] == k) {

            return true;
        }
    }
    return false;

}

int relai(vector<int>i) {
    int y = i.size();
    return i[y];
}

string relas(vector<string> k) {
    int j = k.size();
    return k[j];
}

int main()
{

    vector<Child> childrens;
    vector<string> names{" "}; //child,s names
    vector<string> namesk{ " " };
    vector<Kruzok> k;
    vector<vector<string>> days(10);
    vector<vector<int>> Time(10);

    vector<Oplata> op;
    
    Kruzok kruzok;
    vector<int> payday;
    vector<int> sumpay;
    int p = 0;
    int d = 0;

    vector<int> summ;
    int ind = 0; //index days

    string command = " ";
    string Vname = " "; //название К
    int times1;
    int times2;

    //cin >> command;
    while (command != "stop") {
        cout << "enter command" << endl;
        cin >> command;
    if (command == "change_daysK") {////*nsmena dnei posecheniya
        if (childrens.size() == 0) {
            cout << "\nhere no one kid.\n";
        }
        if (childrens.size() == 1) {
            cout << "\nenter child";
            cin >> command;
            if (!keey(names, command)) {
                cout << "\nno such kids. try again\n";
            }
            else {
                cout << "\nname of kruzok\n";
                cin >> command;
              //  if ()

            }

        }
    }



    if (command == "add_moneyK") {
        if (childrens.size() == 1) {

            if (k.size() > 0) {
                cout << "\nenter kruzok\n";
                cin >> command;
                if (!keey(namesk, command)) {
                    cout << "\nthere no kruzok with this name";
                }
                else {
                    cout << "\nenter money";
                    cin >> p;
                    int opo = key(namesk, command);
                    sumpay[opo] = p;
                    cout << "\ncomplate";

                }
            }
            else {
                cout << "\nno any kruzoks";
            }

        }
        if (childrens.size() > 1) {
            cout << "\nenter child\n";
            cin >> command;
            if (keey(names, command)) {
                cout << "\nenter kruzok\n";
                cin >> command;
                if (!keey(namesk, command)) {
                    cout << "\nthere no kruzok with this name";
                }
                else {
                    cout << "\nenter money";
                    cin >> p;
                    int opo = key(namesk, command);
                    sumpay[opo] = p;
                    cout << "\ncomplate";

                };


            }
            else {
                cout << "\nnot founded kid like that\n";
            }
        }
        if (childrens.size() == 0) {
            cout << "\nhere no way of kids.\n";
        }

    }


    if (command == "change_daypay") {
        if (childrens.size() == 0) {
            cout << "\nno childs. add kid";

        }
        if (childrens.size() == 1) {
            cout << "\nenter kruzok";
            cin >> command;
            if (keey(namesk, command)) {
                int indz = key(namesk, command);
                cout << "\nenter day\n";
                cin >> p;
                payday[indz] = p;
                cout << "\ncomlected!!!;";
            }
            else {
                cout << "\nnot founded kruzok\n";
            }
        }
        if (childrens.size() > 1) {
            cout << "\nenter name of child\n";
            cin >> command;
            if (!keey(names, command)) {
                cout << "\nnet detey s tskim imenem.\n";
            }
            else {
                cout << "\nenter kruzok";
                cin >> command;
                if (keey(namesk, command)) {
                    int indz = key(namesk, command);
                    cout << "\nenter day\n";
                    cin >> p;
                    payday[indz] = p;
                    cout << "\ncomlected!!!;";
                }
                else {
                    cout << "\nnot founded kruzok\n";
                }
            }
        }

    }


    if (command == "delete_child") {
        if (childrens.size() > 0) {
            cout << "\nare you sure?";
            cin >> command;
            if (command == "yes") {
                cout << "\nenter name";
                cin >> command;
                if (keey(names, command)) {
                    //delete
                    int indx = key(names, command);
                    auto iter = names.begin();
                    iter += indx;
                    names.erase(iter);
                    auto iter2 = childrens.begin();
                    iter2 += indx;
                    childrens.erase(iter2);
                    cout << "\nkid deleted completely";
                }
                else {
                    cout << "\nno kid with this name";
                }

            }



        }
        else {
            cout << "\nhere no kids";
        }
    }


    if (command == "add_child") {
        cout << "enter name\n\t";
        cin >> command;
        Child ch(command);
        childrens.push_back(ch);
        names.push_back(command);
        cout << "\ncompleted add child " << command << endl;

    }


    if (command == "add_kruzok" && isno(childrens)) {
        if (names.size() > 1) {
            cout << "\nEnter name of child: ";
            cin >> command;
            if (key(names, command)) {
                cout << "\nEnter what kruzok: ";
                cin.ignore(); // To ignore newline character
                getline(cin, command);
                namesk.push_back(command);
                cout << "\nEnter days of it (enter 'none' to finish):\n";
                while (true) {
                    cin >> command;
                    if (command == "none") {
                        break;
                    }
                    cout << "Enter time (start end): ";
                    cin >> times1 >> times2;

                    Time[ind].push_back(times1);
                    Time[ind].push_back(times2);

                    days[ind].push_back(command);
                }
                cout << "\nEnter what day need to pay: ";
                cin >> p;
                while (p >= 32) {
                    cout << "\nNo that day in month, try again: ";
                    cin >> p;
                }

                payday.push_back(p);
                cout << "Completed payday\n";

                cout << "\nEnter how much to pay: ";
                cin >> d;
                sumpay.push_back(d);

                Oplata po(d, p);
                op.push_back(po);
                Kruzok kr(namesk.back(), days[ind], Time[ind]);
                k.push_back(kr);
            }
            else {
                cout << "No kids with such names.";
            }
        }
        else if (names.size() == 1) {
            cout << "\nEnter what kruzok: ";
            cin >> command;
            namesk.push_back(command);
            cout << "\nEnter days of it (enter 'none' to finish):\n";

            while (true) {
                cin >> command;
                if (command == "none") {
                    break;
                }
                cout << "Enter time (start end): ";
                cin >> times1 >> times2;

                days[ind].push_back(command);
                Time[ind].push_back(times1);
                Time[ind].push_back(times2);
            }
            ind++;
        }
        cout << "\nKruzok added";
    }

    if (command == "showdeti") {
        for (int i = 0; i < names.size(); i++) {
            cout << names[i] << endl;
        }
    }

    else if (command == "del_kruzok") {
        cout << "\nAre you sure? (yes/no): ";
        cin >> command;
        if (command != "no") {
            cout << "\nEnter name of kruzok: ";
            cin >> command;
            if (keey(namesk, command)) {
                
                auto iter = find(namesk.begin(), namesk.end(), command);
                if (iter != namesk.end()) {
                    int index = distance(namesk.begin(), iter);
                    namesk.erase(iter);
                    k.erase(k.begin() + index);
                    cout << "Kruzok deleted";
                }
            }
            else {
                cout << "No such kruzok.";
            }
        }
    } 
    else
    {
        cout << "\nNo such commands. Try again.";
    }

    }
    cout << "(oke. bye bye)";
    return 0;
}



//
//    if (command == "add_kruzok" && isno(childrens)) {
//        if (names.size() > 1) {//проверка + 1 ч
//            cout << "\nenter name of child\n";
//            cin >> command;
//            if (key(names, command)) {
//                cout << "\nenter what kruzok\n";
//                getline(cin, command);
//                namesk.push_back(command);
//                cout << "\nenter days of it\n";
//                while (command != "none") {
//                    cin >> command;
//                    if (command == "none") {
//                        break;
//                    }
//                    cout << "enter time";
//                    cin >> times1;
//                    cin >> times2;
//
//                    Time[ind].push_back(times1);
//                    Time[ind].push_back(times2);
//
//                    days[ind].push_back(command);
//
//                }
//                ind++;
//                cout << "\nenter what chislo need to pay";
//                cin >> p;
//                if (p >= 32) {
//                    cout << "\nno that day at month, try again";
//                    cin >> p;
//                }
//                else {
//
//                    payday.push_back(p);
//                    cout << "completed payday\n";
//                }
//
//                cout << "\nenter how mach pay";///Oplata(sum, day), namek(namek), dni(dni), time(time) ::::vector<string> namek, vector<int> dni, vector<int> time
//                cin >> d;
//                sumpay.push_back(p);
//                int j = namesk.size();
//                int yup = relai(payday);
//                auto gh = relai(sumpay);
//                Oplata po(p, d);
//                op.push_back(po);
//                Kruzok kr(namesk[j-1], days, Time);
//                    k.push_back(kr);
//
//
//            }
//            else {
//
//                cout << "here no kids with such nzmes.";
//            }
//        }
//
//        if (names.size() == 1) {
//            cout << "\nenter what kruzok";
//            cin >> command;
//            namesk.push_back(command);
//            cout << "\nenter days of it\n";
//
//            while (command != "none") {//в какие дни ввод
//                cin >> command;
//                if (command == "none") {
//                    break;
//                }
//                cout << "enter time";
//                cin >> times1;
//                cin >> times2;
//
//                days[ind].push_back(command);
//                Time[ind].push_back(times1);
//                Time[ind].push_back(times2);
//
//            }
//            ind++;
//        }
//        cout << "\nkruzok added";
//
//    }
//
//
//
//    if (command == "del_kruzok") {
//        cout << "\nare you sure?\n";
//        cin >> command;
//        if (command != "no") {
//            cout << "\nenter name of kruzok\n";
//            cin >> command;
//            if (keey(namesk, command)) {
//                int lop = key(namesk, command);
//                auto iter = namesk.begin();
//                iter += lop;
//                namesk.erase(iter);
//                auto iter2 = k.begin();
//                iter2 += lop;
//
//                k.erase(iter2);
//                cout << "kruzok deleted";
//            }
//        }
//
//        
//
//    }
//
//
//    else {
//        cout << "\nno such commands. try again.\n";
//    }
//
//
//
//
//}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
