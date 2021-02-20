import random




def randomizer():
    picker = ['Bitch', 'Hyperz', 'Smirf', 'Memes']
    decision = random.choice(picker)
    decider(decision=decision)


def decider(decision):
    if decision == "Hyperz":
        print("no")
    elif decision=="Bitch":
        print("Hello World")
    elif decision=="Smirf":
        print("Iz Cool")
    elif decision=="Memes":
        print("Never gonna give you up")
        print("Never gonna let you down")
        print("Never gonna run around and desert you")
        print("Never gonna make you cry")
        print("Never gonna say goodbye")
        print("Never gonna tell a lie and hurt you")


randomizer()