# **File_transfer_using_TCP_socket**

The client.c file contains the code for the client-side, which read the text file and
sends it to the server and the server.c file receives the data from the client and saves
it in a text file

- Server-side:

```
root@MSI:/mnt/d/ds2024/File_transfer_using_TCP_socket# gcc server.c -o server
root@MSI:/mnt/d/ds2024/File_transfer_using_TCP_socket# ./server
[+] Socket of server connected
[+] bind successfully
[+] Listening for connections...

[+] Data received and written to 'test2.txt' successfully
root@MSI:/mnt/d/ds2024/File_transfer_using_TCP_socket#
```

- Client-side:

```
root@MSI:/mnt/d/ds2024/File_transfer_using_TCP_socket# gcc client.c -o client
root@MSI:/mnt/d/ds2024/File_transfer_using_TCP_socket# ./client
[+] Socket of server connected
[+] connect to server successfully
[+] Data sent successfully to server
root@MSI:/mnt/d/ds2024/File_transfer_using_TCP_socket#
```
## Report:
[lab1_distributed_system.pdf](https://github.com/vdh1612/ds2024/files/14746977/lab1_distributed_system.pdf)

