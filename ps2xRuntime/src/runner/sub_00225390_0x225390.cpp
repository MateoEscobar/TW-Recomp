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

// Function: sub_00225390
// Address: 0x225390 - 0x225498
void sub_00225390_0x225390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225390_0x225390");
#endif

    switch (ctx->pc) {
        case 0x225460u: goto label_225460;
        case 0x225478u: goto label_225478;
        default: break;
    }

    ctx->pc = 0x225390u;

    // 0x225390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225394: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x225394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x225398: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x225398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22539c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22539cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2253a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2253a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2253a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2253a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2253ac: 0x2444a4a0  addiu       $a0, $v0, -0x5B60
    ctx->pc = 0x2253acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x2253b0: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x2253b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2253b4: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2253b4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55A4A2u));
    // 0x2253b8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2253B8u;
    {
        const bool branch_taken_0x2253b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2253BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253B8u;
        // 0x2253bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253b8) {
            ctx->pc = 0x2253F0u;
            goto label_2253f0;
        }
    }
    ctx->pc = 0x2253C0u;
    // 0x2253c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2253c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2253c4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2253C4u;
    {
        const bool branch_taken_0x2253c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2253C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253C4u;
        // 0x2253c8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253c4) {
            ctx->pc = 0x2253DCu;
            goto label_2253dc;
        }
    }
    ctx->pc = 0x2253CCu;
    // 0x2253cc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x2253ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2253d0: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x2253d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2253d4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2253D4u;
    {
        const bool branch_taken_0x2253d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2253D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253D4u;
        // 0x2253d8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253d4) {
            ctx->pc = 0x2253ECu;
            goto label_2253ec;
        }
    }
    ctx->pc = 0x2253DCu;
label_2253dc:
    // 0x2253dc: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2253dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2253e0: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x2253e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
    // 0x2253e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2253E4u;
    {
        const bool branch_taken_0x2253e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2253e4) {
            ctx->pc = 0x2253F0u;
            goto label_2253f0;
        }
    }
    ctx->pc = 0x2253ECu;
label_2253ec:
    // 0x2253ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2253ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2253f0:
    // 0x2253f0: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2253F0u;
    {
        const bool branch_taken_0x2253f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2253F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253F0u;
        // 0x2253f4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253f0) {
            ctx->pc = 0x225444u;
            goto label_225444;
        }
    }
    ctx->pc = 0x2253F8u;
    // 0x2253f8: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2253fc: 0x2444a4a8  addiu       $a0, $v0, -0x5B58
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943912));
    // 0x225400: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x225400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x225404: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x225404u;
    {
        const bool branch_taken_0x225404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x225408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225404u;
        // 0x225408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225404) {
            ctx->pc = 0x22543Cu;
            goto label_22543c;
        }
    }
    ctx->pc = 0x22540Cu;
    // 0x22540c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225410: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225410u;
    {
        const bool branch_taken_0x225410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225410u;
        // 0x225414: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225410) {
            ctx->pc = 0x225428u;
            goto label_225428;
        }
    }
    ctx->pc = 0x225418u;
    // 0x225418: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x225418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22541c: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x22541cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x225420: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x225420u;
    {
        const bool branch_taken_0x225420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x225424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225420u;
        // 0x225424: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225420) {
            ctx->pc = 0x225438u;
            goto label_225438;
        }
    }
    ctx->pc = 0x225428u;
label_225428:
    // 0x225428: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x225428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x22542c: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x22542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x225430: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225430u;
    {
        const bool branch_taken_0x225430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225430) {
            ctx->pc = 0x22543Cu;
            goto label_22543c;
        }
    }
    ctx->pc = 0x225438u;
label_225438:
    // 0x225438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22543c:
    // 0x22543c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x22543Cu;
    {
        const bool branch_taken_0x22543c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x225440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22543Cu;
        // 0x225440: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22543c) {
            ctx->pc = 0x225480u;
            goto label_225480;
        }
    }
    ctx->pc = 0x225444u;
label_225444:
    // 0x225444: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x225444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x225448: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x225448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x22544c: 0x34a5c3e7  ori         $a1, $a1, 0xC3E7
    ctx->pc = 0x22544cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50151);
    // 0x225450: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x225450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x225454: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x225454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x225458: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x225458u;
    SET_GPR_U32(ctx, 31, 0x225460u);
    ctx->pc = 0x22545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225458u;
    // 0x22545c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x225458u, 0x225460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225460u;
label_225460:
    // 0x225460: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225460u;
    {
        const bool branch_taken_0x225460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225460u;
        // 0x225464: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225460) {
            ctx->pc = 0x225480u;
            goto label_225480;
        }
    }
    ctx->pc = 0x225468u;
    // 0x225468: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x225468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x22546c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225470: 0xc089998  jal         func_226660
    ctx->pc = 0x225470u;
    SET_GPR_U32(ctx, 31, 0x225478u);
    ctx->pc = 0x225474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225470u;
    // 0x225474: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x225470u, 0x225478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225478u;
label_225478:
    // 0x225478: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x225478u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x22547c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22547cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225480:
    // 0x225480: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x225480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22548c: 0x3e00008  jr          $ra
    ctx->pc = 0x22548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22548Cu;
        // 0x225490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22548Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225494u;
    // 0x225494: 0x0  nop
    ctx->pc = 0x225494u;
    // NOP
    ctx->pc = 0x225498u;
}
