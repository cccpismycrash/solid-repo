class IValidator {
    public:
    virtual bool IsValid(int value) = 0;
};

class BaseValidator: public IValidator {
    public:
    bool IsValid(int value) {
        return value > 0;
    }
};

class Product {
    public:
    
    int price;

    bool IsValid(bool isCustomerService) {
        if (isCustomerService == true) {
            return price > 100000;
        }
        return price > 0;
    }
};


int main(int argc, char* argv[]) {

}