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

// Function: sub_00325350
// Address: 0x325350 - 0x325398
void sub_00325350_0x325350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325350_0x325350");
#endif

    switch (ctx->pc) {
        case 0x32535cu: goto label_32535c;
        case 0x325368u: goto label_325368;
        case 0x325374u: goto label_325374;
        case 0x325380u: goto label_325380;
        default: break;
    }

    ctx->pc = 0x325350u;

    // 0x325350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325354: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325354u;
    SET_GPR_U32(ctx, 31, 0x32535Cu);
    ctx->pc = 0x325358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325354u;
    // 0x325358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325354u, 0x32535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32535Cu;
label_32535c:
    // 0x32535c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325360: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x325360u;
    SET_GPR_U32(ctx, 31, 0x325368u);
    ctx->pc = 0x325364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325360u;
    // 0x325364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x325360u, 0x325368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325368u;
label_325368:
    // 0x325368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32536c: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x32536Cu;
    SET_GPR_U32(ctx, 31, 0x325374u);
    ctx->pc = 0x325370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32536Cu;
    // 0x325370: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x32536Cu, 0x325374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325374u;
label_325374:
    // 0x325374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325378: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x325378u;
    SET_GPR_U32(ctx, 31, 0x325380u);
    ctx->pc = 0x32537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325378u;
    // 0x32537c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x325378u, 0x325380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325380u;
label_325380:
    // 0x325380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32538c: 0x3e00008  jr          $ra
    ctx->pc = 0x32538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32538Cu;
        // 0x325390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325394u;
    // 0x325394: 0x0  nop
    ctx->pc = 0x325394u;
    // NOP
    ctx->pc = 0x325398u;
}
