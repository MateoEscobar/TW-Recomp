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

// Function: sub_001C2AB8
// Address: 0x1c2ab8 - 0x1c2af8
void sub_001C2AB8_0x1c2ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2AB8_0x1c2ab8");
#endif

    switch (ctx->pc) {
        case 0x1c2accu: goto label_1c2acc;
        case 0x1c2ae0u: goto label_1c2ae0;
        default: break;
    }

    ctx->pc = 0x1c2ab8u;

    // 0x1c2ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2abc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2ac4: 0xc079ba6  jal         func_1E6E98
    ctx->pc = 0x1C2AC4u;
    SET_GPR_U32(ctx, 31, 0x1C2ACCu);
    ctx->pc = 0x1C2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AC4u;
    // 0x1c2ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E98u, 0x1C2AC4u, 0x1C2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ACCu;
label_1c2acc:
    // 0x1c2acc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c2accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c2ad0: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x1c2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1c2ad4: 0x2463a6c0  addiu       $v1, $v1, -0x5940
    ctx->pc = 0x1c2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944448));
    // 0x1c2ad8: 0xc070a42  jal         func_1C2908
    ctx->pc = 0x1C2AD8u;
    SET_GPR_U32(ctx, 31, 0x1C2AE0u);
    ctx->pc = 0x1C2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AD8u;
    // 0x1c2adc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2908u, 0x1C2AD8u, 0x1C2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AE0u;
label_1c2ae0:
    // 0x1c2ae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c2ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2ae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AECu;
        // 0x1c2af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2AF4u;
    // 0x1c2af4: 0x0  nop
    ctx->pc = 0x1c2af4u;
    // NOP
    ctx->pc = 0x1c2af8u;
}
