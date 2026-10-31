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

// Function: sub_001C87F0
// Address: 0x1c87f0 - 0x1c8838
void sub_001C87F0_0x1c87f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C87F0_0x1c87f0");
#endif

    switch (ctx->pc) {
        case 0x1c8804u: goto label_1c8804;
        default: break;
    }

    ctx->pc = 0x1c87f0u;

    // 0x1c87f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c87f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c87f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c87f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c87f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c87fc: 0xc079ba6  jal         func_1E6E98
    ctx->pc = 0x1C87FCu;
    SET_GPR_U32(ctx, 31, 0x1C8804u);
    ctx->pc = 0x1C8800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C87FCu;
    // 0x1c8800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E98u, 0x1C87FCu, 0x1C8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8804u;
label_1c8804:
    // 0x1c8804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8808: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c8808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c880c: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x1c880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x1c8810: 0x2463aa20  addiu       $v1, $v1, -0x55E0
    ctx->pc = 0x1c8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945312));
    // 0x1c8814: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c8814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c8818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c8818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c881c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c881cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c8820: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c8820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1c8824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c882c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C882Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C882Cu;
        // 0x1c8830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C882Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8834u;
    // 0x1c8834: 0x0  nop
    ctx->pc = 0x1c8834u;
    // NOP
    ctx->pc = 0x1c8838u;
}
