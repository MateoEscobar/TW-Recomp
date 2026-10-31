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

// Function: sub_003624E0
// Address: 0x3624e0 - 0x362600
void sub_003624E0_0x3624e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003624E0_0x3624e0");
#endif

    switch (ctx->pc) {
        case 0x362514u: goto label_362514;
        case 0x36251cu: goto label_36251c;
        case 0x362530u: goto label_362530;
        case 0x362538u: goto label_362538;
        case 0x36254cu: goto label_36254c;
        case 0x362558u: goto label_362558;
        case 0x362570u: goto label_362570;
        case 0x362578u: goto label_362578;
        case 0x36259cu: goto label_36259c;
        case 0x3625a8u: goto label_3625a8;
        case 0x3625b8u: goto label_3625b8;
        case 0x3625ccu: goto label_3625cc;
        default: break;
    }

    ctx->pc = 0x3624e0u;

    // 0x3624e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3624e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3624e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3624e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3624e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3624e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3624ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3624ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3624f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3624f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3624f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3624f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3624f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3624f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3624fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3624fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362500: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x362500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x362504: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x362504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x362508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36250c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36250Cu;
    SET_GPR_U32(ctx, 31, 0x362514u);
    ctx->pc = 0x362510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36250Cu;
    // 0x362510: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36250Cu, 0x362514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362514u;
label_362514:
    // 0x362514: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362514u;
    SET_GPR_U32(ctx, 31, 0x36251Cu);
    ctx->pc = 0x362518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362514u;
    // 0x362518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362514u, 0x36251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36251Cu;
label_36251c:
    // 0x36251c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36251cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362520: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362528: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362528u;
    SET_GPR_U32(ctx, 31, 0x362530u);
    ctx->pc = 0x36252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362528u;
    // 0x36252c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362528u, 0x362530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362530u;
label_362530:
    // 0x362530: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362530u;
    SET_GPR_U32(ctx, 31, 0x362538u);
    ctx->pc = 0x362534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362530u;
    // 0x362534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362530u, 0x362538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362538u;
label_362538:
    // 0x362538: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x362538u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36253c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362540: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362544: 0xc102488  jal         func_409220
    ctx->pc = 0x362544u;
    SET_GPR_U32(ctx, 31, 0x36254Cu);
    ctx->pc = 0x362548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362544u;
    // 0x362548: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x362544u, 0x36254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36254Cu;
label_36254c:
    // 0x36254c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36254cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362554: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x362554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_362558:
    // 0x362558: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36255c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362560: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362568: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x362568u;
    SET_GPR_U32(ctx, 31, 0x362570u);
    ctx->pc = 0x36256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362568u;
    // 0x36256c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x362568u, 0x362570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362570u;
label_362570:
    // 0x362570: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x362570u;
    SET_GPR_U32(ctx, 31, 0x362578u);
    ctx->pc = 0x362574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362570u;
    // 0x362574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x362570u, 0x362578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362578u;
label_362578:
    // 0x362578: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x362578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36257c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36257cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x362580: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x362580u;
    {
        const bool branch_taken_0x362580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362580u;
        // 0x362584: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362580) {
            ctx->pc = 0x362558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362558;
        }
    }
    ctx->pc = 0x362588u;
    // 0x362588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x362588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36258c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36258cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x362590: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x362590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362594: 0xc0af964  jal         func_2BE590
    ctx->pc = 0x362594u;
    SET_GPR_U32(ctx, 31, 0x36259Cu);
    ctx->pc = 0x362598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362594u;
    // 0x362598: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE590u, 0x362594u, 0x36259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36259Cu;
label_36259c:
    // 0x36259c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36259cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3625a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3625a4: 0x0  nop
    ctx->pc = 0x3625a4u;
    // NOP
label_3625a8:
    // 0x3625a8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3625a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3625ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3625acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3625b0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3625B0u;
    SET_GPR_U32(ctx, 31, 0x3625B8u);
    ctx->pc = 0x3625B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625B0u;
    // 0x3625b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3625B0u, 0x3625B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625B8u;
label_3625b8:
    // 0x3625b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3625b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3625bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3625c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3625c4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3625C4u;
    SET_GPR_U32(ctx, 31, 0x3625CCu);
    ctx->pc = 0x3625C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625C4u;
    // 0x3625c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3625C4u, 0x3625CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625CCu;
label_3625cc:
    // 0x3625cc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3625ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3625d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3625D0u;
    {
        const bool branch_taken_0x3625d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3625D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3625D0u;
        // 0x3625d4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3625d0) {
            ctx->pc = 0x3625A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3625a8;
        }
    }
    ctx->pc = 0x3625D8u;
    // 0x3625d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3625d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3625dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3625dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3625e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3625e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3625e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3625e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3625e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3625ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3625ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3625f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3625f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3625f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3625f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3625f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3625F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3625FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3625F8u;
        // 0x3625fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3625F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362600u;
}
