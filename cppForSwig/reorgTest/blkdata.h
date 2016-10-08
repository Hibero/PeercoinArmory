// DO NOT MODIFY THIS FILE
// this file generated by createTestChain.py. Modify that script instead.
#ifndef BLKDATA_H
#define BLKDATA_H

namespace TestChain
{
const BinaryData addrA = BinaryData::CreateFromHex("62e907b15cbf27d5425399ebf6f0fb50ebb88f18");
const BinaryData scrAddrA = HASH160PREFIX + addrA;
const BinaryData addrB = BinaryData::CreateFromHex("ee26c56fc1d942be8d7a24b2a1001dd894693980");
const BinaryData scrAddrB = HASH160PREFIX + addrB;
const BinaryData privKeyAddrB = BinaryData::CreateFromHex("bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb");
const BinaryData addrC = BinaryData::CreateFromHex("cb2abde8bccacc32e893df3a054b9ef7f227a4ce");
const BinaryData scrAddrC = HASH160PREFIX + addrC;
const BinaryData privKeyAddrC = BinaryData::CreateFromHex("cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc");
const BinaryData addrD = BinaryData::CreateFromHex("c522664fb0e55cdc5c0cea73b4aad97ec8343232");
const BinaryData scrAddrD = HASH160PREFIX + addrD;
const BinaryData privKeyAddrD = BinaryData::CreateFromHex("dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd");
const BinaryData addrE = BinaryData::CreateFromHex("47b8ad0b1d6803260ce428d9e09e2cd99fd3b359");
const BinaryData scrAddrE = HASH160PREFIX + addrE;
const BinaryData privKeyAddrE = BinaryData::CreateFromHex("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee");
const BinaryData addrF = BinaryData::CreateFromHex("d63b766cd342e6f0f7390dd454065e4bbea26b1b");
const BinaryData scrAddrF = HASH160PREFIX + addrF;
const BinaryData privKeyAddrF = BinaryData::CreateFromHex("efefefefefefefefefefefefefefefefefefefefefefefefefefefefefefefef");

// LB1 = AddrB + AddrC
// LB2 = AddrD + AddrE
const string lb1B58ID = "DuR9CQX6";
const BinaryData lb1ScrAddr = BinaryData::CreateFromHex("fe0102cb2abde8bccacc32e893df3a054b9ef7f227a4ceee26c56fc1d942be8d7a24b2a1001dd894693980");
const BinaryData lb1ScrAddrP2SH = BinaryData::CreateFromHex("05ae3c7b8b4b00ae7b3d8702d0a23bcda2ac541e34");
const string lb2B58ID = "eqWJZTcT";
const BinaryData lb2ScrAddr = BinaryData::CreateFromHex("fe020247b8ad0b1d6803260ce428d9e09e2cd99fd3b359c522664fb0e55cdc5c0cea73b4aad97ec8343232");
const BinaryData lb2ScrAddrP2SH = BinaryData::CreateFromHex("05de46f84ba728121eb3bdb1c30140cd6c0c8b7e25");

const BinaryData blkHash0 = BinaryData::CreateFromHex("6fe28c0ab6f1b372c1a6a246ae63f74f931e8365e15a089c68d6190000000000");
const BinaryData blkHash1 = BinaryData::CreateFromHex("fefba729db13850ba6ecc29a7dd41d80fb4bf7e063d5e093f48f0c5d00000000");
const BinaryData blkHash2 = BinaryData::CreateFromHex("3641abc766dcc85643af42ad0999c2370ef1a5e521547fa4b55f5735449021ee");
const BinaryData blkHash3 = BinaryData::CreateFromHex("23c0558cccfdbce453814beb4c5b0f6fa0625e1c0895df55ed810fbabfe04c65");
const BinaryData blkHash4 = BinaryData::CreateFromHex("7f640833c553582959a144f2738c8683a601ab67a80f3b040cc92d5200000000");
const BinaryData blkHash5 = BinaryData::CreateFromHex("e4b8313bec211633992fde8b9bb9727f56cb0413e2108ceab280fc7e00000000");
const BinaryData blkHash4A = BinaryData::CreateFromHex("fb97af2c706d9410d90651d171f8e728d228fbfe7a14b58d475cb55800000000");
const BinaryData blkHash5A = BinaryData::CreateFromHex("3a6a8a8a1b0a64d28c07b680e3a079530c5997894aafd31684b5f83500000000");

const unsigned int zcTxSize = 258;
const string zcTxHash256 = "b6b6f145742a9072fd85f96772e63a00eb4101709aa34ec5dd59e8fc904191a7";
const unsigned int lbZCTxSize = 378;
}

#endif
