#include <iostream>

class AbstractEntity {
    public:
    virtual void Save() = 0;
};

class AccountEntity : public AbstractEntity {
    public:
    void Save() {
        std::cout << "AccountEntity: data was saved in repository";
    }
};

class RoleEntity : public AbstractEntity {
    public:
    void Save() {
        std::cout << "RoleEntity: data was saved in repository";
    }
};

class Repository {
    private:
    AbstractEntity* _entity;

    public:
    Repository(AbstractEntity* entity) {
        this->_entity = entity;
    }

    void Save() { 
        _entity->Save();
    }
};

int main(int argc, char* argv[]) {

}