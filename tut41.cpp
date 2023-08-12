    #include<iostream>
    using namespace std;
    int main(){
    int i = 1 ;
    int n;
    cin >> n;
    while ( i <= n ){
        char ch = 'A'+n-i ;
        int j = 1;
        while ( j <= i ){
        cout<< ch ;
        j = j+1;
       ch = ch+1;

    } 
     cout<<endl;
     i = i + 1 ;
}
}