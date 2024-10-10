.PHONY: encode decode clean

encode:
	base64 -i message.txt | openssl enc -e -kfile publickey.asc -in - -aes-256-cbc 2>/dev/null > encrypted.txt

decode:
	openssl enc -d -kfile publickey.asc -in encrypted.txt -aes-256-cbc 2>/dev/null | base64 -d > decrypted.txt

clean:
	rm encrypted.txt decrypted.txt
