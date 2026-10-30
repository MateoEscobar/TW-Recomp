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

// Function: sub_00338BF0
// Address: 0x338bf0 - 0x338cc0
void sub_00338BF0_0x338bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338BF0_0x338bf0");
#endif

    switch (ctx->pc) {
        case 0x338c44u: goto label_338c44;
        case 0x338c5cu: goto label_338c5c;
        case 0x338c78u: goto label_338c78;
        case 0x338c88u: goto label_338c88;
        default: break;
    }

    ctx->pc = 0x338bf0u;

    // 0x338bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x338bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x338bf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x338bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x338bf8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x338bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x338bfc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x338bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x338c00: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x338c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x338c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x338c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x338c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c0c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x338c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x338c10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x338c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c14: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x338c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x338c18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x338c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c1c: 0x8c43b950  lw          $v1, -0x46B0($v0)
    ctx->pc = 0x338c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EB950u));
    // 0x338c20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x338c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c28: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x338C28u;
    {
        const bool branch_taken_0x338c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x338C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C28u;
        // 0x338c2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c28) {
            ctx->pc = 0x338C78u;
            goto label_338c78;
        }
    }
    ctx->pc = 0x338C30u;
    // 0x338c30: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x338C30u;
    {
        const bool branch_taken_0x338c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C30u;
        // 0x338c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c30) {
            ctx->pc = 0x338C64u;
            goto label_338c64;
        }
    }
    ctx->pc = 0x338C38u;
    // 0x338c38: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x338c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x338c3c: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x338C3Cu;
    SET_GPR_U32(ctx, 31, 0x338C44u);
    ctx->pc = 0x338C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C3Cu;
    // 0x338c40: 0x24a56c90  addiu       $a1, $a1, 0x6C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x338C3Cu, 0x338C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C44u;
label_338c44:
    // 0x338c44: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x338C44u;
    {
        const bool branch_taken_0x338c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338c44) {
            ctx->pc = 0x338C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338C44u;
            // 0x338c48: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338C7Cu;
            goto label_338c7c;
        }
    }
    ctx->pc = 0x338C4Cu;
    // 0x338c4c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x338c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x338c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c54: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x338C54u;
    SET_GPR_U32(ctx, 31, 0x338C5Cu);
    ctx->pc = 0x338C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C54u;
    // 0x338c58: 0x24a56c98  addiu       $a1, $a1, 0x6C98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x338C54u, 0x338C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C5Cu;
label_338c5c:
    // 0x338c5c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x338C5Cu;
    {
        const bool branch_taken_0x338c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338c5c) {
            ctx->pc = 0x338C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338C5Cu;
            // 0x338c60: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338C7Cu;
            goto label_338c7c;
        }
    }
    ctx->pc = 0x338C64u;
label_338c64:
    // 0x338c64: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338C64u;
    {
        const bool branch_taken_0x338c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C64u;
        // 0x338c68: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c64) {
            ctx->pc = 0x338C78u;
            goto label_338c78;
        }
    }
    ctx->pc = 0x338C6Cu;
    // 0x338c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c70: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x338C70u;
    SET_GPR_U32(ctx, 31, 0x338C78u);
    ctx->pc = 0x338C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C70u;
    // 0x338c74: 0x24a56c90  addiu       $a1, $a1, 0x6C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x338C70u, 0x338C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C78u;
label_338c78:
    // 0x338c78: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x338c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_338c7c:
    // 0x338c7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c80: 0xc0cefdc  jal         func_33BF70
    ctx->pc = 0x338C80u;
    SET_GPR_U32(ctx, 31, 0x338C88u);
    ctx->pc = 0x338C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C80u;
    // 0x338c84: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF70u, 0x338C80u, 0x338C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C88u;
label_338c88:
    // 0x338c88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x338c88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c8c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338C8Cu;
    {
        const bool branch_taken_0x338c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C8Cu;
        // 0x338c90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c8c) {
            ctx->pc = 0x338C9Cu;
            goto label_338c9c;
        }
    }
    ctx->pc = 0x338C94u;
    // 0x338c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338c98: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x338c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_338c9c:
    // 0x338c9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x338c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ca0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x338ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338ca4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x338ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338ca8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x338ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338cac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x338cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x338CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CB4u;
        // 0x338cb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338CBCu;
    // 0x338cbc: 0x0  nop
    ctx->pc = 0x338cbcu;
    // NOP
    ctx->pc = 0x338cc0u;
}
