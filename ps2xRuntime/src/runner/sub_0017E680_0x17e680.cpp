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

// Function: sub_0017E680
// Address: 0x17e680 - 0x17e6c0
void sub_0017E680_0x17e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E680_0x17e680");
#endif

    switch (ctx->pc) {
        case 0x17e6acu: goto label_17e6ac;
        default: break;
    }

    ctx->pc = 0x17e680u;

    // 0x17e680: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17e684: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e688: 0x8c44cce8  lw          $a0, -0x3318($v0)
    ctx->pc = 0x17e688u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CCE8u));
    // 0x17e68c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E68Cu;
    {
        const bool branch_taken_0x17e68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E68Cu;
        // 0x17e690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e68c) {
            ctx->pc = 0x17E69Cu;
            goto label_17e69c;
        }
    }
    ctx->pc = 0x17E694u;
    // 0x17e694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E694u;
    {
        const bool branch_taken_0x17e694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E694u;
        // 0x17e698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e694) {
            ctx->pc = 0x17E6B0u;
            goto label_17e6b0;
        }
    }
    ctx->pc = 0x17E69Cu;
label_17e69c:
    // 0x17e69c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x17e6a0: 0x2406065d  addiu       $a2, $zero, 0x65D
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1629));
    // 0x17e6a4: 0xc136ac2  jal         func_4DAB08
    ctx->pc = 0x17E6A4u;
    SET_GPR_U32(ctx, 31, 0x17E6ACu);
    ctx->pc = 0x17E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E6A4u;
    // 0x17e6a8: 0x24a522b0  addiu       $a1, $a1, 0x22B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x17E6A4u, 0x17E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E6ACu;
label_17e6ac:
    // 0x17e6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e6b0:
    // 0x17e6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6B4u;
        // 0x17e6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E6BCu;
    // 0x17e6bc: 0x0  nop
    ctx->pc = 0x17e6bcu;
    // NOP
    ctx->pc = 0x17e6c0u;
}
