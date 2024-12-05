#ifndef CLEANER_H
#define CLEANER_H

class Cleaner {
public:
    virtual void washMaterial() = 0; // Méthode virtuelle pure
    virtual ~Cleaner() {}
};

#endif // CLEANER_H
