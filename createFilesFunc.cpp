#include "header.h"

void checkInput(int &input) {

    while (cin.fail() || (input !=1 && input !=0)){
            cout << "Blogas irasymas, bandykite dar karta: \n";
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin >> input;
    }

}

bool mycomp(const studentas & s1, const studentas & s2) {
    return (s1.firstName < s2.firstName);
}

void sortSbyName(vector<studentas> & s){
    sort(s.begin(), s.end(), mycomp);
}

void sortSbyName(deque<studentas> & s){
    sort(s.begin(), s.end(), mycomp);
}

void sortSbyName(list<studentas> & s){
    s.sort(mycomp);
}

//First strategy
//______________________________________________________________________________________________________________________________________________________________
//Create file functions
void createFiles(vector<studentas> s, int pasirinkimas) {


    int visiStudentai = 1;
    int counter = 0;

    if (pasirinkimas == 1){

            for (int i = 1;  i <= 5; i++) {

        counter++;
        ofstream file;
        file.open ("studentai" + to_string(i) + ".txt");
        if (file.is_open())
        {
            file << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
        }

         visiStudentai *= 10;
         s.resize(visiStudentai);
         int ccounter = 0;

        for (vector<studentas>::iterator it = s.begin(); it != s.end(); ++it){
            ccounter++;
            (*it).randomNumbers(counter+ccounter);

            if (file.is_open()){

                file << "Vardas" + to_string(ccounter) << setw(20) << "Pavarde" + to_string(ccounter) << setw(20) << fixed << setprecision(2) << (*it).galutinioV()<<"\n";
            }
        }
        file.close();
        }

    }

    else {

        for (int i = 1;  i <= 5; i++) {

            counter++;
            ofstream file;
            file.open ("studentai" + to_string(i) + ".txt");

            if (file.is_open())
            {
                file << "firstName" << setw(20) << "secondName" << setw(20) << "Galutinis(Med.) \n";
                file << "\n";
            }

            visiStudentai *= 10;
            s.resize(visiStudentai);
            int ccounter = 0;

            for (vector<studentas>::iterator it = s.begin(); it != s.end(); ++it){

            ccounter++;
            (*it).randomNumbers(counter+ccounter);

                if (file.is_open()){

                    file << "Vardas" + to_string(ccounter) << setw(20) << "Pavarde" + to_string(ccounter) << setw(20) << fixed << setprecision(2) << (*it).galutinioM() << "\n";
                }
            }

            file.close();
        }
    }
}

void createFiles(deque<studentas> s, int pasirinkimas) {


    int visiStudentai = 1;
    int counter = 0;

    if (pasirinkimas == 1){

            for (int i = 1;  i <= 5; i++) {

        counter++;
        ofstream file;
        file.open ("studentai" + to_string(i) + ".txt");
        if (file.is_open())
        {
            file << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
        }

         visiStudentai *= 10;
         s.resize(visiStudentai);
         int ccounter = 0;

        for (deque<studentas>::iterator it = s.begin(); it != s.end(); ++it){
            ccounter++;
            (*it).randomNumbers(counter+ccounter);

            if (file.is_open()){

                file << "Vardas" + to_string(ccounter) << setw(20) << "Pavarde" + to_string(ccounter) << setw(20) << fixed << setprecision(2) << (*it).galutinioV()<<"\n";
            }
        }
        file.close();
        }

    }

    else {

        for (int i = 1;  i <= 5; i++) {

            counter++;
            ofstream file;
            file.open ("studentai" + to_string(i) + ".txt");

            if (file.is_open())
            {
                file << "firstName" << setw(20) << "secondName" << setw(20) << "Galutinis(Med.) \n";
                file << "\n";
            }

            visiStudentai *= 10;
            s.resize(visiStudentai);
            int ccounter = 0;

            for (deque<studentas>::iterator it = s.begin(); it != s.end(); ++it){

            ccounter++;
            (*it).randomNumbers(counter+ccounter);

                if (file.is_open()){

                    file << "Vardas" + to_string(ccounter) << setw(20) << "Pavarde" + to_string(ccounter) << setw(20) << fixed << setprecision(2) << (*it).galutinioM() << "\n";
                }
            }

            file.close();
        }
    }
}

void createFiles(list<studentas> s, int pasirinkimas) {


    int visiStudentai = 1;
    int counter = 0;

    if (pasirinkimas == 1){

            for (int i = 1;  i <= 5; i++) {

        counter++;
        ofstream file;
        file.open ("studentai" + to_string(i) + ".txt");
        if (file.is_open())
        {
            file << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
        }

         visiStudentai *= 10;
         s.resize(visiStudentai);
         int ccounter = 0;

        for (list<studentas>::iterator it = s.begin(); it != s.end(); ++it){
            ccounter++;
            (*it).randomNumbers(counter+ccounter);

            if (file.is_open()){

                file << "Vardas" + to_string(ccounter) << setw(20) << "Pavarde" + to_string(ccounter) << setw(20) << fixed << setprecision(2) << (*it).galutinioV()<<"\n";
            }
        }
        file.close();
        }

    }

    else {

        for (int i = 1;  i <= 5; i++) {

            counter++;
            ofstream file;
            file.open ("studentai" + to_string(i) + ".txt");

            if (file.is_open())
            {
                file << "firstName" << setw(20) << "secondName" << setw(20) << "Galutinis(Med.) \n";
                file << "\n";
            }

            visiStudentai *= 10;
            s.resize(visiStudentai);
            int ccounter = 0;

            for (list<studentas>::iterator it = s.begin(); it != s.end(); ++it){

            ccounter++;
            (*it).randomNumbers(counter+ccounter);

                if (file.is_open()){

                    file << "Vardas" + to_string(ccounter) << setw(20) << "Pavarde" + to_string(ccounter) << setw(20) << fixed << setprecision(2) << (*it).galutinioM() << "\n";
                }
            }

            file.close();
        }
    }
}
//______________________________________________________________________________________________________________________________________________________________
//Read file functions
void readFile (int index, vector<studentas> &s) {

    string line;
    string x = "studentai";
    string xB = "studentai";
    string y = ".txt";
    for (int i = 1; i <= 5; i++) {
        x.append(to_string(i));
        x.append(y);
        ifstream file_(x);

        getline(file_, line); //pirmas

        while (getline(file_, line)) {
            istringstream pirmi(line);
            s.push_back(studentas());
            pirmi >> s[index].firstName;
            pirmi >> s[index].secondName;
            pirmi >> s[index].allMarks;

            index++;
        }
        x = xB;
    }
}

void readFile (int index, deque<studentas> &s) {

    string line;

    string x = "studentai";
    string xB = "studentai";
    string y = ".txt";
    for (int i = 1; i <= 5; i++) {
        x.append(to_string(i));
        x.append(y);
        ifstream file_(x);

        getline(file_, line); //pirmas

        while (getline(file_, line)) {
            istringstream pirmi(line);
            s.push_back(studentas());
            pirmi >> s[index].firstName;
            pirmi >> s[index].secondName;
            pirmi >> s[index].allMarks;

            index++;
        }
        x = xB;
    }
}

void readFile (list<studentas> &s) {

    string line;
    studentas soi;
    string x = "studentai";
    string xB = "studentai";
    string y = ".txt";
    for (int i = 1; i <= 5; i++) {
        x.append(to_string(i));
        x.append(y);
        ifstream file_(x);

        getline(file_, line); //pirmas

        while (getline(file_, line)) {
            istringstream pirmi(line);

            pirmi >> soi.firstName;
            pirmi >> soi.secondName;
            pirmi >> soi.allMarks;
            s.push_back(studentas());
            studentas *sPtr = &s.back();
            (*sPtr).firstName = soi.firstName;
            (*sPtr).firstName = soi.secondName;
            (*sPtr).allMarks = soi.allMarks;
        }
        x = xB;


        soi = {};
    }
}
//______________________________________________________________________________________________________________________________________________________________
//Allocating marks
void vargProt(vector <studentas> &s, vector <studentas> &vargsai, vector <studentas> &protingi) {

    for (vector<studentas>::iterator it = s.begin(); it != s.end(); ++it){

        if ((*it).allMarks >= 5){
            protingi.push_back((*it));

        }else{vargsai.push_back((*it));}
    }
}

void vargProt(deque <studentas> &s, deque <studentas> &vargsai, deque <studentas> &protingi) {

    for (deque<studentas>::iterator it = s.begin(); it != s.end(); ++it){

        if ((*it).allMarks >= 5){
                protingi.push_back((*it));

        }else{vargsai.push_back((*it));}
    }
}

void vargProt(list <studentas> &s, list <studentas> &vargsai, list <studentas> &protingi) {

    for (list<studentas>::iterator it = s.begin(); it != s.end(); ++it){

        if ((*it).allMarks >= 5){
                protingi.push_back((*it));

        }else{vargsai.push_back((*it));}
    }
}
//______________________________________________________________________________________________________________________________________________________________
//Sort to two files functions
void sortStud(vector <studentas> s, int pasirinkimas, vector <studentas> vargsai, vector <studentas> protingi) {

    ofstream naujas;
    naujas.open ("vargsai.txt");
    if(pasirinkimas == 1) {
        if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujas << "\n";

            for (vector<studentas>::iterator it = vargsai.begin(); it != vargsai.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks << "\n";
            }
        }

    }

    else{

       if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujas << "\n";

            for (vector<studentas>::iterator it = vargsai.begin(); it != vargsai.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujas.close();

    ofstream naujausias;
    naujausias.open ("protingi.txt");
    if(pasirinkimas == 1) {
        if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujausias << "\n";

            for (vector<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

               naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }

    }
    else{

       if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujausias << "\n";

            for (vector<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

                naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujausias.close();
}

void sortStud(deque <studentas> s, int pasirinkimas, deque <studentas> vargsai, deque <studentas> protingi) {

    ofstream naujas;
    naujas.open ("vargsai.txt");
    if(pasirinkimas == 1) {
        if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujas << "\n";

            for (deque<studentas>::iterator it = vargsai.begin(); it != vargsai.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks << "\n";
            }
        }

    }

    else{

       if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujas << "\n";

            for (deque<studentas>::iterator it = vargsai.begin(); it != vargsai.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujas.close();

    ofstream naujausias;
    naujausias.open ("protingi.txt");
    if(pasirinkimas == 1) {
        if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujausias << "\n";

            for (deque<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

               naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }

    }
    else{

       if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujausias << "\n";

            for (deque<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

                naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujausias.close();

}

void sortStud(list <studentas> s, int pasirinkimas, list <studentas> vargsai, list <studentas> protingi) {

    ofstream naujas;
    naujas.open ("vargsai.txt");
    if(pasirinkimas == 1) {
        if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujas << "\n";

            for (list<studentas>::iterator it = vargsai.begin(); it != vargsai.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks << "\n";
            }
        }

    }

    else{

       if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujas << "\n";

            for (list<studentas>::iterator it = vargsai.begin(); it != vargsai.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujas.close();

    ofstream naujausias;
    naujausias.open ("protingi.txt");
    if(pasirinkimas == 1) {
        if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujausias << "\n";

            for (list<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

               naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }

    }
    else{

       if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujausias << "\n";

            for (list<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

                naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujausias.close();

}

//______________________________________________________________________________________________________________________________________________________________



//Second strategy
//______________________________________________________________________________________________________________________________________________________________
//Allocating marks
void vargProt(vector <studentas> &s, vector <studentas> &protingi) { //Pvz paimta is http://www.cplusplus.com/reference/algorithm/stable_partition/
                                                                    // Ir is https://www.youtube.com/watch?v=kf67rbbR6nk
   auto bound = stable_partition(s.begin(), s.end(), [&](const auto &tmp){return!(tmp.allMarks >= 5);});

   protingi.insert(protingi.end(), make_move_iterator(bound), make_move_iterator(s.end()));
   s.erase(bound, s.end());
}

void vargProt(deque <studentas> &s, deque <studentas> &protingi) { //Pvz paimta is http://www.cplusplus.com/reference/algorithm/stable_partition/
                                                                // Ir is https://www.youtube.com/watch?v=kf67rbbR6nk
  auto bound = stable_partition(s.begin(), s.end(), [&](const auto &tmp){return!(tmp.allMarks >= 5);});

   protingi.insert(protingi.end(), make_move_iterator(bound), make_move_iterator(s.end()));
   s.erase(bound, s.end());
}

void vargProt(list <studentas> &s, list <studentas> &protingi) {

    for (list<studentas>::iterator it = s.begin(); it != s.end(); ++it){

        if ((*it).allMarks >= 5){
                protingi.push_back((*it));
                s.erase(it);
        }
    }
}
//______________________________________________________________________________________________________________________________________________________________
//Sort to two files functions
void sortStud(vector <studentas> s, int pasirinkimas, vector <studentas> protingi) {

    ofstream naujas;
    naujas.open ("vargsaiV2.txt");
    if(pasirinkimas == 1) {
        if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujas << "\n";

            for (vector<studentas>::iterator it = s.begin(); it != s.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks << "\n";
            }
        }

    }

    else{

       if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujas << "\n";

            for (vector<studentas>::iterator it = s.begin(); it != s.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujas.close();

    ofstream naujausias;
    naujausias.open ("protingiV2.txt");
    if(pasirinkimas == 1) {
        if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujausias << "\n";

            for (vector<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

               naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }

    }
    else{

       if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujausias << "\n";

            for (vector<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

                naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujausias.close();
}

void sortStud(deque <studentas> s, int pasirinkimas, deque <studentas> protingi) {

    ofstream naujas;
    naujas.open ("vargsaiV2.txt");
    if(pasirinkimas == 1) {
        if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujas << "\n";

            for (deque<studentas>::iterator it = s.begin(); it != s.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks << "\n";
            }
        }

    }

    else{

       if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujas << "\n";

            for (deque<studentas>::iterator it = s.begin(); it != s.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujas.close();

    ofstream naujausias;
    naujausias.open ("protingiV2.txt");
    if(pasirinkimas == 1) {
        if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujausias << "\n";

            for (deque<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

               naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }

    }
    else{

       if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujausias << "\n";

            for (deque<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

                naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujausias.close();

}

void sortStud(list <studentas> s, int pasirinkimas, list <studentas> protingi) {

    ofstream naujas;
    naujas.open ("vargsaiV2.txt");
    if(pasirinkimas == 1) {
        if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujas << "\n";

            for (list<studentas>::iterator it = s.begin(); it != s.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks << "\n";
            }
        }

    }

    else{

       if (naujas.is_open())
        {
            naujas << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujas << "\n";

            for (list<studentas>::iterator it = s.begin(); it != s.end(); ++it){

                naujas << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujas.close();

    ofstream naujausias;
    naujausias.open ("protingiV2.txt");
    if(pasirinkimas == 1) {
        if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Vid.)\n";
            naujausias << "\n";

            for (list<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

               naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }

    }
    else{

       if (naujausias.is_open())
        {
            naujausias << "firstName"<< setw(20) <<"secondName"<< setw(20) <<"Galutinis(Med.)\n";
            naujausias << "\n";

            for (list<studentas>::iterator it = protingi.begin(); it != protingi.end(); ++it){

                naujausias << (*it).firstName << setw(20) << (*it).secondName << setw(20) << fixed << setprecision(2) << (*it).allMarks <<"\n";
            }
        }
    }
    naujausias.close();

}
