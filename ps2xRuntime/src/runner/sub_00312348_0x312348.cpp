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

// Function: sub_00312348
// Address: 0x312348 - 0x3123a0
void sub_00312348_0x312348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312348_0x312348");
#endif

    switch (ctx->pc) {
        case 0x31236cu: goto label_31236c;
        case 0x312374u: goto label_312374;
        case 0x312390u: goto label_312390;
        default: break;
    }

    ctx->pc = 0x312348u;

    // 0x312348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31234c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312358: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x312358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x31235c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31235Cu;
    {
        const bool branch_taken_0x31235c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31235c) {
            ctx->pc = 0x31236Cu;
            goto label_31236c;
        }
    }
    ctx->pc = 0x312364u;
    // 0x312364: 0xc0c471e  jal         func_311C78
    ctx->pc = 0x312364u;
    SET_GPR_U32(ctx, 31, 0x31236Cu);
    ctx->pc = 0x312368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312364u;
    // 0x312368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311C78u, 0x312364u, 0x31236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31236Cu;
label_31236c:
    // 0x31236c: 0xc0c4766  jal         func_311D98
    ctx->pc = 0x31236Cu;
    SET_GPR_U32(ctx, 31, 0x312374u);
    ctx->pc = 0x312370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31236Cu;
    // 0x312370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D98u, 0x31236Cu, 0x312374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312374u;
label_312374:
    // 0x312374: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x312374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312378: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x312378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31237c: 0x24c61480  addiu       $a2, $a2, 0x1480
    ctx->pc = 0x31237cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5248));
    // 0x312380: 0x2405025b  addiu       $a1, $zero, 0x25B
    ctx->pc = 0x312380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x312384: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x312384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x312388: 0xc05905e  jal         func_164178
    ctx->pc = 0x312388u;
    SET_GPR_U32(ctx, 31, 0x312390u);
    ctx->pc = 0x31238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312388u;
    // 0x31238c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x312388u, 0x312390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312390u;
label_312390:
    // 0x312390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x312390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312398: 0x3e00008  jr          $ra
    ctx->pc = 0x312398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312398u;
        // 0x31239c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3123A0u;
}
