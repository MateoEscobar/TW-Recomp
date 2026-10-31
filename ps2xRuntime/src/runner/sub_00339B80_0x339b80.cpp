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

// Function: sub_00339B80
// Address: 0x339b80 - 0x339bf0
void sub_00339B80_0x339b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339B80_0x339b80");
#endif

    switch (ctx->pc) {
        case 0x339bb0u: goto label_339bb0;
        default: break;
    }

    ctx->pc = 0x339b80u;

    // 0x339b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x339b84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x339b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x339b88: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x339b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x339b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x339b90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x339b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339b9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x339b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x339ba0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x339ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x339ba4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x339ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ba8: 0xc0ce512  jal         func_339448
    ctx->pc = 0x339BA8u;
    SET_GPR_U32(ctx, 31, 0x339BB0u);
    ctx->pc = 0x339BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BA8u;
    // 0x339bac: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339448u, 0x339BA8u, 0x339BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BB0u;
label_339bb0:
    // 0x339bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x339bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339bb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x339BB4u;
    {
        const bool branch_taken_0x339bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BB4u;
        // 0x339bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bb4) {
            ctx->pc = 0x339BD8u;
            goto label_339bd8;
        }
    }
    ctx->pc = 0x339BBCu;
    // 0x339bbc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x339bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x339bc0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x339BC0u;
    {
        const bool branch_taken_0x339bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x339BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BC0u;
        // 0x339bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bc0) {
            ctx->pc = 0x339BD8u;
            goto label_339bd8;
        }
    }
    ctx->pc = 0x339BC8u;
    // 0x339bc8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x339bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x339bcc: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x339BCCu;
    {
        const bool branch_taken_0x339bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x339BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BCCu;
        // 0x339bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bcc) {
            ctx->pc = 0x339BD8u;
            goto label_339bd8;
        }
    }
    ctx->pc = 0x339BD4u;
    // 0x339bd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x339bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_339bd8:
    // 0x339bd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x339bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x339bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339be4: 0x3e00008  jr          $ra
    ctx->pc = 0x339BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BE4u;
        // 0x339be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339BECu;
    // 0x339bec: 0x0  nop
    ctx->pc = 0x339becu;
    // NOP
    ctx->pc = 0x339bf0u;
}
