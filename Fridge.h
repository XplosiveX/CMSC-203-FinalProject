class Fridge{
private:
int recipeone = 1;
int recipetwo = 2;
int reciptethree = 3;
int j = 0;
int h = 0;
bool run = false;

int returnSeed(){
return rand()%10000;
}
int genNUM(int passed){
 srand(returnSeed());
 //cout << returnSeed() << endl;
 int attempt = rand()%passed;
 return attempt;
}


int recursiveAttempter(){
cout << "trying to make some food!" << endl;
while(true == true){
h++;

 //for debugging purposes
 //cout << genNUM() << "attempt value" << endl;
 //cout << bread << "Bread value" << endl;
 //cout << hamburger << " Hamburger value" << endl;
 
 
 if(genNUM(3) == 0 && bread > 0 && hamburger > 0){ 
     cout << "you have made a hamburger!!" << endl;
     hamburger--;
     bread--;
     return 0;
 }

if(genNUM(4) == 1 && mushroom > 0 && oninon > 0 && potato > 0){
 cout << "you have made mushroom soup!!" << endl;
     mushroom--;
     oninon--;
     potato--;
     return 0;
}

if(genNUM(3) == 2 && oninon > 0){
 cout << "You made some good ol' diced onions!!" << endl;
     oninon--;
     return 0;
}

if(genNUM(5) == 3 && lettuce > 0 && pickle > 0){
 cout << "You made a delicious salad!!" << endl;
     pickle--;
     lettuce--;
     return 0;
}

if(genNUM(4) == 4 && cheese > 0 && bread > 0){
 cout << "You made a beautiful grilled cheese!!" << endl;
     cheese--;
     bread--;
     return 0;
}

if(genNUM(6) == 5 && potato > 0){
 cout << "You have designed a delectable cake using only potatos somehow." << endl;
     potato--;
     return 0;
}

if(genNUM(7) == 6 && pickle > 0){
 cout << "No need to cook when pickles exist !!" << endl;
     pickle--;
     return 0;
}

if(genNUM(8) == 7 && pickle > 0 && hamburger > 0 && oninon > 0 && lettuce > 0 && bread > 0 && mushroom > 0){
 cout << "This burger is the work of god." << endl;
     pickle--;
     hamburger--;
     oninon--;
     lettuce--;
     bread--;
     mushroom--;
     return 0;
}

if(genNUM(9) == 8 && potato > 0){
 cout << "You have deep fried some delicious french fries!!" << endl;
    potato--;
    return 0;
}
if(h = 5){
cout << "Sadly after many attempts you fail to cook anything :(. { 5 } attempts to be exact." << endl; 
h = 0;
return 0;
}}


}

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
int total = 0;
int arraysize =  25;

int genFridge(int size){
    vector<int> fridgeArray(size);
    cout << "Behold! Your Fridge" << endl;
    cout << "It Holds:{"<< size <<  "} Items! " << endl;
    cout << "________________" << endl; 
   for(int i=0; i < size; i++){ fridgeArray[i]=rand()%7; }
    for (int a : fridgeArray) {
    j++;
    if(j < 5){
    if(j < 2){cout << "||";}
    cout << "{" << a <<  "}";
    }else{
    cout << "||";
    cout << endl;
    j = 0;
    }
    if(a == 0){bread++;}    
    if(a == 1){pickle++;}    
    if(a == 2){hamburger++;}  
    if(a == 3){lettuce++;}  
    if(a == 4){cheese++;}  
    if(a == 5){potato++;}
    if(a == 6){oninon++;}
    if(a == 7){mushroom++;}
}
cout << "_______________" << endl;
total = mushroom + oninon + potato + cheese + lettuce + hamburger + pickle + bread;
run = true;
return 0;
}
    


int getItems(){
cout << endl;
cout <<"Current bread (zeros) supply! {" << bread << "}" << endl;
cout <<"Current pickle (ones) supply! {" << pickle << "}" << endl;
cout <<"Current hamburger (twos) patty supply! {" << hamburger << "}" << endl;
cout <<"Current lettuce (threes) supply! {" << lettuce << "}" << endl;
cout <<"Current cheese (fours) supply! {" << cheese << "}" << endl;
cout <<"Current potato (fives) supply! {" << potato << "}" << endl;
cout <<"Current oninon (sixes) supply! {" << oninon << "}" << endl;
cout <<"Current mushroom (sevens) supply! {" << mushroom << "}" << endl;
return 0;
}

int clear(){
bread = 0 , pickle = 0 , hamburger = 0 , lettuce = 0, cheese = 0, potato = 0, oninon = 0 , mushroom = 0;
}


int makeItem(){
recursiveAttempter();
return 0;
}
};
