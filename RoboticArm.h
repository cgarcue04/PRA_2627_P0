class RoboticArm {
private:
    double x, y, z;
    bool sujetandoObjeto;

public:
    RoboticArm(double _x, double _y, double _z);
    double getX() const;
    double getY() const;
    double getZ() const;

    bool getSujetandoObjeto() const;

    void grab();
    void release();
    void move(double x, double y, double z);
};
