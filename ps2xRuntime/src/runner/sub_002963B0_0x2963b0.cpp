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

// Function: sub_002963B0
// Address: 0x2963b0 - 0x296410
void sub_002963B0_0x2963b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002963B0_0x2963b0");
#endif

    switch (ctx->pc) {
        case 0x2963dcu: goto label_2963dc;
        case 0x2963f0u: goto label_2963f0;
        default: break;
    }

    ctx->pc = 0x2963b0u;

    // 0x2963b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2963b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2963b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2963b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2963b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2963b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2963bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2963bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2963c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2963c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2963c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2963c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2963c8: 0x92030274  lbu         $v1, 0x274($s0)
    ctx->pc = 0x2963c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2963cc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2963CCu;
    {
        const bool branch_taken_0x2963cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2963D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963CCu;
        // 0x2963d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2963cc) {
            ctx->pc = 0x2963DCu;
            goto label_2963dc;
        }
    }
    ctx->pc = 0x2963D4u;
    // 0x2963d4: 0xc0a55b4  jal         func_2956D0
    ctx->pc = 0x2963D4u;
    SET_GPR_U32(ctx, 31, 0x2963DCu);
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x2963D4u, 0x2963DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963DCu;
label_2963dc:
    // 0x2963dc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2963dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2963e0: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x2963e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2963e4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x2963e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2963e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2963E8u;
    SET_GPR_U32(ctx, 31, 0x2963F0u);
    ctx->pc = 0x2963ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2963E8u;
    // 0x2963ec: 0x248401b8  addiu       $a0, $a0, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2963E8u, 0x2963F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2963F0u;
label_2963f0:
    // 0x2963f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2963F0u;
    {
        const bool branch_taken_0x2963f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2963f0) {
            ctx->pc = 0x2963F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2963F0u;
            // 0x2963f4: 0x8e020244  lw          $v0, 0x244($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2963F8u;
            goto label_2963f8;
        }
    }
    ctx->pc = 0x2963F8u;
label_2963f8:
    // 0x2963f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2963f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2963fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2963fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296404: 0x3e00008  jr          $ra
    ctx->pc = 0x296404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296404u;
        // 0x296408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29640Cu;
    // 0x29640c: 0x0  nop
    ctx->pc = 0x29640cu;
    // NOP
    ctx->pc = 0x296410u;
}
