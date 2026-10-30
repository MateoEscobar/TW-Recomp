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

// Function: sub_001925D0
// Address: 0x1925d0 - 0x192618
void sub_001925D0_0x1925d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001925D0_0x1925d0");
#endif

    switch (ctx->pc) {
        case 0x1925f0u: goto label_1925f0;
        case 0x1925fcu: goto label_1925fc;
        default: break;
    }

    ctx->pc = 0x1925d0u;

    // 0x1925d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1925d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1925d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1925d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1925d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1925dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1925dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1925e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1925e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1925e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925e8: 0xc064a16  jal         func_192858
    ctx->pc = 0x1925E8u;
    SET_GPR_U32(ctx, 31, 0x1925F0u);
    ctx->pc = 0x1925ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925E8u;
    // 0x1925ec: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192858u, 0x1925E8u, 0x1925F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925F0u;
label_1925f0:
    // 0x1925f0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1925f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1925f4: 0xc064a22  jal         func_192888
    ctx->pc = 0x1925F4u;
    SET_GPR_U32(ctx, 31, 0x1925FCu);
    ctx->pc = 0x1925F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1925F4u;
    // 0x1925f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192888u, 0x1925F4u, 0x1925FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1925FCu;
label_1925fc:
    // 0x1925fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1925fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192604: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19260c: 0x3e00008  jr          $ra
    ctx->pc = 0x19260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19260Cu;
        // 0x192610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19260Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192614u;
    // 0x192614: 0x0  nop
    ctx->pc = 0x192614u;
    // NOP
    ctx->pc = 0x192618u;
}
