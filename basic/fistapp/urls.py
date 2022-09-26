from django.contrib import admin
from django.urls import path
from fistapp import views

urlpatterns = [
    # path("url",views.fun_name,name=func_name)
    path("",views.index,name='fistapp'),
    path("",views.index1,name='fistapp'),
    path("about",views.about,name='about'),
    path("services",views.services,name='services'),
    path("contact",views.contact,name='contact'),
    path("signup",views.signup,name='signup')   
    ]
''' path("signup",views.about,name='signup'),
    path("signin",views.services,name='signin'),
    path("signout",views.contact,name='signout'),
'''