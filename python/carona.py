import math
def end_corona(recover,new,active):
    days = active/(recover-new)
    print(math.ceil(days))

end_corona(4000, 2000, 77000)
end_corona(3000, 2000, 50699)
end_corona(30000, 25000, 390205)