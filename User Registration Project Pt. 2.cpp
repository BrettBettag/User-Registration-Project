#include <iostream>

using namespace std;
int registered_users;
char continue_registering;
double total_reg_price;
double price_per_user;
int total_users_registered;
double total_reg_user_cost;
double avg_cost;
int main()

{
    do{
      cout << "How many people are registering?" << endl;
      cin >> registered_users;

      if (registered_users > 0 && registered_users < 4) {
      cout << "you have 1 - 3 && users registered" << endl;
      total_reg_price = registered_users * 150;
        }
    else if (registered_users > 3 && registered_users < 10) {
      cout << "you have 4 - 9 && users registered" << endl;
        total_reg_price = registered_users * 100;
        }
    else if (registered_users > 9) {
      cout << "you have more than 10 users registered" << endl;
        total_reg_price = registered_users * 90;
        }
      cout << "Do you want to continue registering users?" << endl;
      cin >> continue_registering;

      total_users_registered = total_users_registered + registered_users;
      total_reg_user_cost = total_reg_price + total_reg_price;
    } while (continue_registering == 'y');
avg_cost = total_reg_user_cost / total_users_registered;
    cout << "your total registered users for all companies is: " << total_users_registered << endl;
    cout << "your total cost of all users registered is: " <<  total_reg_user_cost << endl;
    cout << "the average cost for all users registered is: " << avg_cost << endl;

    return 0;
}
