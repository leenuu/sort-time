import random

Max_Len = 100000

def make_random_list():
    arr = list(range(1,Max_Len + 1))
    for i in range(1, 11):
        random.shuffle(arr)
        with open(f"data\\{i}.txt", 'w') as f:
            st = ''
            for l in range(len(arr)):
                if l == len(arr) - 1:
                    st += str(arr[l])
                else:
                    st += str(arr[l]) + '\n'
                
            f.write(st)
    

def load_random_list():
    random_arr = list()

    for i in range(1,11):
        arr = list()
        with open(f"data\\{i}.txt", 'r') as f:
            for i in range(Max_Len):
                arr.append(int(f.readline()))

        random_arr.append(arr)
    return random_arr

