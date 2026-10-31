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

// Function: sub_0016A3F8
// Address: 0x16a3f8 - 0x16a458
void sub_0016A3F8_0x16a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A3F8_0x16a3f8");
#endif

    switch (ctx->pc) {
        case 0x16a420u: goto label_16a420;
        case 0x16a430u: goto label_16a430;
        case 0x16a43cu: goto label_16a43c;
        case 0x16a448u: goto label_16a448;
        default: break;
    }

    ctx->pc = 0x16a3f8u;

    // 0x16a3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a3fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a400: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16a404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a40c: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x16a40cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a410: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16A410u;
    {
        const bool branch_taken_0x16a410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A410u;
        // 0x16a414: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a410) {
            ctx->pc = 0x16A448u;
            goto label_16a448;
        }
    }
    ctx->pc = 0x16A418u;
    // 0x16a418: 0xc0e4060  jal         func_390180
    ctx->pc = 0x16A418u;
    SET_GPR_U32(ctx, 31, 0x16A420u);
    ctx->pc = 0x16A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A418u;
    // 0x16a41c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x16A418u, 0x16A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A420u;
label_16a420:
    // 0x16a420: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x16A420u;
    {
        const bool branch_taken_0x16a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a420) {
            ctx->pc = 0x16A424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A420u;
            // 0x16a424: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A44Cu;
            goto label_16a44c;
        }
    }
    ctx->pc = 0x16A428u;
    // 0x16a428: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A428u;
    SET_GPR_U32(ctx, 31, 0x16A430u);
    ctx->pc = 0x16A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A428u;
    // 0x16a42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A428u, 0x16A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A430u;
label_16a430:
    // 0x16a430: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a434: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16A434u;
    SET_GPR_U32(ctx, 31, 0x16A43Cu);
    ctx->pc = 0x16A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A434u;
    // 0x16a438: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16A434u, 0x16A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A43Cu;
label_16a43c:
    // 0x16a43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a440: 0xc0598c2  jal         func_166308
    ctx->pc = 0x16A440u;
    SET_GPR_U32(ctx, 31, 0x16A448u);
    ctx->pc = 0x16A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A440u;
    // 0x16a444: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166308u, 0x16A440u, 0x16A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A448u;
label_16a448:
    // 0x16a448: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16a44c:
    // 0x16a44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a450: 0x3e00008  jr          $ra
    ctx->pc = 0x16A450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A450u;
        // 0x16a454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A458u;
}
