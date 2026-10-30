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

// Function: sub_0032F398
// Address: 0x32f398 - 0x32f478
void sub_0032F398_0x32f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F398_0x32f398");
#endif

    switch (ctx->pc) {
        case 0x32f3e0u: goto label_32f3e0;
        case 0x32f3f8u: goto label_32f3f8;
        case 0x32f408u: goto label_32f408;
        case 0x32f41cu: goto label_32f41c;
        case 0x32f42cu: goto label_32f42c;
        case 0x32f43cu: goto label_32f43c;
        case 0x32f454u: goto label_32f454;
        default: break;
    }

    ctx->pc = 0x32f398u;

    // 0x32f398: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32f39c: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x32f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32f3a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32f3a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32f3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32f3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x32f3b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32f3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32f3b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x32f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x32f3bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x32f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x32f3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f3c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32f3c8: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32F3C8u;
    {
        const bool branch_taken_0x32f3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3C8u;
        // 0x32f3cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3c8) {
            ctx->pc = 0x32F444u;
            goto label_32f444;
        }
    }
    ctx->pc = 0x32F3D0u;
    // 0x32f3d0: 0x24150113  addiu       $s5, $zero, 0x113
    ctx->pc = 0x32f3d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x32f3d4: 0x24140115  addiu       $s4, $zero, 0x115
    ctx->pc = 0x32f3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    // 0x32f3d8: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x32f3dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32f3e0:
    // 0x32f3e0: 0x10550007  beq         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F3E0u;
    {
        const bool branch_taken_0x32f3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x32f3e0) {
            ctx->pc = 0x32F400u;
            goto label_32f400;
        }
    }
    ctx->pc = 0x32F3E8u;
    // 0x32f3e8: 0x1454000e  bne         $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x32F3E8u;
    {
        const bool branch_taken_0x32f3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x32F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3E8u;
        // 0x32f3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3e8) {
            ctx->pc = 0x32F424u;
            goto label_32f424;
        }
    }
    ctx->pc = 0x32F3F0u;
    // 0x32f3f0: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32F3F0u;
    SET_GPR_U32(ctx, 31, 0x32F3F8u);
    ctx->pc = 0x32F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F3F0u;
    // 0x32f3f4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32F3F0u, 0x32F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F3F8u;
label_32f3f8:
    // 0x32f3f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32F3F8u;
    {
        const bool branch_taken_0x32f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f3f8) {
            ctx->pc = 0x32F42Cu;
            goto label_32f42c;
        }
    }
    ctx->pc = 0x32F400u;
label_32f400:
    // 0x32f400: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32F400u;
    SET_GPR_U32(ctx, 31, 0x32F408u);
    ctx->pc = 0x32F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F400u;
    // 0x32f404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32F400u, 0x32F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F408u;
label_32f408:
    // 0x32f408: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32f408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f410: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32f410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32f414: 0xc0cb3fe  jal         func_32CFF8
    ctx->pc = 0x32F414u;
    SET_GPR_U32(ctx, 31, 0x32F41Cu);
    ctx->pc = 0x32F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F414u;
    // 0x32f418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFF8u, 0x32F414u, 0x32F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F41Cu;
label_32f41c:
    // 0x32f41c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F41Cu;
    {
        const bool branch_taken_0x32f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f41c) {
            ctx->pc = 0x32F42Cu;
            goto label_32f42c;
        }
    }
    ctx->pc = 0x32F424u;
label_32f424:
    // 0x32f424: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32F424u;
    SET_GPR_U32(ctx, 31, 0x32F42Cu);
    ctx->pc = 0x32F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F424u;
    // 0x32f428: 0x26655e80  addiu       $a1, $s3, 0x5E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32F424u, 0x32F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F42Cu;
label_32f42c:
    // 0x32f42c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F42Cu;
    {
        const bool branch_taken_0x32f42c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F42Cu;
        // 0x32f430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f42c) {
            ctx->pc = 0x32F444u;
            goto label_32f444;
        }
    }
    ctx->pc = 0x32F434u;
    // 0x32f434: 0xc0cb34c  jal         func_32CD30
    ctx->pc = 0x32F434u;
    SET_GPR_U32(ctx, 31, 0x32F43Cu);
    ctx->pc = 0x32F438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F434u;
    // 0x32f438: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD30u, 0x32F434u, 0x32F43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F43Cu;
label_32f43c:
    // 0x32f43c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x32F43Cu;
    {
        const bool branch_taken_0x32f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f43c) {
            ctx->pc = 0x32F440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F43Cu;
            // 0x32f440: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f3e0;
        }
    }
    ctx->pc = 0x32F444u;
label_32f444:
    // 0x32f444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32f448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f44c: 0xc0cb51c  jal         func_32D470
    ctx->pc = 0x32F44Cu;
    SET_GPR_U32(ctx, 31, 0x32F454u);
    ctx->pc = 0x32F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F44Cu;
    // 0x32f450: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D470u, 0x32F44Cu, 0x32F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F454u;
label_32f454:
    // 0x32f454: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32f454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32f458: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32f458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32f45c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32f45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f460: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32f460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f464: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x32f464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f468: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x32f468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f470: 0x3e00008  jr          $ra
    ctx->pc = 0x32F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F470u;
        // 0x32f474: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F478u;
}
