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

// Function: sub_00493418
// Address: 0x493418 - 0x4937c0
void sub_00493418_0x493418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493418_0x493418");
#endif

    switch (ctx->pc) {
        case 0x493508u: goto label_493508;
        case 0x4935c0u: goto label_4935c0;
        case 0x4936a8u: goto label_4936a8;
        case 0x4936e8u: goto label_4936e8;
        case 0x493720u: goto label_493720;
        default: break;
    }

    ctx->pc = 0x493418u;

    // 0x493418: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x493418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x49341c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x49341cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493420: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x493420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493424: 0x91430020  lbu         $v1, 0x20($t2)
    ctx->pc = 0x493424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x493428: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x493428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x49342c: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x49342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x493430: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x493430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x493434: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x493434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x493438: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x493438u;
    {
        const bool branch_taken_0x493438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493438u;
        // 0x49343c: 0x8ceb0000  lw          $t3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493438) {
            ctx->pc = 0x493464u;
            goto label_493464;
        }
    }
    ctx->pc = 0x493440u;
    // 0x493440: 0x90820036  lbu         $v0, 0x36($a0)
    ctx->pc = 0x493440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x493444: 0x304300fe  andi        $v1, $v0, 0xFE
    ctx->pc = 0x493444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x493448: 0xa0830036  sb          $v1, 0x36($a0)
    ctx->pc = 0x493448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x49344c: 0x90a20036  lbu         $v0, 0x36($a1)
    ctx->pc = 0x49344cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x493450: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x493450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x493454: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x493454u;
    {
        const bool branch_taken_0x493454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493454u;
        // 0x493458: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x493454) {
            ctx->pc = 0x493460u;
            goto label_493460;
        }
    }
    ctx->pc = 0x49345Cu;
    // 0x49345c: 0x306200fd  andi        $v0, $v1, 0xFD
    ctx->pc = 0x49345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_493460:
    // 0x493460: 0xa0820036  sb          $v0, 0x36($a0)
    ctx->pc = 0x493460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 2));
label_493464:
    // 0x493464: 0x90a20036  lbu         $v0, 0x36($a1)
    ctx->pc = 0x493464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x493468: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x493468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49346c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49346Cu;
    {
        const bool branch_taken_0x49346c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49346Cu;
        // 0x493470: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49346c) {
            ctx->pc = 0x493498u;
            goto label_493498;
        }
    }
    ctx->pc = 0x493474u;
    // 0x493474: 0x8d43001c  lw          $v1, 0x1C($t2)
    ctx->pc = 0x493474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x493478: 0x34420015  ori         $v0, $v0, 0x15
    ctx->pc = 0x493478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x49347c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x493480: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x493480u;
    {
        const bool branch_taken_0x493480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493480) {
            ctx->pc = 0x493484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493480u;
            // 0x493484: 0x90820036  lbu         $v0, 0x36($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493490u;
            goto label_493490;
        }
    }
    ctx->pc = 0x493488u;
    // 0x493488: 0x3e00008  jr          $ra
    ctx->pc = 0x493488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493488u;
        // 0x49348c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493490u;
label_493490:
    // 0x493490: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x493490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x493494: 0xa0820036  sb          $v0, 0x36($a0)
    ctx->pc = 0x493494u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 2));
label_493498:
    // 0x493498: 0x90e30023  lbu         $v1, 0x23($a3)
    ctx->pc = 0x493498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 35)));
    // 0x49349c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4934a0: 0xa1430023  sb          $v1, 0x23($t2)
    ctx->pc = 0x4934a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x4934a4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x4934a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4934a8: 0xad420018  sw          $v0, 0x18($t2)
    ctx->pc = 0x4934a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 2));
    // 0x4934ac: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4934acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4934b0: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x4934b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x4934b4: 0x90e50020  lbu         $a1, 0x20($a3)
    ctx->pc = 0x4934b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x4934b8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x4934b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x4934bc: 0x544400a6  bnel        $v0, $a0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x4934BCu;
    {
        const bool branch_taken_0x4934bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4934bc) {
            ctx->pc = 0x4934C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4934BCu;
            // 0x4934c0: 0x90e20020  lbu         $v0, 0x20($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493758u;
            goto label_493758;
        }
    }
    ctx->pc = 0x4934C4u;
    // 0x4934c4: 0x91420020  lbu         $v0, 0x20($t2)
    ctx->pc = 0x4934c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x4934c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4934c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4934cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4934ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4934d0: 0x544300a1  bnel        $v0, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x4934D0u;
    {
        const bool branch_taken_0x4934d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4934d0) {
            ctx->pc = 0x4934D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4934D0u;
            // 0x4934d4: 0x90e20020  lbu         $v0, 0x20($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493758u;
            goto label_493758;
        }
    }
    ctx->pc = 0x4934D8u;
    // 0x4934d8: 0x9542001c  lhu         $v0, 0x1C($t2)
    ctx->pc = 0x4934d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x4934dc: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x4934dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x4934e0: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x4934e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4934e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4934e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4934e8: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x4934e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4934ec: 0xa1440020  sb          $a0, 0x20($t2)
    ctx->pc = 0x4934ecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x4934f0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4934f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4934f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4934f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4934f8: 0xa542001c  sh          $v0, 0x1C($t2)
    ctx->pc = 0x4934f8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x4934fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4934fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493500: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x493500u;
    {
        const bool branch_taken_0x493500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493500u;
        // 0x493504: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493500) {
            ctx->pc = 0x493524u;
            goto label_493524;
        }
    }
    ctx->pc = 0x493508u;
label_493508:
    // 0x493508: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x493508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49350c: 0x0  nop
    ctx->pc = 0x49350cu;
    // NOP
    // 0x493510: 0x0  nop
    ctx->pc = 0x493510u;
    // NOP
    // 0x493514: 0x0  nop
    ctx->pc = 0x493514u;
    // NOP
    // 0x493518: 0x0  nop
    ctx->pc = 0x493518u;
    // NOP
    // 0x49351c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49351Cu;
    {
        const bool branch_taken_0x49351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49351Cu;
        // 0x493520: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49351c) {
            ctx->pc = 0x493508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493508;
        }
    }
    ctx->pc = 0x493524u;
label_493524:
    // 0x493524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x493528: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x493528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x49352c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x49352cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x493530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x493530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x493534: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x493534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x493538: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x493538u;
    {
        const bool branch_taken_0x493538 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493538u;
        // 0x49353c: 0x661023  subu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493538) {
            ctx->pc = 0x493548u;
            goto label_493548;
        }
    }
    ctx->pc = 0x493540u;
    // 0x493540: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x493540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x493544: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x493544u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
label_493548:
    // 0x493548: 0x8544001c  lh          $a0, 0x1C($t2)
    ctx->pc = 0x493548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x49354c: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x49354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x493550: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x493550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x493554: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x493554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x493558: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x493558u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49355c: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x49355Cu;
    {
        const bool branch_taken_0x49355c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x493560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49355Cu;
        // 0x493560: 0x9545001c  lhu         $a1, 0x1C($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49355c) {
            ctx->pc = 0x493574u;
            goto label_493574;
        }
    }
    ctx->pc = 0x493564u;
    // 0x493564: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x493564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x493568: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x493568u;
    {
        const bool branch_taken_0x493568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493568u;
        // 0x49356c: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493568) {
            ctx->pc = 0x493574u;
            goto label_493574;
        }
    }
    ctx->pc = 0x493570u;
    // 0x493570: 0xa542001c  sh          $v0, 0x1C($t2)
    ctx->pc = 0x493570u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 2));
label_493574:
    // 0x493574: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x493574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x493578: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x493578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x49357c: 0x8546001e  lh          $a2, 0x1E($t2)
    ctx->pc = 0x49357cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 30)));
    // 0x493580: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x493580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x493584: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x493584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x493588: 0x9545001e  lhu         $a1, 0x1E($t2)
    ctx->pc = 0x493588u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 30)));
    // 0x49358c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x49358cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x493590: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x493590u;
    {
        const bool branch_taken_0x493590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493590) {
            ctx->pc = 0x493594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x493590u;
            // 0x493594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x493598u;
            goto label_493598;
        }
    }
    ctx->pc = 0x493598u;
label_493598:
    // 0x493598: 0x8d440010  lw          $a0, 0x10($t2)
    ctx->pc = 0x493598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x49359c: 0x1812  mflo        $v1
    ctx->pc = 0x49359cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4935a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4935a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4935a4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4935a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4935a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4935a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4935ac: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4935acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4935b0: 0xa545001e  sh          $a1, 0x1E($t2)
    ctx->pc = 0x4935b0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x4935b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4935b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4935b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4935B8u;
    {
        const bool branch_taken_0x4935b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4935BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4935B8u;
        // 0x4935bc: 0xad440010  sw          $a0, 0x10($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4935b8) {
            ctx->pc = 0x4935DCu;
            goto label_4935dc;
        }
    }
    ctx->pc = 0x4935C0u;
label_4935c0:
    // 0x4935c0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4935c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4935c4: 0x0  nop
    ctx->pc = 0x4935c4u;
    // NOP
    // 0x4935c8: 0x0  nop
    ctx->pc = 0x4935c8u;
    // NOP
    // 0x4935cc: 0x0  nop
    ctx->pc = 0x4935ccu;
    // NOP
    // 0x4935d0: 0x0  nop
    ctx->pc = 0x4935d0u;
    // NOP
    // 0x4935d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4935D4u;
    {
        const bool branch_taken_0x4935d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4935D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4935D4u;
        // 0x4935d8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4935d4) {
            ctx->pc = 0x4935C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4935c0;
        }
    }
    ctx->pc = 0x4935DCu;
label_4935dc:
    // 0x4935dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4935dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4935e0: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x4935e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4935e4: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x4935e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4935e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4935e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4935ec: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4935ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4935f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4935F0u;
    {
        const bool branch_taken_0x4935f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4935F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4935F0u;
        // 0x4935f4: 0x661023  subu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4935f0) {
            ctx->pc = 0x493600u;
            goto label_493600;
        }
    }
    ctx->pc = 0x4935F8u;
    // 0x4935f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4935f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4935fc: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x4935fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_493600:
    // 0x493600: 0x8544001e  lh          $a0, 0x1E($t2)
    ctx->pc = 0x493600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 30)));
    // 0x493604: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x493604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x493608: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x493608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x49360c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x493610: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x493610u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x493614: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x493614u;
    {
        const bool branch_taken_0x493614 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x493618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493614u;
        // 0x493618: 0x9545001e  lhu         $a1, 0x1E($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493614) {
            ctx->pc = 0x49362Cu;
            goto label_49362c;
        }
    }
    ctx->pc = 0x49361Cu;
    // 0x49361c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x49361cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x493620: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x493620u;
    {
        const bool branch_taken_0x493620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x493624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493620u;
        // 0x493624: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493620) {
            ctx->pc = 0x49362Cu;
            goto label_49362c;
        }
    }
    ctx->pc = 0x493628u;
    // 0x493628: 0xa542001e  sh          $v0, 0x1E($t2)
    ctx->pc = 0x493628u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 30), (uint16_t)GPR_U32(ctx, 2));
label_49362c:
    // 0x49362c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x49362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x493630: 0x8545001e  lh          $a1, 0x1E($t2)
    ctx->pc = 0x493630u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 30)));
    // 0x493634: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x493634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x493638: 0x9543001c  lhu         $v1, 0x1C($t2)
    ctx->pc = 0x493638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x49363c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x49363cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x493640: 0xdf8486f0  ld          $a0, -0x7910($gp)
    ctx->pc = 0x493640u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x493644: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x493644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x493648: 0x8f868a20  lw          $a2, -0x75E0($gp)
    ctx->pc = 0x493648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x49364c: 0x4143b  dsra        $v0, $a0, 16
    ctx->pc = 0x49364cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> 16);
    // 0x493650: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x493650u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x493654: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x493654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x493658: 0x4263b  dsra        $a0, $a0, 24
    ctx->pc = 0x493658u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 24);
    // 0x49365c: 0xa3182d  daddu       $v1, $a1, $v1
    ctx->pc = 0x49365cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x493660: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x493660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x493664: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x493664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x493668: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x493668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x49366c: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x49366cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x493670: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x493670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x493674: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x493674u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x493678: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x493678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x49367c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x49367cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x493680: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x493680u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x493684: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x493684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x493688: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x493688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x49368c: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x49368cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x493690: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x493690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x493694: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x493694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x493698: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x493698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x49369c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49369Cu;
    {
        const bool branch_taken_0x49369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4936A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49369Cu;
        // 0x4936a0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49369c) {
            ctx->pc = 0x4936C4u;
            goto label_4936c4;
        }
    }
    ctx->pc = 0x4936A4u;
    // 0x4936a4: 0x0  nop
    ctx->pc = 0x4936a4u;
    // NOP
label_4936a8:
    // 0x4936a8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4936a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4936ac: 0x0  nop
    ctx->pc = 0x4936acu;
    // NOP
    // 0x4936b0: 0x0  nop
    ctx->pc = 0x4936b0u;
    // NOP
    // 0x4936b4: 0x0  nop
    ctx->pc = 0x4936b4u;
    // NOP
    // 0x4936b8: 0x0  nop
    ctx->pc = 0x4936b8u;
    // NOP
    // 0x4936bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4936BCu;
    {
        const bool branch_taken_0x4936bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4936C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4936BCu;
        // 0x4936c0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4936bc) {
            ctx->pc = 0x4936A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4936a8;
        }
    }
    ctx->pc = 0x4936C4u;
label_4936c4:
    // 0x4936c4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4936c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4936c8: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x4936c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x4936cc: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x4936ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x4936d0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x4936d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x4936d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4936d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4936d8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x4936d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x4936dc: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x4936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4936e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4936E0u;
    {
        const bool branch_taken_0x4936e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4936E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4936E0u;
        // 0x4936e4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4936e0) {
            ctx->pc = 0x493704u;
            goto label_493704;
        }
    }
    ctx->pc = 0x4936E8u;
label_4936e8:
    // 0x4936e8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4936e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4936ec: 0x0  nop
    ctx->pc = 0x4936ecu;
    // NOP
    // 0x4936f0: 0x0  nop
    ctx->pc = 0x4936f0u;
    // NOP
    // 0x4936f4: 0x0  nop
    ctx->pc = 0x4936f4u;
    // NOP
    // 0x4936f8: 0x0  nop
    ctx->pc = 0x4936f8u;
    // NOP
    // 0x4936fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4936FCu;
    {
        const bool branch_taken_0x4936fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4936FCu;
        // 0x493700: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4936fc) {
            ctx->pc = 0x4936E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4936e8;
        }
    }
    ctx->pc = 0x493704u;
label_493704:
    // 0x493704: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x493704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x493708: 0x41f80  sll         $v1, $a0, 30
    ctx->pc = 0x493708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
    // 0x49370c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x493710: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x493710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x493714: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x493714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x493718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x493718u;
    {
        const bool branch_taken_0x493718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493718u;
        // 0x49371c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493718) {
            ctx->pc = 0x49373Cu;
            goto label_49373c;
        }
    }
    ctx->pc = 0x493720u;
label_493720:
    // 0x493720: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x493720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x493724: 0x0  nop
    ctx->pc = 0x493724u;
    // NOP
    // 0x493728: 0x0  nop
    ctx->pc = 0x493728u;
    // NOP
    // 0x49372c: 0x0  nop
    ctx->pc = 0x49372cu;
    // NOP
    // 0x493730: 0x0  nop
    ctx->pc = 0x493730u;
    // NOP
    // 0x493734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x493734u;
    {
        const bool branch_taken_0x493734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x493738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493734u;
        // 0x493738: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493734) {
            ctx->pc = 0x493720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493720;
        }
    }
    ctx->pc = 0x49373Cu;
label_49373c:
    // 0x49373c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x49373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x493740: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x493740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x493744: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x493748: 0xa0c00016  sb          $zero, 0x16($a2)
    ctx->pc = 0x493748u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x49374c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49374cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x493750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x493750u;
    {
        const bool branch_taken_0x493750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x493754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x493750u;
        // 0x493754: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x493750) {
            ctx->pc = 0x49375Cu;
            goto label_49375c;
        }
    }
    ctx->pc = 0x493758u;
label_493758:
    // 0x493758: 0xa1420020  sb          $v0, 0x20($t2)
    ctx->pc = 0x493758u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 32), (uint8_t)GPR_U32(ctx, 2));
label_49375c:
    // 0x49375c: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x49375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x493760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x493764: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x493764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x493768: 0x8547001e  lh          $a3, 0x1E($t2)
    ctx->pc = 0x493768u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 30)));
    // 0x49376c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x49376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x493770: 0x8544001c  lh          $a0, 0x1C($t2)
    ctx->pc = 0x493770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x493774: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x493774u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493778: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x493778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49377c: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x49377cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x493780: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x493780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x493784: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x493784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x493788: 0x8d490010  lw          $t1, 0x10($t2)
    ctx->pc = 0x493788u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x49378c: 0x8d470018  lw          $a3, 0x18($t2)
    ctx->pc = 0x49378cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x493790: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x493790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x493794: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x493794u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x493798: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x493798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x49379c: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x49379cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4937a0: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x4937a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4937a4: 0xad470030  sw          $a3, 0x30($t2)
    ctx->pc = 0x4937a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 7));
    // 0x4937a8: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x4937a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x4937ac: 0xad450024  sw          $a1, 0x24($t2)
    ctx->pc = 0x4937acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 5));
    // 0x4937b0: 0xad480028  sw          $t0, 0x28($t2)
    ctx->pc = 0x4937b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 8));
    // 0x4937b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4937B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4937B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4937B4u;
        // 0x4937b8: 0xad49002c  sw          $t1, 0x2C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4937B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4937BCu;
    // 0x4937bc: 0x0  nop
    ctx->pc = 0x4937bcu;
    // NOP
    ctx->pc = 0x4937c0u;
}
