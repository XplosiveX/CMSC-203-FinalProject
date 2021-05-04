class Fridge{
private:
bool run = false;
public:
// index 0 
int bread = 0;
// index 1
int pickle = 0;
//index 2
int hamburger = 0;
//index 3
int lettuce = 0;
//index 4
int cheese = 0;
//index 5
int potato = 0;
//index 6
int oninon = 0;
//index 7
int mushroom = 0;
int genFridge(int length){
int arr[length];
    random_device rd;
    default_random_engine dre(rd());
    uniform_int_distribution<int> uid(0,7);
    
    generate(arr, arr + sizeof(arr) / sizeof(int), [&] () { return uid(dre); });
    cout << "Behold! Your Fridge" << "\n";
    cout << "It Holds:{"<< length <<  "} Items! " << "\n";
    cout << "____________________" << "\n";
    for (int a : arr){
    if(a == 0){bread++;}    
    if(a == 1){pickle++;}    
    if(a == 2){hamburger++;}  
    if(a == 3){lettuce++;}  
    if(a == 4){cheese++;}  
    if(a == 5){potato++;}
    if(a == 6){oninon++;}
    if(a == 7){mushroom++;}
}
run = true;
return 1;
}

int getItems(){
cout <<"Current bread supply! :" << bread << "}" << endl;
cout <<"Current pickle supply! {" << pickle << "}" << endl;
cout <<"Current hamburger supply! {" << hamburger << "}" << endl;
cout <<"Current hamburger supply! {" << hamburger << "}" << endl;
}
};
