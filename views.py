from django.shortcuts import render,HttpResponse

# Create your views here.
def index(request):
    return render(request,'index1.html')
# here i have not to use httpsrespone we have to use template
def about(request):
    #return HttpResponse("This is the about page of our project")
    return render(request,'about.html')
def services(request):
   # return HttpResponse("This is the services page of our project")
    return render(request,'services.html')
def contact(request):
   # return HttpResponse("This is the contact page of our project")
    return render(request,'contact.html')

