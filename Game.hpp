#ifndef             ___HPPGAME___
#define             ___HPPGAME___

#include <string>

class Game {
    public:
        Game();
        ~Game();
        bool getOnline();
        std::string getName();
        double getSales();
        std::string getConsole();
        int getMaxPlayers();
        char getRating();
        int getReleaseYear();
        int getScore();
        void setMaxPlayers(int max);
        void setOnline(bool online);
        void setName(std::string n);
        void setReleaseYear(int x);
        void setSales(double s);
        void setScore(int s);
        void setConsole(std::string console);
        void setRating(char r);


    private:
        std::string name;
        double sales;
        char rating;
        int releaseYear;
        int maxPlayers;
        int score;
        std::string console;
        bool online;
};

#endif