#include <iostream>
#include <string>
#include <cstdlib>
#include "tiny.hpp"
#include "termcolor.hpp"
#include "challenge.h"

#define CHARLIMIT 105

extern "C" const char* key();

int main(int n, char* args[]){
	/* Build Challenge */
	Challenge::encryptFlag();
	
	//Shell start
	std::cout << termcolor::reverse << "[TinyCompilerShell v0.1]" << std::endl;
	
	//Get input
	std::string code,input = "";
	
	std::cout << termcolor::reset << termcolor::on_color<33,33,33> << termcolor::underline << "  Code  ";
	std::cout << termcolor::reset << termcolor::on_color<33,33,33> << std::endl;
	do{
		std::getline(std::cin, input);
		code += input+"\n";
	}while(input.length()>0);
	
	if(code.length()>CHARLIMIT){
		std::cout << termcolor::on_red << termcolor::white 
			      << "OVER CHARECTOR BUDGET OF " << CHARLIMIT << " (" << code.length() << ")" 
				  << termcolor::reset << std::endl;
	}else{
		std::cout << termcolor::on_green << termcolor::white 
			      << code.length() << "/" << CHARLIMIT 
				  << termcolor::reset << std::endl;
	}

	code = code.substr(0, CHARLIMIT); //End Code after charlimit
	code = "#include <stdlib.h>\n#include \"key.h\"\n"+code; //prepend header
	
	//Compile
	std::cout << termcolor::reset << std::endl;
	std::cout << "Compiling..." << std::endl;
	
	std::string tccLib = (n>1)?args[1]:"/usr/lib/x86_64-linux-gnu/tcc";
	tinyCompiler tcc(tccLib);
	tcc.addSymbol("key", &key);
	
	std::cout << termcolor::red;
	tcc.compile(code);
	std::cout << termcolor::reset;

	//Invoke
	std::cout << "Invoking Entrypoint tiny()" << std::endl;
	auto tiny = tcc.getSymbol<void(*)()>("tiny");
	tiny();//executes tiny()
	
	//Clean Up
	Challenge::cleanup();
}	