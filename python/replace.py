
def fun(s,sl,ch1,ch2):
    r= s.replace(ch1,"*")
    print(r)
    y= r.replace(ch2,ch1)
    print(y)
    p= y.replace("*",ch2)
    print(p)
fun("Hello",5,"l","o")