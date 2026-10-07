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