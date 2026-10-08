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
    void Save(AbstractEntity entity) { 
    
        if (entity is AccountEntity) {
            // специфические действия для AccountEntity
        } 
        
        if (entity is RoleEntity) {
            // специфические действия для RoleEntity
        }
    }
};

int main(int argc, char* argv[]) {

}