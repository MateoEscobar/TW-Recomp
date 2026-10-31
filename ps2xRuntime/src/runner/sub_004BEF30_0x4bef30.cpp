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

// Function: sub_004BEF30
// Address: 0x4bef30 - 0x4bef68
void sub_004BEF30_0x4bef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEF30_0x4bef30");
#endif

    ctx->pc = 0x4bef30u;

    // 0x4bef30: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bef30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4bef34: 0x244241f0  addiu       $v0, $v0, 0x41F0
    ctx->pc = 0x4bef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
    // 0x4bef38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4bef38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F8u));
    // 0x4bef3c: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x4bef3cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x714220u));
    // 0x4bef40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4bef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4bef44: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4bef44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bef48: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4bef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4bef4c: 0x510c3  sra         $v0, $a1, 3
    ctx->pc = 0x4bef4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4bef50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bef54: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x4bef54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x4bef58: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4bef58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bef5c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x4bef5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4bef60: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEF60u;
        // 0x4bef64: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEF68u;
}
