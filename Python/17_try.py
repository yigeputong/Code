try:
    print("===========================")
    user_weight=float(input("请输入您的体重：(kg)"))
    user_height=float(input("请输入您的身高：(m)"))
    print("===========================")
    print("正在计算BMI...")
    user_BMI=user_weight/user_height**2
except ValueError:
    print("===========================")
    print('请输入正确的数字!')
    print('重启程序!')
    print("===========================")
except ZeroDivisionError:
    print("===========================")
    print('你是二维生物吗?')
    print('重启程序!')
    print("===========================")
except:
    print('未知错误!')
    print('重启程序!')
else:
    print("===========================")
    print("您的BMI是:"+str(user_BMI))
    if user_BMI<=18.5:
       print('您的BMI值属于偏瘦!')
    elif 18.5<user_BMI<=25:
       print('您的BMI值属于正常!')
    elif 25<user_BMI<=30:
       print('您的BMI值属于偏胖!')
    else:
      print('您的BMI值属于肥胖!')
    print("===========================")