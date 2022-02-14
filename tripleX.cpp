#include <iostream> // Pre-processor Directive
#include <string>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>


// Intro Of the Game

char Intro()
{
    std::cout << "Greetings Agent!\n" << "This is the professor, Heard you comming for this mission. The country need you to stop the reckless MathPro. \nWe are looking for your truthfull skills to do math and stop MathPro from destroying our country. \nOnly a true hacker can get into his mind and stop the reckoning";
    std::cout << "\nSo what should we call you ?";
    std::cout << "\nEnter your first letter of your name :- ";
    char name;
    std::cin >> name;
    std::cout << "\n\nThankyou Agent " << name << ". We are hoping you could save us, So let's start.\n\n";
    for(int i=10; i>= 0; i--)
    {
        std::cout << "\nYour Game Starts in " << i;
        Sleep(1000);
    }
    return name;
}


int StartGame(int GameLevel, char name)
{
      // Expression Statement
    std::cout<< "\n\nLevel - " << GameLevel << std::endl << std::endl;

    int CodeA = (rand() % (GameLevel+5)) + 1;
    int CodeB = (rand() % (GameLevel+5)) + 1;
    int CodeC = (rand() % (GameLevel+5)) + 1;
    
    if(GameLevel == 1)
    {
        std::cout << "\nAgent " << name <<"\n";
        std::cout << "You are a hacker breaking into a secure server room";
        std::cout << std::endl;
        std::cout << "You need to enter the correct codes to continue...";
    }
    else if(GameLevel == 2)
    {
        std::cout << "Now you have entered into the development room, you try to break the door but you cant...";
        std::cout << std::endl;
        std::cout << "There was a secret code and you need to enter that code to open and get to MathPro...";
    }
    else if(GameLevel == 3)
    {
        std::cout << "Some how MathPro know you are comming, He upgraded his security and went to a hiding place.\nThen you got his phone and need to unlock it.";
        std::cout << std::endl;
        std::cout << "It was same type as before, You need to find the code to open it.";
    }
    else if(GameLevel == 4)
    {
        std::cout << "After unlocking the phone you got MathPro location. Surprisingly you found a suit case which has MathPro's Ultra Sonic Gun.";
        std::cout << std::endl;
        std::cout << "But in order to open it you need a code. You searched around and found a hint to open it.";
    }
    else if(GameLevel == 5)
    {
        std::cout << "After getting the Ultra Sonic Gun you get to MathPro, But his door was locked";
        std::cout << std::endl;
        std::cout << "To unlock the door you need to enter the code...";
    }
    
    // Answer
    // std::cout << "\na - " << CodeA << "\nb - " << CodeB << "\nc - " << CodeC;
    
    // Declaration Statement
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print score to the terminal
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give " << CodeProduct << std::endl;
    std::cout << std::endl;

    // Store Player Guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check Guess is correct or not
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        GameLevel++;
        std::cout << "Congratulation your guess is correct" << std::endl << "You have Cleared this Level" << std::endl;
        std::cout << "\n\n\nYou reached to math pro and then you used the Ultra Sonic Gun. \nKabooooom......\n\nThe MAthPro was no longer a threat \n\nCongratulation you have completed all level.\nNow you are a master HACKER !!! \nThanks For Playing With Us. \n******************************* \n** Developed By :- Binwin Viju \n** https://binwinviju.co.in \n*******************************";
        return GameLevel;
    }
    else
    {
        std::cout << "Oh-No you have entered a wrong code,\nThey know you are hacking and you are shot dead.";
        std::cout << std::endl << std::endl << "You Failed,Try Again!!";
    }
}




int main() // Maain function
{
    srand(time(NULL));
    int GameLevel = 1;
    int Level = GameLevel;
    const int MaxDifficulty = 5;
    char PlayAgain, name;
    name = Intro();
    while(Level <= MaxDifficulty)
    {
        Level = StartGame(GameLevel, name);
        std::cin.clear(); 
        std::cin.ignore();
        GameLevel++;
    }
    std::cout << "\n\nDo you wish to play once more (y/n)?";
    std::cin >> PlayAgain;
    if(PlayAgain == 'Y' || PlayAgain == 'y')
    {
        std::cout << "Thanks for your interest \nYou are going to play again...\n Your game starts in ";
        for(int i=3; i>= 0; i--)
        {
            std::cout << "\n"<<i;
            Sleep(1000);
        }
        main();
    }
    else if(PlayAgain == 'N' || PlayAgain == 'n')
    {
        return 0;
    }
    else
    {
        std::cout << "Sorry you have entered a wrong input. \nThanks For Playing With Us. \n\nThe game will exit in 5 second";
        Sleep(5000);
        return 0;
    }
}
