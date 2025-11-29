#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// 1.  stack<int> yaradın. 10, 20, 30 ədədlərini əlavə edin. Ən yuxarı elementi çap edin, birini çıxarın və olcusunu gosterin.
int main() {
    stack<int> s; // LIFO
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << "\n";
    s.pop();
    cout << s.size() << "\n";

    // Bir neçə elementli std::stack<double> yaradın. Boşalana qədər çıxarın və hər elementi çap edin.
    stack<double> m;
    m.push(1.01);
    m.push(4.65);
    m.push(6.345);
    m.push(7.8);

    while (m.size() != 0) {
        cout << m.top() << " ";
        m.pop();                 
    }
    cout << endl;
    

    // 3. Sözüdaxil edin, hər simvolu stack-a əlavə edin və tərsinə çap edin.
    string soz;
    cout << "Sozu daxil et: "; // sona
    cin >> soz ;
    stack <char> sozun_simvollari;
    for (char i : soz){
        sozun_simvollari.push(i); // s o n a
    }
    cout << "Sozun tersi: "; 
    while (sozun_simvollari.size() != 0) {
        cout << sozun_simvollari.top(); // a n o s
        sozun_simvollari.pop();                 
    }   
    cout << endl;
    

    // 4. Stack boş deyilsə, top() elementini iki dəfə çap edin (yığından silmədən).
    stack <int> n; 
    n.push (18);
    n.push(21);
    n.push(8);
    if (n.size() != 0) {
        cout << n.top() << " "; 
        cout << n.top() << endl; 
    }

    // 5. Yığının elementlərinin cəmini tapın, amma yığın sonunda dəyişməməlidir.
    stack <int> p; 
    p.push (18);
    p.push(21);
    p.push(8);
    int sum = 0;
    stack<int> new_p;
    int size = p.size(); 

    for (int i = 0; i < size; i++) {
        sum += p.top();
        new_p.push(p.top());
        p.pop();
    }

    for (int i = 0; i < size; i++) { // elementleri geri qaytar
        p.push(new_p.top());
        new_p.pop();
    }
    cout << "Cemi: " << sum << endl;


    // 6. Yığındakı tək ədədlərin sayını tapın
    stack <int> y; 
    y.push (18);
    y.push(21);
    y.push(8);
    y.push(34);

    int num = 0;    
    while (y.size() != 0){
        if (y.top() %2 != 0){
            num ++ ;
        }
        y.pop();
    }
    cout << "Stackdaki tek ededlerin sayi: " << num << endl;
    


    // 7. Sual 7: Orijinal yığını dəyişdirmədən eyni nüsxəsini yaradın.
    stack <int> original;
    original.push(10);
    original.push(20);
    original.push(30);
    
    stack <int> copy;
    stack <int> temporary; 
    while (original.size() != 0){
        temporary.push(original.top());
        original.pop();
    }
    while (!temporary.empty()) {
        int x = temporary.top();  // en yuxaridaki elementi goturur
        temporary.pop();          // temporaryden onun cixarir
        original.push(x);         // originala elave edir 
        copy.push(x);             // copy e elave edir 
    }


    // 8. Müsbət ədədi səkkizlik say sisteminə çevirin 
    int eded = 78;
    stack <int> octal;

    while (eded > 0){
        octal.push(eded % 8);
         eded = eded/8;
    }
    while (!octal.empty()) {
        cout << octal.top();
        octal.pop();
    }
    cout << endl;


    // 9. Yığındakı maksimum ədədi tapın
    stack <int> r;
    r.push(18);
    r.push(21);
    r.push(8);
    r.push(34);
    stack <int> temp; 
    int max = r.top(); 

    while (r.size() > 0){
        if(max < r.top()){
            max = r.top();
        }
        temp.push(r.top());
        r.pop();
    }
    while (!temp.empty()) {
        r.push(temp.top());
        temp.pop();
    }
    cout << "Yigindaki maksimum eded: " << max << endl;

    // 10. Mötərizələrdən ibarət sətrin düzgün balansda olub-olmadığını yoxlayın
    string setir;
    cin >> setir; // (({(}))
    stack <char> k;

    for ( char c : setir){
        if (c == '(' || c == '{' || c == '[') {
            k.push(c);
        }
        else if (c == ')' || c == '}' || c == ']'){
            if (k.empty()) {
                cout << "Sətrin mötərizələri düzgün balansda deyil!" << endl;
                return 0;
            }
            char top = k.top();
            k.pop();
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                cout << "Sətrin mötərizələri düzgün balansda deyil!" << endl;
                return 0;
            }
        }
    }
    if (k.empty()) {
        cout << "Sətrin mötərizələri düzgün balansdadır." << endl;
    } else {
        cout << "Sətrin mötərizələri düzgün balansda deyil!" << endl;
    }

    

    // 11.  "A", "B", "C" elementlərini əlavə edin, front və back göstərin, birini çıxarın və ölçüsünüçap edin.
    queue<string> q;

    q.push("A");
    q.push("B");
    q.push("C");

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();

    cout << q.size() << endl;

    // 12 . Növbəni boşalana qədər çıxarın və elementləri çap edin.
    queue <int> w;
    w.push(1);
    w.push(2);
    w.push(3);
    w.push(4);
    w.push(5);
    while (!w.empty()){
        cout << w.front();
        w.pop();
    }

    // 13. Növbədə olan elementlərin ədədi ortasını tapın.
    queue<int> h;
    h.push(1);
    h.push(2);
    h.push(3);
    h.push(4);
    h.push(5);

    int cem = 0;
    int say = h.size();

    while (!h.empty()) {
        cem += h.front();
        h.pop();
    }
    int b = cem / say;
    cout << b;



    // 14. Növbənin ilk 3 elementini çıxarın və qalanları çap edin
    queue<int> v;   
    v.push(1);
    v.push(2);
    v.push(3);
    v.push(4);
    v.push(5);

    for (int i = 0; i < 3; i++) {
        v.pop();
    }
    while (!v.empty()) {
        cout << v.front() << " ";
        v.pop();
    }  

    // 15. Növbədən yalnız cüt ədədləri çıxarın və çap edin
    queue<int> z;
    z.push(1);
    z.push(2);
    z.push(3);
    z.push(4);
    z.push(5);
    for (int i = 0; i < z.size() ; i++) {
        int x = z.front();
        z.pop();
        if (x % 2 == 0) {
            cout << x << " "; 
        } else {
            z.push(x); // tek ededi yeniden novbeye qaytarir
        }
    }

    // 16. Növbədə 5 ədədinin neçə dəfə təkrarlanmasını tapın.
    queue<int> j;
    j.push(1);
    j.push(5);
    j.push(3);
    j.push(5);
    j.push(5);

    int count = 0;
    for (int i = 0; i < j.size(); i++) {
        int x = j.front();
        j.pop();
        if (x == 5) {
            count++;
        }
        j.push(x);
    }
    cout << count; 

    // 17. Stack istifadə edərək növbəni tərsinə çevirin.
    queue<int> novbe;
    novbe.push(1);
    novbe.push(2);
    novbe.push(3);
    novbe.push(4);
    novbe.push(5);

    stack<int> alma;

    while (!novbe.empty()) {
        alma.push(novbe.front());
        novbe.pop();
    }

    while (!alma.empty()) {
        novbe.push(s.top());
        alma.pop();
    }

    while (!novbe.empty()) {
        cout << novbe.front() << " ";
        novbe.pop();
    }


    // 18. Növbənin ilk elementini çıxarın və onun ən böyük olub-olmadığını yoxlayın.
    queue<int> novbe1;
    novbe1.push(3);
    novbe1.push(7);
    novbe1.push(2);
    novbe1.push(5);
    
    int first = novbe1.front();
    novbe1.pop();

    bool enBoyuk = true;
    for (int i = 0; i < novbe1.size(); i++) {
        int x = novbe1.front();
        novbe1.pop();
        if (x > first) {
            enBoyuk = false;
        }
        novbe1.push(x);
    }

    cout << "Ilk element: " << first << endl;
    if (enBoyuk) {
        cout << "Ilk element en boyukdur." << endl;
    } else {
        cout << "Ilk element en boyuk deyil." << endl;
    }


    // 19. Q1 və Q2 növbələrini birləşdirib Q3-ə əlavə edin.
    queue<int> Q1, Q2, Q3;

    Q1.push(1);
    Q1.push(2);
    Q1.push(3);

    Q2.push(4);
    Q2.push(5);
    Q2.push(6);

    while (!Q1.empty()) {
        Q3.push(Q1.front());
        Q1.pop();
    }

    while (!Q2.empty()) {
        Q3.push(Q2.front());
        Q2.pop();
    }

    while (!Q3.empty()) {
        cout << Q3.front() << " ";
        Q3.pop();
    }

    // 20. I_ki stack istifadə edərək push (enqueue) əməliyyatını nümayiş etdirin.
    stack<int> s1, s2;

    s1.push(1);
    s1.push(2);
    s1.push(3);

    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}   



