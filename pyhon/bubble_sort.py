import set_data

def bubble(arr):

    while(True):
        err = 0
        for i in range(0, set_data.Max_Len - 1):
            if arr[i] < arr[i+1]:
                continue
            
            elif arr[i] > arr[i+1]:
                temp = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = temp

                err = err + 1
        print(f"                 \r오류 수: {err}", end='')
        if err == 0:
            break
        
    return arr

