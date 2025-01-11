class PersonNode:
    def __init__(self, name:str, age:int):
        self.name = name
        self.age = age

    def eat(self, food_name:str):
        print(f"{self.name}, {self.age} years old, like eating {food_name}")


def main():
    person = PersonNode("Tom", 20)
    person.eat("apple")