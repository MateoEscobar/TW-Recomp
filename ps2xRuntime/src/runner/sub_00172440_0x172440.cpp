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

// Function: sub_00172440
// Address: 0x172440 - 0x1724f8
void sub_00172440_0x172440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172440_0x172440");
#endif

    switch (ctx->pc) {
        case 0x172474u: goto label_172474;
        case 0x17247cu: goto label_17247c;
        case 0x172488u: goto label_172488;
        case 0x1724c4u: goto label_1724c4;
        case 0x1724d8u: goto label_1724d8;
        default: break;
    }

    ctx->pc = 0x172440u;

    // 0x172440: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x172440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x172444: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x172444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x172448: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x172448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x17244c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17244cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172450: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x172450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x172454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x172454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172458: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x172458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x17245c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x172460: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x172460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x172464: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x172464u;
    {
        const bool branch_taken_0x172464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172464u;
        // 0x172468: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172464) {
            ctx->pc = 0x1724D8u;
            goto label_1724d8;
        }
    }
    ctx->pc = 0x17246Cu;
    // 0x17246c: 0xc05fdec  jal         func_17F7B0
    ctx->pc = 0x17246Cu;
    SET_GPR_U32(ctx, 31, 0x172474u);
    ctx->pc = 0x17F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B0u, 0x17246Cu, 0x172474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0xc06610a  jal         func_198428
    ctx->pc = 0x172474u;
    SET_GPR_U32(ctx, 31, 0x17247Cu);
    ctx->pc = 0x172478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172474u;
    // 0x172478: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198428u, 0x172474u, 0x17247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17247Cu;
label_17247c:
    // 0x17247c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17247cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172480: 0xc118a4c  jal         func_462930
    ctx->pc = 0x172480u;
    SET_GPR_U32(ctx, 31, 0x172488u);
    ctx->pc = 0x172484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172480u;
    // 0x172484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462930u, 0x172480u, 0x172488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172488u;
label_172488:
    // 0x172488: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x172488u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17248c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x17248cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172490: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x172490u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x172494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172498: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x172498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17249c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x17249cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1724a0: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x1724a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x1724a4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x1724a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x1724a8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1724a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1724ac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1724acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1724b0: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1724b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1724b4: 0xafb30044  sw          $s3, 0x44($sp)
    ctx->pc = 0x1724b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 19));
    // 0x1724b8: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x1724b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x1724bc: 0xc05fdee  jal         func_17F7B8
    ctx->pc = 0x1724BCu;
    SET_GPR_U32(ctx, 31, 0x1724C4u);
    ctx->pc = 0x1724C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724BCu;
    // 0x1724c0: 0xafbd0040  sw          $sp, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7B8u, 0x1724BCu, 0x1724C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724C4u;
label_1724c4:
    // 0x1724c4: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1724c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1724c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1724c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1724cc: 0x24a52318  addiu       $a1, $a1, 0x2318
    ctx->pc = 0x1724ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8984));
    // 0x1724d0: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x1724D0u;
    SET_GPR_U32(ctx, 31, 0x1724D8u);
    ctx->pc = 0x1724D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724D0u;
    // 0x1724d4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x1724D0u, 0x1724D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724D8u;
label_1724d8:
    // 0x1724d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1724d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1724dc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1724dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1724e0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1724e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1724e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1724e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1724e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1724e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1724ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1724ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1724F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724ECu;
        // 0x1724f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1724ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1724F4u;
    // 0x1724f4: 0x0  nop
    ctx->pc = 0x1724f4u;
    // NOP
    ctx->pc = 0x1724f8u;
}
