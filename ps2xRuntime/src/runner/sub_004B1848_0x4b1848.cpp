#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B1848
// Address: 0x4b1848 - 0x4b1998
void sub_004B1848_0x4b1848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1848_0x4b1848");
#endif

    switch (ctx->pc) {
        case 0x4b18a4u: goto label_4b18a4;
        case 0x4b18b8u: goto label_4b18b8;
        case 0x4b18dcu: goto label_4b18dc;
        case 0x4b1908u: goto label_4b1908;
        case 0x4b1930u: goto label_4b1930;
        case 0x4b1938u: goto label_4b1938;
        default: break;
    }

    ctx->pc = 0x4b1848u;

    // 0x4b1848: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b1848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b184c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b1850: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b1850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b1854: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b1854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x4b1858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b1858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b185c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b185cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b1860: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b1860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b1864: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b1868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b1868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b186c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4b186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b1870: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4b1870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b1874: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4b1874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4b1878: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4B1878u;
    {
        const bool branch_taken_0x4b1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1878u;
        // 0x4b187c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1878) {
            ctx->pc = 0x4B1950u;
            goto label_4b1950;
        }
    }
    ctx->pc = 0x4B1880u;
    // 0x4b1880: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x4b1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x4b1884: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1884u;
    {
        const bool branch_taken_0x4b1884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1884) {
            ctx->pc = 0x4B18B0u;
            goto label_4b18b0;
        }
    }
    ctx->pc = 0x4B188Cu;
    // 0x4b188c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1890: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b1890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b1894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1894u;
    {
        const bool branch_taken_0x4b1894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1894) {
            ctx->pc = 0x4B18A8u;
            goto label_4b18a8;
        }
    }
    ctx->pc = 0x4B189Cu;
    // 0x4b189c: 0xc12c266  jal         func_4B0998
    ctx->pc = 0x4B189Cu;
    SET_GPR_U32(ctx, 31, 0x4B18A4u);
    ctx->pc = 0x4B18A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B189Cu;
    // 0x4b18a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0998u, 0x4B189Cu, 0x4B18A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18A4u;
label_4b18a4:
    // 0x4b18a4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x4b18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4b18a8:
    // 0x4b18a8: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4B18A8u;
    {
        const bool branch_taken_0x4b18a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b18a8) {
            ctx->pc = 0x4B18ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B18A8u;
            // 0x4b18ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B18E4u;
            goto label_4b18e4;
        }
    }
    ctx->pc = 0x4B18B0u;
label_4b18b0:
    // 0x4b18b0: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x4B18B0u;
    SET_GPR_U32(ctx, 31, 0x4B18B8u);
    ctx->pc = 0x4B18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B18B0u;
    // 0x4b18b4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4B18B0u, 0x4B18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18B8u;
label_4b18b8:
    // 0x4b18b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b18b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b18bc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x4B18BCu;
    {
        const bool branch_taken_0x4b18bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B18BCu;
        // 0x4b18c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b18bc) {
            ctx->pc = 0x4B1974u;
            goto label_4b1974;
        }
    }
    ctx->pc = 0x4B18C4u;
    // 0x4b18c4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x4b18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x4b18c8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x4b18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x4b18cc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x4b18ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x4b18d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b18d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b18d4: 0xc12c266  jal         func_4B0998
    ctx->pc = 0x4B18D4u;
    SET_GPR_U32(ctx, 31, 0x4B18DCu);
    ctx->pc = 0x4B18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B18D4u;
    // 0x4b18d8: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0998u, 0x4B18D4u, 0x4B18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B18DCu;
label_4b18dc:
    // 0x4b18dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4B18DCu;
    {
        const bool branch_taken_0x4b18dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B18DCu;
        // 0x4b18e0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b18dc) {
            ctx->pc = 0x4B1950u;
            goto label_4b1950;
        }
    }
    ctx->pc = 0x4B18E4u;
label_4b18e4:
    // 0x4b18e4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x4b18e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b18e8: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x4b18e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4b18ec: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B18ECu;
    {
        const bool branch_taken_0x4b18ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B18ECu;
        // 0x4b18f0: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b18ec) {
            ctx->pc = 0x4B1954u;
            goto label_4b1954;
        }
    }
    ctx->pc = 0x4B18F4u;
    // 0x4b18f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4b18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b18f8: 0x469823  subu        $s3, $v0, $a2
    ctx->pc = 0x4b18f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b18fc: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x4b18fcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x4b1900: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x4B1900u;
    SET_GPR_U32(ctx, 31, 0x4B1908u);
    ctx->pc = 0x4B1904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1900u;
    // 0x4b1904: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4B1900u, 0x4B1908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1908u;
label_4b1908:
    // 0x4b1908: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b1908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b190c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B190Cu;
    {
        const bool branch_taken_0x4b190c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B190Cu;
        // 0x4b1910: 0x2938023  subu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b190c) {
            ctx->pc = 0x4B191Cu;
            goto label_4b191c;
        }
    }
    ctx->pc = 0x4B1914u;
    // 0x4b1914: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4B1914u;
    {
        const bool branch_taken_0x4b1914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1914u;
        // 0x4b1918: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1914) {
            ctx->pc = 0x4B1974u;
            goto label_4b1974;
        }
    }
    ctx->pc = 0x4B191Cu;
label_4b191c:
    // 0x4b191c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x4b191cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b1920: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x4b1920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x4b1924: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b1924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1928: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B1928u;
    SET_GPR_U32(ctx, 31, 0x4B1930u);
    ctx->pc = 0x4B192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1928u;
    // 0x4b192c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B1928u, 0x4B1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1930u;
label_4b1930:
    // 0x4b1930: 0xc10ceec  jal         func_433BB0
    ctx->pc = 0x4B1930u;
    SET_GPR_U32(ctx, 31, 0x4B1938u);
    ctx->pc = 0x4B1934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1930u;
    // 0x4b1934: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BB0u, 0x4B1930u, 0x4B1938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1938u;
label_4b1938:
    // 0x4b1938: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4b1938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x4b193c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4b193cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x4b1940: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4b1940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4b1944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1948: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x4b1948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x4b194c: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x4b194cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
label_4b1950:
    // 0x4b1950: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4b1950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4b1954:
    // 0x4b1954: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b1954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b1958: 0x12a30004  beq         $s5, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1958u;
    {
        const bool branch_taken_0x4b1958 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1958u;
        // 0x4b195c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1958) {
            ctx->pc = 0x4B196Cu;
            goto label_4b196c;
        }
    }
    ctx->pc = 0x4B1960u;
    // 0x4b1960: 0x8082ffff  lb          $v0, -0x1($a0)
    ctx->pc = 0x4b1960u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x4b1964: 0x54550001  bnel        $v0, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B1964u;
    {
        const bool branch_taken_0x4b1964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x4b1964) {
            ctx->pc = 0x4B1968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1964u;
            // 0x4b1968: 0xa095ffff  sb          $s5, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B196Cu;
            goto label_4b196c;
        }
    }
    ctx->pc = 0x4B196Cu;
label_4b196c:
    // 0x4b196c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4b196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b1970: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4b1970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b1974:
    // 0x4b1974: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b1974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b1978: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b1978u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b197c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b197cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1980: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b1980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1984: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b1984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1988: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b1988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b198c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b198cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1990: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1990u;
        // 0x4b1994: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1998u;
}
