class Student:
    def __init__(self,name,student_id):
        self.name=name
        self.student_id=student_id
        self.grades={'语文':0,'数学':0,'英语':0}
    def set_grade (self,course,grade):
        if course in self.grades:
            self.grades[course]=grade
    def print_grade (self):
        print(f'学生{self.name}(学号:{self.student_id})的成绩是:')
        for course in self.grades:
            print(f'{course}:{self.grades[course]}分')
print("===========================")
chen=Student('小陈','5-2-02')
zeng=Student('小曾','5-2-17')
print(chen.name)
zeng.set_grade('数学',95)
print(zeng.grades)
chen.print_grade()
print("===========================")