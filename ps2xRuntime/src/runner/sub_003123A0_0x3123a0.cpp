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

// Function: sub_003123A0
// Address: 0x3123a0 - 0x312430
void sub_003123A0_0x3123a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003123A0_0x3123a0");
#endif

    switch (ctx->pc) {
        case 0x3123bcu: goto label_3123bc;
        case 0x3123d4u: goto label_3123d4;
        case 0x3123f4u: goto label_3123f4;
        case 0x312400u: goto label_312400;
        case 0x31240cu: goto label_31240c;
        case 0x31241cu: goto label_31241c;
        default: break;
    }

    ctx->pc = 0x3123a0u;

    // 0x3123a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3123a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3123a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3123a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3123a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3123a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3123ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3123acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3123b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3123b4: 0xc05959e  jal         func_165678
    ctx->pc = 0x3123B4u;
    SET_GPR_U32(ctx, 31, 0x3123BCu);
    ctx->pc = 0x3123B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123B4u;
    // 0x3123b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3123B4u, 0x3123BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123BCu;
label_3123bc:
    // 0x3123bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3123bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123c0: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x3123c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x3123c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3123C4u;
    {
        const bool branch_taken_0x3123c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3123C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123C4u;
        // 0x3123c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123c4) {
            ctx->pc = 0x3123D4u;
            goto label_3123d4;
        }
    }
    ctx->pc = 0x3123CCu;
    // 0x3123cc: 0xc0c471e  jal         func_311C78
    ctx->pc = 0x3123CCu;
    SET_GPR_U32(ctx, 31, 0x3123D4u);
    ctx->pc = 0x3123D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123CCu;
    // 0x3123d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311C78u, 0x3123CCu, 0x3123D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123D4u;
label_3123d4:
    // 0x3123d4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3123D4u;
    {
        const bool branch_taken_0x3123d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3123D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123D4u;
        // 0x3123d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3123d4) {
            ctx->pc = 0x312404u;
            goto label_312404;
        }
    }
    ctx->pc = 0x3123DCu;
    // 0x3123dc: 0x8602003c  lh          $v0, 0x3C($s0)
    ctx->pc = 0x3123dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3123e0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3123E0u;
    {
        const bool branch_taken_0x3123e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3123e0) {
            ctx->pc = 0x312404u;
            goto label_312404;
        }
    }
    ctx->pc = 0x3123E8u;
    // 0x3123e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3123e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123ec: 0xc08750a  jal         func_21D428
    ctx->pc = 0x3123ECu;
    SET_GPR_U32(ctx, 31, 0x3123F4u);
    ctx->pc = 0x3123F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123ECu;
    // 0x3123f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x3123ECu, 0x3123F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123F4u;
label_3123f4:
    // 0x3123f4: 0x8605003c  lh          $a1, 0x3C($s0)
    ctx->pc = 0x3123f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3123f8: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x3123F8u;
    SET_GPR_U32(ctx, 31, 0x312400u);
    ctx->pc = 0x3123FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123F8u;
    // 0x3123fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3123F8u, 0x312400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312400u;
label_312400:
    // 0x312400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312404:
    // 0x312404: 0xc0c47de  jal         func_311F78
    ctx->pc = 0x312404u;
    SET_GPR_U32(ctx, 31, 0x31240Cu);
    ctx->pc = 0x312408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312404u;
    // 0x312408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F78u, 0x312404u, 0x31240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31240Cu;
label_31240c:
    // 0x31240c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312410: 0x2405025b  addiu       $a1, $zero, 0x25B
    ctx->pc = 0x312410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
    // 0x312414: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x312414u;
    SET_GPR_U32(ctx, 31, 0x31241Cu);
    ctx->pc = 0x312418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312414u;
    // 0x312418: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x312414u, 0x31241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31241Cu;
label_31241c:
    // 0x31241c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31241cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312428: 0x3e00008  jr          $ra
    ctx->pc = 0x312428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312428u;
        // 0x31242c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312430u;
}
