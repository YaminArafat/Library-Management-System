/*#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;
void addbooks();
void viewbooks();
void searchbooks();
void buybooks();
void mybooks();
void delbooks();
//int cnt,cnt2;
//vector<string>catagories;
//class books
//{
//    string id;
//    string cat;
//public:
//    string writer;
//    int quantity;
//    float price;
//    string name;
//    books()
//    {
//
//    }
//    ~books()
//    {
//
//    }
//    books(string e,string t)
//    {
//        cat=e;
//        id=t;
//    }
//    void friend operator>>(istream &inp,books &a)
//    {
//        inp.clear();
//        inp.ignore(1000,'\n');
//        cout<<"\t\t\t\t\tBook Name : ";
//        getline(inp,a.name);
//        cout<<endl;
//        cout<<"\t\t\t\t\tAuthor    : ";
//        getline(inp,a.writer);
//        cout<<endl;
//        cout<<"\t\t\t\t\tQuantity  : ";
//        inp>>a.quantity;
//        cout<<endl;
//        cout<<"\t\t\t\t\tPrice     : ";
//        inp>>a.price;
//        cout<<endl;
//        ofstream outf;
//        outf.open("booklist.txt",ios::app);
//        if(outf)
//        {
//            outf<<setw(2)<<setfill('0');
//            outf<<cnt+1<<".Catagory    : "<<a.cat<<endl;
//            outf<<"   Book Name   : "<<a.name<<endl;
//            outf<<"   Book ID     : "<<a.id<<endl;
//            outf<<"   Book Writer : "<<a.writer<<endl;
//            outf<<"   Quantity    : "<<a.quantity<<endl;
//            outf<<"   Price       : "<<a.price<<endl<<endl;
//        }
//        outf.close();
//    }
//    friend int tot_books();
//    void inheri(string tmp2,string tmp1)
//    {
//        name=tmp2;
//        id=tmp1;
//    }
//};
//int tot_books()
//{
//    ifstream inf;
//    inf.open("booklist.txt");
//    int i=0;
//    if(inf)
//    {
//        while (inf)
//        {
//            string s;
//            getline(inf,s);
//            if(!s.empty() && s.substr(3,8)=="Quantity")
//            {
//                string tmp=s.substr(17,s.size()-17);
//                int x=0,fact=1;
//                for(int j=tmp.size()-1; j>=0; j--)
//                {
//                    x+=(tmp[j]-'0')*fact;
//                    fact*=10;
//                }
//                i+=x;
//            }
//        }
//    }
//    inf.close();
//    return i;
//}
//class user:public books
//{
//    string name_;
//    string mobile;
//    string book_name;
//    string book_id;
//public:
//    /*user(string n,string m)
//    {
//        book_name=n;
//        book_id=m;
//    }*/
//    /*void friend operator>>(istream &inp,user &u)
//    {
//        inp.clear();
//        inp.ignore(1000,'\n');
//        cout<<"\n\n\n\n\t\t\t\t\t\tName : ";
//        getline(inp,u.name_);
//        cout<<endl;
//        cout<<"\n\n\t\t\t\t\t\tMobile : ";
//        inp>>u.mobile;
//        cout<<endl;
//        ofstream outf;
//        outf.open("buyer.txt",ios::app);
//        if(outf)
//        {
//            outf<<"Name      : "<<u.name_<<endl;
//            outf<<"Mobile    : "<<u.mobile<<endl<<endl;
//        }
//        outf.close();
//    }*/
//    void getdata()
//    {
//        cin.clear();
//        cin.ignore(1000,'\n');
//        cout<<"\n\n\n\n\t\t\t\t\t\tName : ";
//        getline(cin,name_);
//        cout<<"\n\n\t\t\t\t\t\tMobile : ";
//        cin>>mobile;
//        cout<<endl;
//        ofstream outf;
//        outf.open("buyer.txt",ios::app);
//        if(outf)
//        {
//            outf<<"  Name      : "<<name_<<endl;
//            outf<<"  Mobile    : "<<mobile<<endl<<endl;
//        }
//        outf.close();
//    }
//};
/*void home()
{
    system("cls");
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t----------------------------------------------\n";
    cout<<"\t\t\t\t\t================7777777 LIBRAY================\n";
    cout<<"\t\t\t\t\t----------------------------------------------\n";
    cout<<"\t\t\t\t\t7777777777777777777777777777777777777777777777\n";
    cout<<"\t\t\t\t\t______________________________________________\n\t\t\t\t\t\t\t    WELCOME\n\n";
    cout<<"\t\t\t\t\t\t\t<<<MAIN MENU>>>\n\n\n\n";
    cout<<"\t\t\t\t\t\t 1.Admin\t\t2.User\n\n\t\t\t\t\t\t\t     3.Exit\n\n\n";
    cout<<"\t\t\t\t\t\t\tEnter your choice : ";
    switch(getch())
    {
    case '1':
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t      1.Add Books\n\n";
        cout<<"\t\t\t\t\t      2.Book List\n\n";
        cout<<"\t\t\t\t\t      3.Search Books\n\n";
        cout<<"\t\t\t\t\t      4.Sell Information\n\n";
        cout<<"\t\t\t\t\t      5.Delete Books\n\n";
        cout<<"\t\t\t\t\t      6.Back\n\n\n";
        cout<<"\t\t\t\t\t\tEnter your choice : ";
        switch(getch())
        {
        case '1':
            addbooks();
            break;
        case '2':
            viewbooks();
            break;
        case '3':
            searchbooks();
            break;
        case '4':
            mybooks();
            break;
        case '5':
            delbooks();
            break;
        case '6':
            home();
            break;
        default:
        {
            cout<<"\n\n\t\t\t\t\t##Wrong Keyword!!Please re-enter correct option\n";
            if (getch())
            {
                home();
            }
        }
        }
        break;
    }
    case '2':
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t      1.Book List\n\n";
        cout<<"\t\t\t\t\t      2.Search Books\n\n";
        cout<<"\t\t\t\t\t      3.Buy Books\n\n";
        cout<<"\t\t\t\t\t      4.Back\n\n\n";
        cout<<"\t\t\t\t\t\tEnter your choice : ";
        switch(getch())
        {
        case '1':
        {
            viewbooks();
            break;
        }
        case '2':
            searchbooks();
            break;
        case '3':
            buybooks();
            break;
        case '4':
            home();
            break;
        default:
        {
            cout<<"\n\n\t\t\t\t\t##Wrong Keyword!!Please re-enter correct option\n";
            if (getch())
            {
                home();
            }
        }
        }
    }
    break;
    case '3':
        exit(0);
    default:
    {
        cout<<"\n\n\t\t\t\t\t##Wrong Keyword!!Please re-enter correct option\n";
        if (getch())
        {
            home();
        }
    }
    }
}*/
/*void addbooks()
{
    system("cls");
    int b;
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t    1.Computer Science & Engineering\n\n";
    cout<<"\t\t\t\t\t    2.Electrical & Electronic Engineering\n\n";
    cout<<"\t\t\t\t\t    3.Mechanical Engineering\n\n";
    cout<<"\t\t\t\t\t    4.Civil Engineering\n\n";
    cout<<"\t\t\t\t\t    5.Electronics & Communication Engineering\n\n";
    cout<<"\t\t\t\t\t    6.Architecture\n\n";
    cout<<"\t\t\t\t\t    7.Back\n\n\n";
    cout<<"\t\t\t\t\tEnter Your Choice : ";
    cin>>b;
    if (b==7)
    {
        home();
    }
    system("cls");
    string t;
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\tEnter the information below ->\n\n\n";
    cout<<"\t\t\t\t\tCategory  : "<<catagories[b-1]<<endl<<endl<<endl;;
    cout<<"\t\t\t\t\tBook ID   : ";
    cin>>t;
    cout<<endl;
    ifstream inf;
    inf.open("booklist.txt");
    bool f=true;
    if(inf)
    {
        while (inf)
        {
            string s;
            getline(inf,s);
            if(!s.empty() && s.substr(8,2)=="Id")
            {
                string tmp=s.substr(17,s.size()-17);
                if(tmp==t)
                {
                    f=false;
                }
            }
        }
    }
    inf.close();
    if(f)
    {
        books a(catagories[b-1],t);
        cin>>a;
        cout<<"\t\t\t\t\t\tThe record is successfully saved.\n\n";
        ofstream outf("flag.txt");
        outf<<++cnt;
        outf.close();
    }
    else
    {
        cout<<"\n\t\t\t\t\t\tThis book ID already exists.\n\n";
    }
    cout<<"\n\t\t\t\t\t\tAdd any more ? (Y / N) : ";
    if (getch()=='n')
    {
        home();
    }
    else
    {
        system("cls");
    }
    addbooks();
}*/
/*void viewbooks()
{
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t**Book List**\n\n";
    ifstream inf;
    inf.open("booklist.txt");
    int count=0;
    if(inf)
    {
        while (inf)
        {
            string s;
            getline(inf,s);
            cout<<"\t\t"<<s<<endl;
        }
    }
    cout<<"\t\t\t\t\t\t\tTotal Books = "<<tot_books()<<endl;
    inf.close();
    cout<<"\n\t\t\t\t\t\t\tPress Enter to go back <-";
    getch();
    home();
}*/
//void searchbooks()
//{
//    system("cls");
//    string d;
//    bool f=false;
//    int h=0;
//    cout<<"\n\n\n\n\n\n\t\t\t\t\t\tSearch by ID Or Name ?\n\n";
//    cout<<"\t\t\t\t\t\tEnter Your Choice (I / N) : ";
//    if (getch()=='i')
//    {
//        system("cls");
//        cout<<"\n\n\n\n\n\n\t\t\t\t\t\tEnter the book ID : ";
//        cin>>d;
//        ifstream inf;
//        inf.open("booklist.txt");
//        if(inf)
//        {
//            string prev="";
//            while (inf)
//            {
//                string s;
//                getline(inf,s);
//                if(!s.empty() && s.substr(8,2)=="ID")
//                {
//                    string tmp=s.substr(17,s.size()-17);
//                    if(tmp==d)
//                    {
//                        cout<<"\n\n\t\t\t\t\t\tThe book is available\n\n";
//                        cout<<"\t\t   Book Name   : ";
//                        cout<<prev<<endl<<endl;
//                        f=true;
//                        h=4;
//                    }
//                }
//                else if(!s.empty())
//                {
//                    prev=s.substr(17,s.size()-17);
//                }
//                if(h>0 && h)
//                {
//                    cout<<"\t\t"<<s<<endl<<endl;
//                    h--;
//                }
//            }
//        }
//        inf.close();
//        if (!f)
//        {
//            cout<<"\n\n\t\t\t\t\t\tThis book is not available\n\n";
//        }
//        cout<<"\t\t\t\t\t\tTry Again ? (Y / N) : ";
//        if (getch()=='y')
//        {
//            searchbooks();
//        }
//        else
//        {
//            home();
//        }
//    }
//    else
//    {
//        string srch;
//        system("cls");
//        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Book Name : ";
//        cin>>srch;
//        ifstream inf;
//        inf.open("booklist.txt");
//        if(inf)
//        {
//            while (inf)
//            {
//                string s;
//                getline(inf,s);
//                if(!s.empty() && s.substr(8,4)=="Name")
//                {
//                    string tmp=s.substr(17,s.size()-17);
//                    if(tmp==srch)
//                    {
//                        cout<<"\n\n\t\t\t\t\t\tThe book is available\n\n";
//                        f=true;
//                        h=5;
//                    }
//                }
//                if(h>0 && h)
//                {
//                    cout<<"\t\t"<<s<<endl<<endl;
//                    h--;
//                }
//            }
//        }
//        inf.close();
//        if (!f)
//        {
//            cout<<"\n\n\t\t\t\t\t\tThis book is not available\n\n";
//        }
//        cout<<"\t\t\t\t\t\tTry Again ? (Y / N) : ";
//        if (getch()=='y')
//        {
//            searchbooks();
//        }
//        else
//        {
//            home();
//        }
//    }
//}
/*void buybooks()
{
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t**Book List**\n\n";
    ifstream inf;
    inf.open("booklist.txt");
    int count=0;
    if(inf)
    {
        while (inf)
        {
            string s;
            getline(inf,s);
            cout<<"\t\t"<<s<<endl;
        }
    }
    inf.close();
    string z;
    cout<<"\n\t\t\t\t\t\t\tSelect your catagory number : ";
    cin>>z;
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tDo you want to buy this book ? (Y/N) : ";
    if(getch()=='y')
    {
        ifstream inf;
        inf.open("booklist.txt");
        bool f=false;
        int count=0;
        if(inf)
        {
            string tmp1,tmp2;
            while (inf)
            {
                string s;
                getline(inf,s);
                string tmp=s.substr(0,2);
                if(!tmp.empty() && tmp==z && !f)
                {
                    f=true;
                }
                else if(f)
                {
                    if(!s.empty() && s.substr(8,2)=="ID")
                    {
                        tmp1=s.substr(17,s.size()-17);
                        count++;
                    }
                    else if(!s.empty() && s.substr(8,4)=="Name")
                    {
                        tmp2=s.substr(17,s.size()-17);
                        count++;
                    }
                    if(count==2)
                    {
                        ofstream outf;
                        outf.open("buyer.txt",ios::app);
                        outf<<cnt2+1<<".Book Name : "<<tmp2<<endl;
                        outf<<"  Book ID   : "<<tmp1<<endl;
                        outf.close();
                        ofstream outf1("bflag.txt");
                        outf1<<++cnt2;
                        outf1.close();
                        user u1;
                        u1.inheri(tmp2,tmp1);
                        u1.getdata();
                        break;
                    }
                }
            }
        }
        inf.close();
        cout<<"\n\n\t\t\t\t\t\tYour book purchase is succesful.";
        getch();
        home();
    }
    else
    {
        getch();
        home();
    }
}*/
//void mybooks()
//{
//    system("cls");
//    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t**Book List**\n\n\n";
//    ifstream inf("buyer.txt");
//    while(inf)
//    {
//        string s;
//        getline(inf,s);
//        cout<<"\t\t"<<s<<endl;
//    }
//    inf.close();
//    cout<<"\n\t\t\t\t\t\t\tPress Enter to go back <-";
//    getch();
//    home();
//}
//void delbooks()
//{
//    system("cls");
//    ifstream inf1;
//    inf1.open("booklist.txt");
//    if(inf1.eof()){
//    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t**Book List**\n\n";
//    int count=0;
//    if(inf1)
//    {
//        while (inf1)
//        {
//            string s;
//            getline(inf1,s);
//            cout<<"\t\t"<<s<<endl;
//        }
//    }
//    inf1.close();
//    ifstream inf;
//    inf.open("booklist.txt");
//    string z;
//    cout<<"\n\t\t\t\t\t\tSelect your catagory number to Delete : ";
//    cin>>z;
//    system("cls");
//    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tDo you want to delete this book ? (Y/N) : ";
//    if(getch()=='y')
//    {
//        ofstream outf;
//        outf.open("temp.txt");
//        bool f=false;
//        int h=6;
//        if(inf)
//        {
//            string tmp1,tmp2;
//            while (inf)
//            {
//                string s;
//                getline(inf,s);
//                string tmp=s.substr(0,2);
//                if(!tmp.empty() && tmp==z && !f)
//                {
//                    f=true;
//                }
//                if(!f)
//                {
//                    outf<<s<<endl;
//                }
//                else if(f)
//                {
//                    h--;
//                    if(!h)
//                    {
//                        f=false;
//                    }
//                }
//            }
//        }
//        outf.close();
//        inf.close();
//        remove("booklist.txt");
//        rename("temp.txt","booklist.txt");
//        cout<<"\n\n\n\n\t\t\t\t\t\tDeletion succesful.";
//        cout<<"\n\n\n\t\t\t\t\t\tTry Again ? (Y / N) : ";
//        if (getch()=='y')
//        {
//            delbooks();
//        }
//        else
//        {
//            home();
//        }
//    }
//    else
//    {
//        getch();
//        home();
//    }
//    }
//    else
//    {
//        cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tNo books available.";
//        cout<<"\n\n\n\n\t\t\t\t\t\tPress Enter to go back <-";
//    getch();
//    home();
//    }
//}
//int main()
//{
//    ifstream inf1("flag.txt");
//    inf1>>cnt;
//    inf1.close();
//    ifstream inf2("bflag.txt");
//    inf2>>cnt2;
//    inf2.close();
//    ifstream inf;
//    inf.open("catagory.txt");
//    while(inf)
//    {
//        string s;
//        getline(inf,s);
//        catagories.push_back(s);
//    }
//    inf.close();
//    home();
//    getch();
//    return 0;
//}





































/*void editbooks()
{
    system("cls");
    string d;
    bool f=false;
    int h=0;
    printf("\t\t\t\t\t\t\tEnter ID Or Name ? (I / N) : ");
    if (getch()=='i')
    {
        system("cls");
        printf("\t\t\t\t\t\t\tEnter THe Book Id : ");
        cin>>d;
        ifstream inf;
        inf.open("booklist.txt");
        if(inf)void buybooks();
        {
            string prev="";
            while (inf)
            {
                string s;
                if(!s.empty() && s.substr(7,2)=="Id")
                {
                    string tmp=s.substr(16,s.size()-16);
                    if(tmp==d)
                    {
                        printf("\t\t\t\t\t\t\tThe Book Is Available\n");
                        printf("Book Name : ");
                        cout<<prev<<endl;
                        f=true;
                        h=4;
                    }
                }
                else if(!s.empty())
                {
                    prev=s.substr(16,s.size()-16);
                }
                if(h>0 && h)
                {
                    cout<<s<<endl;
                    h--;
                }
            }
        }
        inf.close();
        if (!f)
        {
            printf("\t\t\t\t\t\t\tThis Book Is Not Available\n");
        }
        else
        {
            printf("\t\t\t\t\t\t\tDo you want to update information this book ? (Y/N) :");
            if(getch()=='y')
            {
                system("cls");
                int b;
                printf("\t\t\t\t\t    1.Update book ID\n");
                printf("\t\t\t\t\t    2.Update book Name\n");
                printf("\t\t\t\t\t    3.Update book Quantity\n");
                printf("\t\t\t\t\t    4.Update book Price\n");
                printf("\t\t\t\t\t    5.Back\n\n");
                printf("\t\t\t\t\tEnter Your Choice : ");
                scanf("%d",&b);
                switch(getch())
                {
                case '1':
                {
                    printf("\t\t\t\t\t\t\tEnter new book ID : ");
                    string n;
                    cin>>n;

                    break;
                }
                case '2':
                    searchbooks();
                    break;
                case '3':
                //issuebooks();
                case '4':
                    viewbooks();
                    break;
                case '5':
                    //editbooks();
                    break;
                default:
                {
                    printf("\t##Wrong Keyword!!Please re-enter correct option\n");
                    if (getch())
                    {
                        home();
                    }
                }
                }
            }
        }
    printf("\t\t\t\t\t\t\tTry Again ? (Y / N) : ");
    if (getch()=='y')
    {
        searchbooks();
    }
    else
    {
        home();
    }
    }
else
{
    string srch;
    system("cls");
    printf("\t\t\t\t\t\t\tEnter Book Name : ");
    cin>>srch;
    ifstream inf;
    inf.open("booklist.txt");
    if(inf)
    {
        while (inf)
        {
            string s;
            getline(inf,s);
            if(!s.empty() && s.substr(7,4)=="Name")
            {
                string tmp=s.substr(16,s.size()-16);
                if(tmp==srch)
                {
                    printf("\t\t\t\t\t\t\tThe Book Is Available\n");
                    f=true;
                    h=5;
                }
            }
            if(h>0 && h)
            {
                cout<<s<<endl;
                h--;
            }
        }
    }
    inf.close();
    if (!f)
    {
        printf("\t\t\t\t\t\t\tThis Book Is Not Available\n");
    }
    printf("\t\t\t\t\t\t\tTry Again ? (Y / N) : ");
    if (getch()=='y')
    {
        searchbooks();
    }
    else
    {
        home();
    }
}
/*system("cls");
int c=0;
string d;
char x='y';
while (x=='y')
{
    system("cls");
    printf("\t\t\t\t\t\t\tEnter Book Id : ");
    cin>>d;

    while(fread(&a,sizeof(a),1,fp)==1)
    {
        if (checkid(d)==0)
        {
            printf("\t\t\t\t\t\t\tThe book Is Availble\n");
            printf("\t\t\t\t\t\t\tThe Book ID : %d",a.id);
            printf("\t\t\t\t\t\t\tEnter New Name : ");
            scanf("%s",a.name);
            printf("\t\t\t\t\t\t\tEnter New Writer : ");
            scanf("%s",a.writer);
            printf("\t\t\t\t\t\t\tEnter New Quantity:");
            scanf("%d",&a.quantity);
            printf("\t\t\t\t\t\t\tEnter New Price:");
            scanf("%f",&a.price);
            printf("\n");
            printf("The Record Is Modified\n");
            fseek(fp,ftell(fp)-sizeof(a),0);
            fwrite(&a,sizeof(a),1,fp);
            fclose(fp);
            c=1;
        }
        if (c==0)
        {
            printf("\t\t\t\t\t\t\tThis Book Is Not Available\n");
        }
    }
    printf("\t\t\t\t\t\t\Edit Any More ? (Y / N) : ");
    x=getch();
}
returnfunc();*/

//}
/*void delbooks()
{
    system("cls");
    //string d;
    bool f=false;
    int h=0;
    printf("\t\t\t\t\t\t\tEnter Book Name ? (I / N) : ");
    /*if (getch()=='i')
    {
        system("cls");
        printf("\t\t\t\t\t\t\tEnter THe Book ID : ");
        cin>>d;
        ifstream inf;
        inf.open("booklist.txt");
        ofstream outf;
        outf.open("temp.txt");
        if(inf)
        {
            string prev="";
            while (inf)
            {
                string s;
                if(!s.empty() && s.substr(7,2)=="Id")
                {
                    string tmp=s.substr(16,s.size()-16);
                    if(tmp==d)
                    {
                        printf("\t\t\t\t\t\t\tThe Book Is Available\n");
                        printf("Book Name : ");
                        cout<<prev<<endl;
                        f=true;
                        h=4;
                    }
                }
                else if(!s.empty())
                {
                    prev=s.substr(16,s.size()-16);
                }
                if(h>0 && h)
                {
                    cout<<s<<endl;
                    h--;
                }
            }
        }
        inf.close();
        if (!f)
        {
            printf("\t\t\t\t\t\t\tThis Book Is Not Available\n");
        }
        printf("\t\t\t\t\t\t\tTry Again ? (Y / N) : ");
        if (getch()=='y')
        {
            searchbooks();
        }
        else
        {
            home();
        }
    }
    else
    {
        string srch;
        system("cls");
        printf("\t\t\t\t\t\t\tEnter Book Name : ");
        cin>>srch;
        ifstream inf;
        inf.open("booklist.txt");
        ofstream outf;
        outf.open("temp.txt");
        if(inf)
        {
            while (inf)
            {
                string s;
                getline(inf,s);
                if(!s.empty() && s.substr(7,4)=="Name")
                {
                    string tmp=s.substr(16,s.size()-16);
                    if(tmp==srch)
                    {
                        printf("\t\t\t\t\t\t\tThe Book Is Available\n");
                        f=true;
                        h=5;
                    }
                }
                if(h>0 && h)
                {
                    cout<<s<<endl;
                    h--;
                }
                else if(!h)
                {
                    outf<<s<<endl;;
                }
            }
        }
        inf.close();
        outf.close();
        remove("booklist.txt");
        rename("temp.txt","booklist.txt");
        if (!f)
        {
            printf("\t\t\t\t\t\t\tThis Book Is Not Available\n");
        }
        printf("\t\t\t\t\t\t\tTry Again ? (Y / N) : ");
        if (getch()=='y')
        {
            searchbooks();
        }
        else
        {
            home();
        }
    }
}*/
/*void friend operator>>(ifstream & inf,books &a)
    {
        inf>>a.name;
        cout<<a.name<<endl;
        //inf>>a.id;
       // cout<<a.name<<endl;
        //inf>>a.writer;
        //cout<<a.writer;
        //inf>>a.quantity;
       // cout<<a.quantity;
        //inf>>a.price;
        //cout<<a.price;
        //return inf;
    }*/
