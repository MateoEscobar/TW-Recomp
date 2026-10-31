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

// Function: sub_0019C398
// Address: 0x19c398 - 0x19c3f0
void sub_0019C398_0x19c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C398_0x19c398");
#endif

    switch (ctx->pc) {
        case 0x19c3d0u: goto label_19c3d0;
        default: break;
    }

    ctx->pc = 0x19c398u;

    // 0x19c398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c3a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c3a4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C3A4u;
    {
        const bool branch_taken_0x19c3a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3A4u;
        // 0x19c3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3a4) {
            ctx->pc = 0x19C3B8u;
            goto label_19c3b8;
        }
    }
    ctx->pc = 0x19C3ACu;
    // 0x19c3ac: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19c3b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C3B0u;
    {
        const bool branch_taken_0x19c3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3B0u;
        // 0x19c3b4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3b0) {
            ctx->pc = 0x19C3C0u;
            goto label_19c3c0;
        }
    }
    ctx->pc = 0x19C3B8u;
label_19c3b8:
    // 0x19c3b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19C3B8u;
    {
        const bool branch_taken_0x19c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3B8u;
        // 0x19c3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3b8) {
            ctx->pc = 0x19C3DCu;
            goto label_19c3dc;
        }
    }
    ctx->pc = 0x19C3C0u;
label_19c3c0:
    // 0x19c3c0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x19c3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19c3c4: 0x24a539d0  addiu       $a1, $a1, 0x39D0
    ctx->pc = 0x19c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
    // 0x19c3c8: 0xc138f44  jal         func_4E3D10
    ctx->pc = 0x19C3C8u;
    SET_GPR_U32(ctx, 31, 0x19C3D0u);
    ctx->pc = 0x19C3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C3C8u;
    // 0x19c3cc: 0x24060094  addiu       $a2, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3D10u, 0x19C3C8u, 0x19C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3D0u;
label_19c3d0:
    // 0x19c3d0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x19c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x19c3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c3d8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x19c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_19c3dc:
    // 0x19c3dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C3E4u;
        // 0x19c3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C3ECu;
    // 0x19c3ec: 0x0  nop
    ctx->pc = 0x19c3ecu;
    // NOP
    ctx->pc = 0x19c3f0u;
}
