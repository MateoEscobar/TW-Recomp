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

// Function: sub_0036E668
// Address: 0x36e668 - 0x36e6c0
void sub_0036E668_0x36e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E668_0x36e668");
#endif

    switch (ctx->pc) {
        case 0x36e688u: goto label_36e688;
        case 0x36e69cu: goto label_36e69c;
        case 0x36e6a8u: goto label_36e6a8;
        default: break;
    }

    ctx->pc = 0x36e668u;

    // 0x36e668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e66c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e670: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36e674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e680: 0xc102488  jal         func_409220
    ctx->pc = 0x36E680u;
    SET_GPR_U32(ctx, 31, 0x36E688u);
    ctx->pc = 0x36E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E680u;
    // 0x36e684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36E680u, 0x36E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E688u;
label_36e688:
    // 0x36e688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36e688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e694: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36E694u;
    SET_GPR_U32(ctx, 31, 0x36E69Cu);
    ctx->pc = 0x36E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E694u;
    // 0x36e698: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36E694u, 0x36E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E69Cu;
label_36e69c:
    // 0x36e69c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36e69cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36e6a0: 0xc10335e  jal         func_40CD78
    ctx->pc = 0x36E6A0u;
    SET_GPR_U32(ctx, 31, 0x36E6A8u);
    ctx->pc = 0x36E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E6A0u;
    // 0x36e6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CD78u, 0x36E6A0u, 0x36E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E6A8u;
label_36e6a8:
    // 0x36e6a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36e6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e6ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6B8u;
        // 0x36e6bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E6C0u;
}
