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

// Function: sub_00110318
// Address: 0x110318 - 0x110370
void sub_00110318_0x110318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110318_0x110318");
#endif

    switch (ctx->pc) {
        case 0x11033cu: goto label_11033c;
        case 0x11034cu: goto label_11034c;
        case 0x11035cu: goto label_11035c;
        default: break;
    }

    ctx->pc = 0x110318u;

    // 0x110318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11031c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11031cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x110320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x110320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x110324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11032c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11032cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110330: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x110330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x110334: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110334u;
    SET_GPR_U32(ctx, 31, 0x11033Cu);
    ctx->pc = 0x110338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110334u;
    // 0x110338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110334u, 0x11033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11033Cu;
label_11033c:
    // 0x11033c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11033Cu;
    {
        const bool branch_taken_0x11033c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11033c) {
            ctx->pc = 0x110340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11033Cu;
            // 0x110340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110360u;
            goto label_110360;
        }
    }
    ctx->pc = 0x110344u;
    // 0x110344: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110344u;
    SET_GPR_U32(ctx, 31, 0x11034Cu);
    ctx->pc = 0x110348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110344u;
    // 0x110348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110344u, 0x11034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11034Cu;
label_11034c:
    // 0x11034c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x110350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110354: 0xc044b18  jal         func_112C60
    ctx->pc = 0x110354u;
    SET_GPR_U32(ctx, 31, 0x11035Cu);
    ctx->pc = 0x110358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110354u;
    // 0x110358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C60u, 0x110354u, 0x11035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11035Cu;
label_11035c:
    // 0x11035c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11035cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_110360:
    // 0x110360: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x110360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110368: 0x3e00008  jr          $ra
    ctx->pc = 0x110368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110368u;
        // 0x11036c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110370u;
}
