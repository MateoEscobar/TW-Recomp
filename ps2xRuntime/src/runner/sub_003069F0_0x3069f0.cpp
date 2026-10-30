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

// Function: sub_003069F0
// Address: 0x3069f0 - 0x306b50
void sub_003069F0_0x3069f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003069F0_0x3069f0");
#endif

    switch (ctx->pc) {
        case 0x306a30u: goto label_306a30;
        case 0x306a50u: goto label_306a50;
        case 0x306a68u: goto label_306a68;
        case 0x306a70u: goto label_306a70;
        case 0x306a78u: goto label_306a78;
        case 0x306aa4u: goto label_306aa4;
        case 0x306ab4u: goto label_306ab4;
        case 0x306ad4u: goto label_306ad4;
        case 0x306b1cu: goto label_306b1c;
        default: break;
    }

    ctx->pc = 0x3069f0u;

    // 0x3069f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3069f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3069f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3069f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3069f8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3069f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3069fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3069fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a00: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x306a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x306a04: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x306a04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a08: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x306a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x306a0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a10: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x306a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x306a14: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x306a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x306a18: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x306a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x306a1c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x306a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x306a20: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x306a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x306a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306a28: 0xc059856  jal         func_166158
    ctx->pc = 0x306A28u;
    SET_GPR_U32(ctx, 31, 0x306A30u);
    ctx->pc = 0x306A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A28u;
    // 0x306a2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x306A28u, 0x306A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A30u;
label_306a30:
    // 0x306a30: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x306a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x306a34: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x306A34u;
    {
        const bool branch_taken_0x306a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306a34) {
            ctx->pc = 0x306A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A34u;
            // 0x306a38: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306B20u;
            goto label_306b20;
        }
    }
    ctx->pc = 0x306A3Cu;
    // 0x306a3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x306a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x306a40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x306a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x306a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a48: 0xc05959e  jal         func_165678
    ctx->pc = 0x306A48u;
    SET_GPR_U32(ctx, 31, 0x306A50u);
    ctx->pc = 0x306A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A48u;
    // 0x306a4c: 0x3c17006f  lui         $s7, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x306A48u, 0x306A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A50u;
label_306a50:
    // 0x306a50: 0x24160031  addiu       $s6, $zero, 0x31
    ctx->pc = 0x306a50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x306a54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x306a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x306a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x306a5c: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x306a5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x306a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x306a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a64: 0x0  nop
    ctx->pc = 0x306a64u;
    // NOP
label_306a68:
    // 0x306a68: 0xc137826  jal         func_4DE098
    ctx->pc = 0x306A68u;
    SET_GPR_U32(ctx, 31, 0x306A70u);
    ctx->pc = 0x306A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A68u;
    // 0x306a6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x306A68u, 0x306A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A70u;
label_306a70:
    // 0x306a70: 0xc0e409a  jal         func_390268
    ctx->pc = 0x306A70u;
    SET_GPR_U32(ctx, 31, 0x306A78u);
    ctx->pc = 0x306A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A70u;
    // 0x306a74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x306A70u, 0x306A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A78u;
label_306a78:
    // 0x306a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306a7c: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x306A7Cu;
    {
        const bool branch_taken_0x306a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a7c) {
            ctx->pc = 0x306A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A7Cu;
            // 0x306a80: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AE0u;
            goto label_306ae0;
        }
    }
    ctx->pc = 0x306A84u;
    // 0x306a84: 0x52150016  beql        $s0, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x306A84u;
    {
        const bool branch_taken_0x306a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x306a84) {
            ctx->pc = 0x306A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A84u;
            // 0x306a88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AE0u;
            goto label_306ae0;
        }
    }
    ctx->pc = 0x306A8Cu;
    // 0x306a8c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x306a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x306a90: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x306a90u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x306a94: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x306A94u;
    {
        const bool branch_taken_0x306a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A94u;
        // 0x306a98: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a94) {
            ctx->pc = 0x306ADCu;
            goto label_306adc;
        }
    }
    ctx->pc = 0x306A9Cu;
    // 0x306a9c: 0xc08a096  jal         func_228258
    ctx->pc = 0x306A9Cu;
    SET_GPR_U32(ctx, 31, 0x306AA4u);
    ctx->pc = 0x306AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A9Cu;
    // 0x306aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x306A9Cu, 0x306AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AA4u;
label_306aa4:
    // 0x306aa4: 0x5051000e  beql        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x306AA4u;
    {
        const bool branch_taken_0x306aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x306aa4) {
            ctx->pc = 0x306AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306AA4u;
            // 0x306aa8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AE0u;
            goto label_306ae0;
        }
    }
    ctx->pc = 0x306AACu;
    // 0x306aac: 0xc08a08a  jal         func_228228
    ctx->pc = 0x306AACu;
    SET_GPR_U32(ctx, 31, 0x306AB4u);
    ctx->pc = 0x306AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306AACu;
    // 0x306ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x306AACu, 0x306AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AB4u;
label_306ab4:
    // 0x306ab4: 0x5051000a  beql        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x306AB4u;
    {
        const bool branch_taken_0x306ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x306ab4) {
            ctx->pc = 0x306AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306AB4u;
            // 0x306ab8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306AE0u;
            goto label_306ae0;
        }
    }
    ctx->pc = 0x306ABCu;
    // 0x306abc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x306ABCu;
    {
        const bool branch_taken_0x306abc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x306AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306ABCu;
        // 0x306ac0: 0x26e4b8a0  addiu       $a0, $s7, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306abc) {
            ctx->pc = 0x306ACCu;
            goto label_306acc;
        }
    }
    ctx->pc = 0x306AC4u;
    // 0x306ac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x306AC4u;
    {
        const bool branch_taken_0x306ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AC4u;
        // 0x306ac8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ac4) {
            ctx->pc = 0x306ADCu;
            goto label_306adc;
        }
    }
    ctx->pc = 0x306ACCu;
label_306acc:
    // 0x306acc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x306ACCu;
    SET_GPR_U32(ctx, 31, 0x306AD4u);
    ctx->pc = 0x306AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306ACCu;
    // 0x306ad0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x306ACCu, 0x306AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AD4u;
label_306ad4:
    // 0x306ad4: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x306ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306ad8: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x306ad8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
label_306adc:
    // 0x306adc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x306adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_306ae0:
    // 0x306ae0: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x306ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x306ae4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x306AE4u;
    {
        const bool branch_taken_0x306ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE4u;
        // 0x306ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ae4) {
            ctx->pc = 0x306A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306a68;
        }
    }
    ctx->pc = 0x306AECu;
    // 0x306aec: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x306AECu;
    {
        const bool branch_taken_0x306aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AECu;
        // 0x306af0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306aec) {
            ctx->pc = 0x306B1Cu;
            goto label_306b1c;
        }
    }
    ctx->pc = 0x306AF4u;
    // 0x306af4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x306af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x306af8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x306af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306afc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x306afcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x306b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x306b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x306b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306b14: 0xc088178  jal         func_2205E0
    ctx->pc = 0x306B14u;
    SET_GPR_U32(ctx, 31, 0x306B1Cu);
    ctx->pc = 0x306B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B14u;
    // 0x306b18: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x306B14u, 0x306B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B1Cu;
label_306b1c:
    // 0x306b1c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x306b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_306b20:
    // 0x306b20: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x306b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x306b24: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x306b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x306b28: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x306b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x306b2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x306b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306b30: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x306b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306b34: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x306b34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306b38: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x306b38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306b3c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x306b3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306b44: 0x3e00008  jr          $ra
    ctx->pc = 0x306B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B44u;
        // 0x306b48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306B4Cu;
    // 0x306b4c: 0x0  nop
    ctx->pc = 0x306b4cu;
    // NOP
    ctx->pc = 0x306b50u;
}
