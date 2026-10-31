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

// Function: sub_0033D158
// Address: 0x33d158 - 0x33d1a0
void sub_0033D158_0x33d158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D158_0x33d158");
#endif

    switch (ctx->pc) {
        case 0x33d16cu: goto label_33d16c;
        case 0x33d18cu: goto label_33d18c;
        default: break;
    }

    ctx->pc = 0x33d158u;

    // 0x33d158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33d158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33d15c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33d160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33d164: 0xc0d01c0  jal         func_340700
    ctx->pc = 0x33D164u;
    SET_GPR_U32(ctx, 31, 0x33D16Cu);
    ctx->pc = 0x33D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D164u;
    // 0x33d168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340700u, 0x33D164u, 0x33D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D16Cu;
label_33d16c:
    // 0x33d16c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x33d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x33d170: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D170u;
    {
        const bool branch_taken_0x33d170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D170u;
        // 0x33d174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d170) {
            ctx->pc = 0x33D184u;
            goto label_33d184;
        }
    }
    ctx->pc = 0x33D178u;
    // 0x33d178: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x33d178u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x33d17c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x33d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x33d180: 0xa4620032  sh          $v0, 0x32($v1)
    ctx->pc = 0x33d180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 2));
label_33d184:
    // 0x33d184: 0xc0d069a  jal         func_341A68
    ctx->pc = 0x33D184u;
    SET_GPR_U32(ctx, 31, 0x33D18Cu);
    ctx->pc = 0x33D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D184u;
    // 0x33d188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A68u, 0x33D184u, 0x33D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D18Cu;
label_33d18c:
    // 0x33d18c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33d18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d194: 0x3e00008  jr          $ra
    ctx->pc = 0x33D194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D194u;
        // 0x33d198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D19Cu;
    // 0x33d19c: 0x0  nop
    ctx->pc = 0x33d19cu;
    // NOP
    ctx->pc = 0x33d1a0u;
}
