//
//  main.cpp
//  C++L4P1
//
//  Created by Tadeusz Potoniec on 23/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
#include <unistd.h> //The library used for countdown time

using namespace std;
int number;

int main() {
    cout<<"Welcome to the draw! the lock will be released in 3 seconds";
    sleep(3);
    cout<<endl;
    srand((int) time(0));
    for(int i=1;i<=6;i++)
    {
        number=rand()%49+1;
        sleep(1);
        cout<<number<<"\a"<<endl;
    }
    return 0;
}
