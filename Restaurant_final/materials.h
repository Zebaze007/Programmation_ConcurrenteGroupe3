#ifndef MATERIALS_H
#define MATERIALS_H

class Materials {
private:
    int dirtyMaterial;
    int cleanMaterial;

public:
    // Getter et Setter pour dirtyMaterial et cleanMaterial
    int getDirtyMaterial() const;
    void setDirtyMaterial(int value);
    int getCleanMaterial() const;
    void setCleanMaterial(int value);
};

#endif // MATERIALS_H
