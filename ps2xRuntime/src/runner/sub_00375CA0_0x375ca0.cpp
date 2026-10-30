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

// Function: sub_00375CA0
// Address: 0x375ca0 - 0x375d98
void sub_00375CA0_0x375ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375CA0_0x375ca0");
#endif

    switch (ctx->pc) {
        case 0x375cccu: goto label_375ccc;
        case 0x375cd4u: goto label_375cd4;
        case 0x375ce8u: goto label_375ce8;
        case 0x375cf8u: goto label_375cf8;
        case 0x375d10u: goto label_375d10;
        case 0x375d18u: goto label_375d18;
        case 0x375d38u: goto label_375d38;
        case 0x375d40u: goto label_375d40;
        case 0x375d50u: goto label_375d50;
        case 0x375d64u: goto label_375d64;
        default: break;
    }

    ctx->pc = 0x375ca0u;

    // 0x375ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x375ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x375ca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x375ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375ca8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x375ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x375cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x375cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375cb0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x375cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x375cb4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x375cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x375cb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x375cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x375cbc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x375cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x375cc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375cc4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375CC4u;
    SET_GPR_U32(ctx, 31, 0x375CCCu);
    ctx->pc = 0x375CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375CC4u;
    // 0x375cc8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375CC4u, 0x375CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CCCu;
label_375ccc:
    // 0x375ccc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x375CCCu;
    SET_GPR_U32(ctx, 31, 0x375CD4u);
    ctx->pc = 0x375CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375CCCu;
    // 0x375cd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x375CCCu, 0x375CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CD4u;
label_375cd4:
    // 0x375cd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x375cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375cdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375ce0: 0xc102488  jal         func_409220
    ctx->pc = 0x375CE0u;
    SET_GPR_U32(ctx, 31, 0x375CE8u);
    ctx->pc = 0x375CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375CE0u;
    // 0x375ce4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375CE0u, 0x375CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375CE8u;
label_375ce8:
    // 0x375ce8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x375ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x375cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375cf0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x375cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375cf4: 0x0  nop
    ctx->pc = 0x375cf4u;
    // NOP
label_375cf8:
    // 0x375cf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x375cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x375cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375d04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x375d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d08: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x375D08u;
    SET_GPR_U32(ctx, 31, 0x375D10u);
    ctx->pc = 0x375D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D08u;
    // 0x375d0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x375D08u, 0x375D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D10u;
label_375d10:
    // 0x375d10: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x375D10u;
    SET_GPR_U32(ctx, 31, 0x375D18u);
    ctx->pc = 0x375D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D10u;
    // 0x375d14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x375D10u, 0x375D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D18u;
label_375d18:
    // 0x375d18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x375d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x375d1c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x375d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x375d20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x375D20u;
    {
        const bool branch_taken_0x375d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D20u;
        // 0x375d24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d20) {
            ctx->pc = 0x375CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375cf8;
        }
    }
    ctx->pc = 0x375D28u;
    // 0x375d28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x375d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x375d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d30: 0xc0c5a3a  jal         func_3168E8
    ctx->pc = 0x375D30u;
    SET_GPR_U32(ctx, 31, 0x375D38u);
    ctx->pc = 0x375D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D30u;
    // 0x375d34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3168E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3168E8u, 0x375D30u, 0x375D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D38u;
label_375d38:
    // 0x375d38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x375d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d3c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x375d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_375d40:
    // 0x375d40: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x375d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x375d44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x375d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x375d48: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x375D48u;
    SET_GPR_U32(ctx, 31, 0x375D50u);
    ctx->pc = 0x375D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D48u;
    // 0x375d4c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x375D48u, 0x375D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D50u;
label_375d50:
    // 0x375d50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x375d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375d5c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x375D5Cu;
    SET_GPR_U32(ctx, 31, 0x375D64u);
    ctx->pc = 0x375D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D5Cu;
    // 0x375d60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x375D5Cu, 0x375D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D64u;
label_375d64:
    // 0x375d64: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x375d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x375d68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x375D68u;
    {
        const bool branch_taken_0x375d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D68u;
        // 0x375d6c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d68) {
            ctx->pc = 0x375D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375d40;
        }
    }
    ctx->pc = 0x375D70u;
    // 0x375d70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x375d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d78: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x375d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375d7c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x375d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x375d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375d84: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x375d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x375D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D8Cu;
        // 0x375d90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375D94u;
    // 0x375d94: 0x0  nop
    ctx->pc = 0x375d94u;
    // NOP
    ctx->pc = 0x375d98u;
}
