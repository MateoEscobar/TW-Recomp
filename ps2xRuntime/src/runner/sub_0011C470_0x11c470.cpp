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

// Function: sub_0011C470
// Address: 0x11c470 - 0x11c638
void sub_0011C470_0x11c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C470_0x11c470");
#endif

    switch (ctx->pc) {
        case 0x11c4e8u: goto label_11c4e8;
        case 0x11c4f0u: goto label_11c4f0;
        case 0x11c504u: goto label_11c504;
        case 0x11c540u: goto label_11c540;
        case 0x11c550u: goto label_11c550;
        case 0x11c55cu: goto label_11c55c;
        case 0x11c56cu: goto label_11c56c;
        case 0x11c574u: goto label_11c574;
        case 0x11c584u: goto label_11c584;
        case 0x11c590u: goto label_11c590;
        case 0x11c5a0u: goto label_11c5a0;
        case 0x11c5a8u: goto label_11c5a8;
        case 0x11c5b4u: goto label_11c5b4;
        case 0x11c5c4u: goto label_11c5c4;
        case 0x11c5d0u: goto label_11c5d0;
        case 0x11c5e0u: goto label_11c5e0;
        case 0x11c5e8u: goto label_11c5e8;
        case 0x11c5f4u: goto label_11c5f4;
        default: break;
    }

    ctx->pc = 0x11c470u;

    // 0x11c470: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11c474: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11c478: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11c47c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x11c480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11c480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c484: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x11c484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11c488: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x11c48c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11c490: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x11c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x11c494: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x11c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x11c498: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x11c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x11c49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c4a0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x11c4a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x11c4a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x11c4a8: 0x84720224  lh          $s2, 0x224($v1)
    ctx->pc = 0x11c4a8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11c4ac: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x11c4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11c4b0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x11C4B0u;
    {
        const bool branch_taken_0x11c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4B0u;
        // 0x11c4b4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4b0) {
            ctx->pc = 0x11C604u;
            goto label_11c604;
        }
    }
    ctx->pc = 0x11C4B8u;
    // 0x11c4b8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C4B8u;
    {
        const bool branch_taken_0x11c4b8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4B8u;
        // 0x11c4bc: 0x232102a  slt         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4b8) {
            ctx->pc = 0x11C4CCu;
            goto label_11c4cc;
        }
    }
    ctx->pc = 0x11C4C0u;
    // 0x11c4c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11c4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4c4: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x11c4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11c4c8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x11c4c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_11c4cc:
    // 0x11c4cc: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x11C4CCu;
    {
        const bool branch_taken_0x11c4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4CCu;
        // 0x11c4d0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4cc) {
            ctx->pc = 0x11C604u;
            goto label_11c604;
        }
    }
    ctx->pc = 0x11C4D4u;
    // 0x11c4d4: 0x2e740001  sltiu       $s4, $s3, 0x1
    ctx->pc = 0x11c4d4u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11c4d8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x11c4d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c4dc: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x11c4dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x11c4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4e4: 0x0  nop
    ctx->pc = 0x11c4e4u;
    // NOP
label_11c4e8:
    // 0x11c4e8: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11C4E8u;
    SET_GPR_U32(ctx, 31, 0x11C4F0u);
    ctx->pc = 0x11C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4E8u;
    // 0x11c4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C4E8u, 0x11C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4F0u;
label_11c4f0:
    // 0x11c4f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4f4: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x11C4F4u;
    {
        const bool branch_taken_0x11c4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4F4u;
        // 0x11c4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4f4) {
            ctx->pc = 0x11C5F4u;
            goto label_11c5f4;
        }
    }
    ctx->pc = 0x11C4FCu;
    // 0x11c4fc: 0xc049f52  jal         func_127D48
    ctx->pc = 0x11C4FCu;
    SET_GPR_U32(ctx, 31, 0x11C504u);
    ctx->pc = 0x11C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4FCu;
    // 0x11c500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x11C4FCu, 0x11C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C504u;
label_11c504:
    // 0x11c504: 0x7a020180  lq          $v0, 0x180($s0)
    ctx->pc = 0x11c504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x11c508: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x11c508u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
    // 0x11c50c: 0x1277001b  beq         $s3, $s7, . + 4 + (0x1B << 2)
    ctx->pc = 0x11C50Cu;
    {
        const bool branch_taken_0x11c50c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 23));
        ctx->pc = 0x11C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C50Cu;
        // 0x11c510: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c50c) {
            ctx->pc = 0x11C57Cu;
            goto label_11c57c;
        }
    }
    ctx->pc = 0x11C514u;
    // 0x11c514: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C514u;
    {
        const bool branch_taken_0x11c514 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C514u;
        // 0x11c518: 0x8ea2b19c  lw          $v0, -0x4E64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c514) {
            ctx->pc = 0x11C52Cu;
            goto label_11c52c;
        }
    }
    ctx->pc = 0x11C51Cu;
    // 0x11c51c: 0x12760027  beq         $s3, $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x11C51Cu;
    {
        const bool branch_taken_0x11c51c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x11c51c) {
            ctx->pc = 0x11C5BCu;
            goto label_11c5bc;
        }
    }
    ctx->pc = 0x11C524u;
    // 0x11c524: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11C524u;
    {
        const bool branch_taken_0x11c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C524u;
        // 0x11c528: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c524) {
            ctx->pc = 0x11C5F8u;
            goto label_11c5f8;
        }
    }
    ctx->pc = 0x11C52Cu;
label_11c52c:
    // 0x11c52c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11c52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11c530: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C530u;
    {
        const bool branch_taken_0x11c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c530) {
            ctx->pc = 0x11C548u;
            goto label_11c548;
        }
    }
    ctx->pc = 0x11C538u;
    // 0x11c538: 0xc136dca  jal         func_4DB728
    ctx->pc = 0x11C538u;
    SET_GPR_U32(ctx, 31, 0x11C540u);
    ctx->pc = 0x11C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C538u;
    // 0x11c53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB728u, 0x11C538u, 0x11C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C540u;
label_11c540:
    // 0x11c540: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11C540u;
    {
        const bool branch_taken_0x11c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C540u;
        // 0x11c544: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c540) {
            ctx->pc = 0x11C5F8u;
            goto label_11c5f8;
        }
    }
    ctx->pc = 0x11C548u;
label_11c548:
    // 0x11c548: 0xc136df6  jal         func_4DB7D8
    ctx->pc = 0x11C548u;
    SET_GPR_U32(ctx, 31, 0x11C550u);
    ctx->pc = 0x11C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C548u;
    // 0x11c54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7D8u, 0x11C548u, 0x11C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C550u;
label_11c550:
    // 0x11c550: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11c550u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11c554: 0xc136dec  jal         func_4DB7B0
    ctx->pc = 0x11C554u;
    SET_GPR_U32(ctx, 31, 0x11C55Cu);
    ctx->pc = 0x11C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C554u;
    // 0x11c558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x11C554u, 0x11C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C55Cu;
label_11c55c:
    // 0x11c55c: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x11c55cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11c560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c564: 0xc04b5ea  jal         func_12D7A8
    ctx->pc = 0x11C564u;
    SET_GPR_U32(ctx, 31, 0x11C56Cu);
    ctx->pc = 0x11C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C564u;
    // 0x11c568: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x11C564u, 0x11C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C56Cu;
label_11c56c:
    // 0x11c56c: 0xc136dfa  jal         func_4DB7E8
    ctx->pc = 0x11C56Cu;
    SET_GPR_U32(ctx, 31, 0x11C574u);
    ctx->pc = 0x11C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C56Cu;
    // 0x11c570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x11C56Cu, 0x11C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C574u;
label_11c574:
    // 0x11c574: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11C574u;
    {
        const bool branch_taken_0x11c574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C574u;
        // 0x11c578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c574) {
            ctx->pc = 0x11C5ACu;
            goto label_11c5ac;
        }
    }
    ctx->pc = 0x11C57Cu;
label_11c57c:
    // 0x11c57c: 0xc136dfa  jal         func_4DB7E8
    ctx->pc = 0x11C57Cu;
    SET_GPR_U32(ctx, 31, 0x11C584u);
    ctx->pc = 0x11C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C57Cu;
    // 0x11c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x11C57Cu, 0x11C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C584u;
label_11c584:
    // 0x11c584: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11c584u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11c588: 0xc136dec  jal         func_4DB7B0
    ctx->pc = 0x11C588u;
    SET_GPR_U32(ctx, 31, 0x11C590u);
    ctx->pc = 0x11C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C588u;
    // 0x11c58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x11C588u, 0x11C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C590u;
label_11c590:
    // 0x11c590: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x11c590u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11c594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c598: 0xc04b5ea  jal         func_12D7A8
    ctx->pc = 0x11C598u;
    SET_GPR_U32(ctx, 31, 0x11C5A0u);
    ctx->pc = 0x11C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C598u;
    // 0x11c59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x11C598u, 0x11C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5A0u;
label_11c5a0:
    // 0x11c5a0: 0xc136df8  jal         func_4DB7E0
    ctx->pc = 0x11C5A0u;
    SET_GPR_U32(ctx, 31, 0x11C5A8u);
    ctx->pc = 0x11C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5A0u;
    // 0x11c5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x11C5A0u, 0x11C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5A8u;
label_11c5a8:
    // 0x11c5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c5ac:
    // 0x11c5ac: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x11C5ACu;
    SET_GPR_U32(ctx, 31, 0x11C5B4u);
    ctx->pc = 0x11C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5ACu;
    // 0x11c5b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x11C5ACu, 0x11C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5B4u;
label_11c5b4:
    // 0x11c5b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11C5B4u;
    {
        const bool branch_taken_0x11c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5B4u;
        // 0x11c5b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5b4) {
            ctx->pc = 0x11C5F8u;
            goto label_11c5f8;
        }
    }
    ctx->pc = 0x11C5BCu;
label_11c5bc:
    // 0x11c5bc: 0xc136df8  jal         func_4DB7E0
    ctx->pc = 0x11C5BCu;
    SET_GPR_U32(ctx, 31, 0x11C5C4u);
    ctx->pc = 0x11C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5BCu;
    // 0x11c5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x11C5BCu, 0x11C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5C4u;
label_11c5c4:
    // 0x11c5c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11c5c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x11c5c8: 0xc136dec  jal         func_4DB7B0
    ctx->pc = 0x11C5C8u;
    SET_GPR_U32(ctx, 31, 0x11C5D0u);
    ctx->pc = 0x11C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5C8u;
    // 0x11c5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x11C5C8u, 0x11C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5D0u;
label_11c5d0:
    // 0x11c5d0: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x11c5d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x11c5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5d8: 0xc04b5ea  jal         func_12D7A8
    ctx->pc = 0x11C5D8u;
    SET_GPR_U32(ctx, 31, 0x11C5E0u);
    ctx->pc = 0x11C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5D8u;
    // 0x11c5dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x11C5D8u, 0x11C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5E0u;
label_11c5e0:
    // 0x11c5e0: 0xc136df6  jal         func_4DB7D8
    ctx->pc = 0x11C5E0u;
    SET_GPR_U32(ctx, 31, 0x11C5E8u);
    ctx->pc = 0x11C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5E0u;
    // 0x11c5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7D8u, 0x11C5E0u, 0x11C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5E8u;
label_11c5e8:
    // 0x11c5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5ec: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x11C5ECu;
    SET_GPR_U32(ctx, 31, 0x11C5F4u);
    ctx->pc = 0x11C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5ECu;
    // 0x11c5f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x11C5ECu, 0x11C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5F4u;
label_11c5f4:
    // 0x11c5f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11c5f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11c5f8:
    // 0x11c5f8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x11c5f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11c5fc: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x11C5FCu;
    {
        const bool branch_taken_0x11c5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5FCu;
        // 0x11c600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5fc) {
            ctx->pc = 0x11C4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c4e8;
        }
    }
    ctx->pc = 0x11C604u;
label_11c604:
    // 0x11c604: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11c604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11c608: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11c608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c60c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11c60cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c610: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11c610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11c614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c618: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x11c618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c61c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x11c61cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c620: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x11c620u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c628: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c62c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C62Cu;
        // 0x11c630: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C634u;
    // 0x11c634: 0x0  nop
    ctx->pc = 0x11c634u;
    // NOP
    ctx->pc = 0x11c638u;
}
