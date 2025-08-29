// creat book 
# include<iostream>
using namespace std;
class Book {
    public:
    char name;
    int price;
    int page;
    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isBookPresent(char book){
        if(name==book) return 1;
        else return 0;
    }
};
int main(){
    Book MyStoryMyLife;
    MyStoryMyLife.name='m';
    MyStoryMyLife.price=1000;
    MyStoryMyLife.page=350;
    cout<<MyStoryMyLife.countBooks(250)<<endl;
    cout<<MyStoryMyLife.isBookPresent('m');
}