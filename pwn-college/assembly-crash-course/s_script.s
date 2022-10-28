.global _start

_start:
	.intel_syntax noprefix
	mov esi, [rdi]
	mov ebx, [rdi + 4]
	mov ecx, [rdi + 8]
	mov edx, [rdi + 12]
	mov eax, 0
	movsx rax, eax
	movsx rbx, ebx 
	movsx rcx, ecx
	movsx rdx, edx

	int3
	cmp esi, 0x7f454c46
	jne elif_label
	add rax, rbx
	add rax, rcx
	add rax, rdx
	int3
	jmp done

	elif_label:
		cmp esi, 0x00005A4D
		jne else_label

		add rax, rbx
		sub rax, rcx
		sub rax, rdx
		int3
		jmp done

	else_label:
		mov rax, rbx
		imul rax, rcx
		imul rax, rdx
		int3 


	done:
		mov rax, rax

