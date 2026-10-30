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

// Function: sub_002B7BC0
// Address: 0x2b7bc0 - 0x2b7c18
void sub_002B7BC0_0x2b7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7BC0_0x2b7bc0");
#endif

    switch (ctx->pc) {
        case 0x2b7bd8u: goto label_2b7bd8;
        case 0x2b7bf0u: goto label_2b7bf0;
        case 0x2b7bfcu: goto label_2b7bfc;
        default: break;
    }

    ctx->pc = 0x2b7bc0u;

    // 0x2b7bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b7bc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b7bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b7bc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b7bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b7bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7bd0: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B7BD0u;
    SET_GPR_U32(ctx, 31, 0x2B7BD8u);
    ctx->pc = 0x2B7BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BD0u;
    // 0x2b7bd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B7BD0u, 0x2B7BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BD8u;
label_2b7bd8:
    // 0x2b7bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bdc: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7BDCu;
    {
        const bool branch_taken_0x2b7bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7bdc) {
            ctx->pc = 0x2B7BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7BDCu;
            // 0x2b7be0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7BF4u;
            goto label_2b7bf4;
        }
    }
    ctx->pc = 0x2B7BE4u;
    // 0x2b7be4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b7be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7be8: 0xc0be324  jal         func_2F8C90
    ctx->pc = 0x2B7BE8u;
    SET_GPR_U32(ctx, 31, 0x2B7BF0u);
    ctx->pc = 0x2B7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BE8u;
    // 0x2b7bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8C90u, 0x2B7BE8u, 0x2B7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BF0u;
label_2b7bf0:
    // 0x2b7bf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b7bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b7bf4:
    // 0x2b7bf4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B7BF4u;
    SET_GPR_U32(ctx, 31, 0x2B7BFCu);
    ctx->pc = 0x2B7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7BF4u;
    // 0x2b7bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B7BF4u, 0x2B7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7BFCu;
label_2b7bfc:
    // 0x2b7bfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b7bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b7c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C0Cu;
        // 0x2b7c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7C14u;
    // 0x2b7c14: 0x0  nop
    ctx->pc = 0x2b7c14u;
    // NOP
    ctx->pc = 0x2b7c18u;
}
