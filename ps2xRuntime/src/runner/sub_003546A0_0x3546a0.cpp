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

// Function: sub_003546A0
// Address: 0x3546a0 - 0x354710
void sub_003546A0_0x3546a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003546A0_0x3546a0");
#endif

    switch (ctx->pc) {
        case 0x3546b4u: goto label_3546b4;
        case 0x3546d4u: goto label_3546d4;
        case 0x3546dcu: goto label_3546dc;
        case 0x3546f4u: goto label_3546f4;
        case 0x354700u: goto label_354700;
        default: break;
    }

    ctx->pc = 0x3546a0u;

    // 0x3546a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3546a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3546a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3546a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3546a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3546a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3546ac: 0xc0e8550  jal         func_3A1540
    ctx->pc = 0x3546ACu;
    SET_GPR_U32(ctx, 31, 0x3546B4u);
    ctx->pc = 0x3A1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1540u, 0x3546ACu, 0x3546B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546B4u;
label_3546b4:
    // 0x3546b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3546b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546b8: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3546B8u;
    {
        const bool branch_taken_0x3546b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546b8) {
            ctx->pc = 0x3546BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3546B8u;
            // 0x3546bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354704u;
            goto label_354704;
        }
    }
    ctx->pc = 0x3546C0u;
    // 0x3546c0: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x3546c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x3546c4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3546C4u;
    {
        const bool branch_taken_0x3546c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546c4) {
            ctx->pc = 0x3546C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3546C4u;
            // 0x3546c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354704u;
            goto label_354704;
        }
    }
    ctx->pc = 0x3546CCu;
    // 0x3546cc: 0xc0e8556  jal         func_3A1558
    ctx->pc = 0x3546CCu;
    SET_GPR_U32(ctx, 31, 0x3546D4u);
    ctx->pc = 0x3546D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3546CCu;
    // 0x3546d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1558u, 0x3546CCu, 0x3546D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546D4u;
label_3546d4:
    // 0x3546d4: 0xc048122  jal         func_120488
    ctx->pc = 0x3546D4u;
    SET_GPR_U32(ctx, 31, 0x3546DCu);
    ctx->pc = 0x120488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120488u, 0x3546D4u, 0x3546DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546DCu;
label_3546dc:
    // 0x3546dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3546dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3546e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3546e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3546e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3546e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3546ec: 0xc047b82  jal         func_11EE08
    ctx->pc = 0x3546ECu;
    SET_GPR_U32(ctx, 31, 0x3546F4u);
    ctx->pc = 0x3546F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3546ECu;
    // 0x3546f0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x3546ECu, 0x3546F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546F4u;
label_3546f4:
    // 0x3546f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3546f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546f8: 0xc047910  jal         func_11E440
    ctx->pc = 0x3546F8u;
    SET_GPR_U32(ctx, 31, 0x354700u);
    ctx->pc = 0x3546FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3546F8u;
    // 0x3546fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E440u, 0x3546F8u, 0x354700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354700u;
label_354700:
    // 0x354700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x354700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354704:
    // 0x354704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354708: 0x3e00008  jr          $ra
    ctx->pc = 0x354708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354708u;
        // 0x35470c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354710u;
}
