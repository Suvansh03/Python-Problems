#include<iostream>
using namespace std;
struct book
{
    char name[20];
    char author[20];
    int pages;
};
int main()
{
    struct book b1={"C Programming", "Robert", 460};
    struct book b2={"Graphics", "Helsinki", 490};
    struct book b3;
    cout<<"\nB1:Name = "<<b1.name<<" , Author = "<<b1.author<<" , Pages = "<<b1.pages;
    cout<<"\nB2:Name = "<<b2.name<<" , Author = "<<b2.author<<" , Pages = "<<b2.pages;
    b3=b2;
    cout<<"\nB3:Name = "<<b3.name<<" , Author = "<<b3.author<<" , Pages = "<<b3.pages;
    if (b1.pages>b2.pages)
    cout<<"\n Pages in B1 are more";
    else if(b1.pages == b2.pages)
    cout<<"\n Pages in B1 and B2 are equal";
    else
    cout<<"\nPages in B2 are more";
    return 0;
}
