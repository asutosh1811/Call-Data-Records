#include<cppunit/config/SourcePrefix.h>
#include<string>
#include<algorithm>
#include"socket.h"

CPPUNIT_TEST_SUITE_REGISTRATION( Userlogin );

void Userlogin::setUp()
{
		username="ashish123";
		password="abc@1234";
}
bool Userlogin::getPassword(string p)
{
	string password = "abc@1234";
	if(password != p)
	{
	  return false;
	} 
	return true;
}	
bool Userlogin :: setPassword(string p)
{
	if(p.length()<4)
	{
		return false;
	}
	return true;
}	
    	
void Userlogin::setPassword_UT_sunny()
{
		string password="abc@1234";
	//	string password2=getPassword();
		CPPUNIT_ASSERT_EQUAL_MESSAGE("Correct password", true, getPassword(password));
}
void Userlogin::setPassword_UT_rainy1()
{
		string password="abc@123";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("Incorrect password", true, getPassword(password));
}
void Userlogin::setPassword_UT_rainy2()
{

	         string password = "abc";

		 CPPUNIT_ASSERT_EQUAL_MESSAGE("Password length is too small",true, setPassword(password));
}
bool Userlogin::getUsername(string u)
{
	        string username = "ashish123";
		if(username != u)
	        {
		  return false;
		}
	        return true;
}
bool Userlogin::setUsername(string u)
{
                  
		  if(u == " ")
		  {
	           return false;
		  }
		  if(u.length()>20)
		  {
	           return false;
		  }
		   for(int i=0;u[i]!='\0';i++)
		 {
		   if(u[i]==' ')
		    { 
		   return false;
		    }
		 }
			   
		  return true; 
						             
							          
}
void Userlogin::setUsername_UT_sunny()
{

	        string username = "ashish123";

	        CPPUNIT_ASSERT_EQUAL_MESSAGE("Correct Username",true, getUsername(username));
}
void Userlogin::setUsername_UT_rainy1()
{

	        string username = "ashish12";

	        CPPUNIT_ASSERT_EQUAL_MESSAGE("Username not matching",true, getUsername(username));
}
void Userlogin::setUsername_UT_rainy2()
{

	           string username = "jdjfoajfadjaksgagjaegjaeojaeogjaogjadgadgadjgeagjdklvmdlljadojgodjgvldjvdzljjsdjsobjsSJbgsbkssbs";

		   CPPUNIT_ASSERT_EQUAL_MESSAGE("Username should not be greater than 20 chracters",true, setUsername(username));
}
void Userlogin::setUsername_UT_rainy3()
{

	           string username = "ashish 123";

	           CPPUNIT_ASSERT_EQUAL_MESSAGE("Username should not contain Space",true, setUsername(username));
}
void Userlogin::setUsername_UT_rainy4()
{

	           string username = " ";

	           CPPUNIT_ASSERT_EQUAL_MESSAGE("Username should not be NULL",true, setUsername(username));
}


CPPUNIT_TEST_SUITE_REGISTRATION( Service );

void Service::setUp()
{
	brandname="Airtel";
}
bool Service::setBrandName(string b)
{
  if(b == "Airtel" || b== "Jio" || b== "Cellcom" || b== "Partner" || b== "012")
  {
    return true;
  }
  return false;
}  
void Service::setBrandName_UT_sunny()
{
	string brandname="Airtel";
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Brand name matched", true, setBrandName(brandname));
}
void Service::setBrandName_UT_rainy()
{
	string brandname="vi";
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Brand name not found", true, setBrandName(brandname));
}

CPPUNIT_TEST_SUITE_REGISTRATION( Customer );

void Customer::setUp()
{
	MSISDN = "1234567";
}
bool Customer::setMSISDN(string M)
{
	for(int i=0;M[i]!='\0';i++)
	{
	 if(isdigit(M[i]) == 0)
	  {
	   return false;
	  }
	}
	if(M.size()!=7)
	{
          return false;
	}
	for(int i=0;M[i]!='\0';i++)
	{
	   if(isalpha(M[i]) != 0 )
	   {
             return false;
	   }
	}
	for(int i=0;M[i]!='\0';i++)
        {
	  if(M[i]==' ')
	  {
	    return false;
	  }
	}   
	  return true;
}
void Customer::setMSISDN_UT_sunny()
{

   string custid = "1234567";

   CPPUNIT_ASSERT_EQUAL_MESSAGE("MSISDN matched",true, setMSISDN(custid));
}
void Customer::setMSISDN_UT_rainy1()
{
		
   string custid = "123a567";
		
   CPPUNIT_ASSERT_EQUAL_MESSAGE("Incorrect MSISDN: no alphabetical character allowed",true, setMSISDN(custid));
}
void Customer::setMSISDN_UT_rainy2()
{

   string custid = "12311567";

   CPPUNIT_ASSERT_EQUAL_MESSAGE("Incorrect MSISDN: Exact 7 characters allowed",true, setMSISDN(custid));
}
void Customer::setMSISDN_UT_rainy3()
{

   string custid = "123@567";

   CPPUNIT_ASSERT_EQUAL_MESSAGE("Incorrect MSISDN: no special characters allowed",true, setMSISDN(custid));
}
void Customer::setMSISDN_UT_rainy4()
{

  string custid = "123 567";
  CPPUNIT_ASSERT_EQUAL_MESSAGE("Incorrect MSISDN: no Space allowed",true, setMSISDN(custid));
}
CPPUNIT_TEST_SUITE_REGISTRATION( Portip );

bool Portip::getPort(string p)
{
	string port= "8080";
	if(port != p)
	{
	  return false;
	} 
	return true;
}	
bool Portip :: setPort(string p)
{
	
	for(int i=0;p[i]!='\0';i++)
    {
	  if(p[i]==' ')
	  {
	    return false;
	  }
	}   
	return true;
}	
    	
void Portip::setPort_UT_sunny()
{
		string port="8080";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("port no matched: Connection established", true, getPort(port));
}
void Portip::setPort_UT_rainy1()
{
		string port="8070";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("port no not matched:Connection not established", true, getPort(port));
}
void Portip::setPort_UT_rainy2()
{
		string port=" ";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("port no should not contain space:Connection not established", true, setPort(port));
}
bool Portip::getIp(string i)
{
	string ip= "127.0.0.1";
	if(ip != i)
	{
	  return false;
	} 
	return true;
}	
bool Portip :: setIp(string i)
{
	if(i == " ")
	{
	    return false;
	}
	return true;
}	
    	
void Portip::setIp_UT_sunny()
{
		string ip="127.0.0.1";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("ip matched: Connection established", true, getIp(ip));
}
void Portip::setIp_UT_rainy1()
{
		string ip="127.0.0.2";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("ip not matched:Connection not established", true, getIp(ip));
}
void Portip::setIp_UT_rainy2()
{
		string ip=" ";
		CPPUNIT_ASSERT_EQUAL_MESSAGE("ip should not contain space:Connection not established", true, setIp(ip));
}

