#Mariyam Zagral
#251P084

print("Mariyam")
print("251P084")

task_list = [
    ("Task 1", "2025-02-06", "High"),
    ("Task 2", "2025-02-07", "Medium"),
    ("Task 3", "2025-02-08", "Low"),
]

print("Initial Task")
print(task_list)

new_task = ("Task 4", "2025-02-09", "High")
task_list.append(new_task)
print(task_list)

task_list.remove(task_list[1])
print(task_list)

task_list[1] = ("Task 3", "2025-02-08", "High")
print(task_list)

task_list.sort()
print(task_list)

print("\n Updated Task List")
print(task_list)
