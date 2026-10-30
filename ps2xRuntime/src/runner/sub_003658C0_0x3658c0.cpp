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

// Function: sub_003658C0
// Address: 0x3658c0 - 0x365938
void sub_003658C0_0x3658c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003658C0_0x3658c0");
#endif

    switch (ctx->pc) {
        case 0x3658e8u: goto label_3658e8;
        case 0x3658f0u: goto label_3658f0;
        case 0x365904u: goto label_365904;
        case 0x36590cu: goto label_36590c;
        case 0x365918u: goto label_365918;
        default: break;
    }

    ctx->pc = 0x3658c0u;

    // 0x3658c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3658c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3658c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3658c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3658c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3658c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3658cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3658ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3658d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3658d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3658d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3658d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3658d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3658d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3658dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3658dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3658e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3658E0u;
    SET_GPR_U32(ctx, 31, 0x3658E8u);
    ctx->pc = 0x3658E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658E0u;
    // 0x3658e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3658E0u, 0x3658E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658E8u;
label_3658e8:
    // 0x3658e8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3658E8u;
    SET_GPR_U32(ctx, 31, 0x3658F0u);
    ctx->pc = 0x3658ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658E8u;
    // 0x3658ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3658E8u, 0x3658F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3658F0u;
label_3658f0:
    // 0x3658f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3658f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3658f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3658f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3658f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3658f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3658fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3658FCu;
    SET_GPR_U32(ctx, 31, 0x365904u);
    ctx->pc = 0x365900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3658FCu;
    // 0x365900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3658FCu, 0x365904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365904u;
label_365904:
    // 0x365904: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365904u;
    SET_GPR_U32(ctx, 31, 0x36590Cu);
    ctx->pc = 0x365908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365904u;
    // 0x365908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365904u, 0x36590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36590Cu;
label_36590c:
    // 0x36590c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365910: 0xc046e88  jal         func_11BA20
    ctx->pc = 0x365910u;
    SET_GPR_U32(ctx, 31, 0x365918u);
    ctx->pc = 0x365914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365910u;
    // 0x365914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA20u, 0x365910u, 0x365918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365918u;
label_365918:
    // 0x365918: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x365918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36591c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36591cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365920: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x365920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365924: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x365924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36592c: 0x3e00008  jr          $ra
    ctx->pc = 0x36592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36592Cu;
        // 0x365930: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365934u;
    // 0x365934: 0x0  nop
    ctx->pc = 0x365934u;
    // NOP
    ctx->pc = 0x365938u;
}
