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

// Function: sub_004211A0
// Address: 0x4211a0 - 0x4211d8
void sub_004211A0_0x4211a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004211A0_0x4211a0");
#endif

    ctx->pc = 0x4211a0u;

    // 0x4211a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4211a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4211a4: 0x248400a8  addiu       $a0, $a0, 0xA8
    ctx->pc = 0x4211a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x4211a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4211a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4211ac: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x4211acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x4211b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4211b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4211b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4211b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4211b8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4211b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4211bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4211bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4211c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4211c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4211c4: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x4211c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4211c8: 0xa3380a  movz        $a3, $a1, $v1
    ctx->pc = 0x4211c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x4211cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4211CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4211D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4211CCu;
        // 0x4211d0: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4211CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4211D4u;
    // 0x4211d4: 0x0  nop
    ctx->pc = 0x4211d4u;
    // NOP
    ctx->pc = 0x4211d8u;
}
