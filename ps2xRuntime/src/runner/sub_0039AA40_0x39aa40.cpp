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

// Function: sub_0039AA40
// Address: 0x39aa40 - 0x39ab20
void sub_0039AA40_0x39aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AA40_0x39aa40");
#endif

    switch (ctx->pc) {
        case 0x39aa90u: goto label_39aa90;
        case 0x39aac8u: goto label_39aac8;
        default: break;
    }

    ctx->pc = 0x39aa40u;

    // 0x39aa40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39aa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39aa44: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x39aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x39aa48: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x39aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x39aa4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39aa4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa50: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x39aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x39aa54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39aa58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39aa58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa5c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x39aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x39aa60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39aa60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa64: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x39aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x39aa68: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x39aa68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa6c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x39aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x39aa70: 0x30f6ffff  andi        $s6, $a3, 0xFFFF
    ctx->pc = 0x39aa70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x39aa74: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x39aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x39aa78: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x39aa78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39aa80: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x39aa80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x39aa84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x39AA84u;
    {
        const bool branch_taken_0x39aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA84u;
        // 0x39aa88: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa84) {
            ctx->pc = 0x39AAF0u;
            goto label_39aaf0;
        }
    }
    ctx->pc = 0x39AA8Cu;
    // 0x39aa8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39aa8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39aa90:
    // 0x39aa90: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x39aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x39aa94: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x39aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x39aa98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x39aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x39aa9c: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x39aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
    // 0x39aaa0: 0x5456000f  bnel        $v0, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x39AAA0u;
    {
        const bool branch_taken_0x39aaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x39aaa0) {
            ctx->pc = 0x39AAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AAA0u;
            // 0x39aaa4: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AAE0u;
            goto label_39aae0;
        }
    }
    ctx->pc = 0x39AAA8u;
    // 0x39aaa8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x39aaac: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x39aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
    // 0x39aab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39aab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39aab4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x39AAB4u;
    {
        const bool branch_taken_0x39aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39aab4) {
            ctx->pc = 0x39AAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AAB4u;
            // 0x39aab8: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AAE0u;
            goto label_39aae0;
        }
    }
    ctx->pc = 0x39AABCu;
    // 0x39aabc: 0x84640024  lh          $a0, 0x24($v1)
    ctx->pc = 0x39aabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x39aac0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x39AAC0u;
    SET_GPR_U32(ctx, 31, 0x39AAC8u);
    ctx->pc = 0x39AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AAC0u;
    // 0x39aac4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x39AAC0u, 0x39AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAC8u;
label_39aac8:
    // 0x39aac8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x39aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x39aacc: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x39aaccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x39aad0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x39aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x39aad4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39AAD4u;
    {
        const bool branch_taken_0x39aad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAD4u;
        // 0x39aad8: 0x2a28821  addu        $s1, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aad4) {
            ctx->pc = 0x39AAF0u;
            goto label_39aaf0;
        }
    }
    ctx->pc = 0x39AADCu;
    // 0x39aadc: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x39aadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_39aae0:
    // 0x39aae0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x39aae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x39aae4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x39aae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39aae8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x39AAE8u;
    {
        const bool branch_taken_0x39aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAE8u;
        // 0x39aaec: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aae8) {
            ctx->pc = 0x39AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39aa90;
        }
    }
    ctx->pc = 0x39AAF0u;
label_39aaf0:
    // 0x39aaf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39aaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aaf4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x39aaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39aaf8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x39aaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39aafc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x39aafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39ab00: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x39ab00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39ab04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39ab04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39ab08: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x39ab08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39ab0c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x39ab0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ab10: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x39ab10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ab14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ab18: 0x3e00008  jr          $ra
    ctx->pc = 0x39AB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB18u;
        // 0x39ab1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AB20u;
}
