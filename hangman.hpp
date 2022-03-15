/*

Dear whoever is reading this code, wether you are my
future employer, a friend from discord, or a random
person from the internet, please, don't proceede.
You see, what lies bellow this message is something
known plainly as "spaggeti code" to us programmers.
Spaggeti code is bad because it is unreadable... or it
just uses many bad pracices, such as copying the same
ascii art over and over again in a switch statement, to
turn into a hangman... Sorry if my grammer was terrible
or something... i dont pay attention in english much,
instead i think about whatever crosses my mind.


**YOU HAVE BEEN WARNED**

*/
void drawHangman(int stage = 0)
{
    switch (stage) {
        case 0:
            std::cout << " +-----+\n"
                      << " |\n"
                      << " |\n"
                      << " |\n"
                      << " |\n"
                      << "_|_" ;
            break;

        case 1:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |\n"
                      << " |\n"
                      << " |\n"
                      << "_|_" ;
            break;

        case 2:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |     O\n"
                      << " |\n"
                      << " |\n"
                      << "_|_" ;
            break;

        case 3:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |     O\n"
                      << " |    /\n"
                      << " |\n"
                      << "_|_" ;
            break;

        case 4:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |     O\n"
                      << " |    /|\n"
                      << " |\n"
                      << "_|_" ;
            break;

        case 5:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |     O\n"
                      << " |    /|\\\n"
                      << " |\n"
                      << "_|_" ;
            break;
            
        case 6:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |     O\n"
                      << " |    /|\\\n"
                      << " |    /\n"
                      << "_|_" ;
            break;

        default:
            std::cout << " +-----+\n"
                      << " |     |\n"
                      << " |     O\n"
                      << " |    /|\\\n"
                      << " |    / \\\n"
                      << "_|_" ;
            break;
    }
}



//pls dont read this etiher
std::string getWord()
{
    std::ifstream file("./hangman.txt");
    //get lines in file efficently.
    file.unsetf(std::ios_base::skipws);
    unsigned max = std::count(
        std::istream_iterator<char>(file),
        std::istream_iterator<char>(), 
        '\n'
    );

    //generate random line
    srand(time(NULL));
    int randL =  rand() % 4 + 1 ;
    std::string line ;
    std::string word ;
    int i = 0 ;

    std::cout << "\n" << randL ;

    //yeah i sorta doubled up on my "efficency" claim by looping through them anyway
    while (std::getline(file, line)) {
        printf("%s\n", line) ;
    }

    std::cout << std::endl << line ;

    return "penis" ;
}