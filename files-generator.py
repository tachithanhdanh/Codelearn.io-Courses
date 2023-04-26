path = input("Please input the path to generate files: ")
start, end = map(int, input("Please input the starting and ending number of exercise: ").split())

for i in range(start, end + 1):
    f = open(path + "\\exercise-" + str(i) + ".cpp", "x")
