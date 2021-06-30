def next_palin(n):
    while True:
        if str(n)==str(n)[::-1]:
            return n
n= int(input('enter number'))
print(next_palin(n))
