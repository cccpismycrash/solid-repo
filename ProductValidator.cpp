#include <iostream>

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


int main() {
    int price;
    int validatorType;

    std::cout << "Enter product price: ";
    std::cin >> price;

    std::cout <<
        "\nChoose validator:\n"
        "1 - Base validator\n"
        "2 - Customer service validator\n"
        "> ";

    std::cin >> validatorType;

    if (validatorType == 1) {
        BaseValidator validator = BaseValidator();
        Product product = Product(price, &validator);

        std::cout << (product.IsValid()
            ? "Product is valid\n"
            : "Product is invalid\n");
    }
    else if (validatorType == 2) {
        CustomerServiceValidator validator = CustomerServiceValidator();
        Product product = Product(price, &validator);

        std::cout << (product.IsValid()
            ? "Product is valid\n"
            : "Product is invalid\n");
    }
    else {
        std::cout << "Unknown validator\n";
    }
}