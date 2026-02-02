#Mariyam Zagral
#251P084

print("Mariyam")
print("251P084")

cet_students = {"John", "Alice", "Bob"}
jee_students = {"Alice", "Charlie", "David"}
neet_students = {"Eve", "Bob", "Alice"}

all_students = cet_students.union(jee_students, neet_students)
print("All Students:", all_students)

intersection_students = cet_students.intersection(jee_students)
print("Students appearing for both CET and JEE:", intersection_students)

intersection_students = jee_students.intersection(neet_students)
print("Students appearing for both JEE and NEET:", intersection_students)

intersection_students = cet_students.intersection(neet_students)
print("Students appearing for both CET and NEET:", intersection_students)

cet_not_jee = cet_students.difference(jee_students)
print("Students appearing only for CET:", cet_not_jee)

cet_not_neet = cet_students.difference(neet_students)
print("Students appearing only for CET:", cet_not_neet)

jee_not_cet = jee_students.difference(cet_students)
print("Students appearing only for JEE:", jee_not_cet)

jee_not_neet = jee_students.difference(neet_students)
print("Students appearing only for JEE:", jee_not_neet)

neet_not_cet = neet_students.difference(cet_students)
print("Students appearing only for NEET:", neet_not_cet)

neet_not_jee = neet_students.difference(jee_students)
print("Students appearing only for NEET:", neet_not_jee)
