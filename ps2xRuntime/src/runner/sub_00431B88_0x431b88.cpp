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

// Function: sub_00431B88
// Address: 0x431b88 - 0x431ca0
void sub_00431B88_0x431b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431B88_0x431b88");
#endif

    switch (ctx->pc) {
        case 0x431bc8u: goto label_431bc8;
        case 0x431c08u: goto label_431c08;
        case 0x431c18u: goto label_431c18;
        case 0x431c30u: goto label_431c30;
        case 0x431c58u: goto label_431c58;
        default: break;
    }

    ctx->pc = 0x431b88u;

    // 0x431b88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x431b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x431b8c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x431b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x431b90: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x431b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x431b94: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x431b94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431b98: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x431b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x431b9c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x431b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431ba0: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x431ba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x431ba4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x431ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x431ba8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x431ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x431bac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x431bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431bb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x431bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x431bb4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x431bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x431bb8: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x431BB8u;
    {
        const bool branch_taken_0x431bb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x431BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BB8u;
        // 0x431bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bb8) {
            ctx->pc = 0x431BE0u;
            goto label_431be0;
        }
    }
    ctx->pc = 0x431BC0u;
    // 0x431bc0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x431BC0u;
    {
        const bool branch_taken_0x431bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BC0u;
        // 0x431bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bc0) {
            ctx->pc = 0x431C74u;
            goto label_431c74;
        }
    }
    ctx->pc = 0x431BC8u;
label_431bc8:
    // 0x431bc8: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x431BC8u;
    {
        const bool branch_taken_0x431bc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x431bc8) {
            ctx->pc = 0x431BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431BC8u;
            // 0x431bcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x431BD0u;
            goto label_431bd0;
        }
    }
    ctx->pc = 0x431BD0u;
label_431bd0:
    // 0x431bd0: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x431bd0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x431bd4: 0x1012  mflo        $v0
    ctx->pc = 0x431bd4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x431bd8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x431BD8u;
    {
        const bool branch_taken_0x431bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BD8u;
        // 0x431bdc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bd8) {
            ctx->pc = 0x431C78u;
            goto label_431c78;
        }
    }
    ctx->pc = 0x431BE0u;
label_431be0:
    // 0x431be0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x431be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x431be4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x431BE4u;
    {
        const bool branch_taken_0x431be4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x431be4) {
            ctx->pc = 0x431BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431BE4u;
            // 0x431be8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431BECu;
            goto label_431bec;
        }
    }
    ctx->pc = 0x431BECu;
label_431bec:
    // 0x431bec: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x431becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x431bf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x431bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431bf4: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x431bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x431bf8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x431BF8u;
    {
        const bool branch_taken_0x431bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431BF8u;
        // 0x431bfc: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431bf8) {
            ctx->pc = 0x431C48u;
            goto label_431c48;
        }
    }
    ctx->pc = 0x431C00u;
    // 0x431c00: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x431c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x431c04: 0x0  nop
    ctx->pc = 0x431c04u;
    // NOP
label_431c08:
    // 0x431c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x431c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431c0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x431c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431c10: 0xc10c6d6  jal         func_431B58
    ctx->pc = 0x431C10u;
    SET_GPR_U32(ctx, 31, 0x431C18u);
    ctx->pc = 0x431C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C10u;
    // 0x431c14: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B58u, 0x431C10u, 0x431C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C18u;
label_431c18:
    // 0x431c18: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x431c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x431c1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x431c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x431c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431c24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x431c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x431c28: 0xc10c998  jal         func_432660
    ctx->pc = 0x431C28u;
    SET_GPR_U32(ctx, 31, 0x431C30u);
    ctx->pc = 0x431C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C28u;
    // 0x431c2c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x431C28u, 0x431C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C30u;
label_431c30:
    // 0x431c30: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x431C30u;
    {
        const bool branch_taken_0x431c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C30u;
        // 0x431c34: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431c30) {
            ctx->pc = 0x431BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431bc8;
        }
    }
    ctx->pc = 0x431C38u;
    // 0x431c38: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x431c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x431c3c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x431c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x431c40: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x431C40u;
    {
        const bool branch_taken_0x431c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431c40) {
            ctx->pc = 0x431C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431C40u;
            // 0x431c44: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431c08;
        }
    }
    ctx->pc = 0x431C48u;
label_431c48:
    // 0x431c48: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x431c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x431c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x431c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431c50: 0xc10c6d6  jal         func_431B58
    ctx->pc = 0x431C50u;
    SET_GPR_U32(ctx, 31, 0x431C58u);
    ctx->pc = 0x431C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431C50u;
    // 0x431c54: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431B58u, 0x431C50u, 0x431C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431C58u;
label_431c58:
    // 0x431c58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x431c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x431c5c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x431c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431c60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x431c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x431c64: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x431c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x431c68: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x431c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x431c6c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x431c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x431c70: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x431c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_431c74:
    // 0x431c74: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x431c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_431c78:
    // 0x431c78: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x431c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x431c7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x431c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x431c80: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x431c80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x431c84: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x431c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x431c88: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x431c88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431c8c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x431c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x431c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431c94: 0x3e00008  jr          $ra
    ctx->pc = 0x431C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431C94u;
        // 0x431c98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431C9Cu;
    // 0x431c9c: 0x0  nop
    ctx->pc = 0x431c9cu;
    // NOP
    ctx->pc = 0x431ca0u;
}
