def latticeLLL(basis):
	while True:
		# STEP -1 - gram schmidt orthogonalization
		for i in range(len(basis)):
			for j in range(i):
				mu = floor( (basis[i] * basis[j]) / (basis[j] * basis[j]) )
				basis[i] -= mu * basis[j]

		# putting orthogonal vectors corresponding to basis vectors in list
		ortho_vectors = basis.copy()
		mu_list = []
		for i in range(len(ortho_vectors)):
			for j in range(i):
				mu = (ortho_vectors[i] * ortho_vectors[j]) / (ortho_vectors[j] * ortho_vectors[j])
				ortho_vectors[i] -= mu * ortho_vectors[j]
				if j == i-1:
					mu_list.append(mu)
		assert len(mu_list) == (len(ortho_vectors) -1)
		
		# STEP - 2 - checking condition for LLL reduced basis
		checker = True
		for i in range(len(basis) - 1):
			var1 = (ortho_vectors[i+1] + mu_list[i] * ortho_vectors[i])
			var2 = ortho_vectors[i]
			if var1 * var1 < ((3/4) * var2 * var2):
				basis[i], basis[i+1] = basis[i+1], basis[i]
				checker = False
				break
		if checker == True:
			break
	return basis

v1 = vector(QQ,(8, 9))
v2 = vector(QQ,(9, 8))

print(latticeLLL([v1,v2]))


