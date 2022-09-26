
from django.shortcuts import render,HttpResponse
#from datetime import datetime
from fistapp.models import Contact
# Create your views here.
def index(request):
    return render(request,'index1.html')

def index1(request):
    return render(request,'index2.html')
'''def signup(request):
    #return HttpResponse("This is the about page of our project")
    return render(request,'signup.html')
# here i have not to use httpsrespone we have to use template
def signin(request):
    #return HttpResponse("This is the about page of our project")
    #return render(request,'signin.html')
    pass
def signout(request):
    #return HttpResponse("This is the about page of our project")
    return render(request,'about.html')'''
def about(request):
    #return HttpResponse("This is the about page of our project")
    return render(request,'about.html')
def services(request):
   # return HttpResponse("This is the services page of our project")
    return render(request,'services.html')
def signup(request):
    return render(request,'login.html')
def contact(request):
    if request.method=="POST":
        name=request.POST.get('name')
        email=request.POST.get('email')
        phone=request.POST.get('phone')
        decs=request.POST.get('decs')
        contact=Contact(name=name,email=email,phone=phone,decs=decs)
        contact.save()
    return render(request,'contact.html')

