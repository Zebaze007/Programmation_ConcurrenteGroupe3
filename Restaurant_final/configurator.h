#ifndef CONFIGURATOR_H
#define CONFIGURATOR_H

class Configurator {
private:
    int openHour;
    int closeHour;
    int tableCount;
    int maxClientCapacity;

public:
    Configurator();
    void setOpenHour(int hour);
    void setCloseHour(int hour);
    void setTableCount(int count);
    void setMaxClientCapacity(int capacity);

    int getOpenHour() const;
    int getCloseHour() const;
    int getTableCount() const;
    int getMaxClientCapacity() const;

    ~Configurator();
};

#endif // CONFIGURATOR_H
