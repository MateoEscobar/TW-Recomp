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

// Function: sub_00483360
// Address: 0x483360 - 0x4833e8
void sub_00483360_0x483360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483360_0x483360");
#endif

    switch (ctx->pc) {
        case 0x483360u: goto label_483360;
        case 0x483364u: goto label_483364;
        case 0x483368u: goto label_483368;
        case 0x48336cu: goto label_48336c;
        case 0x483370u: goto label_483370;
        case 0x483374u: goto label_483374;
        case 0x483378u: goto label_483378;
        case 0x48337cu: goto label_48337c;
        case 0x483380u: goto label_483380;
        case 0x483384u: goto label_483384;
        case 0x483388u: goto label_483388;
        case 0x48338cu: goto label_48338c;
        case 0x483390u: goto label_483390;
        case 0x483394u: goto label_483394;
        case 0x483398u: goto label_483398;
        case 0x48339cu: goto label_48339c;
        case 0x4833a0u: goto label_4833a0;
        case 0x4833a4u: goto label_4833a4;
        case 0x4833a8u: goto label_4833a8;
        case 0x4833acu: goto label_4833ac;
        case 0x4833b0u: goto label_4833b0;
        case 0x4833b4u: goto label_4833b4;
        case 0x4833b8u: goto label_4833b8;
        case 0x4833bcu: goto label_4833bc;
        case 0x4833c0u: goto label_4833c0;
        case 0x4833c4u: goto label_4833c4;
        case 0x4833c8u: goto label_4833c8;
        case 0x4833ccu: goto label_4833cc;
        case 0x4833d0u: goto label_4833d0;
        case 0x4833d4u: goto label_4833d4;
        case 0x4833d8u: goto label_4833d8;
        case 0x4833dcu: goto label_4833dc;
        case 0x4833e0u: goto label_4833e0;
        case 0x4833e4u: goto label_4833e4;
        default: break;
    }

    ctx->pc = 0x483360u;

label_483360:
    // 0x483360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_483364:
    // 0x483364: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x483364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_483368:
    // 0x483368: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x483368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_48336c:
    // 0x48336c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483370:
    // 0x483370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x483370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_483374:
    // 0x483374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x483374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483378:
    // 0x483378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48337c:
    // 0x48337c: 0x2451ad28  addiu       $s1, $v0, -0x52D8
    ctx->pc = 0x48337cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_483380:
    // 0x483380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x483380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483384:
    // 0x483384: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x483384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_483388:
    // 0x483388: 0x40f809  jalr        $v0
label_48338c:
    if (ctx->pc == 0x48338Cu) {
        ctx->pc = 0x48338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483388u;
        // 0x48338c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483390u;
        goto label_483390;
    }
    ctx->pc = 0x483388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483390u);
        ctx->pc = 0x48338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483388u;
        // 0x48338c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483388u, 0x483390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483390u;
label_483390:
    // 0x483390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483394:
    // 0x483394: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_483398:
    if (ctx->pc == 0x483398u) {
        ctx->pc = 0x483398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483394u;
        // 0x483398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48339Cu;
        goto label_48339c;
    }
    ctx->pc = 0x483394u;
    {
        const bool branch_taken_0x483394 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483394u;
        // 0x483398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483394) {
            ctx->pc = 0x4833B8u;
            goto label_4833b8;
        }
    }
    ctx->pc = 0x48339Cu;
label_48339c:
    // 0x48339c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x48339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4833a0:
    // 0x4833a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4833a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4833a4:
    // 0x4833a4: 0xc11eff2  jal         func_47BFC8
label_4833a8:
    if (ctx->pc == 0x4833A8u) {
        ctx->pc = 0x4833A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4833A4u;
        // 0x4833a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4833ACu;
        goto label_4833ac;
    }
    ctx->pc = 0x4833A4u;
    SET_GPR_U32(ctx, 31, 0x4833ACu);
    ctx->pc = 0x4833A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4833A4u;
    // 0x4833a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4833A4u, 0x4833ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4833ACu;
label_4833ac:
    // 0x4833ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4833acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4833b0:
    // 0x4833b0: 0xc11f024  jal         func_47C090
label_4833b4:
    if (ctx->pc == 0x4833B4u) {
        ctx->pc = 0x4833B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4833B0u;
        // 0x4833b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4833B8u;
        goto label_4833b8;
    }
    ctx->pc = 0x4833B0u;
    SET_GPR_U32(ctx, 31, 0x4833B8u);
    ctx->pc = 0x4833B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4833B0u;
    // 0x4833b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4833B0u, 0x4833B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4833B8u;
label_4833b8:
    // 0x4833b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_4833bc:
    if (ctx->pc == 0x4833BCu) {
        ctx->pc = 0x4833BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4833B8u;
        // 0x4833bc: 0x8f828618  lw          $v0, -0x79E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4833C0u;
        goto label_4833c0;
    }
    ctx->pc = 0x4833B8u;
    {
        const bool branch_taken_0x4833b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4833BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4833B8u;
        // 0x4833bc: 0x8f828618  lw          $v0, -0x79E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4833b8) {
            ctx->pc = 0x4833D0u;
            goto label_4833d0;
        }
    }
    ctx->pc = 0x4833C0u;
label_4833c0:
    // 0x4833c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4833c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4833c4:
    // 0x4833c4: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x4833c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
label_4833c8:
    // 0x4833c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4833c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4833cc:
    // 0x4833cc: 0xaf828618  sw          $v0, -0x79E8($gp)
    ctx->pc = 0x4833ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 2));
label_4833d0:
    // 0x4833d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4833d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4833d4:
    // 0x4833d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4833d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4833d8:
    // 0x4833d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4833d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4833dc:
    // 0x4833dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4833dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4833e0:
    // 0x4833e0: 0x3e00008  jr          $ra
label_4833e4:
    if (ctx->pc == 0x4833E4u) {
        ctx->pc = 0x4833E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4833E0u;
        // 0x4833e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4833E8u;
        goto label_fallthrough_0x4833e0;
    }
    ctx->pc = 0x4833E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4833E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4833E0u;
        // 0x4833e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4833E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4833e0:
    ctx->pc = 0x4833E8u;
}
