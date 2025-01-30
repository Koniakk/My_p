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
    Data(vector<int> today) : today(today){}
};

class Oplata
{
public:
    int sum;//сколько оплатить когда
    int day;//день оплаты когда
    Oplata(int sum, int time) : sum(sum), day(day){}

};

class Kruzok : public Oplata////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
{
public:
    Kruzok() : Oplata(int{}, int{}) {};
    vector<string> namek; //что за кружок когда
    vector<int> dni; //дни недели когда
    vector<int> time; //время когда
    Kruzok(vector<string> namek, vector<int> dni, vector<int> time) : Oplata(sum, day), namek(namek), dni(dni), time(time){}



};

class Child : public Kruzok 
{
public:
    Child():Kruzok(vector<string>{}, vector<int>{}, vector<int>{}) {}

    string name;

    Child(string name): Kruzok(namek, dni, time), name(name){}


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
    return y[i];
}

string relas(vector<string> k) {
    int j = k.size();
    return k[j];
}

int main()
{

    vector<Child> childrens;
    vector<string> names; //child,s names
    vector<string> namesk;
    vector<Kruzok> k;
    vector<vector<string>> days;
    vector<vector<int>> Time;
    Kruzok kruzok;
    vector<int> payday;
    vector<int> sumpay;
    int p = 0;
    vector<int> summ;
    int ind = 0; //index days

    string command = " ";
    string Vname = " "; //название К
    int times1;
    int times2;

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
                if()

            }

        }
    }

    if (command == "add_moneyK") {
      if(childrens.size()==1){
      
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
      if (children.size() > 1) {
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
      if (children.size() == 0) {
          cout << "\nhere no way of kids.\n";
      }

    }



    if (command == "change_daypay") {
        if (children.size() == 0) {
            cout << "\nno childs. add kid";

        }
        if (children.size() == 1) {
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
        if (childre.size() > 1) {
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
                    childrens.erase(iter);
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
        childrens.push_back(command);
        names.push_back(command);

    }

    if (command == "add_kruzok" && isno(childrens)) {
        if (names.size() > 1) {//проверка + 1 ч
            cout << "\nenter name of child\n";
            cin >> command;
            if (key(names, command)) {
                cout << "\nenter what kruzok\n";
                getline(cin, command);
                namesk.push_back(command);
                cout << "\nenter days of it\n";
                while (command != "none") {
                    cin >> command;
                    if (command == "none") {
                        break;
                    }
                    cout << "enter time";
                    cin >> times1;
                    cin >> times2;

                    Time[ind].push_back(times1);
                    Time[ind].push_back(times2);

                    days[ind].push_back(command);

                }
                ind++;
                cout << "\nenter what chislo need to pay";
                cin >> p;
                if (p >= 32) {
                    cout << "\nno that day at month, try again";
                    cin >> p;
                }
                else {

                payday.push_back(p);
                }

                cout << "\nenter how mach pay";
                cin >> p;
                sumpay.push_back(p);
                int j = namesk.size();
                Kruzok kr(relai(payday), relai(sumpay), relas(namesk), days, Time)
                k.push_back(kr);


            }
            else {

                cout << "here no kids with such nzmes.";
            }
        }

        if (names.size() == 1) {
            cout << "\nenter what kruzok";
            cin >> command;
            namesk.push_back(command);
            cout << "\nenter days of it\n";

            while (command != "none") {//в какие дни ввод
                cin >> command;
                if (command == "none") {
                    break;
                }
                cout << "enter time";
                cin >> times1;
                cin >> times2;

                days[ind].push_back(command);
                Time[ind].push_back(times1);
                Time[ind].push_back(times2);

            }
            ind++;
        }
        cout << "\nkruzok added";

    }



    if (command == "del_kruzok") {
        cout << "\nare you sure?\n";
        cin >> command;
        if (command != "no") {
             cout << "\nenter name of kruzok\n";
             cin >> command;
             if (keey(namesk, command)) {
                int lop = key(namesk, commande);
                auto iter = namesk.begin();
                iter += lop;
                namesk.erase(iter);
                kr.erase(iter);
                cout << "kruzok deleted";
             }
        }

        else {
            continue;
        }

    }


    else {
        cout<< "\nno such commands. try again.\n"
    }




}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
