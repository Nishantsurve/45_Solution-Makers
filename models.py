from django.db import models

# Create your models here.

class Contact(models.Model):
    name=models.CharField(max_length=122)
    email=models.CharField(max_length=122)
    phone=models.CharField(max_length=12)
    decs=models.TextField()
   # date=models.DateField()
   
    def __str__(self):
       return self.name
# i am creating an table in database
class Signup(models.Model):
    username=models.CharField(max_length=122)
    password=models.CharField(max_length=12)
    Age=models.CharField(max_length=12)
    collegename=models.CharField(max_length=122)
    #date=models.DateField()
   
    

   
   