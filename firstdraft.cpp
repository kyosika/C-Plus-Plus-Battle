#include <iostream>
#include <ctime>
int main(){
    bool enemyTurn;
    int num;
    int damage = std::rand() % 5 + 1;
    std::string attk;
    srand(time(NULL));
    int num2;
    int whoturn = std::rand() % 2 + 1;
    int hp = std::rand() % 70;
    int enemhp = std::rand() % 70 + 10;
    std::cout << "Battle System C++!" << std::endl;
    std::cout << "Your HP: " << hp << " Enemy HP: " << enemhp << std::endl;
    std::cout << "Who goes first? Let's see!" << std::endl;
    if(num == 1){
        num2 = 2;
    }
    
    else if(num == 2){
        
        num2 = 1;
    }
    do{
         std::cout << "One or two? " << std::endl;
         std::cin >> num;
    }while(num != 1 && num != 2);
    std::cout << "Let's see... It's " << whoturn << std::endl;
    if(whoturn == 1 && num == 1){
        bool enemyTurn = false;
        std::cout << "You go first! You got one!" << std::endl;
        std::cout << "Enter a attack name: " << std::endl;
        std::cin.ignore();
        std::getline(std::cin, attk);
        
        enemhp -= damage;
        std::cout << attk << " damage: " << damage << " Enemy HP: " << enemhp << std::endl;
        enemyTurn = true;
       
        
        
    }
    
    else if(whoturn == 2 && num == 2){
      
           std::cout << "You go first! You got two!" << std::endl;
            bool enemyTurn = false;
    
        std::cout << "Enter a attack name: " << std::endl;
        std::cin.ignore();
        std::getline(std::cin, attk);
        
        enemhp -= damage;
        std::cout << attk << " damage: " << damage << " Enemy HP: " << enemhp << std::endl;
        enemyTurn = true;
       
           
    }
    
    else{
        
        std::cout << "Computer goes first!" << std::endl;
          hp -= damage;
        std::cout << attk << " damage: " << damage << "  HP: " << hp << std::endl;
        enemyTurn = false;
    }
    
return 0;
}
