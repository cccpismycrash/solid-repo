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

int main() {
   int entityType;

    std::cout <<
        "Choose entity:\n"
        "1 - Account entity\n"
        "2 - Role entity\n"
        "> ";

    std::cin >> entityType;

    if (entityType == 1) {
        AccountEntity account;
        Repository repository(&account);
        repository.Save();
    }
    else if (entityType == 2) {
        RoleEntity role;
        Repository repository(&role);
        repository.Save();
    }
    else {
        std::cout << "Unknown entity\n";
    }
}