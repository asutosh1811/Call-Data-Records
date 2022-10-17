#pragma once

#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<vector>
#include<algorithm>
#include<cppunit/extensions/HelperMacros.h>
#include<ctype.h>

using namespace std;

class Userlogin: public CPPUNIT_NS::TestFixture
{
        CPPUNIT_TEST_SUITE( Userlogin );

	CPPUNIT_TEST( setUsername_UT_sunny );
	CPPUNIT_TEST( setPassword_UT_sunny );
	
	CPPUNIT_TEST( setUsername_UT_rainy1 );
	CPPUNIT_TEST( setUsername_UT_rainy2 );
	CPPUNIT_TEST( setUsername_UT_rainy3 );
	CPPUNIT_TEST( setUsername_UT_rainy4 );
	
	CPPUNIT_TEST( setPassword_UT_rainy1 );
	CPPUNIT_TEST( setPassword_UT_rainy2 );
	
	CPPUNIT_TEST_SUITE_END();

	protected:
	string username;
	string password;
	public:
													
	void setUp();
	void setValues(string uname, string pwd)
	{
	   string username=uname;
	   string password=pwd;
	}
	string getPassword()
	{
		return password;
	}
	string getUsername()
	{
		return username;
	}


	protected:
        bool setPassword(string);
	bool setUsername(string);
	bool getPassword(string);
	bool getUsername(string);

        void setPassword_UT_sunny();										
	void setUsername_UT_sunny();

	void setPassword_UT_rainy1();
	void setPassword_UT_rainy2();
	
	void setUsername_UT_rainy1();
	void setUsername_UT_rainy2();
	void setUsername_UT_rainy3();
	void setUsername_UT_rainy4();
	
};

class Service: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( Service );
	CPPUNIT_TEST( setBrandName_UT_sunny);
	CPPUNIT_TEST( setBrandName_UT_rainy);
	CPPUNIT_TEST_SUITE_END();

	protected:

	string brandname;

	public:

	void setUp();
	void setValues(string brname)
	{
		string brandname = brname;
	}
	string getBrandName()
	{
		return brandname;
	}

	protected:
        bool setBrandName(string);
	void setBrandName_UT_sunny();
	void setBrandName_UT_rainy();
};

class Customer: public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( Customer );
	CPPUNIT_TEST( setMSISDN_UT_sunny );
	CPPUNIT_TEST( setMSISDN_UT_rainy1 );
	CPPUNIT_TEST( setMSISDN_UT_rainy2 );
	CPPUNIT_TEST( setMSISDN_UT_rainy3 );
	CPPUNIT_TEST( setMSISDN_UT_rainy4 );
	CPPUNIT_TEST_SUITE_END();
	
	protected:
		string MSISDN;
	public:
		void setUp();
		void setValues(string msisdn)
		{
			string MSISDN = msisdn;
		}
		string getMSISDN()
		{
			return MSISDN;
		}
	protected:
		void setMSISDN_UT_sunny();
		void setMSISDN_UT_rainy1();
		void setMSISDN_UT_rainy2();
		void setMSISDN_UT_rainy3();
		void setMSISDN_UT_rainy4();
		bool setMSISDN(string);
};
class Portip: public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( Portip );

  CPPUNIT_TEST( setPort_UT_sunny );
  CPPUNIT_TEST( setIp_UT_sunny );

  CPPUNIT_TEST( setPort_UT_rainy1 );
  CPPUNIT_TEST( setPort_UT_rainy2 );
  CPPUNIT_TEST( setIp_UT_rainy1 );
  CPPUNIT_TEST( setIp_UT_rainy2 );
  CPPUNIT_TEST_SUITE_END();
   protected:
	 string Port;
	 string Ip;
	 void setPort_UT_sunny();
	 void setPort_UT_rainy1();
	 void setPort_UT_rainy2();
	 void setIp_UT_sunny();
	 void setIp_UT_rainy1();
	 void setIp_UT_rainy2();
	 bool setPort(string);
	 bool setIp(string);
	 bool getPort(string);
	 bool getIp(string);
};

