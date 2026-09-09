x = list(map(int, input().split()))
y = list(map(int, input().split()))

for i in range(5):

    tx = [
        x[(i - 1) % 5],
        x[i],
        x[(i + 1) % 5]
    ]

    for j in range(5):

        ty = [
            y[(j - 1) % 5],
            y[j],
            y[(j + 1) % 5]
        ]


        number = 0

        for k in range(3):
            digit = (tx[k] + ty[k]) % 10
            number = number * 10 + digit

        if number % 6 == 0:
            print("Boro joloo :)")
            exit()

print("Gir oftadi :(")