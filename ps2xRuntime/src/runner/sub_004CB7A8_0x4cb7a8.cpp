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

// Function: sub_004CB7A8
// Address: 0x4cb7a8 - 0x4cb818
void sub_004CB7A8_0x4cb7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB7A8_0x4cb7a8");
#endif

    switch (ctx->pc) {
        case 0x4cb800u: goto label_4cb800;
        default: break;
    }

    ctx->pc = 0x4cb7a8u;

    // 0x4cb7a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cb7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4cb7ac: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cb7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cb7b0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4cb7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4cb7b4: 0x24423900  addiu       $v0, $v0, 0x3900
    ctx->pc = 0x4cb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14592));
    // 0x4cb7b8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4cb7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4cb7bc: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x4cb7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cb7c0: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x4cb7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4cb7c4: 0x8fae0060  lw          $t6, 0x60($sp)
    ctx->pc = 0x4cb7c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cb7c8: 0x8faf0068  lw          $t7, 0x68($sp)
    ctx->pc = 0x4cb7c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4cb7cc: 0x8fac0080  lw          $t4, 0x80($sp)
    ctx->pc = 0x4cb7ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4cb7d0: 0x8fad0088  lw          $t5, 0x88($sp)
    ctx->pc = 0x4cb7d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4cb7d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4cb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4cb7d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4cb7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4cb7dc: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x4cb7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x4cb7e0: 0xafb10018  sw          $s1, 0x18($sp)
    ctx->pc = 0x4cb7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
    // 0x4cb7e4: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x4cb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x4cb7e8: 0xafaf0008  sw          $t7, 0x8($sp)
    ctx->pc = 0x4cb7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
    // 0x4cb7ec: 0xafac0020  sw          $t4, 0x20($sp)
    ctx->pc = 0x4cb7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
    // 0x4cb7f0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4cb7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x4cb7f4: 0xafad0030  sw          $t5, 0x30($sp)
    ctx->pc = 0x4cb7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 13));
    // 0x4cb7f8: 0xc13252e  jal         func_4C94B8
    ctx->pc = 0x4CB7F8u;
    SET_GPR_U32(ctx, 31, 0x4CB800u);
    ctx->pc = 0x4CB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB7F8u;
    // 0x4cb7fc: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C94B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C94B8u, 0x4CB7F8u, 0x4CB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CB800u;
label_4cb800:
    // 0x4cb800: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4cb800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cb804: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4cb804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cb808: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4cb808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cb80c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB80Cu;
        // 0x4cb810: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CB80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CB814u;
    // 0x4cb814: 0x0  nop
    ctx->pc = 0x4cb814u;
    // NOP
    ctx->pc = 0x4cb818u;
}
