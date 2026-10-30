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

// Function: sub_001DA348
// Address: 0x1da348 - 0x1da3f8
void sub_001DA348_0x1da348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA348_0x1da348");
#endif

    switch (ctx->pc) {
        case 0x1da348u: goto label_1da348;
        case 0x1da34cu: goto label_1da34c;
        case 0x1da350u: goto label_1da350;
        case 0x1da354u: goto label_1da354;
        case 0x1da358u: goto label_1da358;
        case 0x1da35cu: goto label_1da35c;
        case 0x1da360u: goto label_1da360;
        case 0x1da364u: goto label_1da364;
        case 0x1da368u: goto label_1da368;
        case 0x1da36cu: goto label_1da36c;
        case 0x1da370u: goto label_1da370;
        case 0x1da374u: goto label_1da374;
        case 0x1da378u: goto label_1da378;
        case 0x1da37cu: goto label_1da37c;
        case 0x1da380u: goto label_1da380;
        case 0x1da384u: goto label_1da384;
        case 0x1da388u: goto label_1da388;
        case 0x1da38cu: goto label_1da38c;
        case 0x1da390u: goto label_1da390;
        case 0x1da394u: goto label_1da394;
        case 0x1da398u: goto label_1da398;
        case 0x1da39cu: goto label_1da39c;
        case 0x1da3a0u: goto label_1da3a0;
        case 0x1da3a4u: goto label_1da3a4;
        case 0x1da3a8u: goto label_1da3a8;
        case 0x1da3acu: goto label_1da3ac;
        case 0x1da3b0u: goto label_1da3b0;
        case 0x1da3b4u: goto label_1da3b4;
        case 0x1da3b8u: goto label_1da3b8;
        case 0x1da3bcu: goto label_1da3bc;
        case 0x1da3c0u: goto label_1da3c0;
        case 0x1da3c4u: goto label_1da3c4;
        case 0x1da3c8u: goto label_1da3c8;
        case 0x1da3ccu: goto label_1da3cc;
        case 0x1da3d0u: goto label_1da3d0;
        case 0x1da3d4u: goto label_1da3d4;
        case 0x1da3d8u: goto label_1da3d8;
        case 0x1da3dcu: goto label_1da3dc;
        case 0x1da3e0u: goto label_1da3e0;
        case 0x1da3e4u: goto label_1da3e4;
        case 0x1da3e8u: goto label_1da3e8;
        case 0x1da3ecu: goto label_1da3ec;
        case 0x1da3f0u: goto label_1da3f0;
        case 0x1da3f4u: goto label_1da3f4;
        default: break;
    }

    ctx->pc = 0x1da348u;

label_1da348:
    // 0x1da348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1da348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1da34c:
    // 0x1da34c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1da34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1da350:
    // 0x1da350: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1da350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1da354:
    // 0x1da354: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1da354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da358:
    // 0x1da358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1da358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1da35c:
    // 0x1da35c: 0x26701530  addiu       $s0, $s3, 0x1530
    ctx->pc = 0x1da35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5424));
label_1da360:
    // 0x1da360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1da364:
    // 0x1da364: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1da364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da368:
    // 0x1da368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1da36c:
    // 0x1da36c: 0x0  nop
    ctx->pc = 0x1da36cu;
    // NOP
label_1da370:
    // 0x1da370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da374:
    // 0x1da374: 0xc0756cc  jal         func_1D5B30
label_1da378:
    if (ctx->pc == 0x1DA378u) {
        ctx->pc = 0x1DA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA374u;
        // 0x1da378: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA37Cu;
        goto label_1da37c;
    }
    ctx->pc = 0x1DA374u;
    SET_GPR_U32(ctx, 31, 0x1DA37Cu);
    ctx->pc = 0x1DA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA374u;
    // 0x1da378: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B30u, 0x1DA374u, 0x1DA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA37Cu;
label_1da37c:
    // 0x1da37c: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1da37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1da380:
    // 0x1da380: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1da384:
    if (ctx->pc == 0x1DA384u) {
        ctx->pc = 0x1DA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA380u;
        // 0x1da384: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA388u;
        goto label_1da388;
    }
    ctx->pc = 0x1DA380u;
    {
        const bool branch_taken_0x1da380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA380u;
        // 0x1da384: 0x261006f0  addiu       $s0, $s0, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da380) {
            ctx->pc = 0x1DA370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da370;
        }
    }
    ctx->pc = 0x1DA388u;
label_1da388:
    // 0x1da388: 0x267007a0  addiu       $s0, $s3, 0x7A0
    ctx->pc = 0x1da388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1952));
label_1da38c:
    // 0x1da38c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1da38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da390:
    // 0x1da390: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1da390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da394:
    // 0x1da394: 0x0  nop
    ctx->pc = 0x1da394u;
    // NOP
label_1da398:
    // 0x1da398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da39c:
    // 0x1da39c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1da39cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1da3a0:
    // 0x1da3a0: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x1da3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1da3a4:
    // 0x1da3a4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1da3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1da3a8:
    // 0x1da3a8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1da3ac:
    // 0x1da3ac: 0x40f809  jalr        $v0
label_1da3b0:
    if (ctx->pc == 0x1DA3B0u) {
        ctx->pc = 0x1DA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ACu;
        // 0x1da3b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3B4u;
        goto label_1da3b4;
    }
    ctx->pc = 0x1DA3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA3B4u);
        ctx->pc = 0x1DA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ACu;
        // 0x1da3b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA3ACu, 0x1DA3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA3B4u;
label_1da3b4:
    // 0x1da3b4: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x1da3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1da3b8:
    // 0x1da3b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1da3bc:
    if (ctx->pc == 0x1DA3BCu) {
        ctx->pc = 0x1DA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3B8u;
        // 0x1da3bc: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3C0u;
        goto label_1da3c0;
    }
    ctx->pc = 0x1DA3B8u;
    {
        const bool branch_taken_0x1da3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3B8u;
        // 0x1da3bc: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3b8) {
            ctx->pc = 0x1DA398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da398;
        }
    }
    ctx->pc = 0x1DA3C0u;
label_1da3c0:
    // 0x1da3c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1da3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1da3c4:
    // 0x1da3c4: 0x8e6545d4  lw          $a1, 0x45D4($s3)
    ctx->pc = 0x1da3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17876)));
label_1da3c8:
    // 0x1da3c8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1da3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1da3cc:
    // 0x1da3cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da3d0:
    // 0x1da3d0: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x1da3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_1da3d4:
    // 0x1da3d4: 0xc0440c6  jal         func_110318
label_1da3d8:
    if (ctx->pc == 0x1DA3D8u) {
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3D4u;
        // 0x1da3d8: 0xae6045c0  sw          $zero, 0x45C0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 17856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3DCu;
        goto label_1da3dc;
    }
    ctx->pc = 0x1DA3D4u;
    SET_GPR_U32(ctx, 31, 0x1DA3DCu);
    ctx->pc = 0x1DA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3D4u;
    // 0x1da3d8: 0xae6045c0  sw          $zero, 0x45C0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 17856), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1DA3D4u, 0x1DA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3DCu;
label_1da3dc:
    // 0x1da3dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1da3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da3e0:
    // 0x1da3e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1da3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da3e4:
    // 0x1da3e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da3e8:
    // 0x1da3e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1da3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da3ec:
    // 0x1da3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da3f0:
    // 0x1da3f0: 0x3e00008  jr          $ra
label_1da3f4:
    if (ctx->pc == 0x1DA3F4u) {
        ctx->pc = 0x1DA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F0u;
        // 0x1da3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3F8u;
        goto label_fallthrough_0x1da3f0;
    }
    ctx->pc = 0x1DA3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F0u;
        // 0x1da3f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da3f0:
    ctx->pc = 0x1DA3F8u;
}
