#include "./hedders/type.h"
#include "./hedders/gdt.h"
#include "./hedders/outP.h"

typedef void (*constructor)();
extern "C" void callConstructors(){
	        constructor* start_ctors;
		        constructor* end_ctors;
			    for(constructor* curr_constructor =start_ctors; curr_constructor != end_ctors; curr_constructor++)
				           (*curr_constructor)();
}

extern "C" int main(int magicnum, char** multiboot_structure)
{
    putText("hi team",COLOR_WHITE);
    
    
    GlobalDescriptorTable gdt;
    
    
	while(1);
}
