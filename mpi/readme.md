# MPI File transfer

- [Link to documentation](https://curc.readthedocs.io/en/latest/programming/MPI-C.html)

- How to run:

```
root@MSI:/mnt/d/ds2024/mpi# mpicc file_transfer.c -o ft
root@MSI:/mnt/d/ds2024/mpi# mpirun -np 2 ./ft
[Client] File sent successfully
[Server] Data received and written to 'received_file.txt' successfully
```
