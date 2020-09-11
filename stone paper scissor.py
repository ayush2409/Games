// This game is only for entertainment purpose 
// Code credits goes to Mridul Rastogi
// have fun playing the game 


import random
opt = ["stone","paper","scissor"]
p=c=0
print("STONE PAPER SCISSOR!!!")
while(p!=5 or c!=5):
    a = input("Enter weapon : ")
    b = random.choice(opt)
    if (a=="stone" and b=="stone") or (a=="paper" and b=="paper") or (a=="scissor" and b=="scissor"):
        p,c = p,c
    elif (a=="stone" and b=="paper") or (a=="paper" and b=="scissor") or (a=="scissor" and b=="stone"):
        c=c+1
    elif (a=="stone" and b=="scissor") or (a=="paper" and b=="stone") or (a=="scissor" and b=="paper"):
        p=p+1
    print(" vs ",b," => You = ",p," & Computer = ",c)
    if(p==5):
        print("Congratulations...You Win!!!")
        exit()
    elif(c==5):
        print("Computer Wins!!!")
        exit()
