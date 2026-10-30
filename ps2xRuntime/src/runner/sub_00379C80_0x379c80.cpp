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

// Function: sub_00379C80
// Address: 0x379c80 - 0x379d50
void sub_00379C80_0x379c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379C80_0x379c80");
#endif

    switch (ctx->pc) {
        case 0x379ca8u: goto label_379ca8;
        case 0x379cb8u: goto label_379cb8;
        case 0x379cd0u: goto label_379cd0;
        case 0x379cd8u: goto label_379cd8;
        case 0x379cf4u: goto label_379cf4;
        case 0x379d00u: goto label_379d00;
        case 0x379d10u: goto label_379d10;
        case 0x379d24u: goto label_379d24;
        default: break;
    }

    ctx->pc = 0x379c80u;

    // 0x379c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x379c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x379c84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x379c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379c88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x379c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x379c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379c90: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x379c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x379c94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x379c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x379c98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x379c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x379c9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x379ca0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x379CA0u;
    SET_GPR_U32(ctx, 31, 0x379CA8u);
    ctx->pc = 0x379CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CA0u;
    // 0x379ca4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x379CA0u, 0x379CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CA8u;
label_379ca8:
    // 0x379ca8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x379ca8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x379cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cb0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x379cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cb4: 0x0  nop
    ctx->pc = 0x379cb4u;
    // NOP
label_379cb8:
    // 0x379cb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379cc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cc8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x379CC8u;
    SET_GPR_U32(ctx, 31, 0x379CD0u);
    ctx->pc = 0x379CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CC8u;
    // 0x379ccc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x379CC8u, 0x379CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CD0u;
label_379cd0:
    // 0x379cd0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x379CD0u;
    SET_GPR_U32(ctx, 31, 0x379CD8u);
    ctx->pc = 0x379CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CD0u;
    // 0x379cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x379CD0u, 0x379CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CD8u;
label_379cd8:
    // 0x379cd8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x379cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x379cdc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x379cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379ce0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379CE0u;
    {
        const bool branch_taken_0x379ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379CE0u;
        // 0x379ce4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379ce0) {
            ctx->pc = 0x379CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379cb8;
        }
    }
    ctx->pc = 0x379CE8u;
    // 0x379ce8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x379ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cec: 0xc094b0a  jal         func_252C28
    ctx->pc = 0x379CECu;
    SET_GPR_U32(ctx, 31, 0x379CF4u);
    ctx->pc = 0x379CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379CECu;
    // 0x379cf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C28u, 0x379CECu, 0x379CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379CF4u;
label_379cf4:
    // 0x379cf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379cf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x379cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x379cfc: 0x0  nop
    ctx->pc = 0x379cfcu;
    // NOP
label_379d00:
    // 0x379d00: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x379d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x379d04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379d08: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x379D08u;
    SET_GPR_U32(ctx, 31, 0x379D10u);
    ctx->pc = 0x379D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D08u;
    // 0x379d0c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x379D08u, 0x379D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D10u;
label_379d10:
    // 0x379d10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379d1c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x379D1Cu;
    SET_GPR_U32(ctx, 31, 0x379D24u);
    ctx->pc = 0x379D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D1Cu;
    // 0x379d20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x379D1Cu, 0x379D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D24u;
label_379d24:
    // 0x379d24: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x379d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379d28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379D28u;
    {
        const bool branch_taken_0x379d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D28u;
        // 0x379d2c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d28) {
            ctx->pc = 0x379D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379d00;
        }
    }
    ctx->pc = 0x379D30u;
    // 0x379d30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x379d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x379d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x379d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379d3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x379d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379d40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x379d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379d48: 0x3e00008  jr          $ra
    ctx->pc = 0x379D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D48u;
        // 0x379d4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379D50u;
}
