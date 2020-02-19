#ifndef VECTEUR3D_H_INCLUDED
#define VECTEUR3D_H_INCLUDED

class vecteur3d
{
private:
    float x, y, z;
public:

    vecteur3d(float, float, float);
    void affiche();

    bool coincide(vecteur3d);
    bool coincide(vecteur3d *);
    bool coincideRef(vecteur3d &);
};

#endif // VECTEUR3D_H_INCLUDED
