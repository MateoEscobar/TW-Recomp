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

// Function: sub_00296358
// Address: 0x296358 - 0x2963b0
void sub_00296358_0x296358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296358_0x296358");
#endif

    switch (ctx->pc) {
        case 0x296384u: goto label_296384;
        default: break;
    }

    ctx->pc = 0x296358u;

    // 0x296358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29635c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296360: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x296364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29636c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296370: 0x92030274  lbu         $v1, 0x274($s0)
    ctx->pc = 0x296370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x296374: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296374u;
    {
        const bool branch_taken_0x296374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x296378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296374u;
        // 0x296378: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296374) {
            ctx->pc = 0x296384u;
            goto label_296384;
        }
    }
    ctx->pc = 0x29637Cu;
    // 0x29637c: 0xc0a55b4  jal         func_2956D0
    ctx->pc = 0x29637Cu;
    SET_GPR_U32(ctx, 31, 0x296384u);
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x29637Cu, 0x296384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296384u;
label_296384:
    // 0x296384: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x296384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x296388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29638c: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x29638cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x296390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296394: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x296394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x296398: 0x8c6201b4  lw          $v0, 0x1B4($v1)
    ctx->pc = 0x296398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x29639c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29639cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2963a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2963A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2963A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2963A0u;
        // 0x2963a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2963A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2963A8u;
    // 0x2963a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2963a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2963ac: 0x0  nop
    ctx->pc = 0x2963acu;
    // NOP
    ctx->pc = 0x2963b0u;
}
