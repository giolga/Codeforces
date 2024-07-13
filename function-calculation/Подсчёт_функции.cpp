#include <iostream>
using namespace std;

/*

long long  foo(long long n) {

    if(n>1) {
        if(n%2==0) return n+foo(n-1);

        else return -n+foo(n-1);
    } 
    else {
        return -1;
    }
}

*/
//რეკურსია არ მუშაობს, დროის ლიმიტი არ ყოფნის, სხვა მხრივ სწორი კოდია რეკურსიითაც, მარა ალგორითმი ასეთია: 
//ყოველი კენტი აკლდება, ლუწი კი ემატება, ხოდა თუ n ლუწია, მაშინ მთლიანი ჯამი n/2 -ის ტოლია, n=4 ans=2; n=8 ans=4;
//თუ კენტია, ამ შემთხვევაშეი -n+n/2  იქნება, მაგალითად n=5 ans=-3; n=15 ans=-8;
main() {
    long long n;
    cin>>n;
    //cout<<foo(n)<<endl;
    if(n%2==0) cout<<n/2<<endl;
        else cout<<-n+n/2<<endl;
}