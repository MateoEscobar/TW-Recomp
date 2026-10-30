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

// Function: sub_00496400
// Address: 0x496400 - 0x496758
void sub_00496400_0x496400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496400_0x496400");
#endif

    switch (ctx->pc) {
        case 0x496448u: goto label_496448;
        default: break;
    }

    ctx->pc = 0x496400u;

    // 0x496400: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x496400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x496404: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x496404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496408: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x496408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x49640c: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x49640cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x710082u));
    // 0x496410: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x496410u;
    {
        const bool branch_taken_0x496410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496410u;
        // 0x496414: 0x25220050  addiu       $v0, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496410) {
            ctx->pc = 0x496490u;
            goto label_496490;
        }
    }
    ctx->pc = 0x496418u;
    // 0x496418: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x496418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x49641c: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x49641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x496420: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x496420u;
    {
        const bool branch_taken_0x496420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x496424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496420u;
        // 0x496424: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496420) {
            ctx->pc = 0x496450u;
            goto label_496450;
        }
    }
    ctx->pc = 0x496428u;
    // 0x496428: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x496428u;
    {
        const bool branch_taken_0x496428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496428u;
        // 0x49642c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496428) {
            ctx->pc = 0x496450u;
            goto label_496450;
        }
    }
    ctx->pc = 0x496430u;
    // 0x496430: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x496430u;
    {
        const bool branch_taken_0x496430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x496434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496430u;
        // 0x496434: 0x240201e0  addiu       $v0, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496430) {
            ctx->pc = 0x496450u;
            goto label_496450;
        }
    }
    ctx->pc = 0x496438u;
    // 0x496438: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x496438u;
    {
        const bool branch_taken_0x496438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496438u;
        // 0x49643c: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496438) {
            ctx->pc = 0x496464u;
            goto label_496464;
        }
    }
    ctx->pc = 0x496440u;
    // 0x496440: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x496440u;
    {
        const bool branch_taken_0x496440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x496444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496440u;
        // 0x496444: 0x25240050  addiu       $a0, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496440) {
            ctx->pc = 0x496454u;
            goto label_496454;
        }
    }
    ctx->pc = 0x496448u;
label_496448:
    // 0x496448: 0x3e00008  jr          $ra
    ctx->pc = 0x496448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496448u;
        // 0x49644c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x496448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496450u;
label_496450:
    // 0x496450: 0x25240050  addiu       $a0, $t1, 0x50
    ctx->pc = 0x496450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
label_496454:
    // 0x496454: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x496454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x496458: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x496458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x49645c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49645Cu;
    {
        const bool branch_taken_0x49645c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x496460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49645Cu;
        // 0x496460: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49645c) {
            ctx->pc = 0x496474u;
            goto label_496474;
        }
    }
    ctx->pc = 0x496464u;
label_496464:
    // 0x496464: 0x25230050  addiu       $v1, $t1, 0x50
    ctx->pc = 0x496464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x496468: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x496468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x49646c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x49646Cu;
    {
        const bool branch_taken_0x49646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49646Cu;
        // 0x496470: 0xa0620032  sb          $v0, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49646c) {
            ctx->pc = 0x49648Cu;
            goto label_49648c;
        }
    }
    ctx->pc = 0x496474u;
label_496474:
    // 0x496474: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x496474u;
    {
        const bool branch_taken_0x496474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x496478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496474u;
        // 0x496478: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496474) {
            ctx->pc = 0x496484u;
            goto label_496484;
        }
    }
    ctx->pc = 0x49647Cu;
    // 0x49647c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49647Cu;
    {
        const bool branch_taken_0x49647c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x496480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49647Cu;
        // 0x496480: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49647c) {
            ctx->pc = 0x496488u;
            goto label_496488;
        }
    }
    ctx->pc = 0x496484u;
label_496484:
    // 0x496484: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x496484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_496488:
    // 0x496488: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x496488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
label_49648c:
    // 0x49648c: 0x25220050  addiu       $v0, $t1, 0x50
    ctx->pc = 0x49648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
label_496490:
    // 0x496490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x496490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x496494: 0x90440032  lbu         $a0, 0x32($v0)
    ctx->pc = 0x496494u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x496498: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x496498u;
    {
        const bool branch_taken_0x496498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x49649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496498u;
        // 0x49649c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496498) {
            ctx->pc = 0x4964B0u;
            goto label_4964b0;
        }
    }
    ctx->pc = 0x4964A0u;
    // 0x4964a0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4964A0u;
    {
        const bool branch_taken_0x4964a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4964A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4964A0u;
        // 0x4964a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4964a0) {
            ctx->pc = 0x4964B0u;
            goto label_4964b0;
        }
    }
    ctx->pc = 0x4964A8u;
    // 0x4964a8: 0x1482ffe7  bne         $a0, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4964A8u;
    {
        const bool branch_taken_0x4964a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4964a8) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x4964B0u;
label_4964b0:
    // 0x4964b0: 0x25230050  addiu       $v1, $t1, 0x50
    ctx->pc = 0x4964b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x4964b4: 0x90620033  lbu         $v0, 0x33($v1)
    ctx->pc = 0x4964b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
    // 0x4964b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4964B8u;
    {
        const bool branch_taken_0x4964b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4964B8u;
        // 0x4964bc: 0x24020202  addiu       $v0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4964b8) {
            ctx->pc = 0x4964CCu;
            goto label_4964cc;
        }
    }
    ctx->pc = 0x4964C0u;
    // 0x4964c0: 0x94630030  lhu         $v1, 0x30($v1)
    ctx->pc = 0x4964c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4964c4: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4964C4u;
    {
        const bool branch_taken_0x4964c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4964c4) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x4964CCu;
label_4964cc:
    // 0x4964cc: 0x25240050  addiu       $a0, $t1, 0x50
    ctx->pc = 0x4964ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x4964d0: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x4964d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x4964d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4964d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4964d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4964d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4964dc: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x4964DCu;
    {
        const bool branch_taken_0x4964dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4964dc) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x4964E4u;
    // 0x4964e4: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x4964e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x4964e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4964ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4964ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4964f0: 0x1040ffd5  beqz        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x4964F0u;
    {
        const bool branch_taken_0x4964f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4964F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4964F0u;
        // 0x4964f4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4964f0) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x4964F8u;
    // 0x4964f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4964f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4964fc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4964FCu;
    {
        const bool branch_taken_0x4964fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x496500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4964FCu;
        // 0x496500: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4964fc) {
            ctx->pc = 0x49650Cu;
            goto label_49650c;
        }
    }
    ctx->pc = 0x496504u;
    // 0x496504: 0x1462ffd0  bne         $v1, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x496504u;
    {
        const bool branch_taken_0x496504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496504) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x49650Cu;
label_49650c:
    // 0x49650c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x49650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x496510: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x496510u;
    {
        const bool branch_taken_0x496510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x496514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496510u;
        // 0x496514: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496510) {
            ctx->pc = 0x496520u;
            goto label_496520;
        }
    }
    ctx->pc = 0x496518u;
    // 0x496518: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x496518u;
    {
        const bool branch_taken_0x496518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x496518) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x496520u;
label_496520:
    // 0x496520: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x496520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x496524: 0x25250050  addiu       $a1, $t1, 0x50
    ctx->pc = 0x496524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x496528: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x496528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x49652c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x49652cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x496530: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496534: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x496534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x496538: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x496538u;
    {
        const bool branch_taken_0x496538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x49653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496538u;
        // 0x49653c: 0x473024  and         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496538) {
            ctx->pc = 0x496550u;
            goto label_496550;
        }
    }
    ctx->pc = 0x496540u;
    // 0x496540: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x496540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x496544: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496548: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x496548u;
    {
        const bool branch_taken_0x496548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496548u;
        // 0x49654c: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496548) {
            ctx->pc = 0x496560u;
            goto label_496560;
        }
    }
    ctx->pc = 0x496550u;
label_496550:
    // 0x496550: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x496550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x496554: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x496554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x496558: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x496558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x49655c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49655cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_496560:
    // 0x496560: 0xc24018  mult        $t0, $a2, $v0
    ctx->pc = 0x496560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x496564: 0x25220050  addiu       $v0, $t1, 0x50
    ctx->pc = 0x496564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x496568: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x496568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x49656c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x49656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x496570: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x496570u;
    {
        const bool branch_taken_0x496570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x496570) {
            ctx->pc = 0x496574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496570u;
            // 0x496574: 0x84080  sll         $t0, $t0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49657Cu;
            goto label_49657c;
        }
    }
    ctx->pc = 0x496578u;
    // 0x496578: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x496578u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_49657c:
    // 0x49657c: 0x25250050  addiu       $a1, $t1, 0x50
    ctx->pc = 0x49657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x496580: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x496580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x496584: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x496584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x496588: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x496588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x49658c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x49658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x496590: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x496590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496594: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496594u;
    {
        const bool branch_taken_0x496594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x496598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496594u;
        // 0x496598: 0x473024  and         $a2, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496594) {
            ctx->pc = 0x4965ACu;
            goto label_4965ac;
        }
    }
    ctx->pc = 0x49659Cu;
    // 0x49659c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x49659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4965a0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4965a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4965a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4965A4u;
    {
        const bool branch_taken_0x4965a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4965A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4965A4u;
        // 0x4965a8: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4965a4) {
            ctx->pc = 0x4965BCu;
            goto label_4965bc;
        }
    }
    ctx->pc = 0x4965ACu;
label_4965ac:
    // 0x4965ac: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4965acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4965b0: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x4965b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x4965b4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x4965b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x4965b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4965b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4965bc:
    // 0x4965bc: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x4965bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4965c0: 0x25220050  addiu       $v0, $t1, 0x50
    ctx->pc = 0x4965c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x4965c4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4965c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4965c8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4965c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4965cc: 0x54640002  bnel        $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4965CCu;
    {
        const bool branch_taken_0x4965cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4965cc) {
            ctx->pc = 0x4965D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4965CCu;
            // 0x4965d0: 0x73880  sll         $a3, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4965D8u;
            goto label_4965d8;
        }
    }
    ctx->pc = 0x4965D4u;
    // 0x4965d4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4965d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_4965d8:
    // 0x4965d8: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4965d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4965dc: 0x2406ffc0  addiu       $a2, $zero, -0x40
    ctx->pc = 0x4965dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x4965e0: 0x8f8a875c  lw          $t2, -0x78A4($gp)
    ctx->pc = 0x4965e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x4965e4: 0x25250050  addiu       $a1, $t1, 0x50
    ctx->pc = 0x4965e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x4965e8: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4965e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4965ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4965ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4965f0: 0x15430005  bne         $t2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4965F0u;
    {
        const bool branch_taken_0x4965f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x4965F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4965F0u;
        // 0x4965f4: 0x462024  and         $a0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4965f0) {
            ctx->pc = 0x496608u;
            goto label_496608;
        }
    }
    ctx->pc = 0x4965F8u;
    // 0x4965f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4965f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4965fc: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x4965fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x496600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x496600u;
    {
        const bool branch_taken_0x496600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496600u;
        // 0x496604: 0x461024  and         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496600) {
            ctx->pc = 0x496618u;
            goto label_496618;
        }
    }
    ctx->pc = 0x496608u;
label_496608:
    // 0x496608: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x496608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x49660c: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x49660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x496610: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x496610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x496614: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x496614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_496618:
    // 0x496618: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x496618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49661c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x49661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x496620: 0x55420002  bnel        $t2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x496620u;
    {
        const bool branch_taken_0x496620 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x496620) {
            ctx->pc = 0x496624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496620u;
            // 0x496624: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49662Cu;
            goto label_49662c;
        }
    }
    ctx->pc = 0x496628u;
    // 0x496628: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x496628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_49662c:
    // 0x49662c: 0x25220050  addiu       $v0, $t1, 0x50
    ctx->pc = 0x49662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x496630: 0x90430033  lbu         $v1, 0x33($v0)
    ctx->pc = 0x496630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 51)));
    // 0x496634: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x496634u;
    {
        const bool branch_taken_0x496634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x496638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496634u;
        // 0x496638: 0x107102b  sltu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x496634) {
            ctx->pc = 0x496644u;
            goto label_496644;
        }
    }
    ctx->pc = 0x49663Cu;
    // 0x49663c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x49663Cu;
    {
        const bool branch_taken_0x49663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49663c) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x496644u;
label_496644:
    // 0x496644: 0x25250050  addiu       $a1, $t1, 0x50
    ctx->pc = 0x496644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x496648: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x496648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49664c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x49664Cu;
    {
        const bool branch_taken_0x49664c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x496650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49664Cu;
        // 0x496650: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49664c) {
            ctx->pc = 0x496688u;
            goto label_496688;
        }
    }
    ctx->pc = 0x496654u;
    // 0x496654: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x496654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x496658: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x496658u;
    {
        const bool branch_taken_0x496658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x49665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496658u;
        // 0x49665c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496658) {
            ctx->pc = 0x49666Cu;
            goto label_49666c;
        }
    }
    ctx->pc = 0x496660u;
    // 0x496660: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x496660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x496664: 0x1462ff78  bne         $v1, $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x496664u;
    {
        const bool branch_taken_0x496664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x496668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496664u;
        // 0x496668: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496664) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x49666Cu;
label_49666c:
    // 0x49666c: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x49666Cu;
    {
        const bool branch_taken_0x49666c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x496670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49666Cu;
        // 0x496670: 0x25250050  addiu       $a1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49666c) {
            ctx->pc = 0x4966A4u;
            goto label_4966a4;
        }
    }
    ctx->pc = 0x496674u;
    // 0x496674: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x496674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x496678: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x496678u;
    {
        const bool branch_taken_0x496678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x496678) {
            ctx->pc = 0x49667Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x496678u;
            // 0x49667c: 0x8ca3002c  lw          $v1, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4966A8u;
            goto label_4966a8;
        }
    }
    ctx->pc = 0x496680u;
    // 0x496680: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x496680u;
    {
        const bool branch_taken_0x496680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496680) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x496688u;
label_496688:
    // 0x496688: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x496688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x49668c: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x49668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x496690: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x496690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x496694: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x496694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x496698: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x496698u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x49669c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x49669cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x4966a0: 0x25250050  addiu       $a1, $t1, 0x50
    ctx->pc = 0x4966a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
label_4966a4:
    // 0x4966a4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x4966a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4966a8:
    // 0x4966a8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4966A8u;
    {
        const bool branch_taken_0x4966a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4966ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4966A8u;
        // 0x4966ac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4966a8) {
            ctx->pc = 0x4966E4u;
            goto label_4966e4;
        }
    }
    ctx->pc = 0x4966B0u;
    // 0x4966b0: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x4966b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4966b4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4966B4u;
    {
        const bool branch_taken_0x4966b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4966B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4966B4u;
        // 0x4966b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4966b4) {
            ctx->pc = 0x4966C8u;
            goto label_4966c8;
        }
    }
    ctx->pc = 0x4966BCu;
    // 0x4966bc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4966bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4966c0: 0x1462ff61  bne         $v1, $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x4966C0u;
    {
        const bool branch_taken_0x4966c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4966C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4966C0u;
        // 0x4966c4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4966c0) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x4966C8u;
label_4966c8:
    // 0x4966c8: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4966C8u;
    {
        const bool branch_taken_0x4966c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4966CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4966C8u;
        // 0x4966cc: 0x25240050  addiu       $a0, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4966c8) {
            ctx->pc = 0x496700u;
            goto label_496700;
        }
    }
    ctx->pc = 0x4966D0u;
    // 0x4966d0: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x4966d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x4966d4: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4966D4u;
    {
        const bool branch_taken_0x4966d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4966d4) {
            ctx->pc = 0x4966D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4966D4u;
            // 0x4966d8: 0x90820030  lbu         $v0, 0x30($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x496704u;
            goto label_496704;
        }
    }
    ctx->pc = 0x4966DCu;
    // 0x4966dc: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x4966DCu;
    {
        const bool branch_taken_0x4966dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4966dc) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x4966E4u;
label_4966e4:
    // 0x4966e4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x4966e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4966e8: 0x24030500  addiu       $v1, $zero, 0x500
    ctx->pc = 0x4966e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x4966ec: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4966ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4966f0: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x4966f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x4966f4: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x4966f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x4966f8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4966f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x4966fc: 0x25240050  addiu       $a0, $t1, 0x50
    ctx->pc = 0x4966fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
label_496700:
    // 0x496700: 0x90820030  lbu         $v0, 0x30($a0)
    ctx->pc = 0x496700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_496704:
    // 0x496704: 0x90830033  lbu         $v1, 0x33($a0)
    ctx->pc = 0x496704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 51)));
    // 0x496708: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x496708u;
    {
        const bool branch_taken_0x496708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496708u;
        // 0x49670c: 0x1022818  mult        $a1, $t0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x496708) {
            ctx->pc = 0x496738u;
            goto label_496738;
        }
    }
    ctx->pc = 0x496710u;
    // 0x496710: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x496710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x496714: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x496714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x496718: 0xe22018  mult        $a0, $a3, $v0
    ctx->pc = 0x496718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49671c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x49671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x496720: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x496720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x496724: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x496724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x496728: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x496728u;
    {
        const bool branch_taken_0x496728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496728u;
        // 0x49672c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496728) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x496730u;
    // 0x496730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x496730u;
    {
        const bool branch_taken_0x496730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496730) {
            ctx->pc = 0x49674Cu;
            goto label_49674c;
        }
    }
    ctx->pc = 0x496738u;
label_496738:
    // 0x496738: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x496738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x49673c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x49673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x496740: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x496740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496744: 0x1440ff40  bnez        $v0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x496744u;
    {
        const bool branch_taken_0x496744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496744u;
        // 0x496748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496744) {
            ctx->pc = 0x496448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496448;
        }
    }
    ctx->pc = 0x49674Cu;
label_49674c:
    // 0x49674c: 0x3e00008  jr          $ra
    ctx->pc = 0x49674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49674Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496754u;
    // 0x496754: 0x0  nop
    ctx->pc = 0x496754u;
    // NOP
    ctx->pc = 0x496758u;
}
