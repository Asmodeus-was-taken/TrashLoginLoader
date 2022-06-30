#include <windows.h>
#include <iostream>
#include <math.h>
#include <string>
#include <adxintrin.h>
HWND hwnd == FindWindowA(NULL, "Note Pad"); // u can keep or remove 0 point 4 this 
using namespace std;
void one()
{
// file stream here 
}

void two()
{
// file stream here 
}

void three()
{
// file stream here 
}
void four()
{
// file stream here 
}
void success()
{
    int ooption;

    system("cls");
    Sleep(5000);
    system("color 7");
    cout << "Login Success...\n";
        std::cout << R"( 
    $$$$$$\        $$\   $$\     $$\   
    $$  __$$\      $$  |$$$$ |  $$$$ |  
    $$ /  $$ |    $$  / \_$$ |  \_$$ |  
    \$$$$$$$ |   $$  /    $$ |    $$ |  
     \____$$ |  $$  /     $$ |    $$ |  
    $$\   $$ | $$  /      $$ |    $$ |  
    \$$$$$$  |$$  /     $$$$$$\ $$$$$$\ 
     \______/ \__/      \______|\______|
                                           
                                    )" << '\n';
    cout << "Coded By Deleted User fU&Ops#6666 \n";

    cout << "\n"
    cout << "[Options]\n\n";
    cout << "Spoofers\n";
    cout << "[1] Spoof BE [Undetected] \n";
    cout << "[2] Spoof EAC [Undetected] \n";
    cout << "\n\n\n";
    cout << "Cheats\n";
    cout << "[3] Tarkov External [Undetected] \n";
    cout << "[4] Rust External [Undetected] \n";
    cout << "\n\n";
    cout << "Pick Your Option";
    // either do Get key state or do a sting or int options ill do int option
    cin >> ooption;
    if(ooption == 1) // u could do a case but i dont like using case
    {
        system("cls");
        one();
    }
    if (ooption == 2)
    {
        system("cls");
        two();
    }
    if (ooption == 3)
    {
        system("cls");
        three();
    }
    if (ooption == 4)
    {
        system("cls");
        four();
    }
    else 
    {
        cout << "Wtf R U A Retard???\n";
        Sleep(2500);
        exit(9);
    }
 }
void login()
{
    Sleep(2500);
    system("color 4");
    system("cls");
    cout << "I Got Skeletons In My closet Bud\n";
    Sleep(1125);
    cout << ".";
    Beep(100, 500);
    Sleep(1125);
    cout << ".";
    Beep(150, 500);
    Sleep(1125);
    cout << ".";
    Beep(200, 500);
    Sleep(1125);
    cout << ".";
    Beep(250, 500);
    Sleep(1125);
    cout << ".";
    Sleep(2500);
    Beep(300, 500);
    system("cls");
    std::cout << R"( 
$$$$$$\        $$\   $$\     $$\   
$$  __$$\      $$  |$$$$ |  $$$$ |  
$$ /  $$ |    $$  / \_$$ |  \_$$ |  
\$$$$$$$ |   $$  /    $$ |    $$ |  
 \____$$ |  $$  /     $$ |    $$ |  
$$\   $$ | $$  /      $$ |    $$ |  
\$$$$$$  |$$  /     $$$$$$\ $$$$$$\ 
 \______/ \__/      \______|\______|
                                           
                                    )" << '\n';
    cout << "Coded By Deleted User fU&Ops#6666 \n";
    Sleep(2500);
    // add your own login from here then revert it to success and fail
    // ill just do a gay ass login lmfao

    int Login;

    cout << "[1] Login\n";
    cin >> Login;

    if(Login == 1)
    {
        system("cls");
        success();
    }
    else
    {
        system("cls");
        cout << "Wrong Number Sped\n";
        Sleep(5000);
        system("cls");
        exit(9);

    }
}

int main()
{

    while(hwnd == NULL)
    {
        std::cout << "Cant Find Note Pad\n";
        Sleep(2500);
        exit(9);
    }
    else 
    {
        login();
    }

}
