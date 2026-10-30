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

// Function: sub_0040C3A8
// Address: 0x40c3a8 - 0x40c478
void sub_0040C3A8_0x40c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C3A8_0x40c3a8");
#endif

    switch (ctx->pc) {
        case 0x40c3c8u: goto label_40c3c8;
        case 0x40c3e0u: goto label_40c3e0;
        case 0x40c3f0u: goto label_40c3f0;
        case 0x40c404u: goto label_40c404;
        case 0x40c410u: goto label_40c410;
        case 0x40c418u: goto label_40c418;
        case 0x40c424u: goto label_40c424;
        case 0x40c430u: goto label_40c430;
        case 0x40c43cu: goto label_40c43c;
        case 0x40c450u: goto label_40c450;
        default: break;
    }

    ctx->pc = 0x40c3a8u;

    // 0x40c3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40c3ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40c3b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40c3b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c3b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40c3bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c3c0: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40C3C0u;
    SET_GPR_U32(ctx, 31, 0x40C3C8u);
    ctx->pc = 0x40C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C3C0u;
    // 0x40c3c4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40C3C0u, 0x40C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C3C8u;
label_40c3c8:
    // 0x40c3c8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x40C3C8u;
    {
        const bool branch_taken_0x40c3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3C8u;
        // 0x40c3cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c3c8) {
            ctx->pc = 0x40C45Cu;
            goto label_40c45c;
        }
    }
    ctx->pc = 0x40C3D0u;
    // 0x40c3d0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c3d8: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x40C3D8u;
    SET_GPR_U32(ctx, 31, 0x40C3E0u);
    ctx->pc = 0x40C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C3D8u;
    // 0x40c3dc: 0x24a58498  addiu       $a1, $a1, -0x7B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x40C3D8u, 0x40C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C3E0u;
label_40c3e0:
    // 0x40c3e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c3e8: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x40C3E8u;
    SET_GPR_U32(ctx, 31, 0x40C3F0u);
    ctx->pc = 0x40C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C3E8u;
    // 0x40c3ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x40C3E8u, 0x40C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C3F0u;
label_40c3f0:
    // 0x40c3f0: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x40C3F0u;
    {
        const bool branch_taken_0x40c3f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x40C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3F0u;
        // 0x40c3f4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c3f0) {
            ctx->pc = 0x40C458u;
            goto label_40c458;
        }
    }
    ctx->pc = 0x40C3F8u;
    // 0x40c3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c3fc: 0xc102866  jal         func_40A198
    ctx->pc = 0x40C3FCu;
    SET_GPR_U32(ctx, 31, 0x40C404u);
    ctx->pc = 0x40C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C3FCu;
    // 0x40c400: 0x24a583e0  addiu       $a1, $a1, -0x7C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40C3FCu, 0x40C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C404u;
label_40c404:
    // 0x40c404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40c404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c408: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x40C408u;
    SET_GPR_U32(ctx, 31, 0x40C410u);
    ctx->pc = 0x40C40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C408u;
    // 0x40c40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x40C408u, 0x40C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C410u;
label_40c410:
    // 0x40c410: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C410u;
    SET_GPR_U32(ctx, 31, 0x40C418u);
    ctx->pc = 0x40C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C410u;
    // 0x40c414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C410u, 0x40C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C418u;
label_40c418:
    // 0x40c418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c41c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C41Cu;
    SET_GPR_U32(ctx, 31, 0x40C424u);
    ctx->pc = 0x40C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C41Cu;
    // 0x40c420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C41Cu, 0x40C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C424u;
label_40c424:
    // 0x40c424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c428: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40C428u;
    SET_GPR_U32(ctx, 31, 0x40C430u);
    ctx->pc = 0x40C42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C428u;
    // 0x40c42c: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40C428u, 0x40C430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C430u;
label_40c430:
    // 0x40c430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c434: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40C434u;
    SET_GPR_U32(ctx, 31, 0x40C43Cu);
    ctx->pc = 0x40C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C434u;
    // 0x40c438: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40C434u, 0x40C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C43Cu;
label_40c43c:
    // 0x40c43c: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x40c43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x40c440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c444: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x40c444u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40c448: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40C448u;
    SET_GPR_U32(ctx, 31, 0x40C450u);
    ctx->pc = 0x40C44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C448u;
    // 0x40c44c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40C448u, 0x40C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C450u;
label_40c450:
    // 0x40c450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40C450u;
    {
        const bool branch_taken_0x40c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C450u;
        // 0x40c454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c450) {
            ctx->pc = 0x40C45Cu;
            goto label_40c45c;
        }
    }
    ctx->pc = 0x40C458u;
label_40c458:
    // 0x40c458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40c458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c45c:
    // 0x40c45c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c460: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c464: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40c464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c46c: 0x3e00008  jr          $ra
    ctx->pc = 0x40C46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C46Cu;
        // 0x40c470: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C474u;
    // 0x40c474: 0x0  nop
    ctx->pc = 0x40c474u;
    // NOP
    ctx->pc = 0x40c478u;
}
