// Rock , Paper , Scissors game
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;
int main()
{
  cout<<"Welcome To Rock , Paper & Scissors Game! \n";
  cout<<"Your Firstname : ";
 string UserName;
cin>>UserName;
 string Choices[3]={"Rock","Paper","Scissors"};
srand(time(NULL));
int ComputerChoices =rand()%3 ;
string Choice1="Rock";
string Choice2="Paper";
string Choice3="Scissors";
cout<<"In our U just have 3 choices\n";
cout<<"choose 1\tIf U want to choose Rock \n";
cout<<"choose 2\tIf U want to choose Paper \n";
cout<<"choose 3\tIf U want to choose Scissors \n ";
cout<<"Your Choice : ";
int UserChoice;
cin>>UserChoice;
switch(UserChoice){
case 1 ://the user choice = rock
        if(Choices[ComputerChoices]==Choice1){
            cout<<"You Choose Rock VS The computer choice : "<<Choices[ComputerChoices]<<"\n ";
            cout<<"Draw \n";
            break;
        }
        else if(Choices[ComputerChoices]==Choice2){
            cout<<"You Choose Rock VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
            cout<<"Hard Luck !"<< UserName<<" U lose the game \n";
            break;
        }
        else{
             cout<<"You Choose Rock VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
            cout<<"Congratulation "<<UserName<<" !";
            break;
        }
    
    break;
   case 2: //the user choice = paper
        if(Choices[ComputerChoices]==Choice2){
             cout<<"You Choose Paper VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
            cout<<"Draw \n";
            break;
        }
        else if(Choices[ComputerChoices]==Choice3){
             cout<<"You Choose Paper VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
            cout<<"Hard Luck !"<< UserName<<" U lose the game \n";       
             }
        else{
             cout<<"You Choose Paper VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
            cout<<"Congratulation "<<UserName<<" !";       
             }
    
    break;
    case 3 : //the user choice = scissors
        if(Choices[ComputerChoices]==Choice3){
             cout<<"You Choose Scissors VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
            cout<<"Draw \n";
        }
        else if(Choices[ComputerChoices]==Choice1){
             cout<<"You Choose Scissors VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
             cout<<"Hard Luck !"<< UserName<<" U lose the game \n";
                      }
        else
        {
             cout<<"You Choose Scissors VS The computer choice :" <<Choices[ComputerChoices]<<"\n";
                 cout<<"Congratulation "<<UserName<<" !"; 
                        }
    break;
    default: cout<<"Wrong input , Try again ";

}

    return 0;
}