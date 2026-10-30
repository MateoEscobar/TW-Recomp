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

// Function: sub_00423670
// Address: 0x423670 - 0x4236d0
void sub_00423670_0x423670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423670_0x423670");
#endif

    switch (ctx->pc) {
        case 0x4236c0u: goto label_4236c0;
        default: break;
    }

    ctx->pc = 0x423670u;

    // 0x423670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x423670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423674: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x423674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42367c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x42367Cu;
    {
        const bool branch_taken_0x42367c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x423680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42367Cu;
        // 0x423680: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42367c) {
            ctx->pc = 0x42369Cu;
            goto label_42369c;
        }
    }
    ctx->pc = 0x423684u;
    // 0x423684: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x423684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x423688: 0x24c403e8  addiu       $a0, $a2, 0x3E8
    ctx->pc = 0x423688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1000));
    // 0x42368c: 0x8c43504c  lw          $v1, 0x504C($v0)
    ctx->pc = 0x42368cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51504Cu));
    // 0x423690: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x423690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x423694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x423694u;
    {
        const bool branch_taken_0x423694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x423698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423694u;
        // 0x423698: 0xac660040  sw          $a2, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423694) {
            ctx->pc = 0x4236B0u;
            goto label_4236b0;
        }
    }
    ctx->pc = 0x42369Cu;
label_42369c:
    // 0x42369c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4236a0: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x4236a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x4236a4: 0x8c43504c  lw          $v1, 0x504C($v0)
    ctx->pc = 0x4236a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51504Cu));
    // 0x4236a8: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x4236a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x4236ac: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x4236acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_4236b0:
    // 0x4236b0: 0x8c44504c  lw          $a0, 0x504C($v0)
    ctx->pc = 0x4236b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20556)));
    // 0x4236b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4236b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4236b8: 0xc108d78  jal         func_4235E0
    ctx->pc = 0x4236B8u;
    SET_GPR_U32(ctx, 31, 0x4236C0u);
    ctx->pc = 0x4236BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4236B8u;
    // 0x4236bc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4235E0u, 0x4236B8u, 0x4236C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4236C0u;
label_4236c0:
    // 0x4236c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4236c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4236c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4236C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4236C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4236C4u;
        // 0x4236c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4236C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4236CCu;
    // 0x4236cc: 0x0  nop
    ctx->pc = 0x4236ccu;
    // NOP
    ctx->pc = 0x4236d0u;
}
