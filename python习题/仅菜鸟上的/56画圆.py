# 56.题目：画图，学用circle画圆形。　　　


if __name__ == '__main__':
    from tkinter import *
 
    canvas = Canvas(width=800, height=600, bg='pink')  
    #canvas.pack(expand=YES, fill=BOTH)
    canvas.pack() 
    k = 1
    j = 2
    for i in range(26):
        canvas.create_oval(300 - k,250 - k,300 + k,250 + k, width=2)
        k += j
        j += 3
 
    mainloop()
