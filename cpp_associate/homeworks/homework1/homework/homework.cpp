#include <iostream>
#include <cstring>
#include <Windows.h>

int current_day = 24;
int current_month = 4;
int current_year = 2022;
const int SIZE = 50;
std::string input_name, input_surname;

struct man {
    std::string surname;
    std::string name;
    int age;
    int bday;
    int bmonths;
    int byear;
};

//use for user creation
void create_user(man& obj) {
    system("cls");
    for (int i = 0; i < SIZE; i++) {
        if (obj[i].age == NULL) {
            std::cout << "Enter name & surname: "; std::cin >> obj[i].name >> obj[i].surname;
            std::cout << std::endl; std::cout << "Enter bdate (format: dd mm yyyy)"; std::cin >> obj[i].bday >> obj[i].bmonths >> obj[i].byear;
            obj[i].age = current_year - obj[i].byear; system("cls");
            std::cout << "User is created." << std::endl;
        }
    }

}

void select_b_n_sn(man obj[SIZE]) {
    system("cls");
    int b;
    std::cout << "Select 1 to sort by name and 2 to select by surname: "; std::cin >> b;
    switch (b) {
    case 1:
        system("cls");
        std::cout << "Name     " << "Surname       " << "age       " << "bdate        "; std::cout << std::endl;
        for (int i = 65; i <= 90; i++) { //65-90 && 97-122
            for (int j = 0; j < SIZE; j++) {
                if (obj[j].name[0] == char(i))
                    std::cout << obj[j].name << " " << obj[j].surname << " " << obj[j].age << " " << obj[j].bday << "/" << obj[j].bmonths << "/" << obj[j].byear << std::endl;
            }
        }
    case 2:
        system("cls");
        std::cout << "Surname     " << "Name       " << "age       " << "bdate        "; std::cout << std::endl;
        for (int i = 65; i <= 90; i++) { //65-90 && 97-122
            for (int j = 0; j < SIZE; j++) {
                if (obj[j].surname[0] == char(i))
                    std::cout << obj[j].surname << " " << obj[j].name << " " << obj[j].age << " " << obj[j].bday << "/" << obj[j].bmonths << "/" << obj[j].byear << std::endl;
            }
        }
    }
}

void search_by_name_surname(man obj[SIZE]) {
    system("cls");
    int b;
    std::cout << "Select 1 to search by name and 2 to search by surname: "; std::cin >> b;
    switch (b) {
    case 1:
        system("cls");
        std::cout << "Enter serching name: "; std::cin >> input_name;
        std::cout << std::endl;
        std::cout << "Surname     " << "Name       " << "age       " << "bdate        "; std::cout << std::endl;
        for (int j = 0; j < SIZE; j++) {
            if (obj[j].name == input_name)
                std::cout << obj[j].name << " " << obj[j].surname << " " << obj[j].age << " " << obj[j].bday << "/" << obj[j].bmonths << "/" << obj[j].byear << std::endl;
        }
    case 2:
        system("cls");
        std::cout << "Enter serching surname: "; std::cin >> input_surname;
        std::cout << std::endl;
        std::cout << "Surname     " << "Name       " << "age       " << "bdate        "; std::cout << std::endl;
        for (int j = 0; j < SIZE; j++) {
            if (obj[j].surname == input_surname)
                std::cout << obj[j].surname << " " << obj[j].name << " " << obj[j].age << " " << obj[j].bday << "/" << obj[j].bmonths << "/" << obj[j].byear << std::endl;
        }
    }
}

bday(man obj[SIZE]) {
    system("cls");
    for (int j = 0; j < SIZE; j++) {
        if (obj[j].bmonths == current_month)
            std::cout << obj[j].surname << " " << obj[j].name << " " << obj[j].age << " " << obj[j].bday << "/" << obj[j].bmonths << "/" << obj[j].byear << std::endl;
    }
}

edit_task(man obj[SIZE]) {
    system("cls");
    std::cout << "Enter name & surname of a user you want to edit: "; std::cin >> input_name >> input_surname;
    std::cout << std::endl;
    std::cout << "Surname     " << "Name       " << "age       " << "bdate        "; std::cout << std::endl;
    for (int j = 0; j < SIZE; j++) {
        if (obj[j].name == input_name && obj[j].surname == input_surname) {
            std::cout << obj[j].name << " " << obj[j].surname << " " << obj[j].age << " " << obj[j].bday << "/" << obj[j].bmonths << "/" << obj[j].byear << std::endl;
            std::cout << std::endl;
            std::cout << "Enter name & surname: "; std::cin >> obj[j].name >> obj[j].surname;
            std::cout << std::endl; std::cout << "Enter bdate (format: dd mm yyyy)"; std::cin >> obj[j].bday >> obj[j].bmonths >> obj[j].byear;
            obj[j].age = current_year - obj[j].byear; system("cls");
            std::cout << "User is created." << std::endl;
        }
    }
}

void menu(man obj[SIZE]) {
    system("cls");
    int a;
    std::cout << "Select what you want to do: " << std::endl<<"1. Show by family/name sort"<<std::endl<<"2. Show people who has bday this month"<<std::endl<<"3. Search by name/surname"<<std::endl<<"4. Edit data"<<std::endl<<"5. Create user"<<std::endl<<"6. Exit" << std::endl; std::cin >> a;
    switch (a){
    case 1: // Show by family/name sort
        select_b_n_sn(obj[SIZE]);
    case 2: //Show people who has bday this month
        bday(obj);
    case 3: //Search by name/surname
        search_by_name_surname(obj);
    case 4: //Edit data
        edit_task(obj);
    case 5: //Create user
        create_user(obj);
    case 6:
        break;
    }
}

int main()
{
    man users[SIZE];
    man* link_users = &users[0];
    menu(users[0]);
    //create object
  /*man first_man;
    first_man.age = 30; first_man.surname = "Kamikaze"; first_man.name = "Eminem"; first_man.bday = 14; first_man.bmonths = 9; first_man.byear = 1990;*/

    /*man database[SIZE]; man* database_ref = &database[0];
    database[0].age = 30; database[0].surname = "Kamikaze"; database[0].name = "Eminem"; database[0].bday = 14; database[0].bmonths = 9; database[0].byear = 1990;*/

    


}
