#include <windows.h>
#include <string>
#include <conio.h>


int main() {
    
    bool flag = 0;
    char key;

    std::string password = "123"; // enter your password
    std::string user_input = "";

    while (1) {        
        if (key == password[0] || flag) {
            user_input += key;
            flag = 1;
        } if (password == user_input) {
            break;
        }
        
        SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
        Sleep(1000);
        SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);

        key = getch();
    }

    return 0;
}
