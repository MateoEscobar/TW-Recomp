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

// Function: sub_003697F0
// Address: 0x3697f0 - 0x369868
void sub_003697F0_0x3697f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003697F0_0x3697f0");
#endif

    switch (ctx->pc) {
        case 0x369818u: goto label_369818;
        case 0x369820u: goto label_369820;
        case 0x369834u: goto label_369834;
        case 0x36983cu: goto label_36983c;
        case 0x369848u: goto label_369848;
        default: break;
    }

    ctx->pc = 0x3697f0u;

    // 0x3697f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3697f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3697f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3697f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3697f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3697f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3697fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3697fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x369800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369804: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x369804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369808: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x369808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36980c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369810: 0xc102472  jal         func_4091C8
    ctx->pc = 0x369810u;
    SET_GPR_U32(ctx, 31, 0x369818u);
    ctx->pc = 0x369814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369810u;
    // 0x369814: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x369810u, 0x369818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369818u;
label_369818:
    // 0x369818: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369818u;
    SET_GPR_U32(ctx, 31, 0x369820u);
    ctx->pc = 0x36981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369818u;
    // 0x36981c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369818u, 0x369820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369820u;
label_369820:
    // 0x369820: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x369820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369824: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x369824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36982c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36982Cu;
    SET_GPR_U32(ctx, 31, 0x369834u);
    ctx->pc = 0x369830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36982Cu;
    // 0x369830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36982Cu, 0x369834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369834u;
label_369834:
    // 0x369834: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x369834u;
    SET_GPR_U32(ctx, 31, 0x36983Cu);
    ctx->pc = 0x369838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369834u;
    // 0x369838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x369834u, 0x36983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36983Cu;
label_36983c:
    // 0x36983c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36983cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369840: 0xc08a32a  jal         func_228CA8
    ctx->pc = 0x369840u;
    SET_GPR_U32(ctx, 31, 0x369848u);
    ctx->pc = 0x369844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369840u;
    // 0x369844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228CA8u, 0x369840u, 0x369848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369848u;
label_369848:
    // 0x369848: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x369848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36984c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36984cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369850: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x369850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369854: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x369854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36985c: 0x3e00008  jr          $ra
    ctx->pc = 0x36985Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36985Cu;
        // 0x369860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36985Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369864u;
    // 0x369864: 0x0  nop
    ctx->pc = 0x369864u;
    // NOP
    ctx->pc = 0x369868u;
}
