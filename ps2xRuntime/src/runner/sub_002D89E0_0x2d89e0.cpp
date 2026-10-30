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

// Function: sub_002D89E0
// Address: 0x2d89e0 - 0x2d8b10
void sub_002D89E0_0x2d89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D89E0_0x2d89e0");
#endif

    switch (ctx->pc) {
        case 0x2d8a20u: goto label_2d8a20;
        case 0x2d8a3cu: goto label_2d8a3c;
        case 0x2d8a4cu: goto label_2d8a4c;
        case 0x2d8a74u: goto label_2d8a74;
        case 0x2d8a8cu: goto label_2d8a8c;
        case 0x2d8ab8u: goto label_2d8ab8;
        case 0x2d8ac8u: goto label_2d8ac8;
        case 0x2d8ae4u: goto label_2d8ae4;
        default: break;
    }

    ctx->pc = 0x2d89e0u;

    // 0x2d89e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d89e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d89e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d89e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d89e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d89ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d89ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d89f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d89f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d89f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d89f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d89fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d89fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d8a00: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2d8a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8a04: 0x14a30032  bne         $a1, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D8A04u;
    {
        const bool branch_taken_0x2d8a04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A04u;
        // 0x2d8a08: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a04) {
            ctx->pc = 0x2D8AD0u;
            goto label_2d8ad0;
        }
    }
    ctx->pc = 0x2D8A0Cu;
    // 0x2d8a0c: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x2d8a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d8a10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D8A10u;
    {
        const bool branch_taken_0x2d8a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A10u;
        // 0x2d8a14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a10) {
            ctx->pc = 0x2D8A28u;
            goto label_2d8a28;
        }
    }
    ctx->pc = 0x2D8A18u;
    // 0x2d8a18: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2D8A18u;
    SET_GPR_U32(ctx, 31, 0x2D8A20u);
    ctx->pc = 0x2D8A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A18u;
    // 0x2d8a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2D8A18u, 0x2D8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A20u;
label_2d8a20:
    // 0x2d8a20: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2D8A20u;
    {
        const bool branch_taken_0x2d8a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A20u;
        // 0x2d8a24: 0xa2400284  sb          $zero, 0x284($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a20) {
            ctx->pc = 0x2D8AF4u;
            goto label_2d8af4;
        }
    }
    ctx->pc = 0x2D8A28u;
label_2d8a28:
    // 0x2d8a28: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8A28u;
    {
        const bool branch_taken_0x2d8a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A28u;
        // 0x2d8a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a28) {
            ctx->pc = 0x2D8AC0u;
            goto label_2d8ac0;
        }
    }
    ctx->pc = 0x2D8A30u;
    // 0x2d8a30: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d8a34: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D8A34u;
    SET_GPR_U32(ctx, 31, 0x2D8A3Cu);
    ctx->pc = 0x2D8A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A34u;
    // 0x2d8a38: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D8A34u, 0x2D8A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A3Cu;
label_2d8a3c:
    // 0x2d8a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d8a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a44: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2D8A44u;
    SET_GPR_U32(ctx, 31, 0x2D8A4Cu);
    ctx->pc = 0x2D8A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A44u;
    // 0x2d8a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2D8A44u, 0x2D8A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A4Cu;
label_2d8a4c:
    // 0x2d8a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a50: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D8A50u;
    {
        const bool branch_taken_0x2d8a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A50u;
        // 0x2d8a54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a50) {
            ctx->pc = 0x2D8AF4u;
            goto label_2d8af4;
        }
    }
    ctx->pc = 0x2D8A58u;
    // 0x2d8a58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d8a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d8a5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d8a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d8a60: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x2d8a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x2d8a64: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2d8a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2d8a68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d8a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8a6c: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2D8A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A74u);
    ctx->pc = 0x2D8A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A6Cu;
    // 0x2d8a70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D8A6Cu, 0x2D8A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A74u;
label_2d8a74:
    // 0x2d8a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d8a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8a7c: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x2d8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
    // 0x2d8a80: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2d8a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2d8a84: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2D8A84u;
    SET_GPR_U32(ctx, 31, 0x2D8A8Cu);
    ctx->pc = 0x2D8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8A84u;
    // 0x2d8a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2D8A84u, 0x2D8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8A8Cu;
label_2d8a8c:
    // 0x2d8a8c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d8a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d8a90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d8a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d8a94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d8a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d8a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a9c: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x2d8a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x2d8aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8aa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d8aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d8aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d8aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ab0: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2D8AB0u;
    SET_GPR_U32(ctx, 31, 0x2D8AB8u);
    ctx->pc = 0x2D8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8AB0u;
    // 0x2d8ab4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2D8AB0u, 0x2D8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AB8u;
label_2d8ab8:
    // 0x2d8ab8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D8AB8u;
    {
        const bool branch_taken_0x2d8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AB8u;
        // 0x2d8abc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ab8) {
            ctx->pc = 0x2D8AF8u;
            goto label_2d8af8;
        }
    }
    ctx->pc = 0x2D8AC0u;
label_2d8ac0:
    // 0x2d8ac0: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2D8AC0u;
    SET_GPR_U32(ctx, 31, 0x2D8AC8u);
    ctx->pc = 0x2D8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8AC0u;
    // 0x2d8ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2D8AC0u, 0x2D8AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AC8u;
label_2d8ac8:
    // 0x2d8ac8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D8AC8u;
    {
        const bool branch_taken_0x2d8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8AC8u;
        // 0x2d8acc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ac8) {
            ctx->pc = 0x2D8AF8u;
            goto label_2d8af8;
        }
    }
    ctx->pc = 0x2D8AD0u;
label_2d8ad0:
    // 0x2d8ad0: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x2d8ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d8ad4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D8AD4u;
    {
        const bool branch_taken_0x2d8ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ad4) {
            ctx->pc = 0x2D8AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8AD4u;
            // 0x2d8ad8: 0xa2430284  sb          $v1, 0x284($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8ADCu;
            goto label_2d8adc;
        }
    }
    ctx->pc = 0x2D8ADCu;
label_2d8adc:
    // 0x2d8adc: 0xc087420  jal         func_21D080
    ctx->pc = 0x2D8ADCu;
    SET_GPR_U32(ctx, 31, 0x2D8AE4u);
    ctx->pc = 0x2D8AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8ADCu;
    // 0x2d8ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2D8ADCu, 0x2D8AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8AE4u;
label_2d8ae4:
    // 0x2d8ae4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d8ae4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8ae8: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2d8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8aec: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d8aecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2d8af0: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2d8af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
label_2d8af4:
    // 0x2d8af4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d8af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8af8:
    // 0x2d8af8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d8af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8afc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b04: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d8b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B08u;
        // 0x2d8b0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8B10u;
}
