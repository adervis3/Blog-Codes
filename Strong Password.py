# -*- coding: utf-8 -*-
import random  #Random kütüphanesini çağırdık / We called random library

list="abcdefghijklmnopqrstuvwxyz01234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()?" #Parolamızın içereceği karakterleri belirledik / We set the characters to include our password
print("Please Enter a Larger Value!!!")
passwordlength=raw_input("Please Enter How Many Characters of the Password : ") #Parolamızın uzunluğunu belirledik / We set the length of our password
if int(passwordlength) >= 12:
	print("".join(random.sample(list,int(passwordlength)))) #Parolayı rastegele üreterek yazdırdık / We printed it by randomly generating the password
elif int(passwordlength) < 12:
	print("Please Enter a Larger Value!!!")
