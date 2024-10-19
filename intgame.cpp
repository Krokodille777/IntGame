#include <iostream>
#include <random>

int main(){
    int min = 1;
    int max = 100;
    int your_score = 0, comp_score = 0;
    int your_int; your_int < max; your_int > min;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    for (int i = 1; i<=6; i++){
        std::cout<<"Enter number: ";
        std::cin>>your_int;
        int random_ = dis(gen);
        if (your_int > random_){
            std::cout<<"You won"<<std::endl;
            std::cout<<"Computer guesses: "<<random_<<std::endl;
            your_score++;
            std::cout<<"Your score is: "<<your_score<<" and computer's score is: "<<comp_score<<std::endl;
        }
        else if (your_int < random_){
            std::cout<<"You lose"<<std::endl;
            std::cout<<"Computer guesses: "<<random_<<std::endl;
            comp_score++;
            std::cout<<"Your score is: "<<your_score<<" and computer's score is: "<<comp_score<<std::endl;
        }
        else{
            std::cout<<"Draw"<<std::endl;
            std::cout<<"Computer guesses: "<<random_<<std::endl;
            std::cout<<"Your score is: "<<your_score<<" and computer's score is: "<<comp_score<<std::endl;
        }
    }
std::cout<<"Game Over! Your score is: "<<your_score<<" and computer's score is: "<<comp_score<<std::endl;
if (your_score > comp_score){
    std::cout<<"You won!"<<std::endl;
}
else if (your_score < comp_score){
    std::cout<<"You lose!"<<std::endl;
}
else{
    std::cout<<"Draw"<<std::endl;
}
return 0;


}