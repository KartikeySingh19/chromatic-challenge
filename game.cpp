#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;
enum Color {RED,GREEN,BLUE,YELLOW,PURPLE};
Color generateRandomColor() {
    int randomNum = rand() % 5;
    return static_cast<Color>(randomNum);
}
string colorTOString(Color color) {
    switch (color) {
        case RED:
        return "Red";
        case GREEN:
        return "Green";
        case BLUE:
        return "Blue";
        case YELLOW:
        return "Yellow";
        case PURPLE:
        return "Purple";
        default:
        return "Unknown";

    }

}
int main() {
    srand(time(0));
    Color targetColor = generateRandomColor();
    string guess;
    while(true){
        system("cls");
    cout << "welcome to the colored square game!" << endl;
cout << "****************************" << endl;
cout << "Guess the color of the square (RED,  GREEN, BLUE, YELLOW, or PURPLE)" << endl;
cout << "enter your guess:";
cin >> guess;
for(int i =0; i< guess.length(); ++i){
    guess[i] = tolower(guess[i]);
}
if(guess == "red" || guess == "green" || guess == "blue" || guess == "yellow" || guess == "purple"){
    Color userColor;
    if(guess == "red")
    userColor = RED;
    else if(guess == "green")
    userColor = GREEN;
    else if(guess == "blue")
    userColor = BLUE;
    else if(guess == "yellow")
    userColor = YELLOW;
    else if(guess == "purple")
    userColor = PURPLE;

    if(userColor == targetColor){
        cout << endl;
        cout << "Congratulations! you guessed the correct color." <<endl;
        break;
    }
    else{
        cout << "wrong guess. try again!" << endl;
    }
}
else{
    cout << "Invalid color. please enter a valid color." << endl;
}
Sleep(1000);
}
}
