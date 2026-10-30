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

// Function: sub_004CB698
// Address: 0x4cb698 - 0x4cb6e8
void sub_004CB698_0x4cb698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB698_0x4cb698");
#endif

    switch (ctx->pc) {
        case 0x4cb6d8u: goto label_4cb6d8;
        default: break;
    }

    ctx->pc = 0x4cb698u;

    // 0x4cb698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cb698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cb69c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb6a0: 0x8fac0040  lw          $t4, 0x40($sp)
    ctx->pc = 0x4cb6a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb6a4: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x4cb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x4cb6a8: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x4cb6a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cb6ac: 0x8fae0050  lw          $t6, 0x50($sp)
    ctx->pc = 0x4cb6acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cb6b0: 0x8faf0058  lw          $t7, 0x58($sp)
    ctx->pc = 0x4cb6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cb6b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4cb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cb6b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4cb6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4cb6bc: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x4cb6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x4cb6c0: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x4cb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x4cb6c4: 0xafae0010  sw          $t6, 0x10($sp)
    ctx->pc = 0x4cb6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 14));
    // 0x4cb6c8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4cb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4cb6cc: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x4cb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x4cb6d0: 0xc1323fe  jal         func_4C8FF8
    ctx->pc = 0x4CB6D0u;
    SET_GPR_U32(ctx, 31, 0x4CB6D8u);
    ctx->pc = 0x4CB6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB6D0u;
    // 0x4cb6d4: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8FF8u, 0x4CB6D0u, 0x4CB6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB6D8u;
label_4cb6d8:
    // 0x4cb6d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4cb6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB6DCu;
        // 0x4cb6e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB6E4u;
    // 0x4cb6e4: 0x0  nop
    ctx->pc = 0x4cb6e4u;
    // NOP
    ctx->pc = 0x4cb6e8u;
}
