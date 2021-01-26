#include <iostream> 

void PlayerIntroduction(int Difficulty) //void defines a function that will return no data type
{
    // Print welcome messages to the terminal
    std::cout << "\n\nYou are training in Bomb Squad and need to defuse a level " << Difficulty; // \n is an escape sequence for a new line. You can also place \n in front of a string if the line ends with a variable
    std::cout << " bomb before it blows up the whole city!!\n";
}

bool PlayGame (int Difficulty) 
{
    PlayerIntroduction(Difficulty);
    //declaring our 3 number code
    const int CodeA = rand();
    const int CodeB = rand();
    const int CodeC = rand();

    /*
    this is
    a multi line
    comment in cpp
    */

   // std::cout << "He said: \"sup bro!\""; \"string here\" is an escape sequence for placing quoted text within a string

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "- There are three numbers to the code to defuse the bomb" <<std::endl;
    std::cout << "- The Codes add-up to: " << CodeSum << std::endl;
    std::cout << "- The Codes multiply to: " << CodeProduct << std::endl;
    std::cout << "- Please enter each code number followed by a space" << std::endl;

    // store user guesses
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;

    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "- The Codes add-up to: " << GuessSum << std::endl;
    std::cout << "- The Codes multiply to: " << GuessProduct << std::endl;

    //check if players guesses are correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "Great job! On to the next one!";
        return true;
    } 
    else 
    {
        std::cout << R"(
	#######################################
	#	     _.-^^---....,,--         #
	#	 _--                  --_     #
	#	<                        >)   #
	#	|                         |   #
	#	 \._                   _./    #
	#	    ```--. . , ; .--'''       #
	#	          | |   |             #
	#	       .-=||  | |=-.          #
	#	       `-=#$%&%$#=-'          #
	#	         | ;  :|              #
	#	 _____.,-#%&$@%#&#~,._____    #
	#######################################
        )" << std::endl;
        std::cout << "You failed! go back a level";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    const int MaxDifficulty = 10;

    while (LevelDifficulty <= MaxDifficulty) //loop the game until all challenges are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //Clears any errors
        std::cin.ignore(); //Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        } else {
            --LevelDifficulty;
        }
        
    }

    std::cout << "\n ** Congrats on finishing your training! **";
    return 0;
}