#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// 1. A vectorunun maksimum elementi ilə sonuncu elementin yerlərini dəyişin. 
// 2. Maksimum elementin indexini cap edin. 
int main() {
//     vector<int> a = {1, 2, 3, 10, 4, 5, 6, 7, 8, 9};
//     int index_of_max = 0;

//     for (int i = 1; i < a.size(); i++) {
//         if (a[i] > a[index_of_max]) {
//             index_of_max = i;
//         }
//     }

//     swap(a[index_of_max], a.back());

//     for (int x = 0; x < a.size(); x++) {
//         cout << a[x] << " ";
//     }
//     cout << endl;

//     cout << "Maximum elementin indexi : " << index_of_max << "\n";

    // 3. Vector-un maskimum elementi neçərəqəmli ədəddir? 
    // 4. Vector-un maksimum elementinin tərkibində 7 rəqəmi varmı?
    // vector<int> b = {111, 112, 113, 211, 347, 65, 13, 2, 54};
    // int max_index = 0;  

    // for (int i = 1; i < b.size(); i++) {
    //     if (b[i] > b[max_index]) {
    //         max_index = i; // maks elementin indeksini tapdiq
    //     }
    // }

    // string eded = to_string(b[max_index]);
    // int size = eded.size();
    // cout << "Maksimum eded " << size << " reqemlidir" << "\n"; // 1

    // int f = 0;
    // for (int i = 0; i < eded.size(); i++) { // 2
    //     if (eded[i] == '7') {
    //         f++;
    //     }
    // }

    // if (f >= 1) {
    //     cout << "Maks elementin terkibinde 7 var" << "\n";
    // }


    // 5. N ədədinin sadə vuruqlarını A vector-una yazın.
    vector<int> A = {};
    // int n;
    // cout << "N ededini daxil edin: ";
    // cin >> n;
    // for (int i = 2; i <= n; i++){
    //     while (n%i == 0){
    //         A.push_back(i);
    //         n = n / i;
    //     }
    // }
    // cout << "N ededinin sade vuruqlari: ";
    // for (int i = 0; i < A.size(); i++) {
    //     cout << A[i] << " ";
    // }
    // cout << endl;


    // 6. A vector-nun tərkibindəki bütün elementlər tək ədədlərdirmi? ---- 7. A vector-nun tərkibindəki bütün elementlər cut ədədlərdirmi?
    // vector <int> aa = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // int cut_say = 0;
    // int tek_say = 0; 
    // for( int x : aa){
    //     if (x % 2 == 0){
    //         cut_say++;
    //     }
    //     else{
    //         tek_say++;
    //     }
    // }
    // if (cut_say == aa.size()){
    //     cout << "AA vektorunda butun elementler cut  ededlerdir"<<"\n";
    // }
    // else if(tek_say == aa.size()){
    //     cout << "AA vektorunda butun elementler tek ededlerdir"<<"\n";
    // }
    // else{
    //     cout << "AA vektorunda hem cut, hem tek elementler var"<<"\n";
    // }

    // 8. Verilmiş n ədədindən ibarət vektorun bütün elementlərini ekrana çıxart.
    // vector <int> aa = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // for(int i = 0; i < aa.size(); i++){
    //     cout << aa[i]<< " ";
    // }
    // cout << endl;

    // // 9. Vektorun elementlərinin cəm və hasilini tap.
    // int sum = 0; 
    // int p = 1;
    // for(int i = 0; i < aa.size(); i++){
    //     sum = sum + aa[i];
    //     p = p * aa[i];
    // }
    // cout << "Cem: " << sum << ", Hasil: " << p << endl;

    // 10. Vektordakı yalnız cüt elementləri çıxart və yeni vektorda saxla. // 11 Vektordakı yalnız tək elementləri çıxart və yeni vektorda saxla.
    // vector <int> aa = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // vector <int> cut = {};
    // vector <int> tek = {};
    // int cut_say = 0;
    // int tek_say = 0; 
    // for( int x : aa){
    //     if (x % 2 == 0){
    //         cut.push_back(x);
    //     }
    //     else{
    //         tek.push_back(x);
    //     }
    // }
    // //cap edirik
    // for(int x : cut) cout << x << " ";
    //     cout << endl;
    // for(int x : tek) cout << x << " ";
    // cout << endl;

    // 12. Vektordakı elementləri tərsinə çevir (reverse istifadə etmə, özün dövr yaz).
    // vector <int> c = {1, 2, 3, 4, 5};
    // vector  <int> new_c = {};
    // // 1 ci usul
    // for (int x = c.size() - 1 ; x >= 0; x--){
    //     new_c.push_back(c[x]);
    // }
    // for(int x : new_c) cout << x << " ";
    // cout << endl;
    // //2 ci usul 
    // int n = c.size();
    // for(int i = 0; i < n / 2; i++){
    //     swap(c[i], c[n - 1 - i]);
    // }

    // for(int x : c) cout << x << " ";
    // cout << endl;


    // 13. Vektorda ən böyük və ən kiçik elementi tap
    // vector <int> d = {3, 7, 1, 11, 5, 9, 2, 6, 10, 8, 4};
    // int max = d[0];
    // int min = d[0];
    // for (int x = 1; x < d.size(); x++){
    //     if (max < d[x]){
    //         max = d [x];
    //     }
    //     if(min > d[x]){
    //         min = d[x];
    //     }
    // }
    // cout << "Max: " << max << ", Min: " << min << endl;

    // 14. Vektordakı bütün elementləri artan və azalan sırada düz.
    // #include <algorithm> 

    // vector <int> d = {3, 7, 1, 11, 5, 9, 2, 6, 10, 8, 4};

    // // artan sıra
    // sort(d.begin(), d.end());
    // for(int x : d) cout << x << " ";
    // cout << endl;

    // // azalan sıra
    // sort(d.rbegin(), d.rend());
    // for(int x : d) cout << x << " ";
    // cout << endl;


    // // 15. Vektorda istifadəçi tərəfindən daxil edilən müəyyən ədədi axtar və tapılıb-tapılmadığını göstər.
    // vector <int> d = {3, 7, 1, 11, 5, 9, 2, 6, 10, 8, 4};
    // int n; 
    // cout << "n ededini daxil et: ";
    // cin >> n;
    // int say = 0;
    // for(int x : d){
    //     if ( x == n){
    //         say ++;
    //     }
    // }
    // if ( say >= 1){
    //         cout << "eded vektorda tapildi";
    //     }
    //     else{
    //         cout << "eded vektorda tapilmadi";
    //     }

    
    // 16. Vektordan təkrarlanan elementləri sil (məsələn, {1, 2, 2, 3, 3, 3, 4} → {1, 2, 3, 4}).
    // vector <int> d = {1, 2, 2, 3, 3, 3, 4};
    // sort(d.begin(), d.end());
    // for(int x = 0 ; x< d.size()-1 ; x++){
    //     if (d[x] == d[x+1]){
    //         d.erase(d.begin() + x + 1);
    //         x--;
    //     }
    // }

    // for (int x : d){
    //         cout << x << " "; 
    //     }
    // cout << endl;

    // 17. İki vektoru birləşdirib (concatenate) yeni vektor yarat.
    // vector<int> a = {1, 2, 3};
    // vector<int> b = {4, 5, 6};

    // for(int x : b) {
    //     a.push_back(x);
    // }
    // for (int x : a){
    //         cout << x << " "; 
    //     }
    // cout << endl;

    // 18. Vector-un ikinci maksimum elementini tapın (vectoru sıralamadan).
    // vector <int> d = {3, 7, 1, 11, 5, 9, 2, 6, 10, 8, 4};
    // int max1 = d [0];
    // int index_of_max;
    
    // for (int i = 1; i < d.size(); i++){
    //     if(max1 < d[i]){
    //         max1 = d[i];
    //         index_of_max = i;
    //     }
    // }
    // d.erase(d.begin() + index_of_max); // maks elementi sildik 

    // int max2 = d[0];
    // for (int i = 1; i < d.size(); i++){
    //     if(max2 < d[i]){
    //         max2 = d[i];
    //     }
    // }
    // cout << max2;   


    // 19. Vector-da olan mənfi elementlərdən maksimum olanının göstərin
    // vector<int> w = {3, -7, 1, -11, 5, 9, -2, 6, 10, -8, 4};
    // vector <int> new_w = {};
    // for (int x : w){
    //     if ( x < 0){
    //         new_w.push_back(x);
    //     }
    // }
    // int max = new_w[0];
    // for(int i = 1; i < new_w.size(); i++){
    //     if(max < new_w[i]){
    //         max = new_w[i];
    //     }
    // }
    // cout << max;


    // 20.  Vector-da olan müsbət elementlərdən minimum olanının göstərin.
    // vector<int> w = {3, -7, 1, -11, 5, 9, -2, 6, 10, -8, 4};
    // vector <int> new_w = {};
    //  for (int x : w){
    //     if ( x > 0){
    //         new_w.push_back(x);
    //     }
    // }
    // int min= new_w[0];
    // for(int i = 1; i < new_w.size(); i++){
    //     if(min > new_w[i]){
    //         min = new_w[i];
    //     }
    // }
    // cout << min; 


    // 21. N ədədinin rəqəmlərini vector-a yazın və böyükdən kiçiyə doğru sıralayın.
    // int n; //58963217
    // cout << "n ededini daxil edin: ";
    // cin >> n;
    // vector <int> nn = {};
    // string a = to_string(n);
    // for (char x : a){
    //     nn.push_back(x - '0');
    // }
    // sort(nn.begin(), nn.end(), greater<int>());
    // for (int x : nn) {
    //     cout << x << " ";
    // }

    // 22. Vector-un minimum elementi ilə maksimum elementinin yerlərini dəyişin.
    // vector<int> v = {3, 7, 1, 11, 5, 9, 2, 6, 10, 8, 4};

    // int min_index = 0;
    // int max_index = 0;

    // for (int i = 1; i < v.size(); i++) {
    //     if (v[i] < v[min_index]) {
    //         min_index = i;
    //     }
    //     if (v[i] > v[max_index]) {
    //         max_index = i;
    //     }
    // }
    // swap(v[min_index], v[max_index]);
    // for (int x : v) cout << x << " ";

    // // 23. P vector-unun mənfi elementlərini B vector-una yazın. B vector-unu sıralayın.
    // vector<int> P = {3, -5, 7, -2, 0, 8, -9, 4};
    // vector<int> B;

    // for (int x : P) {
    //     if (x < 0) B.push_back(x);
    // }

    // sort(B.begin(), B.end()); // kiçikdən böyüyə sıralama

    // for (int x : B) cout << x << " ";
    // cout << endl;

    // 24. P vector-unun müsbət elementlərini B vector-una yazın. B vector-unu sıralayın.
    vector <int> P = {3, -5, 7, -2, 0, 8, -9, 4};
    vector <int> B;
    for (int x : P) {
        if (x > 0) {
            B.push_back(x);
        }
    }
    sort(B.begin(), B.end());
    for (int x : B) {
        cout << x << " ";
    }
    cout << endl;
}


    