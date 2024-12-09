/*1)
#include <iostream>
using namespace std;

class Rocket {
public:
    Rocket() {
        cout << "Rocket constructor" << endl;
    }
    void launch() {
        cout << "Rocket is launching!" << endl;
    }
    virtual void speed() {
        cout << "Rocket speed is very high!" << endl;
    }
    virtual ~Rocket() {
        cout << "Rocket destructor" << endl;
    }
};

class Airplane {
public:
    Airplane() {
        cout << "Airplane constructor" << endl;
    }
    void fly() {
        cout << "Airplane is flying!" << endl;
    }
    virtual void speed() {
        cout << "Airplane speed is moderate!" << endl;
    }
    virtual ~Airplane() {
        cout << "Airplane destructor" << endl;
    }
};

class JetPlane : public Rocket, public Airplane {
public:
    JetPlane() {
        cout << "JetPlane constructor" << endl;
    }

    void takeOff() {
        launch();   
        fly();      
    }

    void speed() override {
        cout << "JetPlane speed is very fast!" << endl;
    }

    ~JetPlane() {
        cout << "JetPlane destructor" << endl;
    }
};

int main() {
    cout << "Creating JetPlane object..." << endl;
    JetPlane jet;

    jet.takeOff();   
    jet.speed();     

    return 0;
}*/
/*2)
#include <iostream>
using namespace std;

class Rocket {
public:
    Rocket() {
        cout << "Rocket constructor" << endl;
    }
    void launch() {
        cout << "Rocket is launching!" << endl;
    }
    virtual void speed() {
        cout << "Rocket speed is very high!" << endl;
    }
    virtual ~Rocket() {
        cout << "Rocket destructor" << endl;
    }
};

class Airplane {
public:
    Airplane() {
        cout << "Airplane constructor" << endl;
    }
    void fly() {
        cout << "Airplane is flying!" << endl;
    }
    virtual void speed() {
        cout << "Airplane speed is moderate!" << endl;
    }
    virtual ~Airplane() {
        cout << "Airplane destructor" << endl;
    }
};

class JetPlane : public Rocket, public Airplane {
public:
    JetPlane() {
        cout << "JetPlane constructor" << endl;
    }

    void takeOff() {
        launch();   
        fly();      
    }

    void speed() override {
        cout << "JetPlane speed is very fast!" << endl;
    }

    ~JetPlane() {
        cout << "JetPlane destructor" << endl;
    }
};

class Boeing747 : public JetPlane {
public:
    Boeing747() {
        cout << "Boeing747 constructor" << endl;
    }

    void takeOff() {
        cout << "Boeing747 is starting to take off!" << endl;
        JetPlane::takeOff();  
    }

    void speed() override {
        cout << "Boeing747 speed is around 900 km/h!" << endl;
    }

    ~Boeing747() {
        cout << "Boeing747 destructor" << endl;
    }
};

int main() {
    cout << "Creating Boeing747 object..." << endl;
    Boeing747 boeing;

    boeing.takeOff();  
    boeing.speed();    

    return 0;
}
*/
