#define CREATE_USER 1
#define ACCESS_USER 2
#define EDIT_USER   3
#define NEXT_MENU   4

#define USER_DATA 1
#define LOG  2
#define DATA 3

int MENU_STATE = USER_DATA;


#include"USER.h"
#include"MEAL.h"

using namespace std;
USER u;
MEAL m;
int uti = 0;

int data_menu() {
    int STATE_DATA = 2;
    u.BMI();
    m.calc_prog_total_real();
    cout << "Progres real: " << m.getProgReal();
    m.calc_prog_total_exp();
    cout << "Progres expected: " << m.getProgExp();
    return STATE_DATA;
}


int log_menu() {
    cout << "--- Meniu --" << endl;
    cout << "Introduceti numarul corespunzator pentru avansare in meniu:" << endl;
    cout << "1. Vizualizare alimente" << endl;
    cout << "2. Introducere alimente" << endl;
    cout << "3. Vizualizare date" << endl;
    cout << "4. Iesire aplicatie" << endl;

    int STATE_LOG;
    cin >> STATE_LOG;

    switch (STATE_LOG)
    {
    case 1:
        m.vizualizare_alimente();
        MENU_STATE = LOG;
        break;
    case 2:
        m.inregistrare_mese();
        MENU_STATE = LOG;
        break;
    case 3:
        MENU_STATE = DATA;
        data_menu();
        break;
    case 4:
        exit(0);
        break;
    default:
        MENU_STATE = LOG;
        break;
    }
    return MENU_STATE;
}


int user_menu() {
    cout << "Introduceti numarul corespunzator pentru avansare in meniu:" << endl;
    cout << CREATE_USER << ". Creare utilizator" << endl;
    cout << ACCESS_USER << ". Accesare utilizator" << endl;
    cout << EDIT_USER << ". Editare utilizator" << endl;
    cout << NEXT_MENU << ". Urmatorul meniu" << endl;

    int STATE_USER = 0;
    
    cin >> STATE_USER;
    
    
   
    
    switch (STATE_USER)
    {
    case CREATE_USER:
        u=u.create_user();
        uti = 1;
       MENU_STATE = USER_DATA;
        break;
    case ACCESS_USER:
        u.acces_user();
        MENU_STATE = USER_DATA;
        break;
    case EDIT_USER:
        u.edit_user();
        MENU_STATE = USER_DATA;
        break;
    case NEXT_MENU:
        if (uti == 1)
            MENU_STATE = LOG;
        else
            MENU_STATE = USER_DATA;
        break;
    default:
        MENU_STATE = LOG;
        break;
    }
    return MENU_STATE;
}

int main()
{
   
    int MENU_STATE = user_menu();
    while (true) {
        switch (MENU_STATE)
        {
        case USER_DATA:
            user_menu();
            MENU_STATE = user_menu();
            break;
        case LOG:
            log_menu();
            MENU_STATE = log_menu();
            break;
        case DATA:
            data_menu();
            MENU_STATE = data_menu();
            break;
        }
    }
    
}

