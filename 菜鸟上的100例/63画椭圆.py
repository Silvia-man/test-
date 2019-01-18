# 63.题目：画椭圆。　

'''
if __name__ == '__main__':
    from tkinter import *
    x = 360
    y = 160
    top = y - 30
    bottom = y - 30
    
    canvas = Canvas(width = 400,height = 600,bg = 'white')
    for i in range(20):
        canvas.create_oval(250 - top,250 - bottom,250 + top,250 + bottom)
        top -= 5
        bottom += 5
    canvas.pack()
    mainloop()
'''

if __name__=='__main__':
    from tkinter import *
    
    x=300
    y=100
    top=y-30
    bottom=y-30

    canvas=Canvas(width = 300,height =300,bg = 'yellow')
    canvas.create_oval(30,30,80,190,fill='green')
    canvas.pack()
    mainloop()
