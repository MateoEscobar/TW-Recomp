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

// Function: sub_004CB518
// Address: 0x4cb518 - 0x4cb568
void sub_004CB518_0x4cb518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB518_0x4cb518");
#endif

    switch (ctx->pc) {
        case 0x4cb558u: goto label_4cb558;
        default: break;
    }

    ctx->pc = 0x4cb518u;

    // 0x4cb518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cb518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cb51c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb520: 0x8fac0040  lw          $t4, 0x40($sp)
    ctx->pc = 0x4cb520u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb524: 0x244238e0  addiu       $v0, $v0, 0x38E0
    ctx->pc = 0x4cb524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14560));
    // 0x4cb528: 0x8fad0048  lw          $t5, 0x48($sp)
    ctx->pc = 0x4cb528u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cb52c: 0x8fae0050  lw          $t6, 0x50($sp)
    ctx->pc = 0x4cb52cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cb530: 0x8faf0058  lw          $t7, 0x58($sp)
    ctx->pc = 0x4cb530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cb534: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4cb534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cb538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4cb538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4cb53c: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x4cb53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x4cb540: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x4cb540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x4cb544: 0xafae0010  sw          $t6, 0x10($sp)
    ctx->pc = 0x4cb544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 14));
    // 0x4cb548: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4cb548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4cb54c: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x4cb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x4cb550: 0xc1323fe  jal         func_4C8FF8
    ctx->pc = 0x4CB550u;
    SET_GPR_U32(ctx, 31, 0x4CB558u);
    ctx->pc = 0x4CB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB550u;
    // 0x4cb554: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8FF8u, 0x4CB550u, 0x4CB558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB558u;
label_4cb558:
    // 0x4cb558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4cb558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cb55c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB55Cu;
        // 0x4cb560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB564u;
    // 0x4cb564: 0x0  nop
    ctx->pc = 0x4cb564u;
    // NOP
    ctx->pc = 0x4cb568u;
}
