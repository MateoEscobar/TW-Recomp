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

// Function: sub_0037A228
// Address: 0x37a228 - 0x37a288
void sub_0037A228_0x37a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A228_0x37a228");
#endif

    switch (ctx->pc) {
        case 0x37a248u: goto label_37a248;
        case 0x37a250u: goto label_37a250;
        case 0x37a264u: goto label_37a264;
        case 0x37a270u: goto label_37a270;
        default: break;
    }

    ctx->pc = 0x37a228u;

    // 0x37a228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a22c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37a234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a23c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a240: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A240u;
    SET_GPR_U32(ctx, 31, 0x37A248u);
    ctx->pc = 0x37A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A240u;
    // 0x37a244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A240u, 0x37A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A248u;
label_37a248:
    // 0x37a248: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A248u;
    SET_GPR_U32(ctx, 31, 0x37A250u);
    ctx->pc = 0x37A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A248u;
    // 0x37a24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A248u, 0x37A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A250u;
label_37a250:
    // 0x37a250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37a250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37a258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a25c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37A25Cu;
    SET_GPR_U32(ctx, 31, 0x37A264u);
    ctx->pc = 0x37A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A25Cu;
    // 0x37a260: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37A25Cu, 0x37A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A264u;
label_37a264:
    // 0x37a264: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x37a264u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37a268: 0xc10573a  jal         func_415CE8
    ctx->pc = 0x37A268u;
    SET_GPR_U32(ctx, 31, 0x37A270u);
    ctx->pc = 0x37A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A268u;
    // 0x37a26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CE8u, 0x37A268u, 0x37A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A270u;
label_37a270:
    // 0x37a270: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37a270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a280: 0x3e00008  jr          $ra
    ctx->pc = 0x37A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A280u;
        // 0x37a284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A288u;
}
