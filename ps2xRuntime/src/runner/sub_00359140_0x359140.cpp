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

// Function: sub_00359140
// Address: 0x359140 - 0x3591a0
void sub_00359140_0x359140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359140_0x359140");
#endif

    switch (ctx->pc) {
        case 0x359160u: goto label_359160;
        case 0x359168u: goto label_359168;
        case 0x35917cu: goto label_35917c;
        case 0x359188u: goto label_359188;
        default: break;
    }

    ctx->pc = 0x359140u;

    // 0x359140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35914c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35914cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359158: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359158u;
    SET_GPR_U32(ctx, 31, 0x359160u);
    ctx->pc = 0x35915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359158u;
    // 0x35915c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359158u, 0x359160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359160u;
label_359160:
    // 0x359160: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359160u;
    SET_GPR_U32(ctx, 31, 0x359168u);
    ctx->pc = 0x359164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359160u;
    // 0x359164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359160u, 0x359168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359168u;
label_359168:
    // 0x359168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35916c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359174: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359174u;
    SET_GPR_U32(ctx, 31, 0x35917Cu);
    ctx->pc = 0x359178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359174u;
    // 0x359178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359174u, 0x35917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35917Cu;
label_35917c:
    // 0x35917c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35917cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359180: 0xc08dec0  jal         func_237B00
    ctx->pc = 0x359180u;
    SET_GPR_U32(ctx, 31, 0x359188u);
    ctx->pc = 0x359184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359180u;
    // 0x359184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B00u, 0x359180u, 0x359188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359188u;
label_359188:
    // 0x359188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35918c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359198: 0x3e00008  jr          $ra
    ctx->pc = 0x359198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359198u;
        // 0x35919c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3591A0u;
}
