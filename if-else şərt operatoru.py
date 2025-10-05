#1. n - dəyişəninin 5 olmasını yoxlayan program tərtib edin (yes or no)
n = int(input("n ədədini daxil edin: "))
if n == 5:
    print("yes")
else:
    print("no")

#2. a və b dəyişənlərinin bərabər olmasını yoxlayan proqram tərtib edin (Yes və ya NO)
a = int(input("a ədədini daxil edin: "))
b = int(input("b ədədini daxil edin: "))
if a == b:
    print("Yes")        
else:
    print("NO")

#3. a dəyişəninin cüt olmasını yoxlayan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
if a % 2 == 0:
    print("a ədədi cütdür")
else:
    print("a ədədi təkdir")

#4. a dəyişəninin 3-ə bölünməsini yoxlayan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
if a % 3 == 0:
    print("a ədədi 3-ə bölünür")
else:
    print("a ədədi 3-ə bölünmür")

#5. a dəyişəninin 0-dan fərqli olmasını yoxlayan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
if a != 0:
    print("a ədədi 0-dan fərqlidir")
else:
    print("a ədədi 0-dır")

#6. a dəyişəninin mənfi olmasını yoxlayan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
if a < 0:
    print("a ədədi mənfidir")
else:
    print("a ədədi mənfi deyil")

#7. a dəyişəninin b dəyişənindən böyük olmasını yoxlayan proqram tərtib edin.
A = int(input("A ədədini daxil edin: "))
B = int(input("B ədədini daxil edin: "))
if A > B:
    print("A ədədi B ədədindən böyükdür")
else:
    print("A ədədi B ədədindən böyük deyil")

#8. a dəyişəninin müsbət, mənfi və ya sıfır olmasını yoxlayan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
if a > 0:
    print("a ədədi müsbətdir")
elif a < 0:
    print("a ədədi mənfidir")   
else:
    print("a ədədi sıfırdır")

#9. a dəyişəninin mənfi və ya sıfır olmasını yoxlayan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
if a < 0:
    print("a ədədi mənfidir")
elif a == 0:
    print("a ədədi sıfırdır")
else:
    print("a ədədi müsbətdir")
    
#10. Üçrəqəmli ədədin onluq və yüzlük mərtəbədə olan rəqəmləri bərabərdirmi?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
onluq = (n // 10) % 10
yuzluk = n // 100
if onluq == yuzluk:
    print("Bərabərdir")
else:
    print("Bərabər deyil")

#11. Üçrəqəmli ədədin təkik və yüzlük mərtəbədə olan rəqəmləri fərqlidirmi?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
teklik = n % 10
yuzluk = n // 100
if teklik != yuzluk:
    print("Fərqlidir")
else:
    print("Fərqli deyil")

#12. Üçrəqəmli ədəd polindromdurmu (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
yuzluk = n // 100
teklik = n % 10
if yuzluk == teklik:
    print("Yes")
else:
    print("NO")

#13. Üçrəqəmli ədəd armstrong ədədidirmi (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
yuzluk = n // 100
onluq = (n // 10) % 10
teklik = n % 10
if (yuzluk**3 + onluq**3 + teklik**3) == n:
    print("Yes")
else:
    print("NO")

#14. Üçrəqəmli ədəd kvadrat ədədidirmi (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
root = int(n**0.5)
if root == int(root):
    print("Yes")
else:
    print("NO")

#15. Kvadrat tənliyin hallarini tapan proqram tərtib edin.
a = int(input("a ədədini daxil edin: "))
b = int(input("b ədədini daxil edin: "))
c = int(input("c ədədini daxil edin: "))
D = b**2 - 4*a*c
if D > 0:
    print("İki həlli var")
elif D == 0:
    print("Bir həlli var")
else:
    print("Həlli yoxdur")

#16. Verilmiş a, b və c parçalarından üçbucaq düzəltmək olarmı (Yes və ya NO)?
a = int(input("a ədədini daxil edin: "))
b = int(input("b ədədini daxil edin: "))
c = int(input("c ədədini daxil edin: "))
if a + b > c and a + c > b and b + c > a:
    print("Yes")
else:
    print("NO")

#17. Verilmiş a, b və c parçalarından düzbucaqlı üçbucaq düzəltmək olarmı (Yes və ya NO)?
a = int(input("a ədədini daxil edin: "))
b = int(input("b ədədini daxil edin: "))
c = int(input("c ədədini daxil edin: "))
if a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2:
    print("Yes")
else:
    print("NO")

#18. [10, 20] intervalında verilmiş ədədin bölənlərini göstərin.
n = int(input("Ədəd daxil edin: "))
if 10 <= n <= 20:
    print("Bölənləri:")
    for i in range(1, n + 1):
        if n % i == 0:
            print(i)
else:
    print("Ədəd [10, 20] intervalında deyil")

#19. Eni və hündürlüyü a, b olan qapidan dan ölçüləri x, y ve z olan dolabi kecirmek olur mu (Yes və ya NO)?
a = int(input("Qapının eni: "))
b = int(input("Qapının hündürlüyü: "))
x = int(input("Dolabın eni: "))
y = int(input("Dolabın hündürlüyü: "))
z = int(input("Dolabın dərinliyi: "))
if (x <= a and y <= b) or (x <= b and y <= a) or (x <= a and z <= b) or (x <= b and z <= a) or (y <= a and z <= b) or (y <= b and z <= a):
    print("Yes")
else:
    print("NO")

#20. Üçrəqəmli ədədin bütün rəqəmləri eynidirmi (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
yuzluk = n // 100
onluq = (n // 10) % 10
teklik = n % 10
if yuzluk == onluq == teklik:
    print("Yes")
else:
    print("NO")

#21. Üçrəqəmli ədədin rəqəmlərinin cəmi kvadrat ədədidirmi (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
yuzluk = n // 100
onluq = (n // 10) % 10
teklik = n % 10
sum = yuzluk + onluq + teklik
root = int(sum**0.5)
if root == int(root):
    print("Yes")
else:
    print("NO")

#22. Üçrəqəmli ədədin rəqəmləri artan sıra ilə düzülmüşdürmü (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
yuzluk = n // 100   
onluq = (n // 10) % 10
teklik = n % 10
if yuzluk < onluq < teklik:
    print("Yes")
else:
    print("NO")

#23. Dördrəqəmli ədədin ele bir reqemini silin ki, yerde qalan ucreqemli eded maksimum olsun. 
n = int(input("Dördrəqəmli ədəd daxil edin: "))
minlik = n // 1000
yuzluk = (n // 100) % 10
onluq = (n // 10) % 10
teklik = n % 10
if minlik <= yuzluk and minlik <= onluq and minlik <= teklik:
    print(f"Yerdə qalan üçrəqəmli ədəd: {yuzluk*100 + onluq*10 + teklik}")
elif yuzluk <= minlik and yuzluk <= onluq and yuzluk <= teklik:
    print(f"Yerdə qalan üçrəqəmli ədəd: {minlik*100 + onluq*10 + teklik}")
elif onluq <= minlik and onluq <= yuzluk and onluq <= teklik:
    print(f"Yerdə qalan üçrəqəmli ədəd: {minlik*100 + yuzluk*10 + teklik}")
else:
    print(f"Yerdə qalan üçrəqəmli ədəd: {minlik*100 + yuzluk*10 + onluq}")

#24.Dordreqemli ədədin fibonacci ardıcıllığına aid olmasını yoxlayan proqram tərtib edin (Yes və ya NO)? 
n = int(input("Dördrəqəmli ədəd daxil edin: "))
minlik = n // 1000
yuzluk = (n // 100) % 10
onluq = (n // 10) % 10
teklik = n % 10
if (minlik + yuzluk == onluq) and (yuzluk + onluq == teklik):
    print("Yes")
else:
    print("NO")

#25. Üçrəqəmli ədədin yüzlük mərtəbədə olan rəqəmi cüt ədədidirmi (Yes və ya NO)?
n = int(input("Üçrəqəmli ədəd daxil edin: "))
yuzluk = n // 100
if yuzluk % 2 == 0:
    print("Yes")
else:
    print("NO")

