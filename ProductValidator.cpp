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

class CustomerServiceValidator: public IValidator {
    public:
    bool IsValid(int value) {
        return value > 100000;
    }
};

class Product {
    public:
    
    int price;

    Product(int price, IValidator* validator) {
        this->price = price;
        this->_validator = validator;
    }

    bool IsValid() {
        if (_validator) {
            return _validator->IsValid(price);
        } 
    }

    private:
    IValidator* _validator;
};


int main(int argc, char* argv[]) {

}