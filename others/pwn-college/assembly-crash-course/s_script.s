.global _start

_start:
	intel_syntax noprefix
	mov eax, [rdi+4]
	mov ebx, [rdi+8]
	mov ecx, [rdi+12]
	cmp DWORD PTR [rdi],0x7f454c46
	jne elif_label
	movsx rax, eax
	movsx rbx, ebx
	movsx rcx, ecx
	add rax, rbx
	add rax, rcx
	jmp done

	elif label:
		cmp DWORD PTR [rdi],0x00005a4d
		jne else_label
		movsx rax, eax
		movsx rbx, ebx
		movsx rcx, ecx
		sub rax, rbx
		sub rax, rcx
		jmp done
	
	else_label:
		movsx rax, eax
		movsx rbx, ebx
		movsx rcx, ecx
		imul rax, rbx
		imul rax, rcx

	done:
		mov rax, rax	



