

#include <iostream>
#include <ctime>
#include <vector>

#include "TransactionData.h"
#include "include/Block.h"
#include "include/Blockchain.h"

using namespace std;

int main()
{
    // Start Blockchain
    Blockchain defyCoin;
    
    // Data for first block
    time_t data1Time;
    TransactionData data1(1.5, "Alok", "Sparsh", time(&data1Time));
    defyCoin.addBlock(data1);
    
    time_t data2Time;
    TransactionData data2(2.5, "Nishan", "Arjun", time(&data2Time));
    defyCoin.addBlock(data2);
    
    // defyCoin blockchain
    defyCoin.printChain();
    
    // Is it valid?
    printf("\nIs chain still valid? %d\n", defyCoin.isChainValid());
    
    // // If someone try to hackd.isChainValid
    // Block *hackBlock = defyCoin.getLatestBlock();   
    // hackBlock->data.amount = 10000; 
    // hackBlock->data.receiverKey = "Alok"; 
    

    // // Let's look at data
    // defyCoin.printChain();

    // //Chain valid or not
    // printf("\nIs chain still valid? %d\n", defyCoin.isChainValid());
    
    return 0;
}
