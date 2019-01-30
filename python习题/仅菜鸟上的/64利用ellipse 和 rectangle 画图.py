# 64.题目：利用ellipse 和 rectangle 画图。

'''
if __name__ == '__main__':
    from tkinter import *
    canvas = Canvas(width = 400,height = 600,bg = 'white')
    left = 20
    right = 50
    top = 50
    num = 15
    for i in range(num):
        canvas.create_oval(250 - right,250 - left,250 + right,250 + left)
        canvas.create_oval(250 - 20,250 - top,250 + 20,250 + top)
        canvas.create_rectangle(20 - 2 * i,20 - 2 * i,10 * (i + 2),10 * ( i + 2))
        right += 5
        left += 5
        top += 10

    canvas.pack()
    mainloop()
'''
if __name__=='__main__':
     from tkinter import *
     canvas = Canvas(width=500,height=600,bg='pink')
     canvas.pack()
     canvas.create_oval(200,200,400,600,dash=(3,5))
     canvas.create_rectangle(88,78,300,200,dash=(3,4),width=2,fill='red')
     #canvas.pack()
     mainloop()
    
