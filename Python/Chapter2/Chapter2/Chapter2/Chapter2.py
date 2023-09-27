# coding=gbk

#####################################
########第 2 章 变量和简单数据类型#########
#####################################


#print("Hello World!")

#a= "Hello World!"
#print(a)

#b="I love you"
#print(b)
#b="I don't love you!"
#print(b)

#user="Hello Eric, would you like to learn some Python today?"
##print(user)#原文打印
##print(user.title())#首字母大写打印
##print(user.upper())#大写打印
##print(user.lower())#小写打印

#print(b+"\n"+user+"\n")

#print('Albert Einstein once said, “A person who never made a mistake never tried anything new.”')

#famous_person ="Albert Einstein"
#message='“A person who never made a mistake never tried anything new.”'
#print(famous_person+" once said, "+message)

#name='\tTom\n'
#print(name)
#print(name.strip())
#print(name.lstrip())
#print(name.rstrip())

#print(3+5)
#print(9-1)
#print(2*4)
#print(8/1)

#num=8
#print('My favorative number is '+string(num)+'!')

#import this


#####################################
###########第 3 章 列表简介##############
#####################################

#name=['t','w','z','w']
#print(name[0]+', hello')
#print(name[1]+', hello')
#print(name[2]+', hello')
#print(name[3]+', hello')
#for i in name:
#    print(i+', hello')


#a=['a','v','e']
#print(a[0]+',welcome!')
#print(a[1]+',welcome!')
#print(a[2]+',welcome!')

#print(a[1]+' will not come!')
#a[1]='z'
#print(a[0]+',welcome!')
#print(a[1]+',welcome!')
#print(a[2]+',welcome!')

#a.append('xue')
#a.append('09')
#a.insert(0,'IAM')

#print(a)
#del a[1]
#name=a.pop(1)
#print(name)

#a.remove('a')
#print(a)
#a.insert(1,'A')
#print(a)
#print('only twos can come here!')
#name=a.pop()
#print(name+" I am sorry about that you can't com here")
#name=a.pop()
#print(name+" I am sorry about that you can't com here")
#print(a[0]+' welcome to my home!')
#print(a[1]+' welcome to my home!')
#del a[0]
#del a[0]
#print(a)
#print(len(a))

#a=['seoul','guangzhou','beijing','hengyang','shanghai']
#print(a)
#print(sorted(a))#以字母顺序的方式排序
#print(a)
#print(sorted(a,reverse=True))#以字母反顺序的方式排列
#print(a)
#a.reverse()#反着排序
#print(a)
#a.reverse()#反着排序
#print(a)
#a.sort()
#print(a)#永久排序
#a.sort()
#print(a)#永久排序
#print(len(a))

#list=['china','korea','japan','spansih','singapore']
#for lis in list:
#    print(lis)
#    print("it is a very beautiful country!")
#print('I want to go!')
#for lis in list:
#    print(lis)
#    print(lis+' is nice!')

#print('i like it!')

#for num in range(1,21):
#    print(num)

#lists=list(range(1,1000001))
##print(lists)
#print(min(lists))
#print(max(lists))
#print(sum(lists))

#lists=[]
#lists=range(1,20,2)
#for list in lists:
#    print(list)

#lists=[]
#lists=range(3,31,3)
#for list in lists:
#    print(list)

#lists=list(range(1,11))
#for list in lists:
#    print(list**3)

#lists=[value**3 for value in range(1,11)]
#print(lists)

#list=['china','korea','japan','spansih','singapore']
#print('The first three items in the list are:')
#print(list[0:3])
#print('Three items from the middle of the list are:')
#print(list[1:4])
#print('The last three items in the list are:')
#print(list[-3:])

#lists=['china','korea','japan','spansih','singapore']
#list1=list[:]
#lists.append('america')
#list1.append('french')
##print(list)
#for l in lists:
#    print(l)
##print(list1)
#for l1 in list1:
#    print(l1)

#countrys=('china','korea','japan','spansih','singapore')
#for country in countrys:
#    print(country)
#    #countrys[1]='french'
#countrys=('china','french','japan','spansih','singapore')
#for country in countrys:
#    print(country)

#cats='54'
#print('is cats 54,i predict True')
#print(cats=='54')

#dog='67'
#print('is cats 54,i predict True')
#print(dog=='54')

#if dog>'54':
#    print('right')
#alien_color='red'
#if alien_color=='green':
#    print('it is good')
#elif alien_color=='red':
#    print('good')
#else:
#    print('it is not good')

#while 1 :
#    age=int(input())
#    if age<2:
#        print('婴儿')
#    elif age<4:
#        print('蹒跚学步')
#    elif age<13:
#        print('儿童')
#    elif age<20:
#        print('青少年')
#    elif age<65:
#        print('成年人')
#    else:
#        print('老年人')

#favorite_fruits=['apple','banana','potatao']
#if 'apple' in favorite_fruits:
#    print('You really like apple!')
#if 'banana' in favorite_fruits:
#    print('You really like banana!')
#if '1' in favorite_fruits:
#    print('You really like apple!')
#if 'potatao' in favorite_fruits:
#    print('You really like potatao!')


#web_name=['dmd','admin','dsmk','smfd','dsmdsa','dsdad','dfs']
#for name in web_name:
#    if name!='admin':
#        print("Hello "+name+', thank you for logging in again')
#    else:
#        print('Hello admin, would you like to see a status report?')
#if web_name:
#    web_name.pop()
#web_name.pop()
#web_name.pop()
#web_name.pop()
#web_name.pop()
#web_name.pop()
#web_name.pop()
#if web_name:
#    web_name.pop()
#else:
#    print('We need to find some users!')

#current_users=['dmd','admin','dsmk','smfd','dsmdsa','DFksdfs','dfs']
#currents_users=[]
#for users in current_users:
#    currents_users.append(users.lower())#创建一个列表存储原列表的小写


#new_users=['dmd','Admin','dsmdl','dfksdfs','Dfs']

#for users in new_users:
#        if users.lower() in currents_users:
#            print('sorry, you need change your name!')
#        else:
#            print('welcome!')

#num=list(range(1,10))
#for n in num:
#    if n==1:
#        print('1st')
#    elif n==2:
#        print('2nd')
#    elif n==3:
#        print('3rd')
#    else:
#        print(str(n)+'th')

###第二章总结###
#string=' I Love You '#字符串
#print(string)
#print(string.title())#首字母大写打印
#print(string+'!')#字符串合并
#print('\t'+string+'\n')#制表符和换行符
#print(string.upper())#字符串大写打印
#print(string.lower())#字符串小写打印
#print(string.strip())#字符串删除空格
#print(string.lstrip())#删除左空格
#print(string.rstrip())#删除右空格
#print(string+str(23))#数字转字符串

###第三章总结###
#list=['china','korea','japan','spansih','singapore']#创建一个列表
#print(list[0])#访问列表
#list[0]='french'#修改列表
#print(list)
#list.append('america')#在列表末尾增加元素
#print(list)
#list.insert(1,'england')#插入元素
#print(list)
#del list[0]#删除某处元素
#print(list)
#list.pop()#删除某处元素
#print(list)
#list.remove('japan')#去除某处元素
#print(list)

#print(sorted(list))#字母顺序排序
#print(sorted(list,reverse=True))#反字母顺序排序
#list.reverse()#反排序
#print(list)
#list.reverse()#反排序
#print(list)
#list.sort()#永久字母排序
#print(list)
#print(len(list))#求列表长度

###第四章操作列表###
#lists=['sdkls','sdsf','dfmdf','dnmfkd','dsnfkd','fnfca']
#for l in lists:
#    print(l)
#    print('it is a string')
#print('Nice!')#遍历整个列表，使用for循环

#for value in range(1,3):#使用range函数
#    print(value)

#lists=list(range(1,3))#创建一个列表
#print(lists)
#print(min(lists))
#print(max(lists))
#print(sum(lists))#对列表的操作

#lists=[value**2 for value in range(1,3)]
#print(lists)

#lists=['sdkls','sdsf','dfmdf','dnmfkd','dsnfkd','fnfca']
#for l in lists[1:3]:
#    print(l)

#list1=lists[:]#复制列表
#print(list1)

#lists=(1,2,'LLL')#创建元组
#print(lists)
#lists=(1,2,'ooo')#修改元组
#print(lists)


###第五章if语句###
#if 1+1>=2 :#表达式判断
#    print('1+1>=2')

#name='xue'#字符串判断
#if name=='xue':
#    print('yes')
#else :
#    print('no')
#age=18#多条件判断
#if age>12 and age<20:
#    print('younger')

#lists=['sdkls','sdsf','dfmdf','dnmfkd','dsnfkd','fnfca']
#if 'sdkls' in lists:#判断列表
#    print('yes')


#age=50#if elif else 语句
#if age >19:
#    print('yes')
#elif age >9:
#    print('9')
#else:
#    print('No')

#age=50#if，if语句
#if age >19:
#    print('yes')
#if age >9:
#    print('9')
#if age>0:
#    print('No')

#lists=['sdkls','sdsf','dfmdf','dnmfkd','dsnfkd','fnfca']
#lists2=['sddfs','sdad','dfsddadf','dnaadfkd','anfkd','fnfca']
#for l in lists:
#    if l=='sdkls':#遍历列表
#        print('yes')
#if lists:#判断空列表
#    print('it is not empty!')

#for l in lists:#遍历列表，判断
#    if l in lists2:
#        print(l)




#friend={'first_name':'Zhao','last_name':'Yuhao','age':18,'city':'hengyang'}
#print(friend['first_name'])
#print(friend['last_name'])
#print(friend['age'])
#print(friend['city'])

#number={'dskd':3,'dnskd':6,'dnksdnf':9,'dnfjd':2}
#for num,num1 in number.items():
#    print(num+':'+str(num1))

#python={'print':'it can print something in the screen','if':'it is judgment statement','for':'it is loop statement'}
#for va,ex in python.items():
#    print(va+':'+ex)


#favorite_languages = {
#'jen': 'python',
#'sarah': 'c',
#'edward': 'ruby',
#'phil': 'python',
#}
#friends = ['phil', 'sarah']
#for name in favorite_languages.keys():
#    print(name.title())
#    if name in friends:
#        print(" Hi " + name.title() +
#    ", I see your favorite language is " +
#    favorite_languages[name].title() + "!")

#python={'print':'it can print something in the screen','if':'it is judgment statement',
#        'for':'it is loop statement','print1':'it can print something in the screen','if1':'it is judgment statement','for1':'it is loop statement'}
#for va,ex in python.items():
#    print(va+':'+ex)

#river={'nile':'egypt','changjiang':'china','huanghe':'china'}
#for rive , coun in river.items():
#    print('The '+rive+' runs through '+coun+'.')
#for rive in river:
#    print(rive)
#for coun in river.values():
#    print(coun)

#number={'dskd':3,'dnskd':6,'dnksdnf':9,'dnfjd':2}
#prenum={'mfks':4,'mfdkf':9,'fjdksa':5,'dskd':5,'dnfjd':34}

#for va in prenum:
#    if va in number:
#        print(va+',thank you !')
#    else:
#        print(va+', please take the research!')

#zhao={'name':'zhao','age':'20','hobby':'basketball'}
#chen={'name':'chen','age':'23','hobby':'football'}
#li={'name':'li','age':'30','hobby':'tennis'}
#pepole=[zhao,chen,li]
#for peo in pepole:
#    for p in peo.items():
#        print(p)列表中包含字典

#favorite_places={'zhao':['dnks','sd','dfmid'],'chen0':['dnfjd','dfmd','dsmdk'],'li':['dnjf','ndfjkn','ndfkjn']}
#for name,fav in favorite_places.items():
#    print(name+':')
#    for f in fav:
#        print(f)

#favorite_numbers={'zhao':[2,5,6,9],'chen0':[8,9,6,4],'li':[5,9,2,0]}
#for name,fav in favorite_numbers.items():
#    print(name+':')
#    for f in fav:
#        print(str(f))

cities={'changsha':{'country':'china','population':'23','fact':'beautiful'}
        ,'beijing':{'country':'china','population':'23','fact':'beautiful'},'shanghai':{'country':'china','population':'23','fact':'beautiful'}}
for city,inf in cities.items():
    print(city+':')
    for ci,i in inf.items():
        print(ci+':')
        print(i)