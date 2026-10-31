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

// Function: sub_004238A8
// Address: 0x4238a8 - 0x4238e8
void sub_004238A8_0x4238a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004238A8_0x4238a8");
#endif

    switch (ctx->pc) {
        case 0x4238ccu: goto label_4238cc;
        default: break;
    }

    ctx->pc = 0x4238a8u;

    // 0x4238a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x4238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x4238ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4238acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4238b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4238b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4238b4: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x4238b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FE998u));
    // 0x4238b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4238b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4238bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4238BCu;
    {
        const bool branch_taken_0x4238bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4238C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238BCu;
        // 0x4238c0: 0x2464e998  addiu       $a0, $v1, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238bc) {
            ctx->pc = 0x4238D4u;
            goto label_4238d4;
        }
    }
    ctx->pc = 0x4238C4u;
    // 0x4238c4: 0xc109076  jal         func_4241D8
    ctx->pc = 0x4238C4u;
    SET_GPR_U32(ctx, 31, 0x4238CCu);
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x4238C4u, 0x4238CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4238CCu;
label_4238cc:
    // 0x4238cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4238CCu;
    {
        const bool branch_taken_0x4238cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238CCu;
        // 0x4238d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4238cc) {
            ctx->pc = 0x4238DCu;
            goto label_4238dc;
        }
    }
    ctx->pc = 0x4238D4u;
label_4238d4:
    // 0x4238d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4238d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4238d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4238d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4238dc:
    // 0x4238dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4238DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4238E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4238DCu;
        // 0x4238e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4238DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4238E4u;
    // 0x4238e4: 0x0  nop
    ctx->pc = 0x4238e4u;
    // NOP
    ctx->pc = 0x4238e8u;
}
