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

// Function: sub_00168BE0
// Address: 0x168be0 - 0x168cd0
void sub_00168BE0_0x168be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168BE0_0x168be0");
#endif

    switch (ctx->pc) {
        case 0x168c30u: goto label_168c30;
        case 0x168c48u: goto label_168c48;
        default: break;
    }

    ctx->pc = 0x168be0u;

    // 0x168be0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x168be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x168be4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x168be8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x168be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x168bec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x168becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x168bf0: 0x24900640  addiu       $s0, $a0, 0x640
    ctx->pc = 0x168bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x168bf4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x168bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x168bf8: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x168bfc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x168bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x168c00: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x168c00u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x168c04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x168c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x168c08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x168c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c0c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x168c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x168c10: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x168c10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
    // 0x168c14: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x168c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x168c18: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x168c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168c1c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x168c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x168c20: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x168c20u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x168c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168c28: 0x241703e8  addiu       $s7, $zero, 0x3E8
    ctx->pc = 0x168c28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x168c2c: 0x0  nop
    ctx->pc = 0x168c2cu;
    // NOP
label_168c30:
    // 0x168c30: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x168c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x168c34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x168C34u;
    {
        const bool branch_taken_0x168c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C34u;
        // 0x168c38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c34) {
            ctx->pc = 0x168C8Cu;
            goto label_168c8c;
        }
    }
    ctx->pc = 0x168C3Cu;
    // 0x168c3c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x168c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x168c40: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x168C40u;
    SET_GPR_U32(ctx, 31, 0x168C48u);
    ctx->pc = 0x168C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C40u;
    // 0x168c44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x168C40u, 0x168C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C48u;
label_168c48:
    // 0x168c48: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x168C48u;
    {
        const bool branch_taken_0x168c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C48u;
        // 0x168c4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c48) {
            ctx->pc = 0x168C8Cu;
            goto label_168c8c;
        }
    }
    ctx->pc = 0x168C50u;
    // 0x168c50: 0xa6120052  sh          $s2, 0x52($s0)
    ctx->pc = 0x168c50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 18));
    // 0x168c54: 0x16550007  bne         $s2, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x168C54u;
    {
        const bool branch_taken_0x168c54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x168C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C54u;
        // 0x168c58: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c54) {
            ctx->pc = 0x168C74u;
            goto label_168c74;
        }
    }
    ctx->pc = 0x168C5Cu;
    // 0x168c5c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x168c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x168c60: 0x8ec4b734  lw          $a0, -0x48CC($s6)
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
    // 0x168c64: 0x771818  mult        $v1, $v1, $s7
    ctx->pc = 0x168c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168c68: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x168c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x168c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168c70: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x168c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_168c74:
    // 0x168c74: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x168c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x168c78: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x168c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x168c7c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x168c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x168c80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x168c84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168C84u;
    {
        const bool branch_taken_0x168c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C84u;
        // 0x168c88: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c84) {
            ctx->pc = 0x168CA0u;
            goto label_168ca0;
        }
    }
    ctx->pc = 0x168C8Cu;
label_168c8c:
    // 0x168c8c: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x168c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x168c90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x168c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x168c94: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x168c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x168c98: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x168C98u;
    {
        const bool branch_taken_0x168c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C98u;
        // 0x168c9c: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c98) {
            ctx->pc = 0x168C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168c30;
        }
    }
    ctx->pc = 0x168CA0u;
label_168ca0:
    // 0x168ca0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x168ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168ca4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x168ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168ca8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x168ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168cac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x168cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168cb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168cb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168cb4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x168cb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168cb8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x168cb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168cbc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x168cbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x168CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CC4u;
        // 0x168cc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168CCCu;
    // 0x168ccc: 0x0  nop
    ctx->pc = 0x168cccu;
    // NOP
    ctx->pc = 0x168cd0u;
}
