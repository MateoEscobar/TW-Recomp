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

// Function: sub_0016B3D0
// Address: 0x16b3d0 - 0x16b460
void sub_0016B3D0_0x16b3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B3D0_0x16b3d0");
#endif

    switch (ctx->pc) {
        case 0x16b404u: goto label_16b404;
        case 0x16b410u: goto label_16b410;
        case 0x16b418u: goto label_16b418;
        case 0x16b420u: goto label_16b420;
        case 0x16b430u: goto label_16b430;
        default: break;
    }

    ctx->pc = 0x16b3d0u;

    // 0x16b3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b3d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b3d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16b3dc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16b3e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16b3e4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b3e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16b3ec: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x16b3f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b3f4: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B3F4u;
    {
        const bool branch_taken_0x16b3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3F4u;
        // 0x16b3f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3f4) {
            ctx->pc = 0x16B444u;
            goto label_16b444;
        }
    }
    ctx->pc = 0x16B3FCu;
    // 0x16b3fc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B3FCu;
    SET_GPR_U32(ctx, 31, 0x16B404u);
    ctx->pc = 0x16B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3FCu;
    // 0x16b400: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B3FCu, 0x16B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B404u;
label_16b404:
    // 0x16b404: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x16b404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x16b408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b40c: 0x0  nop
    ctx->pc = 0x16b40cu;
    // NOP
label_16b410:
    // 0x16b410: 0xc137866  jal         func_4DE198
    ctx->pc = 0x16B410u;
    SET_GPR_U32(ctx, 31, 0x16B418u);
    ctx->pc = 0x16B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B410u;
    // 0x16b414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x16B410u, 0x16B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B418u;
label_16b418:
    // 0x16b418: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16B418u;
    SET_GPR_U32(ctx, 31, 0x16B420u);
    ctx->pc = 0x16B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B418u;
    // 0x16b41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16B418u, 0x16B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B420u;
label_16b420:
    // 0x16b420: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B420u;
    {
        const bool branch_taken_0x16b420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b420) {
            ctx->pc = 0x16B424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B420u;
            // 0x16b424: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B438u;
            goto label_16b438;
        }
    }
    ctx->pc = 0x16B428u;
    // 0x16b428: 0xc087502  jal         func_21D408
    ctx->pc = 0x16B428u;
    SET_GPR_U32(ctx, 31, 0x16B430u);
    ctx->pc = 0x16B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B428u;
    // 0x16b42c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16B428u, 0x16B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B430u;
label_16b430:
    // 0x16b430: 0xac52021c  sw          $s2, 0x21C($v0)
    ctx->pc = 0x16b430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 18));
    // 0x16b434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16b438:
    // 0x16b438: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16b438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16b43c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16B43Cu;
    {
        const bool branch_taken_0x16b43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b43c) {
            ctx->pc = 0x16B440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B43Cu;
            // 0x16b440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b410;
        }
    }
    ctx->pc = 0x16B444u;
label_16b444:
    // 0x16b444: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16b444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b44c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16b44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b454: 0x3e00008  jr          $ra
    ctx->pc = 0x16B454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B454u;
        // 0x16b458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B45Cu;
    // 0x16b45c: 0x0  nop
    ctx->pc = 0x16b45cu;
    // NOP
    ctx->pc = 0x16b460u;
}
