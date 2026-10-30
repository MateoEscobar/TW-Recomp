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

// Function: sub_00292BC8
// Address: 0x292bc8 - 0x292c10
void sub_00292BC8_0x292bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292BC8_0x292bc8");
#endif

    switch (ctx->pc) {
        case 0x292be4u: goto label_292be4;
        case 0x292becu: goto label_292bec;
        case 0x292bfcu: goto label_292bfc;
        default: break;
    }

    ctx->pc = 0x292bc8u;

    // 0x292bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292bcc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292bd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292bdc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292BDCu;
    SET_GPR_U32(ctx, 31, 0x292BE4u);
    ctx->pc = 0x292BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BDCu;
    // 0x292be0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292BDCu, 0x292BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BE4u;
label_292be4:
    // 0x292be4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292BE4u;
    SET_GPR_U32(ctx, 31, 0x292BECu);
    ctx->pc = 0x292BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BE4u;
    // 0x292be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292BE4u, 0x292BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BECu;
label_292bec:
    // 0x292bec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292BECu;
    {
        const bool branch_taken_0x292bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292bec) {
            ctx->pc = 0x292BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292BECu;
            // 0x292bf0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292C04u;
            goto label_292c04;
        }
    }
    ctx->pc = 0x292BF4u;
    // 0x292bf4: 0xc087502  jal         func_21D408
    ctx->pc = 0x292BF4u;
    SET_GPR_U32(ctx, 31, 0x292BFCu);
    ctx->pc = 0x292BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BF4u;
    // 0x292bf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292BF4u, 0x292BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BFCu;
label_292bfc:
    // 0x292bfc: 0xa0500267  sb          $s0, 0x267($v0)
    ctx->pc = 0x292bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 615), (uint8_t)GPR_U32(ctx, 16));
    // 0x292c00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292c04:
    // 0x292c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292c08: 0x3e00008  jr          $ra
    ctx->pc = 0x292C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C08u;
        // 0x292c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292C10u;
}
