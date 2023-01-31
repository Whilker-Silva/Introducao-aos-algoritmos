#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string name_pt;
    string name_eng;
    string name_dic;

    string palavra_pt;
    string palavra_eng;

    cin >> name_pt;
    cin >> name_eng;
    cin >> name_dic;

    ifstream arq_pt(name_pt);
    ifstream arq_eng(name_eng);
    ofstream arq_dic(name_dic);

    while (arq_pt >> palavra_pt && arq_eng >> palavra_eng)
    {
        arq_dic << palavra_pt<< ": " << palavra_eng << endl;
    }

    return 0;
}