#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    int process_Rank, size_Of_Cluster, message_Item;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size_Of_Cluster);
    MPI_Comm_rank(MPI_COMM_WORLD, &process_Rank);

    if(process_Rank == 0){
        message_Item = 42;
        MPI_Send(&message_Item, 1, MPI_INT, 1, 1, MPI_COMM_WORLD);
        printf("Message Sent: %d\n", message_Item);
    }

    else if(process_Rank == 1){
        MPI_Recv(&message_Item, 1, MPI_INT, 0, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        printf("Message Received: %d\n", message_Item);
    }

    MPI_Finalize();
    return 0;
}
/*
MPI_Send(
    &message_Item,      //Address of the message we are sending.
    1,                  //Number of elements handled by that address.
    MPI_INT,            //MPI_TYPE of the message we are sending.
    1,                  //Rank of receiving process
    1,                  //Message Tag
    MPI_COMM_WORLD      //MPI Communicator
);

MPI_Recv(
    &message_Item,      //Address of the message we are receiving.
    1,                  //Number of elements handled by that address.
    MPI_INT,            //MPI_TYPE of the message we are sending.
    0,                  //Rank of sending process
    1,                  //Message Tag
    MPI_COMM_WORLD      //MPI Communicator
    MPI_STATUS_IGNORE   //MPI Status Object
);
*/