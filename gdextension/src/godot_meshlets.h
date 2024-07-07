#define TEST_H
#ifdef TEST_H

#include <godot_cpp/classes/node3d.hpp>

using namespace godot;

class Meshlet : public Node3D{
    GDCLASS(Meshlet,Node3D);

    public:
    void _ready();

    protected:
    static void _bind_methods(){}
};



#endif