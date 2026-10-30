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

// Function: sub_002BB3D0
// Address: 0x2bb3d0 - 0x2bb458
void sub_002BB3D0_0x2bb3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB3D0_0x2bb3d0");
#endif

    switch (ctx->pc) {
        case 0x2bb3f4u: goto label_2bb3f4;
        case 0x2bb3fcu: goto label_2bb3fc;
        case 0x2bb40cu: goto label_2bb40c;
        case 0x2bb414u: goto label_2bb414;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb440u: goto label_2bb440;
        default: break;
    }

    ctx->pc = 0x2bb3d0u;

    // 0x2bb3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bb3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bb3d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2bb3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2bb3d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bb3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bb3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2bb3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2bb3e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2bb3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2bb3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb3ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2BB3ECu;
    SET_GPR_U32(ctx, 31, 0x2BB3F4u);
    ctx->pc = 0x2BB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3ECu;
    // 0x2bb3f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2BB3ECu, 0x2BB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3F4u;
label_2bb3f4:
    // 0x2bb3f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2BB3F4u;
    SET_GPR_U32(ctx, 31, 0x2BB3FCu);
    ctx->pc = 0x2BB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3F4u;
    // 0x2bb3f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2BB3F4u, 0x2BB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3FCu;
label_2bb3fc:
    // 0x2bb3fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BB3FCu;
    {
        const bool branch_taken_0x2bb3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3FCu;
        // 0x2bb400: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3fc) {
            ctx->pc = 0x2BB444u;
            goto label_2bb444;
        }
    }
    ctx->pc = 0x2BB404u;
    // 0x2bb404: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BB404u;
    SET_GPR_U32(ctx, 31, 0x2BB40Cu);
    ctx->pc = 0x2BB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB404u;
    // 0x2bb408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BB404u, 0x2BB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB40Cu;
label_2bb40c:
    // 0x2bb40c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2BB40Cu;
    SET_GPR_U32(ctx, 31, 0x2BB414u);
    ctx->pc = 0x2BB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB40Cu;
    // 0x2bb410: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BB40Cu, 0x2BB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB414u;
label_2bb414:
    // 0x2bb414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb418: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB418u;
    {
        const bool branch_taken_0x2bb418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB418u;
        // 0x2bb41c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb418) {
            ctx->pc = 0x2BB434u;
            goto label_2bb434;
        }
    }
    ctx->pc = 0x2BB420u;
    // 0x2bb420: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2bb420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2bb424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb42c: 0xc0aed16  jal         func_2BB458
    ctx->pc = 0x2BB42Cu;
    SET_GPR_U32(ctx, 31, 0x2BB434u);
    ctx->pc = 0x2BB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB42Cu;
    // 0x2bb430: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB458u, 0x2BB42Cu, 0x2BB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB434u;
label_2bb434:
    // 0x2bb434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb438: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2BB438u;
    SET_GPR_U32(ctx, 31, 0x2BB440u);
    ctx->pc = 0x2BB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB438u;
    // 0x2bb43c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BB438u, 0x2BB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB440u;
label_2bb440:
    // 0x2bb440: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2bb440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb444:
    // 0x2bb444: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2bb444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb450: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB450u;
        // 0x2bb454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB458u;
}
