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

// Function: sub_002349A0
// Address: 0x2349a0 - 0x234a68
void sub_002349A0_0x2349a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002349A0_0x2349a0");
#endif

    switch (ctx->pc) {
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a4u: goto label_2349a4;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349acu: goto label_2349ac;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349b4u: goto label_2349b4;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349bcu: goto label_2349bc;
        case 0x2349c0u: goto label_2349c0;
        case 0x2349c4u: goto label_2349c4;
        case 0x2349c8u: goto label_2349c8;
        case 0x2349ccu: goto label_2349cc;
        case 0x2349d0u: goto label_2349d0;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349dcu: goto label_2349dc;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349e4u: goto label_2349e4;
        case 0x2349e8u: goto label_2349e8;
        case 0x2349ecu: goto label_2349ec;
        case 0x2349f0u: goto label_2349f0;
        case 0x2349f4u: goto label_2349f4;
        case 0x2349f8u: goto label_2349f8;
        case 0x2349fcu: goto label_2349fc;
        case 0x234a00u: goto label_234a00;
        case 0x234a04u: goto label_234a04;
        case 0x234a08u: goto label_234a08;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a10u: goto label_234a10;
        case 0x234a14u: goto label_234a14;
        case 0x234a18u: goto label_234a18;
        case 0x234a1cu: goto label_234a1c;
        case 0x234a20u: goto label_234a20;
        case 0x234a24u: goto label_234a24;
        case 0x234a28u: goto label_234a28;
        case 0x234a2cu: goto label_234a2c;
        case 0x234a30u: goto label_234a30;
        case 0x234a34u: goto label_234a34;
        case 0x234a38u: goto label_234a38;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a40u: goto label_234a40;
        case 0x234a44u: goto label_234a44;
        case 0x234a48u: goto label_234a48;
        case 0x234a4cu: goto label_234a4c;
        case 0x234a50u: goto label_234a50;
        case 0x234a54u: goto label_234a54;
        case 0x234a58u: goto label_234a58;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a60u: goto label_234a60;
        case 0x234a64u: goto label_234a64;
        default: break;
    }

    ctx->pc = 0x2349a0u;

label_2349a0:
    // 0x2349a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2349a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2349a4:
    // 0x2349a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2349a8:
    // 0x2349a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2349a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2349ac:
    // 0x2349ac: 0x8c450248  lw          $a1, 0x248($v0)
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
label_2349b0:
    // 0x2349b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2349b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2349b4:
    // 0x2349b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2349b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2349b8:
    // 0x2349b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2349b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2349bc:
    // 0x2349bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2349bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2349c0:
    // 0x2349c0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_2349c4:
    if (ctx->pc == 0x2349C4u) {
        ctx->pc = 0x2349C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C0u;
        // 0x2349c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349C8u;
        goto label_2349c8;
    }
    ctx->pc = 0x2349C0u;
    {
        const bool branch_taken_0x2349c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C0u;
        // 0x2349c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349c0) {
            ctx->pc = 0x234A48u;
            goto label_234a48;
        }
    }
    ctx->pc = 0x2349C8u;
label_2349c8:
    // 0x2349c8: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_2349cc:
    if (ctx->pc == 0x2349CCu) {
        ctx->pc = 0x2349CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C8u;
        // 0x2349cc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349D0u;
        goto label_2349d0;
    }
    ctx->pc = 0x2349C8u;
    {
        const bool branch_taken_0x2349c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C8u;
        // 0x2349cc: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349c8) {
            ctx->pc = 0x234A48u;
            goto label_234a48;
        }
    }
    ctx->pc = 0x2349D0u;
label_2349d0:
    // 0x2349d0: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x2349d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_2349d4:
    // 0x2349d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2349d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2349d8:
    // 0x2349d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2349d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2349dc:
    // 0x2349dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2349dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2349e0:
    // 0x2349e0: 0x40f809  jalr        $v0
label_2349e4:
    if (ctx->pc == 0x2349E4u) {
        ctx->pc = 0x2349E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349E0u;
        // 0x2349e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349E8u;
        goto label_2349e8;
    }
    ctx->pc = 0x2349E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2349E8u);
        ctx->pc = 0x2349E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349E0u;
        // 0x2349e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2349E0u, 0x2349E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2349E8u;
label_2349e8:
    // 0x2349e8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2349ec:
    if (ctx->pc == 0x2349ECu) {
        ctx->pc = 0x2349ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349E8u;
        // 0x2349ec: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349F0u;
        goto label_2349f0;
    }
    ctx->pc = 0x2349E8u;
    {
        const bool branch_taken_0x2349e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349E8u;
        // 0x2349ec: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349e8) {
            ctx->pc = 0x234A48u;
            goto label_234a48;
        }
    }
    ctx->pc = 0x2349F0u;
label_2349f0:
    // 0x2349f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2349f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2349f4:
    // 0x2349f4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2349f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2349f8:
    // 0x2349f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2349f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2349fc:
    // 0x2349fc: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2349fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_234a00:
    // 0x234a00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234a04:
    // 0x234a04: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x234a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_234a08:
    // 0x234a08: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x234a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_234a0c:
    // 0x234a0c: 0x40f809  jalr        $v0
label_234a10:
    if (ctx->pc == 0x234A10u) {
        ctx->pc = 0x234A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A0Cu;
        // 0x234a10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A14u;
        goto label_234a14;
    }
    ctx->pc = 0x234A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234A14u);
        ctx->pc = 0x234A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A0Cu;
        // 0x234a10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A0Cu, 0x234A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234A14u;
label_234a14:
    // 0x234a14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x234a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234a18:
    // 0x234a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234a1c:
    // 0x234a1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x234a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_234a20:
    // 0x234a20: 0x40f809  jalr        $v0
label_234a24:
    if (ctx->pc == 0x234A24u) {
        ctx->pc = 0x234A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A20u;
        // 0x234a24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A28u;
        goto label_234a28;
    }
    ctx->pc = 0x234A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234A28u);
        ctx->pc = 0x234A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A20u;
        // 0x234a24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A20u, 0x234A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234A28u;
label_234a28:
    // 0x234a28: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x234a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_234a2c:
    // 0x234a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x234a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234a30:
    // 0x234a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234a34:
    // 0x234a34: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x234a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234a38:
    // 0x234a38: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x234a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_234a3c:
    // 0x234a3c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x234a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_234a40:
    // 0x234a40: 0x60f809  jalr        $v1
label_234a44:
    if (ctx->pc == 0x234A44u) {
        ctx->pc = 0x234A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A40u;
        // 0x234a44: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A48u;
        goto label_234a48;
    }
    ctx->pc = 0x234A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234A48u);
        ctx->pc = 0x234A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A40u;
        // 0x234a44: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A40u, 0x234A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234A48u;
label_234a48:
    // 0x234a48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x234a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_234a4c:
    // 0x234a4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x234a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_234a50:
    // 0x234a50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234a50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234a54:
    // 0x234a54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x234a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234a58:
    // 0x234a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234a5c:
    // 0x234a5c: 0x3e00008  jr          $ra
label_234a60:
    if (ctx->pc == 0x234A60u) {
        ctx->pc = 0x234A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A5Cu;
        // 0x234a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A64u;
        goto label_234a64;
    }
    ctx->pc = 0x234A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A5Cu;
        // 0x234a60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234A64u;
label_234a64:
    // 0x234a64: 0x0  nop
    ctx->pc = 0x234a64u;
    // NOP
    ctx->pc = 0x234a68u;
}
