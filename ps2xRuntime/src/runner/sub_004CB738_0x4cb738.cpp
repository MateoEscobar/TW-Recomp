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

// Function: sub_004CB738
// Address: 0x4cb738 - 0x4cb7a8
void sub_004CB738_0x4cb738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB738_0x4cb738");
#endif

    switch (ctx->pc) {
        case 0x4cb790u: goto label_4cb790;
        default: break;
    }

    ctx->pc = 0x4cb738u;

    // 0x4cb738: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cb738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4cb73c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb740: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4cb740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4cb744: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x4cb744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x4cb748: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4cb748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4cb74c: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x4cb74cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cb750: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x4cb750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4cb754: 0x8fae0060  lw          $t6, 0x60($sp)
    ctx->pc = 0x4cb754u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cb758: 0x8faf0068  lw          $t7, 0x68($sp)
    ctx->pc = 0x4cb758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4cb75c: 0x8fac0080  lw          $t4, 0x80($sp)
    ctx->pc = 0x4cb75cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4cb760: 0x8fad0088  lw          $t5, 0x88($sp)
    ctx->pc = 0x4cb760u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4cb764: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4cb764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4cb768: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4cb768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4cb76c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x4cb76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x4cb770: 0xafb10018  sw          $s1, 0x18($sp)
    ctx->pc = 0x4cb770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
    // 0x4cb774: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x4cb774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x4cb778: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x4cb778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x4cb77c: 0xafac0020  sw          $t4, 0x20($sp)
    ctx->pc = 0x4cb77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
    // 0x4cb780: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4cb780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4cb784: 0xafad0030  sw          $t5, 0x30($sp)
    ctx->pc = 0x4cb784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 13));
    // 0x4cb788: 0xc13252e  jal         func_4C94B8
    ctx->pc = 0x4CB788u;
    SET_GPR_U32(ctx, 31, 0x4CB790u);
    ctx->pc = 0x4CB78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB788u;
    // 0x4cb78c: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C94B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C94B8u, 0x4CB788u, 0x4CB790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB790u;
label_4cb790:
    // 0x4cb790: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4cb790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb794: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4cb794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cb798: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4cb798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cb79c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB79Cu;
        // 0x4cb7a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB7A4u;
    // 0x4cb7a4: 0x0  nop
    ctx->pc = 0x4cb7a4u;
    // NOP
    ctx->pc = 0x4cb7a8u;
}
