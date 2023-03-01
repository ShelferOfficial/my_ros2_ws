
while True:
    print("outside")
    count = 0
    while True:
        print("inside")
        count += 1
        if count == 5:
            break
