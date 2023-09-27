# coding=gbk

#输入描述：
#无
#输出描述：
#一行输出字符串Hello World!

#print('Hello World!')


#输入描述：
#无
#输出描述：
#第一行输出字符串Hello World!，第二行输出字符串Hello Nowcoder!

#str1="Hello World!"
#str2="Hello Nowcoder!"
#print(str1)
#print(str2)

#print(str1+"\n"+str2)

#print(str1,str2,sep='\n')


#输入描述：
#输入一行字符串。
#输出描述：
#将读入的变量输出。

#print(input())


#输入描述：
#输入只有整数。
#输出描述：
#将输入的数字输出，同时换行输出变量类型。

#a=int(input())
#print(a)
#print(type(a))

#输入描述：
#一行一个字符串表示名字。
#输出描述：
#假设输入的name为Niuniu，则输出I am Niuniu and I am studying Python in Nowcoder!
#请按以上句式输出相应的英文句子。

#a=input()
#if(a=='Niuniu'):
#    print('I am Niuniu and I am studying Python in Nowcoder!')
#elif(a=='Niumei'):
#    print('I am Niumei and I am studying Python in Nowcoder!')
#elif(a=='Niu Ke Le'):
#    print('I am Niu Ke Le and I am studying Python in Nowcoder!')


#输入描述：
#读入一个浮点类型小数。
#输出描述：
#保留两位小数输出。

#a=float(input())
#print("%.2f" %a)


#输入描述：
#输入一个浮点小数。
#输出描述：
#输出将其强制类型转换为int后的结果。

#a=float(input())
#a=int(a)
#print(a)


#输入描述：
#输入一个整数。
#输出描述：
#输出强制类型转换后的结果，换行再输出变量类型。

#a=float(int(input()))
#print(a)
#print(type(a))

#输入描述：
#input读入一个十六进制数字，按照字符串的形式包括数字0-9、字母A-F。
#输出描述：
#输出读入数字的十进制大小。

#a=input()
#print(int(a,16))

#a=5
#b=1.000
#c='true'
#d='daijie'
#print(type(a),type(b),type(c),type(d))


#a=input()
#int(a)
#print(a)
#print(type(a))

#name=input('请输入姓名：')
#age=input('请输入年龄：')
#print('姓名是：',name,'\t年龄：',age)
#print(type(name),type(age))


#请分别按全小写、全大写和首字母大写的方式对name进行格式化输出（注：每种格式独占一行）。
#a=input()
#print(a.lower())
#print(a.upper())
#print(a.title())

#输入描述：
#一行一个字符串表示名字name（注：name两边带有一些多余的空白符）。
#输出描述：
#一行输出name去掉两边的空白符后的原本的内容。

#输入描述：
#输入一个字符串。
#输出描述：
#输出重复100次之后的字符串，字符串之间没有间隔。
#a=input()
#print(a*100)

#offer=['Allen','Tom']
#for i in offer:
#    print('%s, you have passed our interview and will soon become a member of our company.'.format(i))

#字符串处理常用函数小汇总
text=input()
#print(text.upper())#按大写字母打印
#print(text.lower())#按小写字母打印
#print(text.title())#按大写首字母打印
#print(text.capitalize())#按大写第一个字母打印
#print(text.swapcase())#交换大小写

