# Name:Mariyam Zagral
# UIN: 251P084
print("Mariyam Zagral")
print("UIN: 251P084")
print("Word Length Filter from file")
file_path = "sample.txt"
length = int(input("Enter the word length to filter:"))

with open(file_path, 'r') as file:
    content = file.read()
    words = content.split()

filtered_words = []
for word in words :
    if len(word) == length:
        filtered_words.append(word)

print(f"words of length {length}:")
for word in filtered_words:
    print(word)
