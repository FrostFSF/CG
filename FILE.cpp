#include <iostream.h>
#include <fstream.h>
#include <conio.h>

int main()
{
    clrscr();
    fstream file;
    file.open("sample.txt",ios::out);

    if(!file)
    {
        cout << "ERROR";
        return 0;
    }

    file << "Just edited the line.";

    file.close();

    file.open("sample.txt",ios::in);

    if(!file)
    {
        cout << "ERROR";
        return 0;
    }

    char c;
    while(!file.eof())
    {
        file >> c;
        cout << c;
    }


    getch();
    return 0;
}
