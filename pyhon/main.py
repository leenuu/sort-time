import time

import set_data
import bubble_sort
import quick_sort

def test():
    return 1

random_list = set_data.load_random_list()
result_list = list()
result_bubble = 0
result_quick = 0
print(len(random_list[0]))
# for i in range(0,10):
#     start = time.time()
#     result_list.append(bubble_sort.bubble(random_list[i]))
#     end = time.time()

#     print(f"{end - start}초")

#     result_bubble = result_bubble + (end - start)

# for i in range(0,10):
#     start = time.time()
#     result_list.append(quick_sort.quick(random_list[i], 0, set_data.Max_Len - 1))
#     end = time.time()

#     print(f"{end - start}초")

#     result_quick = result_quick + (end - start)

# print(f'평균 버블 정렬 속도 {float(result_bubble/10)} 초')
# print(f'평균 퀵 정렬 속도 {float(result_quick/10)} 초')

