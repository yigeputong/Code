def calculate_BMI(weight,height):
    user_BMI=weight/height**2
    if user_BMI<=18.5:
        category=('偏瘦')
    elif user_BMI<=25:
        category=('正常')
    elif user_BMI<=30:
        category=('偏胖')
    else:
        category=('肥胖')
    print(f'您的BMI分类为:{category}')
    return(user_BMI)
print("===========================")
height=float(input('身高:'))
weight=float(input('体重:'))
user_BMI=calculate_BMI(weight,height)
print('BMI为:'+str(user_BMI))
print("===========================")