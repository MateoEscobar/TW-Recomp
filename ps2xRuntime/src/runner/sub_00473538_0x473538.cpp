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

// Function: sub_00473538
// Address: 0x473538 - 0x473570
void sub_00473538_0x473538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473538_0x473538");
#endif

    ctx->pc = 0x473538u;

    // 0x473538: 0x8f85851c  lw          $a1, -0x7AE4($gp)
    ctx->pc = 0x473538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x47353c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x47353cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x473540: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x473540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x473544: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473548: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x473548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x47354c: 0x24c63c88  addiu       $a2, $a2, 0x3C88
    ctx->pc = 0x47354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15496));
    // 0x473550: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x473550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x473554: 0x9503ad20  lhu         $v1, -0x52E0($t0)
    ctx->pc = 0x473554u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x70AD20u));
    // 0x473558: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x473558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x47355c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x473560: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x473560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x473564: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x473564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x473568: 0x3e00008  jr          $ra
    ctx->pc = 0x473568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473568u;
        // 0x47356c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473570u;
}
