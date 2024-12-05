#ifndef DISH_H
#define DISH_H

#include <string>

class Dish {
private:
    std::string name;
    int idRecipe;
    bool ready;

public:
    Dish(const std::string& name, int idRecipe, bool ready);

    // Getters et Setters
    std::string getName() const;
    void setName(const std::string& value);
    int getIdRecipe() const;
    void setIdRecipe(int value);
    bool isReady() const;
    void setReady(bool value);
};

#endif // DISH_H
