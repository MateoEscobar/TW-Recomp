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

// Function: sub_002DF330
// Address: 0x2df330 - 0x2df3c0
void sub_002DF330_0x2df330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF330_0x2df330");
#endif

    switch (ctx->pc) {
        case 0x2df330u: goto label_2df330;
        case 0x2df334u: goto label_2df334;
        case 0x2df338u: goto label_2df338;
        case 0x2df33cu: goto label_2df33c;
        case 0x2df340u: goto label_2df340;
        case 0x2df344u: goto label_2df344;
        case 0x2df348u: goto label_2df348;
        case 0x2df34cu: goto label_2df34c;
        case 0x2df350u: goto label_2df350;
        case 0x2df354u: goto label_2df354;
        case 0x2df358u: goto label_2df358;
        case 0x2df35cu: goto label_2df35c;
        case 0x2df360u: goto label_2df360;
        case 0x2df364u: goto label_2df364;
        case 0x2df368u: goto label_2df368;
        case 0x2df36cu: goto label_2df36c;
        case 0x2df370u: goto label_2df370;
        case 0x2df374u: goto label_2df374;
        case 0x2df378u: goto label_2df378;
        case 0x2df37cu: goto label_2df37c;
        case 0x2df380u: goto label_2df380;
        case 0x2df384u: goto label_2df384;
        case 0x2df388u: goto label_2df388;
        case 0x2df38cu: goto label_2df38c;
        case 0x2df390u: goto label_2df390;
        case 0x2df394u: goto label_2df394;
        case 0x2df398u: goto label_2df398;
        case 0x2df39cu: goto label_2df39c;
        case 0x2df3a0u: goto label_2df3a0;
        case 0x2df3a4u: goto label_2df3a4;
        case 0x2df3a8u: goto label_2df3a8;
        case 0x2df3acu: goto label_2df3ac;
        case 0x2df3b0u: goto label_2df3b0;
        case 0x2df3b4u: goto label_2df3b4;
        case 0x2df3b8u: goto label_2df3b8;
        case 0x2df3bcu: goto label_2df3bc;
        default: break;
    }

    ctx->pc = 0x2df330u;

label_2df330:
    // 0x2df330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2df330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2df334:
    // 0x2df334: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2df334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2df338:
    // 0x2df338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2df33c:
    // 0x2df33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df340:
    // 0x2df340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2df344:
    // 0x2df344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2df348:
    // 0x2df348: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2df348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2df34c:
    // 0x2df34c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2df34cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df350:
    // 0x2df350: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2df350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2df354:
    // 0x2df354: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2df354u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2df358:
    // 0x2df358: 0xc0e409a  jal         func_390268
label_2df35c:
    if (ctx->pc == 0x2DF35Cu) {
        ctx->pc = 0x2DF35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF358u;
        // 0x2df35c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF360u;
        goto label_2df360;
    }
    ctx->pc = 0x2DF358u;
    SET_GPR_U32(ctx, 31, 0x2DF360u);
    ctx->pc = 0x2DF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF358u;
    // 0x2df35c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DF358u, 0x2DF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF360u;
label_2df360:
    // 0x2df360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df364:
    // 0x2df364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df368:
    // 0x2df368: 0xc0a352c  jal         func_28D4B0
label_2df36c:
    if (ctx->pc == 0x2DF36Cu) {
        ctx->pc = 0x2DF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF368u;
        // 0x2df36c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF370u;
        goto label_2df370;
    }
    ctx->pc = 0x2DF368u;
    SET_GPR_U32(ctx, 31, 0x2DF370u);
    ctx->pc = 0x2DF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF368u;
    // 0x2df36c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DF368u, 0x2DF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF370u;
label_2df370:
    // 0x2df370: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2df374:
    if (ctx->pc == 0x2DF374u) {
        ctx->pc = 0x2DF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF370u;
        // 0x2df374: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF378u;
        goto label_2df378;
    }
    ctx->pc = 0x2DF370u;
    {
        const bool branch_taken_0x2df370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df370) {
            ctx->pc = 0x2DF374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF370u;
            // 0x2df374: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF394u;
            goto label_2df394;
        }
    }
    ctx->pc = 0x2DF378u;
label_2df378:
    // 0x2df378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df37c:
    // 0x2df37c: 0xc08750a  jal         func_21D428
label_2df380:
    if (ctx->pc == 0x2DF380u) {
        ctx->pc = 0x2DF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF37Cu;
        // 0x2df380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF384u;
        goto label_2df384;
    }
    ctx->pc = 0x2DF37Cu;
    SET_GPR_U32(ctx, 31, 0x2DF384u);
    ctx->pc = 0x2DF380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF37Cu;
    // 0x2df380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2DF37Cu, 0x2DF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF384u;
label_2df384:
    // 0x2df384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df388:
    // 0x2df388: 0xc0a580a  jal         func_296028
label_2df38c:
    if (ctx->pc == 0x2DF38Cu) {
        ctx->pc = 0x2DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF388u;
        // 0x2df38c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF390u;
        goto label_2df390;
    }
    ctx->pc = 0x2DF388u;
    SET_GPR_U32(ctx, 31, 0x2DF390u);
    ctx->pc = 0x2DF38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF388u;
    // 0x2df38c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2DF388u, 0x2DF390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF390u;
label_2df390:
    // 0x2df390: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2df394:
    // 0x2df394: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2df394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2df398:
    // 0x2df398: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2df398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2df39c:
    // 0x2df39c: 0x60f809  jalr        $v1
label_2df3a0:
    if (ctx->pc == 0x2DF3A0u) {
        ctx->pc = 0x2DF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF39Cu;
        // 0x2df3a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF3A4u;
        goto label_2df3a4;
    }
    ctx->pc = 0x2DF39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DF3A4u);
        ctx->pc = 0x2DF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF39Cu;
        // 0x2df3a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF39Cu, 0x2DF3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF3A4u;
label_2df3a4:
    // 0x2df3a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2df3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2df3a8:
    // 0x2df3a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2df3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df3ac:
    // 0x2df3ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2df3b0:
    // 0x2df3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2df3b4:
    // 0x2df3b4: 0x3e00008  jr          $ra
label_2df3b8:
    if (ctx->pc == 0x2DF3B8u) {
        ctx->pc = 0x2DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3B4u;
        // 0x2df3b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF3BCu;
        goto label_2df3bc;
    }
    ctx->pc = 0x2DF3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3B4u;
        // 0x2df3b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF3BCu;
label_2df3bc:
    // 0x2df3bc: 0x0  nop
    ctx->pc = 0x2df3bcu;
    // NOP
    ctx->pc = 0x2df3c0u;
}
