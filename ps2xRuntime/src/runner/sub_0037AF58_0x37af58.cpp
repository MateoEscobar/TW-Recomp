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

// Function: sub_0037AF58
// Address: 0x37af58 - 0x37afb8
void sub_0037AF58_0x37af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AF58_0x37af58");
#endif

    switch (ctx->pc) {
        case 0x37af78u: goto label_37af78;
        case 0x37af80u: goto label_37af80;
        case 0x37af94u: goto label_37af94;
        case 0x37afa0u: goto label_37afa0;
        default: break;
    }

    ctx->pc = 0x37af58u;

    // 0x37af58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37af5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37af60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37af60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37af64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37af64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37af6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37af6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37af70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37AF70u;
    SET_GPR_U32(ctx, 31, 0x37AF78u);
    ctx->pc = 0x37AF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF70u;
    // 0x37af74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37AF70u, 0x37AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF78u;
label_37af78:
    // 0x37af78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37AF78u;
    SET_GPR_U32(ctx, 31, 0x37AF80u);
    ctx->pc = 0x37AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF78u;
    // 0x37af7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37AF78u, 0x37AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF80u;
label_37af80:
    // 0x37af80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37af80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37af88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37af8c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37AF8Cu;
    SET_GPR_U32(ctx, 31, 0x37AF94u);
    ctx->pc = 0x37AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF8Cu;
    // 0x37af90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37AF8Cu, 0x37AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF94u;
label_37af94:
    // 0x37af94: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x37af94u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37af98: 0xc104afe  jal         func_412BF8
    ctx->pc = 0x37AF98u;
    SET_GPR_U32(ctx, 31, 0x37AFA0u);
    ctx->pc = 0x37AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AF98u;
    // 0x37af9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BF8u, 0x37AF98u, 0x37AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFA0u;
label_37afa0:
    // 0x37afa0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37afa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37afa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37afa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37afa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37afa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37afac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37afacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37afb0: 0x3e00008  jr          $ra
    ctx->pc = 0x37AFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AFB0u;
        // 0x37afb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AFB8u;
}
