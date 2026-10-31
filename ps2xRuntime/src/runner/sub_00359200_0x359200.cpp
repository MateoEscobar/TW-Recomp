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

// Function: sub_00359200
// Address: 0x359200 - 0x359260
void sub_00359200_0x359200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359200_0x359200");
#endif

    switch (ctx->pc) {
        case 0x359220u: goto label_359220;
        case 0x359228u: goto label_359228;
        case 0x35923cu: goto label_35923c;
        case 0x359248u: goto label_359248;
        default: break;
    }

    ctx->pc = 0x359200u;

    // 0x359200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359208: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35920c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35920cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359218: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359218u;
    SET_GPR_U32(ctx, 31, 0x359220u);
    ctx->pc = 0x35921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359218u;
    // 0x35921c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359218u, 0x359220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359220u;
label_359220:
    // 0x359220: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359220u;
    SET_GPR_U32(ctx, 31, 0x359228u);
    ctx->pc = 0x359224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359220u;
    // 0x359224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359220u, 0x359228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359228u;
label_359228:
    // 0x359228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35922c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359234: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359234u;
    SET_GPR_U32(ctx, 31, 0x35923Cu);
    ctx->pc = 0x359238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359234u;
    // 0x359238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359234u, 0x35923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35923Cu;
label_35923c:
    // 0x35923c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35923cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359240: 0xc08dedc  jal         func_237B70
    ctx->pc = 0x359240u;
    SET_GPR_U32(ctx, 31, 0x359248u);
    ctx->pc = 0x359244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359240u;
    // 0x359244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B70u, 0x359240u, 0x359248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359248u;
label_359248:
    // 0x359248: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35924c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35924cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359258: 0x3e00008  jr          $ra
    ctx->pc = 0x359258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359258u;
        // 0x35925c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359260u;
}
