#include "Game.hpp"
#include <iostream>

Game::Game(){

}

Game::~Game(){

}


std::string Game::getName()
    {
        return this->name;
    }

void Game::setName(std::string name)
    {
        this->name = name;
    }

    double Game::getSales()
    {
    return this->sales;
    }


    void Game::setSales(double sales)
    {
    this->sales = sales;
    }


    char Game::getRating()
    {
    return this->rating;
    }

    void Game::setRating(char rating)
    {
    this->rating = rating;
    }


    int Game::getReleaseYear()
    {
    return this->releaseYear;
    }

    void Game::setReleaseYear(int releaseYear)
    {
    this->releaseYear = releaseYear;
    }


    int Game::getMaxPlayers()
    {
    return this->maxPlayers;
    }


    void Game::setMaxPlayers(int maxPlayers)
    {
    this->maxPlayers = maxPlayers;
    }


    int Game::getScore()
    {
    return this->score;
    }

    void Game::setScore(int score)
    {
    this->score = score;
    }

    std::string Game::getConsole()
    {
    return this->console;
    }

    void Game::setConsole(std::string console)
    {
    this->console = console;
    }

    bool Game::getOnline(){
        return this->online;
    }

    void Game::setOnline(bool online)
    {
    this->online = online;
    }