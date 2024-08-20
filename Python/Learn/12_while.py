print("===========================")
total=0
count=0
result=0
user_input=0
print('我是一个求平均值的程序')
user_input=input('请输入数字：(按q停止)')
while user_input!='q':
    num=float(user_input)
    total+=num
    count+=1
    user_input=input('请输入数字：(按q停止)')
if count!=0:
    result=total/count
print('您输入的数字平均值为:'+str(result))
print("===========================")