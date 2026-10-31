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

// Function: sub_00104590
// Address: 0x104590 - 0x1045e0
void sub_00104590_0x104590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104590_0x104590");
#endif

    switch (ctx->pc) {
        case 0x1045b8u: goto label_1045b8;
        case 0x1045c8u: goto label_1045c8;
        default: break;
    }

    ctx->pc = 0x104590u;

    // 0x104590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104594: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x104594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x104598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x104598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10459c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10459cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1045a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1045a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1045a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045a8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1045a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1045ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1045acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045b0: 0xc04111e  jal         func_104478
    ctx->pc = 0x1045B0u;
    SET_GPR_U32(ctx, 31, 0x1045B8u);
    ctx->pc = 0x1045B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045B0u;
    // 0x1045b4: 0xae07000c  sw          $a3, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104478u, 0x1045B0u, 0x1045B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045B8u;
label_1045b8:
    // 0x1045b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1045b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1045bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045c0: 0xc041104  jal         func_104410
    ctx->pc = 0x1045C0u;
    SET_GPR_U32(ctx, 31, 0x1045C8u);
    ctx->pc = 0x1045C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045C0u;
    // 0x1045c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104410u, 0x1045C0u, 0x1045C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045C8u;
label_1045c8:
    // 0x1045c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1045c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1045cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1045ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1045d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1045d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1045d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1045D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1045D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045D4u;
        // 0x1045d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1045DCu;
    // 0x1045dc: 0x0  nop
    ctx->pc = 0x1045dcu;
    // NOP
    ctx->pc = 0x1045e0u;
}
