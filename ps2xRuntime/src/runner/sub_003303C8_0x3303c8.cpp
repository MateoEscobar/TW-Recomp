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

// Function: sub_003303C8
// Address: 0x3303c8 - 0x330428
void sub_003303C8_0x3303c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003303C8_0x3303c8");
#endif

    switch (ctx->pc) {
        case 0x3303f0u: goto label_3303f0;
        case 0x330418u: goto label_330418;
        default: break;
    }

    ctx->pc = 0x3303c8u;

    // 0x3303c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3303c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3303cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3303ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3303d0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3303d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3303d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3303d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3303d8: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3303D8u;
    {
        const bool branch_taken_0x3303d8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3303DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303D8u;
        // 0x3303dc: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303d8) {
            ctx->pc = 0x33040Cu;
            goto label_33040c;
        }
    }
    ctx->pc = 0x3303E0u;
    // 0x3303e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3303e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3303e4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3303e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3303e8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3303e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3303ec: 0x0  nop
    ctx->pc = 0x3303ecu;
    // NOP
label_3303f0:
    // 0x3303f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3303f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3303f4: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3303F4u;
    {
        const bool branch_taken_0x3303f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3303f4) {
            ctx->pc = 0x3303F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3303F4u;
            // 0x3303f8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330404u;
            goto label_330404;
        }
    }
    ctx->pc = 0x3303FCu;
    // 0x3303fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3303FCu;
    {
        const bool branch_taken_0x3303fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303FCu;
        // 0x330400: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303fc) {
            ctx->pc = 0x33041Cu;
            goto label_33041c;
        }
    }
    ctx->pc = 0x330404u;
label_330404:
    // 0x330404: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x330404u;
    {
        const bool branch_taken_0x330404 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x330408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330404u;
        // 0x330408: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330404) {
            ctx->pc = 0x3303F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3303f0;
        }
    }
    ctx->pc = 0x33040Cu;
label_33040c:
    // 0x33040c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x33040cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x330410: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x330410u;
    SET_GPR_U32(ctx, 31, 0x330418u);
    ctx->pc = 0x330414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330410u;
    // 0x330414: 0x24a55f40  addiu       $a1, $a1, 0x5F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x330410u, 0x330418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330418u;
label_330418:
    // 0x330418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33041c:
    // 0x33041c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33041cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330420: 0x3e00008  jr          $ra
    ctx->pc = 0x330420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330420u;
        // 0x330424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330428u;
}
