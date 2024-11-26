#include <bits/stdc++.h>
using namespace std;
class Cashier {
    int totalCustomers, n, discount;
    unordered_map <int, int> mpp;
public:
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        totalCustomers = 0;
        this->n = n;
        this->discount = discount;
        for(int i = 0; i < products.size(); i++){
            mpp[products[i]] = prices[i];
        }
    }
    double getBill(vector<int> product, vector<int> amount) {
        double bill = 0;
        for(int i = 0; i < product.size(); i++){
            bill += double(this->mpp[product[i]] * amount[i]);
        }
        this->totalCustomers++;
        if(this->totalCustomers % this->n != 0) return bill;
        return (bill - (bill * double(discount))/100);
        return bill;
    }
};
int main(){
    
    return 0;
}