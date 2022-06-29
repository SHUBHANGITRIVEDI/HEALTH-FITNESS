#include <iostream>
#include <cstring>
#include <cmath>
#include<cstdlib>
#include<windows.h>
#include <cstdio>
using namespace std;
char temp;
float fees = 50.0;
float final_bill = 0.0;
int seat_matrix[6][6];
void seats();
void ts()
{ //time_slower
    for (long int i = 0; i < 100000000; i++)
        printf("");
}
void choose()
{

    int res_seat_x, res_seat_y;
    cout<<"\t\t\t\t\t\t\t*********************************\n";
    cout<<"\t\t\t\t\t\t\tWelcome To The Clinic \n";
    cout<<"\t\t\t\t\t\t\t*********************************\n\n\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            seat_matrix[i][j] == 0;
        }
    }

start1:

    // printf("\t“If more of us valued food and cheer and song above hoarded gold, it would be a merrier world.”\n\n");
    cout<<"\n\n\tWelcome to our Clinic sir....\n\n";
    cout<<"\tWhat would you like to do:\n\n";
    cout<<"\t1:Want to go Inside\n\t2:Book an Appointment\n\t3:Already Booked\n\t4:About Us\n";
    int choice_1;
    cout<<"\tEnter you choice::";
    cin >> choice_1;
    switch (choice_1)
    {
    case 1:
        // goto LOOP;

        break;

    case 2:
        cout<<"\tTo Book an Appointment, Please Choose Your Seats\n";
        seats();
        cout<<"\n\n\tCongratulations! Your seat has been booked\n";
        
        goto start1;
        break;
    case 3:

        cout<<"\tPlease tell your seat number::";

        cin >> res_seat_x >> res_seat_y;
        cout<<"\n\tThank you Sir ,You Are On time\n";
        if (seat_matrix[res_seat_x][res_seat_y] == 1)
        {
            cout<<"\n\tPlease Have Your Seat\n\n";
            cout<<"----------------------------------------";
            getchar();
            system("cls");
            // goto LOOP;
            // goto start1;
        }
        else
        {
            cout<<"\n\tSorry sir, but there is no seat booked with this number\n";
            cout<<"\t\nPlease visit us again\n";
            goto start1;
        }
        break;
    case 4:
        cout<<"\n\n\t\t\t*******************************************************************\n\n";
        cout <<"\t\t\t\t  <<<<<< || Health And Fitness Tracker || >>>>>>\t\t\t\t\n\n\n";

        cout<<"\t\t\tDirector::LAVISH ARORA  \t\t       Estd : 2001\n";
        cout<<"\t\t\tTotal Doctors::3\n";
        cout<<"\t\t\tTotal Nurses::10\n";
        cout<<"\t\t\tManager::SHUBHANGI TRIVEDI\n\n";
        cout<<"\t\t\t********************************************************************\n\n";
        // cout<<"\t\t"
            //    "We have been serving mouth-watering delicacies to our customers since 1995.\n\t\tWe always aspire to provide excellent services to our customers.\n";
        getchar();
        goto start1;
        break;
    default:
        cout<<"\n\tSir, I think there must have been some misunderstanding. Kindly check the address again.\n";
    }
}

void seats()
{
    int x, y;
    int time = 0;
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 6; j++)
        {

            if (i == 0 && j == 0)
            {
                cout << "\tS/t";
                ts();
            }
            else if (i == 0)
            {
                cout << "\t" << (j);
                ts();
            }
            else if (j == 0)
            {
                cout << "\t0" << time << ":00";
                ts();
                time += 3;
            }
            else
            {
                cout << "\t(" << seat_matrix[i][j] << ")";
                ts();
            }
        }
        cout << "\n";
    }

    another_choice : 
    cout << "\nPlease enter the row and column :";
    cin >> x >> y;
    if (seat_matrix[x][y] == 0)
        seat_matrix[x][y] = 1;
    else
    {
        printf("\n\tSorry Sir ,This seat is already booked .\n\tPlease choose some other seat\n ");
        goto another_choice;
    }
    time = 0;
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 6; j++)
        {

            if (i == 0 && j == 0)
            {
                cout << "\tS/T";
                ts(); 
            }
            else if (i == 0)
            {
                cout << "\t" << (j);
                ts();
            }
            else if (j == 0)
            {
                cout << "\t0" << time << ":00";
                ts();
                time += 3;
            }
            else
            {
                cout << "\t(" << seat_matrix[i][j] << ")";
                ts();
            }
        }
        cout << "\n";
    }
} 
class Clinic
{
public:
    string name_of_patient;
    int age;
    char gender;
    int arr[10];
    string phone_no;
    string address;
    float height_inches, height_feet, weight;
    void personal_info() {
        cout << "\nEnter the name of Paitent: ";
        cin >> name_of_patient;
        cout << "\nEnter Your Phone number: ";
        cin>>phone_no;
        fflush(stdin);
        cout << "\nEnter you residence's address : ";
        cin >> address;
        
         }
    void set_information()
    {
        // stdin(fflush);
        do
        {
            cout << "\nEnter your Gender(M/F) : ";
            cin >> gender;
        } while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
        cout << "\nEnter the age of patient: ";
        cin >> age;
        cout << "\nEnter the Height of patient in feets and inches: ";
        cin >> height_feet >> height_inches;
        cout << "\nEnter the Weight of patient: ";
        cin >> weight;
    }
    void show1()
    {
        // int max;
        // max = 100; //set the upper bound to generate the random number
        // srand(time(0));
        // cout << "\t\t\t\t\tS.No :"<< rand()%max;
        cout << "\tName of Patient : " << name_of_patient << "\n";
        cout<<"\tPhone Number :"<<phone_no<<"\n";
        cout<<"\tAdress :"<<address<<"\n";
    }
};

class Bmi : public Clinic
{

public:
    float BMI, bill1 = 100.0;

    void calculator()
    {
        BMI = weight / pow((height_feet * 0.3048 + height_inches * 0.0254), 2);
        printf("\nYour BMI Ratio is: %.2f ", BMI);
        printf("\n\n");
        display();
        check();
    }
    void display()
    {

        cout << "\nHow to read your BMI:" << endl;
        ts();

        cout << "Below 18.5 : Underweight" << endl;
        ts();
        cout << "18.5 - 25.0 : Average" << endl;
        ts();

        cout << "25.0 - 30.0 : Overweight" << endl;
        ts();
        cout << "30 and above : Obese" << endl;
        ts();
    }
    void check()
    {
        if (BMI < 18.5)
        {
            cout << "\nYou are Underweight";
        }
        else if (BMI >= 18.5 && BMI < 25.0)
        {
            cout << "\nIdeal BMI Ratio ,Wohoo!!!";
        }
        else if (BMI >= 25.0 && BMI < 30.0)
        {
            cout << "\nYou are Overweight";
        }
        else if (BMI >= 30.0)
        {
            cout << "\nYou are Obese,need to see Gym";
        }
        else
        {
            cout << "\nData entered is invalid";
        }
    }
};

class water_retention : public Clinic
{

    float TBW; //Total Body Water
public:
    float bill2 = 100;
    void tbw_calculator()
    {
        if (gender == 'M' || gender == 'm')
        {
            TBW = 2.447 - 0.09156 * age + 0.1074 * (height_feet * 30.48 + height_inches * 2.54) + 0.3362 * weight;
            cout << "\nYour water retention level is : " << TBW;
        }
        else if (gender == 'F' || gender == 'f')
        {
            TBW = -2.097 + 0.1069 * (height_feet * 30.48 + height_inches * 2.54) + 0.2466 * weight;
            cout << "\nYour water retention level is : " << TBW;
        }
        else
        {
            cout << "Entered Choice is Invalid";
        }
    }
    void display()
    {
        cout << "\nThe normal total body water volume range is 58 ± 8% for males and 48 ± 6% for females.";
    }
};

class Lean_Body_Mass : public Clinic
{
    float LBM, percentage;

public:
    int bill3 = 100.00;
    void lbm_calculator()
    {
        if (gender == 'M' || gender == 'm')
        {
            LBM = 0.407 * weight + 0.267 * (height_feet * 30.48 + height_inches * 2.54) - 19.2;
            percentage = (LBM / weight) * 100;
            cout << "\nYour Lean Body Mass is : " << LBM;
            cout << "\nYour Lean Body Mass Percentage is : " << percentage;
        }
        else if (gender == 'F' || gender == 'f')
        {
            LBM = 0.252 * weight + 0.473 * (height_feet * 30.48 + height_inches * 2.54) - 48.3;
            percentage = (LBM / weight) * 100;
            cout << "\nYour Lean Body Mass is : " << LBM;
            cout << "\nYour Lean Body Mass Percentage is : " << percentage;
        }
        else
        {
            cout << "Entered Choice is Invalid";
        }
    }
    void display()
    {
        cout << "\nThe range of lean body mass considered to be healthy is around 70% - 90% \n with women being towards the lower end of the range and men higher.";
    }
};

class other_tests : public Clinic
{
    int pulse_rate;
    int no_of_beats;
    int avg;
    static int ctr;

public:
    float bill4 = 0.0;
    void beats_count()
    {
        ++ctr;
        if (ctr == 1)
            cout << "\nTo find the pulse rate you need to rest your finger near wrist or below neck \n and count the beats for 15 sec two times\n\n";
        cout << "\nEnter the counted beats for the " << ctr << " time :";
        cin >> no_of_beats;
        pulse_rate = no_of_beats * 4;
    }
    void operator+(other_tests &ot)
    {
        avg = (pulse_rate + ot.pulse_rate) / 2;
    }
    void display()
    {
        cout << "\n Normal Human Pulse Rate is from 60 to 100 \n";
        ts();
        cout << "\nYour Pulse Rate is :" << avg << " bpm";
    }
};
int other_tests ::ctr = 0;

class Bill : public Bmi, public water_retention, public Lean_Body_Mass, public other_tests
{
public:
    void total_bill(int m)
    {
        final_bill = final_bill + fees + m;
    }
    void display()
    {
         system("cls");
        cout << "\t\t\t=======================================\n"; ts();
        cout << "\t\t\t\tHEALTH AND FITNESS TRACKER\n"; ts();
        cout << "\t\t\t=======================================\n"; ts();
        // show();
        cout << "\t\t\t-------------------------------------------------------\n"; ts();

         cout << "\t\t\tNet Payable Bill\t\t\t" << final_bill; ts();
        
         cout << "\n\n\t\t\t************************************************\n"; ts();
         getchar();
        
    }
};

int reception()
{
    int choice;
     system("cls");
    cout << "\n LISTS OF TEST " << endl;
    cout << "\n1-> BMI \n 2-> Water Retention Test \n3-> Lean Body Mass Percentage  \n4-> Some other tests \n\n " << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
int main()
{
    system("color F4");
    choose();
    Clinic c;
    c.personal_info();
    // c.show1();

LOOP:
    char choice;
    int n = reception();

    Bmi b;
    Bill b1;
    water_retention wr;
    Lean_Body_Mass l;
    other_tests ot1, ot2;

    switch (n)
    {

    case 1:
        system("cls");
        b.set_information();
        b.calculator();
        cout << "\nWould You Like To Continue (Y/N)";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            b1.total_bill(50.0);
            goto LOOP;
        }
        else
            b1.total_bill(50.0);
        break;
    case 2:
     system("cls");
        wr.set_information();
        wr.tbw_calculator();
        wr.display();
        cout << "\nWould You Like To Continue (Y/N)";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            b1.total_bill(50.0);
            goto LOOP;
        }
        else
            b1.total_bill(0.0);

        break;
    case 3:
     system("cls");
        l.set_information();
        l.lbm_calculator();
        l.display();
        cout << "\nWould You Like To Continue (Y/N)";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            b1.total_bill(50.0);
            goto LOOP;
        }
        b1.total_bill(0.0);
        break;
    case 4:
     system("cls");
        ot1.beats_count();
        ot2.beats_count();
        ot1 + ot2;
        ot1.display();
        cout << "\nWould You Like To Continue (Y/N)";
        cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            b1.total_bill(0.0);

            goto LOOP;
        }
        else
            b1.total_bill(0.0);

        break;

    default:
        cout << "default";
    }
    b1.display();

    return 0;
}