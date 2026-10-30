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

// Function: sub_003913D8
// Address: 0x3913d8 - 0x391518
void sub_003913D8_0x3913d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003913D8_0x3913d8");
#endif

    switch (ctx->pc) {
        case 0x391428u: goto label_391428;
        case 0x391488u: goto label_391488;
        case 0x391490u: goto label_391490;
        default: break;
    }

    ctx->pc = 0x3913d8u;

    // 0x3913d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3913d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3913dc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x3913dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3913e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913e4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3913e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3913e8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3913E8u;
    {
        const bool branch_taken_0x3913e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3913ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913E8u;
        // 0x3913ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913e8) {
            ctx->pc = 0x39150Cu;
            goto label_39150c;
        }
    }
    ctx->pc = 0x3913F0u;
    // 0x3913f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3913f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3913f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3913f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913f8: 0x34424df4  ori         $v0, $v0, 0x4DF4
    ctx->pc = 0x3913f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19956);
    // 0x3913fc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x3913fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x391400: 0x1624821  addu        $t1, $t3, $v0
    ctx->pc = 0x391400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x391404: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x391404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x391408: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x391408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x39140c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39140cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391410: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x391410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x391414: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x391414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x391418: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x391418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39141c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x39141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x391420: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x391420u;
    {
        const bool branch_taken_0x391420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x391424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391420u;
        // 0x391424: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391420) {
            ctx->pc = 0x39144Cu;
            goto label_39144c;
        }
    }
    ctx->pc = 0x391428u;
label_391428:
    // 0x391428: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x391428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x39142c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x391430: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x391430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
    // 0x391434: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x391434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x391438: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x391438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x39143c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x39143cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x391440: 0x62382d  daddu       $a3, $v1, $v0
    ctx->pc = 0x391440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x391444: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x391444u;
    {
        const bool branch_taken_0x391444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x391448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391444u;
        // 0x391448: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391444) {
            ctx->pc = 0x391428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391428;
        }
    }
    ctx->pc = 0x39144Cu;
label_39144c:
    // 0x39144c: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x39144cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x391450: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x391450u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x391454: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x391454u;
    {
        const bool branch_taken_0x391454 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x391454) {
            ctx->pc = 0x391458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391454u;
            // 0x391458: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39145Cu;
            goto label_39145c;
        }
    }
    ctx->pc = 0x39145Cu;
label_39145c:
    // 0x39145c: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x39145cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x391460: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x391460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x391464: 0x1010  mfhi        $v0
    ctx->pc = 0x391464u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x391468: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x391468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39146c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39146cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x391470: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x391470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x391474: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x391474u;
    {
        const bool branch_taken_0x391474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x391478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391474u;
        // 0x391478: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391474) {
            ctx->pc = 0x3914E0u;
            goto label_3914e0;
        }
    }
    ctx->pc = 0x39147Cu;
    // 0x39147c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x39147cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x391480: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x391480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x391484: 0x0  nop
    ctx->pc = 0x391484u;
    // NOP
label_391488:
    // 0x391488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x391488u;
    {
        const bool branch_taken_0x391488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391488u;
        // 0x39148c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391488) {
            ctx->pc = 0x3914A0u;
            goto label_3914a0;
        }
    }
    ctx->pc = 0x391490u;
label_391490:
    // 0x391490: 0x14e3000d  bne         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x391490u;
    {
        const bool branch_taken_0x391490 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x391494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391490u;
        // 0x391494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391490) {
            ctx->pc = 0x3914C8u;
            goto label_3914c8;
        }
    }
    ctx->pc = 0x391498u;
    // 0x391498: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x391498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39149c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x39149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3914a0:
    // 0x3914a0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3914a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3914a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3914A4u;
    {
        const bool branch_taken_0x3914a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3914A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914A4u;
        // 0x3914a8: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914a4) {
            ctx->pc = 0x3914BCu;
            goto label_3914bc;
        }
    }
    ctx->pc = 0x3914ACu;
    // 0x3914ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x3914acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3914b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3914B0u;
    {
        const bool branch_taken_0x3914b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3914B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914B0u;
        // 0x3914b4: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914b0) {
            ctx->pc = 0x391490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391490;
        }
    }
    ctx->pc = 0x3914B8u;
    // 0x3914b8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3914b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3914bc:
    // 0x3914bc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3914bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3914c0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3914c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3914c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3914c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3914c8:
    // 0x3914c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3914C8u;
    {
        const bool branch_taken_0x3914c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3914CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914C8u;
        // 0x3914cc: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914c8) {
            ctx->pc = 0x3914E0u;
            goto label_3914e0;
        }
    }
    ctx->pc = 0x3914D0u;
    // 0x3914d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3914d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3914d4: 0x5480ffec  bnel        $a0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3914D4u;
    {
        const bool branch_taken_0x3914d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3914d4) {
            ctx->pc = 0x3914D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3914D4u;
            // 0x3914d8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391488;
        }
    }
    ctx->pc = 0x3914DCu;
    // 0x3914dc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3914dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3914e0:
    // 0x3914e0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x3914e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x3914e4: 0x34424df4  ori         $v0, $v0, 0x4DF4
    ctx->pc = 0x3914e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19956);
    // 0x3914e8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3914e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3914ec: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x3914ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3914f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3914f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3914f4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3914F4u;
    {
        const bool branch_taken_0x3914f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3914F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914F4u;
        // 0x3914f8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914f4) {
            ctx->pc = 0x391504u;
            goto label_391504;
        }
    }
    ctx->pc = 0x3914FCu;
    // 0x3914fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3914FCu;
    {
        const bool branch_taken_0x3914fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914FCu;
        // 0x391500: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914fc) {
            ctx->pc = 0x39150Cu;
            goto label_39150c;
        }
    }
    ctx->pc = 0x391504u;
label_391504:
    // 0x391504: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x391504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x391508: 0x84620060  lh          $v0, 0x60($v1)
    ctx->pc = 0x391508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_39150c:
    // 0x39150c: 0x3e00008  jr          $ra
    ctx->pc = 0x39150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39150Cu;
        // 0x391510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391514u;
    // 0x391514: 0x0  nop
    ctx->pc = 0x391514u;
    // NOP
    ctx->pc = 0x391518u;
}
