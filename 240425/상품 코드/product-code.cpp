#include <iostream>
#include <string>
using namespace std;

class Product 
{
    public:
    string productName;
    int productCode;

    Product(string productName, int productCode)
    {
        this->productName = productName;
        this->productCode = productCode;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string productName;
    int productCode;
    cin >> productName >> productCode;
    Product product1 = Product("codetree", 50);
    Product product2 = Product(productName, productCode);

    cout << "product " << product1.productCode <<" is " << product1.productName << endl;
    cout << "product " << product2.productCode << " is " << product2.productName;
    return 0;
}