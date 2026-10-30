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

// Function: sub_003273C0
// Address: 0x3273c0 - 0x3274a8
void sub_003273C0_0x3273c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003273C0_0x3273c0");
#endif

    switch (ctx->pc) {
        case 0x327410u: goto label_327410;
        case 0x327428u: goto label_327428;
        case 0x32743cu: goto label_32743c;
        case 0x327454u: goto label_327454;
        case 0x327464u: goto label_327464;
        case 0x327488u: goto label_327488;
        default: break;
    }

    ctx->pc = 0x3273c0u;

    // 0x3273c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3273c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3273c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3273c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3273c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3273c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3273cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3273ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3273d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3273d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3273d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3273d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3273d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3273dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3273e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3273e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3273e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3273e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3273e8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3273E8u;
    {
        const bool branch_taken_0x3273e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3273ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273E8u;
        // 0x3273ec: 0x8c930028  lw          $s3, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273e8) {
            ctx->pc = 0x327404u;
            goto label_327404;
        }
    }
    ctx->pc = 0x3273F0u;
    // 0x3273f0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3273f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3273f4: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3273F4u;
    {
        const bool branch_taken_0x3273f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3273F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273F4u;
        // 0x3273f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273f4) {
            ctx->pc = 0x327430u;
            goto label_327430;
        }
    }
    ctx->pc = 0x3273FCu;
    // 0x3273fc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3273FCu;
    {
        const bool branch_taken_0x3273fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3273fc) {
            ctx->pc = 0x32745Cu;
            goto label_32745c;
        }
    }
    ctx->pc = 0x327404u;
label_327404:
    // 0x327404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327408: 0xc0c9ad6  jal         func_326B58
    ctx->pc = 0x327408u;
    SET_GPR_U32(ctx, 31, 0x327410u);
    ctx->pc = 0x32740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327408u;
    // 0x32740c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B58u, 0x327408u, 0x327410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327410u;
label_327410:
    // 0x327410: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x327410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327418: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x327418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x32741c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x32741cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x327420: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x327420u;
    SET_GPR_U32(ctx, 31, 0x327428u);
    ctx->pc = 0x327424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327420u;
    // 0x327424: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x327420u, 0x327428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327428u;
label_327428:
    // 0x327428: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x327428u;
    {
        const bool branch_taken_0x327428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327428u;
        // 0x32742c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327428) {
            ctx->pc = 0x32748Cu;
            goto label_32748c;
        }
    }
    ctx->pc = 0x327430u;
label_327430:
    // 0x327430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327434: 0xc0c9ad6  jal         func_326B58
    ctx->pc = 0x327434u;
    SET_GPR_U32(ctx, 31, 0x32743Cu);
    ctx->pc = 0x327438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327434u;
    // 0x327438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B58u, 0x327434u, 0x32743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32743Cu;
label_32743c:
    // 0x32743c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327440: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327444: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x327444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x327448: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x327448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x32744c: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x32744Cu;
    SET_GPR_U32(ctx, 31, 0x327454u);
    ctx->pc = 0x327450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32744Cu;
    // 0x327450: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x32744Cu, 0x327454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327454u;
label_327454:
    // 0x327454: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x327454u;
    {
        const bool branch_taken_0x327454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327454u;
        // 0x327458: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327454) {
            ctx->pc = 0x32748Cu;
            goto label_32748c;
        }
    }
    ctx->pc = 0x32745Cu;
label_32745c:
    // 0x32745c: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32745Cu;
    SET_GPR_U32(ctx, 31, 0x327464u);
    ctx->pc = 0x327460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32745Cu;
    // 0x327460: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32745Cu, 0x327464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327464u;
label_327464:
    // 0x327464: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x327464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x327468: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x327468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x32746c: 0x24425098  addiu       $v0, $v0, 0x5098
    ctx->pc = 0x32746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
    // 0x327470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327474: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x327474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x327478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32747c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x32747cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x327480: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x327480u;
    SET_GPR_U32(ctx, 31, 0x327488u);
    ctx->pc = 0x327484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327480u;
    // 0x327484: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x327480u, 0x327488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327488u;
label_327488:
    // 0x327488: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x327488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32748c:
    // 0x32748c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32748cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327494: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x327494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32749c: 0x3e00008  jr          $ra
    ctx->pc = 0x32749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3274A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32749Cu;
        // 0x3274a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3274A4u;
    // 0x3274a4: 0x0  nop
    ctx->pc = 0x3274a4u;
    // NOP
    ctx->pc = 0x3274a8u;
}
