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

// Function: sub_004AF610
// Address: 0x4af610 - 0x4af690
void sub_004AF610_0x4af610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF610_0x4af610");
#endif

    switch (ctx->pc) {
        case 0x4af62cu: goto label_4af62c;
        case 0x4af684u: goto label_4af684;
        default: break;
    }

    ctx->pc = 0x4af610u;

    // 0x4af610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4af610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4af614: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4af614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4af618: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4af618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af61c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4af61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4af620: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4af620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4af624: 0xc12c666  jal         func_4B1998
    ctx->pc = 0x4AF624u;
    SET_GPR_U32(ctx, 31, 0x4AF62Cu);
    ctx->pc = 0x4AF628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF624u;
    // 0x4af628: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1998u, 0x4AF624u, 0x4AF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF62Cu;
label_4af62c:
    // 0x4af62c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF62Cu;
    {
        const bool branch_taken_0x4af62c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF62Cu;
        // 0x4af630: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af62c) {
            ctx->pc = 0x4AF644u;
            goto label_4af644;
        }
    }
    ctx->pc = 0x4AF634u;
    // 0x4af634: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x4af634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x4af638: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4af638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af63c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4af63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4af640: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x4af640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_4af644:
    // 0x4af644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4af644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af648: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4af648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af64c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4af64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af650: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF650u;
        // 0x4af654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF658u;
    // 0x4af658: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4af658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4af65c: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x4af65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x4af660: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x4af660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x4af664: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4af664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4af668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af670: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x4af670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x4af674: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x4af674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x4af678: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x4af678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x4af67c: 0xc12c666  jal         func_4B1998
    ctx->pc = 0x4AF67Cu;
    SET_GPR_U32(ctx, 31, 0x4AF684u);
    ctx->pc = 0x4AF680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF67Cu;
    // 0x4af680: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1998u, 0x4AF67Cu, 0x4AF684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF684u;
label_4af684:
    // 0x4af684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af688: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF688u;
        // 0x4af68c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF690u;
}
