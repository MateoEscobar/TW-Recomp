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

// Function: sub_00333688
// Address: 0x333688 - 0x3336e0
void sub_00333688_0x333688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333688_0x333688");
#endif

    switch (ctx->pc) {
        case 0x3336b8u: goto label_3336b8;
        default: break;
    }

    ctx->pc = 0x333688u;

    // 0x333688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33368c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x333690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x333694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33369c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3336a0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3336A0u;
    {
        const bool branch_taken_0x3336a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3336A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336A0u;
        // 0x3336a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336a0) {
            ctx->pc = 0x3336D0u;
            goto label_3336d0;
        }
    }
    ctx->pc = 0x3336A8u;
    // 0x3336a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3336a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3336ac: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3336acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3336b0: 0xc0cb25e  jal         func_32C978
    ctx->pc = 0x3336B0u;
    SET_GPR_U32(ctx, 31, 0x3336B8u);
    ctx->pc = 0x3336B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3336B0u;
    // 0x3336b4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C978u, 0x3336B0u, 0x3336B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3336B8u;
label_3336b8:
    // 0x3336b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3336B8u;
    {
        const bool branch_taken_0x3336b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3336BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336B8u;
        // 0x3336bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336b8) {
            ctx->pc = 0x3336CCu;
            goto label_3336cc;
        }
    }
    ctx->pc = 0x3336C0u;
    // 0x3336c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3336c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3336c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3336C4u;
    {
        const bool branch_taken_0x3336c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3336C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336C4u;
        // 0x3336c8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336c4) {
            ctx->pc = 0x3336D0u;
            goto label_3336d0;
        }
    }
    ctx->pc = 0x3336CCu;
label_3336cc:
    // 0x3336cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3336ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3336d0:
    // 0x3336d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3336d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3336d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3336d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3336d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3336D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3336DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336D8u;
        // 0x3336dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3336D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3336E0u;
}
