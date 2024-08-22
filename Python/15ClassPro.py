class Employee:
    def __init__(self,name,id):
        self.name=name
        self.id=id
    def print_info(self):
        print(f'员工姓名:{self.name}')
        print(f'员工工号:{self.id}')

class FullTimeEmployee(Employee):
    def __init__(self,name,id,monthly_salary):
        super().__init__(name,id)
        self.monthly_salary=monthly_salary
    def calculate_monthly_pay(self):
        return self.monthly_salary

class PartTimeEmployee(Employee):
    def __init__(self,name,id,daily_salary,work_days):
        super().__init__(name,id)
        self.daily_salary=daily_salary
        self.work_days=work_days

    def calculate_monthly_pay(self):
        return self.daily_salary*self.work_days
    
zhangsan=FullTimeEmployee('张三','1001',6000)
lisi=PartTimeEmployee('李四','2001',230,15)
zhangsan.print_info()
print(zhangsan.calculate_monthly_pay())
lisi.print_info()
print(lisi.calculate_monthly_pay())