#include<vector>
#include<queue>
#include<iostream>
using namespace std;

class Product{
public:
    string name;
    int stock;
    Product(string pName,int pStock)
    {
        name=pName;
        stock=pStock;
    }
};
class Order{
public:
    int productId;
    int quantity;
    Order(int pId,int pQ)
    {
        productId=pId;
        quantity=pQ;
    }
};

void addProduct(vector<Product> &products)
{
    string *Pname=new string;
    int *Pstock=new int;
    cout<<"Enter product name: ";
    cin>>*Pname;
    cout<<"Enter product stock: ";
    cin>>*Pstock;
    Product *p1=new Product(*Pname, *Pstock);
    products.push_back(*p1); 
    cout<<"Product added successfully\n";
}

void addStock(vector<Product> &products)
{
    cout<<"Enter product name: ";
    string *Pname=new string;
    cin>>*Pname;
    int it;
    for(it=0;it<products.size();it++){
        if(products[it].name==*Pname)
        {
            cout<<"Enter stock to add: ";
            int *Pstock=new int;
            cin>>*Pstock;
            products[it].stock+=*Pstock;
            cout<<"Stock added successfully\n";
            break;
        }
        else if(it==products.size()-1)
        {
            cout<<"Product not found\n";
        }   
    }            
}

void addOrder(queue<Order> &orders, vector<Product> &products)
{
    int *PId=new int;
    int *Pq=new int;
    cout<<"Enter product ID: ";
    cin>>*PId;
    if (*PId<0 || *PId>=products.size())
    {
        cout<<"Invalid product ID\n";
        return;
    }
    else {
        cout<<"Enter quantity: ";
        cin>>*Pq;
        Order *o1=new Order(*PId, *Pq);
        orders.push(*o1);
        cout<<"Order added successfully\n";
    }
    }
   

void deliverOrder(queue<Order> &orders, vector<Product> &products)
{
    if(orders.empty())
    {
        cout<<"No orders to deliver\n";
        return;
    }
    Order o1=orders.front();
    if(products[o1.productId].stock>=o1.quantity)
    {
        products[o1.productId].stock-=o1.quantity;
        cout<<"Order delivered successfully\n";
    }
    else
    {
        cout<<"Not enough stock to deliver the order\n";
    }
    orders.pop();
}


int main() {
    // vector queue
    vector<Product> products;
    queue<Order> orders;
    
    int choice = 0;
    while(choice !=5)
    {
        cout<<"Press 1 for add product \n";
        cout<<"Press 2 to add stock to product\n";
        cout<<"Press 3 to add order\n";
        cout<<"Press 4 to deliver order \n";
        cout<<"Press 5 to stop program\n";
        cin>>choice;
        
        switch (choice)
        {
        case 1:
            addProduct(products);
            break;
        case 2:
            addStock(products);
            break;
        case 3:
            addOrder(orders, products);
            break;
        case 4:
            deliverOrder(orders, products);
            break;
        case 5:
            cout<<"Stopping program\n";
            break;
        default:
            cout<<"Invalid choice\n";
            break;
        }
    
    }
}
