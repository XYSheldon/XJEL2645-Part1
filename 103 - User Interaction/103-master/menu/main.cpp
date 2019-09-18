#include <iostream>
#include <regex>

void main_menu();
int get_user_input();
void select_menu_item(int input);
void print_main_menu();
void go_back_to_main_menu();
bool is_integer(std::string num);
void menu_item_1();
void menu_item_2();
void menu_item_3();
void menu_item_4();

int main(int argc, char const *argv[])
{
  main_menu();
  return 0;
}

void main_menu()
{
  print_main_menu();
  int input = get_user_input();
  select_menu_item(input);
}

int get_user_input()
{
  int input;
  std::string input_string;
  bool valid_input = false;
  int menu_items = 5;

  do
  {
    std::cout << "\nSelect item: ";
    std::cin >> input_string;
    valid_input = is_integer(input_string);
    // if input is not an integer, print an error message
    if (valid_input == false)
    {
      std::cout << "Enter an integer!\n";
    }
    else
    {                                  // if it is an int, check whether in range
      input = std::stoi(input_string); // convert to int
      if (input >= 1 && input <= menu_items)
      {
        valid_input = true;
      }
      else
      {
        std::cout << "Invalid menu item!\n";
        valid_input = false;
      }
    }
  } while (valid_input == false);

  return input;
}

void select_menu_item(int input)
{
  switch (input)
  {
  case 1:
    menu_item_1();
    break;
  case 2:
    menu_item_2();
    break;
  case 3:
    menu_item_3();
    break;
  case 4:
    menu_item_4();
    break;
  default:
    exit(1);
    break;
  }
}

void print_main_menu()
{
  std::cout << "\n----------- Currency Converter ------------------\n";
  std::cout << "|\t\t\t\t\t\t|\n";
  std::cout << "|\t1. GBP to USD\t\t\t\t|\n";
  std::cout << "|\t2. USD to GBP\t\t\t\t|\n";
  std::cout << "|\t3. GBP to EUR\t\t\t\t|\n";
  std::cout << "|\t4. EUR to GBP\t\t\t\t|\n";
  std::cout << "|\t5. Exit\t\t\t\t\t|\n";
  std::cout << "|\t\t\t\t\t\t|\n";
  std::cout << "-------------------------------------------------\n";
  std::cout << "*:Currency Data Updated(Google Finance): Sep. 18 2019	10:43:59\n";
}

void go_back_to_main()
{
  std::string input;
  do
  {
    std::cout << "\nEnter 'b' or 'B' to go back to main menu: ";
    std::cin >> input;
  } while (input != "b" && input != "B");
  main_menu();
}

// https://codereview.stackexchange.com/questions/162569/checking-if-each-char-in-a-string-is-a-decimal-digit
bool is_integer(std::string num)
{
  return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

void menu_item_1()
{
  std::cout << "\n>> GBP to USD\n";
  std::cout << "Current: 1 GBP = 1.25 USD\n";
  double x = 0;
  std::cout << "Input the amount in GBP:";
  std::cin >> x;
  std::cout << "\n"
            << x << " GBP = " << x * 1.25 << " USD\n";
  go_back_to_main();
}
void menu_item_2()
{
  std::cout << "\n>> USD to GBP\n";
  std::cout << "Current: 1 USD = 0.80 GBP\n";
  double x = 0;
  std::cout << "Input the amount in USD:";
  std::cin >> x;
  std::cout << "\n"
            << x << " USD = " << x * 0.80 << " GBP\n";
  go_back_to_main();
}
void menu_item_3()
{
  std::cout << "\n>> GBP to EUR\n";
  std::cout << "Current: 1 GBP = 1.13 EUR\n";
  double x = 0;
  std::cout << "Input the amount in GBP:";
  std::cin >> x;
  std::cout << "\n"
            << x << " GBP = " << x * 1.13 << " EUR\n";
  go_back_to_main();
}
void menu_item_4()
{
  std::cout << "\n>> EUR to GBP\n";
  std::cout << "Current: 1 EUR = 0.89 GBP\n";
  double x = 0;
  std::cout << "Input the amount in EUR:";
  std::cin >> x;
  std::cout << "\n"
            << x << " EUR = " << x * 0.89 << " GBP\n";
  go_back_to_main();
}