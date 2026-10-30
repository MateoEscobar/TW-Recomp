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

// Function: sub_0018BAE0
// Address: 0x18bae0 - 0x18bd48
void sub_0018BAE0_0x18bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BAE0_0x18bae0");
#endif

    switch (ctx->pc) {
        case 0x18bae0u: goto label_18bae0;
        case 0x18bae4u: goto label_18bae4;
        case 0x18bae8u: goto label_18bae8;
        case 0x18baecu: goto label_18baec;
        case 0x18baf0u: goto label_18baf0;
        case 0x18baf4u: goto label_18baf4;
        case 0x18baf8u: goto label_18baf8;
        case 0x18bafcu: goto label_18bafc;
        case 0x18bb00u: goto label_18bb00;
        case 0x18bb04u: goto label_18bb04;
        case 0x18bb08u: goto label_18bb08;
        case 0x18bb0cu: goto label_18bb0c;
        case 0x18bb10u: goto label_18bb10;
        case 0x18bb14u: goto label_18bb14;
        case 0x18bb18u: goto label_18bb18;
        case 0x18bb1cu: goto label_18bb1c;
        case 0x18bb20u: goto label_18bb20;
        case 0x18bb24u: goto label_18bb24;
        case 0x18bb28u: goto label_18bb28;
        case 0x18bb2cu: goto label_18bb2c;
        case 0x18bb30u: goto label_18bb30;
        case 0x18bb34u: goto label_18bb34;
        case 0x18bb38u: goto label_18bb38;
        case 0x18bb3cu: goto label_18bb3c;
        case 0x18bb40u: goto label_18bb40;
        case 0x18bb44u: goto label_18bb44;
        case 0x18bb48u: goto label_18bb48;
        case 0x18bb4cu: goto label_18bb4c;
        case 0x18bb50u: goto label_18bb50;
        case 0x18bb54u: goto label_18bb54;
        case 0x18bb58u: goto label_18bb58;
        case 0x18bb5cu: goto label_18bb5c;
        case 0x18bb60u: goto label_18bb60;
        case 0x18bb64u: goto label_18bb64;
        case 0x18bb68u: goto label_18bb68;
        case 0x18bb6cu: goto label_18bb6c;
        case 0x18bb70u: goto label_18bb70;
        case 0x18bb74u: goto label_18bb74;
        case 0x18bb78u: goto label_18bb78;
        case 0x18bb7cu: goto label_18bb7c;
        case 0x18bb80u: goto label_18bb80;
        case 0x18bb84u: goto label_18bb84;
        case 0x18bb88u: goto label_18bb88;
        case 0x18bb8cu: goto label_18bb8c;
        case 0x18bb90u: goto label_18bb90;
        case 0x18bb94u: goto label_18bb94;
        case 0x18bb98u: goto label_18bb98;
        case 0x18bb9cu: goto label_18bb9c;
        case 0x18bba0u: goto label_18bba0;
        case 0x18bba4u: goto label_18bba4;
        case 0x18bba8u: goto label_18bba8;
        case 0x18bbacu: goto label_18bbac;
        case 0x18bbb0u: goto label_18bbb0;
        case 0x18bbb4u: goto label_18bbb4;
        case 0x18bbb8u: goto label_18bbb8;
        case 0x18bbbcu: goto label_18bbbc;
        case 0x18bbc0u: goto label_18bbc0;
        case 0x18bbc4u: goto label_18bbc4;
        case 0x18bbc8u: goto label_18bbc8;
        case 0x18bbccu: goto label_18bbcc;
        case 0x18bbd0u: goto label_18bbd0;
        case 0x18bbd4u: goto label_18bbd4;
        case 0x18bbd8u: goto label_18bbd8;
        case 0x18bbdcu: goto label_18bbdc;
        case 0x18bbe0u: goto label_18bbe0;
        case 0x18bbe4u: goto label_18bbe4;
        case 0x18bbe8u: goto label_18bbe8;
        case 0x18bbecu: goto label_18bbec;
        case 0x18bbf0u: goto label_18bbf0;
        case 0x18bbf4u: goto label_18bbf4;
        case 0x18bbf8u: goto label_18bbf8;
        case 0x18bbfcu: goto label_18bbfc;
        case 0x18bc00u: goto label_18bc00;
        case 0x18bc04u: goto label_18bc04;
        case 0x18bc08u: goto label_18bc08;
        case 0x18bc0cu: goto label_18bc0c;
        case 0x18bc10u: goto label_18bc10;
        case 0x18bc14u: goto label_18bc14;
        case 0x18bc18u: goto label_18bc18;
        case 0x18bc1cu: goto label_18bc1c;
        case 0x18bc20u: goto label_18bc20;
        case 0x18bc24u: goto label_18bc24;
        case 0x18bc28u: goto label_18bc28;
        case 0x18bc2cu: goto label_18bc2c;
        case 0x18bc30u: goto label_18bc30;
        case 0x18bc34u: goto label_18bc34;
        case 0x18bc38u: goto label_18bc38;
        case 0x18bc3cu: goto label_18bc3c;
        case 0x18bc40u: goto label_18bc40;
        case 0x18bc44u: goto label_18bc44;
        case 0x18bc48u: goto label_18bc48;
        case 0x18bc4cu: goto label_18bc4c;
        case 0x18bc50u: goto label_18bc50;
        case 0x18bc54u: goto label_18bc54;
        case 0x18bc58u: goto label_18bc58;
        case 0x18bc5cu: goto label_18bc5c;
        case 0x18bc60u: goto label_18bc60;
        case 0x18bc64u: goto label_18bc64;
        case 0x18bc68u: goto label_18bc68;
        case 0x18bc6cu: goto label_18bc6c;
        case 0x18bc70u: goto label_18bc70;
        case 0x18bc74u: goto label_18bc74;
        case 0x18bc78u: goto label_18bc78;
        case 0x18bc7cu: goto label_18bc7c;
        case 0x18bc80u: goto label_18bc80;
        case 0x18bc84u: goto label_18bc84;
        case 0x18bc88u: goto label_18bc88;
        case 0x18bc8cu: goto label_18bc8c;
        case 0x18bc90u: goto label_18bc90;
        case 0x18bc94u: goto label_18bc94;
        case 0x18bc98u: goto label_18bc98;
        case 0x18bc9cu: goto label_18bc9c;
        case 0x18bca0u: goto label_18bca0;
        case 0x18bca4u: goto label_18bca4;
        case 0x18bca8u: goto label_18bca8;
        case 0x18bcacu: goto label_18bcac;
        case 0x18bcb0u: goto label_18bcb0;
        case 0x18bcb4u: goto label_18bcb4;
        case 0x18bcb8u: goto label_18bcb8;
        case 0x18bcbcu: goto label_18bcbc;
        case 0x18bcc0u: goto label_18bcc0;
        case 0x18bcc4u: goto label_18bcc4;
        case 0x18bcc8u: goto label_18bcc8;
        case 0x18bcccu: goto label_18bccc;
        case 0x18bcd0u: goto label_18bcd0;
        case 0x18bcd4u: goto label_18bcd4;
        case 0x18bcd8u: goto label_18bcd8;
        case 0x18bcdcu: goto label_18bcdc;
        case 0x18bce0u: goto label_18bce0;
        case 0x18bce4u: goto label_18bce4;
        case 0x18bce8u: goto label_18bce8;
        case 0x18bcecu: goto label_18bcec;
        case 0x18bcf0u: goto label_18bcf0;
        case 0x18bcf4u: goto label_18bcf4;
        case 0x18bcf8u: goto label_18bcf8;
        case 0x18bcfcu: goto label_18bcfc;
        case 0x18bd00u: goto label_18bd00;
        case 0x18bd04u: goto label_18bd04;
        case 0x18bd08u: goto label_18bd08;
        case 0x18bd0cu: goto label_18bd0c;
        case 0x18bd10u: goto label_18bd10;
        case 0x18bd14u: goto label_18bd14;
        case 0x18bd18u: goto label_18bd18;
        case 0x18bd1cu: goto label_18bd1c;
        case 0x18bd20u: goto label_18bd20;
        case 0x18bd24u: goto label_18bd24;
        case 0x18bd28u: goto label_18bd28;
        case 0x18bd2cu: goto label_18bd2c;
        case 0x18bd30u: goto label_18bd30;
        case 0x18bd34u: goto label_18bd34;
        case 0x18bd38u: goto label_18bd38;
        case 0x18bd3cu: goto label_18bd3c;
        case 0x18bd40u: goto label_18bd40;
        case 0x18bd44u: goto label_18bd44;
        default: break;
    }

    ctx->pc = 0x18bae0u;

label_18bae0:
    // 0x18bae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18bae4:
    // 0x18bae4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18bae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bae8:
    // 0x18bae8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18baec:
    // 0x18baec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_18baf0:
    // 0x18baf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18baf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18baf4:
    // 0x18baf4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_18baf8:
    // 0x18baf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18baf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bafc:
    // 0x18bafc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18bafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_18bb00:
    // 0x18bb00: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x18bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18bb04:
    // 0x18bb04: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_18bb08:
    // 0x18bb08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18bb0c:
    // 0x18bb0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18bb10:
    // 0x18bb10: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_18bb14:
    // 0x18bb14: 0xac67015c  sw          $a3, 0x15C($v1)
    ctx->pc = 0x18bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 7));
label_18bb18:
    // 0x18bb18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18bb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18bb1c:
    // 0x18bb1c: 0xac870160  sw          $a3, 0x160($a0)
    ctx->pc = 0x18bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 7));
label_18bb20:
    // 0x18bb20: 0x26030154  addiu       $v1, $s0, 0x154
    ctx->pc = 0x18bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_18bb24:
    // 0x18bb24: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x18bb24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18bb28:
    // 0x18bb28: 0x90a60158  lbu         $a2, 0x158($a1)
    ctx->pc = 0x18bb28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 344)));
label_18bb2c:
    // 0x18bb2c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x18bb2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_18bb30:
    // 0x18bb30: 0xa3a60000  sb          $a2, 0x0($sp)
    ctx->pc = 0x18bb30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 6));
label_18bb34:
    // 0x18bb34: 0xa0a40158  sb          $a0, 0x158($a1)
    ctx->pc = 0x18bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 344), (uint8_t)GPR_U32(ctx, 4));
label_18bb38:
    // 0x18bb38: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x18bb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_18bb3c:
    // 0x18bb3c: 0xa0a20158  sb          $v0, 0x158($a1)
    ctx->pc = 0x18bb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 344), (uint8_t)GPR_U32(ctx, 2));
label_18bb40:
    // 0x18bb40: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x18bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18bb44:
    // 0x18bb44: 0x54c00066  bnel        $a2, $zero, . + 4 + (0x66 << 2)
label_18bb48:
    if (ctx->pc == 0x18BB48u) {
        ctx->pc = 0x18BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB44u;
        // 0x18bb48: 0x8cc20094  lw          $v0, 0x94($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB4Cu;
        goto label_18bb4c;
    }
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BB44u;
            // 0x18bb48: 0x8cc20094  lw          $v0, 0x94($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BCE0u;
            goto label_18bce0;
        }
    }
    ctx->pc = 0x18BB4Cu;
label_18bb4c:
    // 0x18bb4c: 0x12470022  beq         $s2, $a3, . + 4 + (0x22 << 2)
label_18bb50:
    if (ctx->pc == 0x18BB50u) {
        ctx->pc = 0x18BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB4Cu;
        // 0x18bb50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB54u;
        goto label_18bb54;
    }
    ctx->pc = 0x18BB4Cu;
    {
        const bool branch_taken_0x18bb4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x18BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB4Cu;
        // 0x18bb50: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb4c) {
            ctx->pc = 0x18BBD8u;
            goto label_18bbd8;
        }
    }
    ctx->pc = 0x18BB54u;
label_18bb54:
    // 0x18bb54: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_18bb58:
    if (ctx->pc == 0x18BB58u) {
        ctx->pc = 0x18BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB54u;
        // 0x18bb58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB5Cu;
        goto label_18bb5c;
    }
    ctx->pc = 0x18BB54u;
    {
        const bool branch_taken_0x18bb54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB54u;
        // 0x18bb58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb54) {
            ctx->pc = 0x18BB74u;
            goto label_18bb74;
        }
    }
    ctx->pc = 0x18BB5Cu;
label_18bb5c:
    // 0x18bb5c: 0x12420034  beq         $s2, $v0, . + 4 + (0x34 << 2)
label_18bb60:
    if (ctx->pc == 0x18BB60u) {
        ctx->pc = 0x18BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB5Cu;
        // 0x18bb60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB64u;
        goto label_18bb64;
    }
    ctx->pc = 0x18BB5Cu;
    {
        const bool branch_taken_0x18bb5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB5Cu;
        // 0x18bb60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb5c) {
            ctx->pc = 0x18BC30u;
            goto label_18bc30;
        }
    }
    ctx->pc = 0x18BB64u;
label_18bb64:
    // 0x18bb64: 0x12420048  beq         $s2, $v0, . + 4 + (0x48 << 2)
label_18bb68:
    if (ctx->pc == 0x18BB68u) {
        ctx->pc = 0x18BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB64u;
        // 0x18bb68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB6Cu;
        goto label_18bb6c;
    }
    ctx->pc = 0x18BB64u;
    {
        const bool branch_taken_0x18bb64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB64u;
        // 0x18bb68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb64) {
            ctx->pc = 0x18BC88u;
            goto label_18bc88;
        }
    }
    ctx->pc = 0x18BB6Cu;
label_18bb6c:
    // 0x18bb6c: 0x10000061  b           . + 4 + (0x61 << 2)
label_18bb70:
    if (ctx->pc == 0x18BB70u) {
        ctx->pc = 0x18BB74u;
        goto label_18bb74;
    }
    ctx->pc = 0x18BB6Cu;
    {
        const bool branch_taken_0x18bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb6c) {
            ctx->pc = 0x18BCF4u;
            goto label_18bcf4;
        }
    }
    ctx->pc = 0x18BB74u;
label_18bb74:
    // 0x18bb74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18bb78:
    // 0x18bb78: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18bb7c:
    // 0x18bb7c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18bb80:
    // 0x18bb80: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18bb80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18bb84:
    // 0x18bb84: 0x24a52f28  addiu       $a1, $a1, 0x2F28
    ctx->pc = 0x18bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12072));
label_18bb88:
    // 0x18bb88: 0x25082ef0  addiu       $t0, $t0, 0x2EF0
    ctx->pc = 0x18bb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12016));
label_18bb8c:
    // 0x18bb8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_18bb90:
    // 0x18bb90: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x18bb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_18bb94:
    // 0x18bb94: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18bb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18bb98:
    // 0x18bb98: 0x24090106  addiu       $t1, $zero, 0x106
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
label_18bb9c:
    // 0x18bb9c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18bb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18bba0:
    // 0x18bba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18bba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bba4:
    // 0x18bba4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18bba8:
    // 0x18bba8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18bba8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bbac:
    // 0x18bbac: 0x40f809  jalr        $v0
label_18bbb0:
    if (ctx->pc == 0x18BBB0u) {
        ctx->pc = 0x18BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBACu;
        // 0x18bbb0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBB4u;
        goto label_18bbb4;
    }
    ctx->pc = 0x18BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BBB4u);
        ctx->pc = 0x18BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBACu;
        // 0x18bbb0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BBACu, 0x18BBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BBB4u;
label_18bbb4:
    // 0x18bbb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18bbb8:
    if (ctx->pc == 0x18BBB8u) {
        ctx->pc = 0x18BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBB4u;
        // 0x18bbb8: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBBCu;
        goto label_18bbbc;
    }
    ctx->pc = 0x18BBB4u;
    {
        const bool branch_taken_0x18bbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBB4u;
        // 0x18bbb8: 0x3c070060  lui         $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbb4) {
            ctx->pc = 0x18BBD0u;
            goto label_18bbd0;
        }
    }
    ctx->pc = 0x18BBBCu;
label_18bbbc:
    // 0x18bbbc: 0x96050212  lhu         $a1, 0x212($s0)
    ctx->pc = 0x18bbbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18bbc0:
    // 0x18bbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18bbc4:
    // 0x18bbc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18bbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bbc8:
    // 0x18bbc8: 0xc0666ea  jal         func_199BA8
label_18bbcc:
    if (ctx->pc == 0x18BBCCu) {
        ctx->pc = 0x18BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBC8u;
        // 0x18bbcc: 0x24e7dec0  addiu       $a3, $a3, -0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBD0u;
        goto label_18bbd0;
    }
    ctx->pc = 0x18BBC8u;
    SET_GPR_U32(ctx, 31, 0x18BBD0u);
    ctx->pc = 0x18BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBC8u;
    // 0x18bbcc: 0x24e7dec0  addiu       $a3, $a3, -0x2140 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199BA8u, 0x18BBC8u, 0x18BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBD0u;
label_18bbd0:
    // 0x18bbd0: 0x10000048  b           . + 4 + (0x48 << 2)
label_18bbd4:
    if (ctx->pc == 0x18BBD4u) {
        ctx->pc = 0x18BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBD0u;
        // 0x18bbd4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBD8u;
        goto label_18bbd8;
    }
    ctx->pc = 0x18BBD0u;
    {
        const bool branch_taken_0x18bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBD0u;
        // 0x18bbd4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbd0) {
            ctx->pc = 0x18BCF4u;
            goto label_18bcf4;
        }
    }
    ctx->pc = 0x18BBD8u;
label_18bbd8:
    // 0x18bbd8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18bbdc:
    // 0x18bbdc: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x18bbdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18bbe0:
    // 0x18bbe0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18bbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18bbe4:
    // 0x18bbe4: 0x24a52f30  addiu       $a1, $a1, 0x2F30
    ctx->pc = 0x18bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12080));
label_18bbe8:
    // 0x18bbe8: 0x25082ef0  addiu       $t0, $t0, 0x2EF0
    ctx->pc = 0x18bbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12016));
label_18bbec:
    // 0x18bbec: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_18bbf0:
    // 0x18bbf0: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_18bbf4:
    // 0x18bbf4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18bbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18bbf8:
    // 0x18bbf8: 0x24090109  addiu       $t1, $zero, 0x109
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
label_18bbfc:
    // 0x18bbfc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18bc00:
    // 0x18bc00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18bc00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bc04:
    // 0x18bc04: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18bc08:
    // 0x18bc08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18bc08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bc0c:
    // 0x18bc0c: 0x40f809  jalr        $v0
label_18bc10:
    if (ctx->pc == 0x18BC10u) {
        ctx->pc = 0x18BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC0Cu;
        // 0x18bc10: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC14u;
        goto label_18bc14;
    }
    ctx->pc = 0x18BC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BC14u);
        ctx->pc = 0x18BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC0Cu;
        // 0x18bc10: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC0Cu, 0x18BC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BC14u;
label_18bc14:
    // 0x18bc14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18bc18:
    if (ctx->pc == 0x18BC18u) {
        ctx->pc = 0x18BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC14u;
        // 0x18bc18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC1Cu;
        goto label_18bc1c;
    }
    ctx->pc = 0x18BC14u;
    {
        const bool branch_taken_0x18bc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC14u;
        // 0x18bc18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc14) {
            ctx->pc = 0x18BC28u;
            goto label_18bc28;
        }
    }
    ctx->pc = 0x18BC1Cu;
label_18bc1c:
    // 0x18bc1c: 0x96050212  lhu         $a1, 0x212($s0)
    ctx->pc = 0x18bc1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18bc20:
    // 0x18bc20: 0xc0664e0  jal         func_199380
label_18bc24:
    if (ctx->pc == 0x18BC24u) {
        ctx->pc = 0x18BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC20u;
        // 0x18bc24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC28u;
        goto label_18bc28;
    }
    ctx->pc = 0x18BC20u;
    SET_GPR_U32(ctx, 31, 0x18BC28u);
    ctx->pc = 0x18BC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC20u;
    // 0x18bc24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199380u, 0x18BC20u, 0x18BC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC28u;
label_18bc28:
    // 0x18bc28: 0x10000032  b           . + 4 + (0x32 << 2)
label_18bc2c:
    if (ctx->pc == 0x18BC2Cu) {
        ctx->pc = 0x18BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC28u;
        // 0x18bc2c: 0xae020164  sw          $v0, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC30u;
        goto label_18bc30;
    }
    ctx->pc = 0x18BC28u;
    {
        const bool branch_taken_0x18bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC28u;
        // 0x18bc2c: 0xae020164  sw          $v0, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc28) {
            ctx->pc = 0x18BCF4u;
            goto label_18bcf4;
        }
    }
    ctx->pc = 0x18BC30u;
label_18bc30:
    // 0x18bc30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18bc34:
    // 0x18bc34: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18bc38:
    // 0x18bc38: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x18bc38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18bc3c:
    // 0x18bc3c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18bc3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18bc40:
    // 0x18bc40: 0x24a52f38  addiu       $a1, $a1, 0x2F38
    ctx->pc = 0x18bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12088));
label_18bc44:
    // 0x18bc44: 0x25082ef0  addiu       $t0, $t0, 0x2EF0
    ctx->pc = 0x18bc44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12016));
label_18bc48:
    // 0x18bc48: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_18bc4c:
    // 0x18bc4c: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x18bc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_18bc50:
    // 0x18bc50: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18bc54:
    // 0x18bc54: 0x2409010c  addiu       $t1, $zero, 0x10C
    ctx->pc = 0x18bc54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
label_18bc58:
    // 0x18bc58: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18bc58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18bc5c:
    // 0x18bc5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18bc5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bc60:
    // 0x18bc60: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18bc64:
    // 0x18bc64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18bc64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bc68:
    // 0x18bc68: 0x40f809  jalr        $v0
label_18bc6c:
    if (ctx->pc == 0x18BC6Cu) {
        ctx->pc = 0x18BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC68u;
        // 0x18bc6c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC70u;
        goto label_18bc70;
    }
    ctx->pc = 0x18BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BC70u);
        ctx->pc = 0x18BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC68u;
        // 0x18bc6c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC68u, 0x18BC70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BC70u;
label_18bc70:
    // 0x18bc70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18bc74:
    if (ctx->pc == 0x18BC74u) {
        ctx->pc = 0x18BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC70u;
        // 0x18bc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC78u;
        goto label_18bc78;
    }
    ctx->pc = 0x18BC70u;
    {
        const bool branch_taken_0x18bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC70u;
        // 0x18bc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc70) {
            ctx->pc = 0x18BC80u;
            goto label_18bc80;
        }
    }
    ctx->pc = 0x18BC78u;
label_18bc78:
    // 0x18bc78: 0xc06642e  jal         func_1990B8
label_18bc7c:
    if (ctx->pc == 0x18BC7Cu) {
        ctx->pc = 0x18BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC78u;
        // 0x18bc7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC80u;
        goto label_18bc80;
    }
    ctx->pc = 0x18BC78u;
    SET_GPR_U32(ctx, 31, 0x18BC80u);
    ctx->pc = 0x18BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC78u;
    // 0x18bc7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1990B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1990B8u, 0x18BC78u, 0x18BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC80u;
label_18bc80:
    // 0x18bc80: 0x1000001c  b           . + 4 + (0x1C << 2)
label_18bc84:
    if (ctx->pc == 0x18BC84u) {
        ctx->pc = 0x18BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC80u;
        // 0x18bc84: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BC88u;
        goto label_18bc88;
    }
    ctx->pc = 0x18BC80u;
    {
        const bool branch_taken_0x18bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC80u;
        // 0x18bc84: 0xae020174  sw          $v0, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc80) {
            ctx->pc = 0x18BCF4u;
            goto label_18bcf4;
        }
    }
    ctx->pc = 0x18BC88u;
label_18bc88:
    // 0x18bc88: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18bc8c:
    // 0x18bc8c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x18bc8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18bc90:
    // 0x18bc90: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x18bc90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_18bc94:
    // 0x18bc94: 0x24a52f48  addiu       $a1, $a1, 0x2F48
    ctx->pc = 0x18bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12104));
label_18bc98:
    // 0x18bc98: 0x25082ef0  addiu       $t0, $t0, 0x2EF0
    ctx->pc = 0x18bc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12016));
label_18bc9c:
    // 0x18bc9c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_18bca0:
    // 0x18bca0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x18bca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_18bca4:
    // 0x18bca4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x18bca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18bca8:
    // 0x18bca8: 0x2409010f  addiu       $t1, $zero, 0x10F
    ctx->pc = 0x18bca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
label_18bcac:
    // 0x18bcac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18bcacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18bcb0:
    // 0x18bcb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18bcb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bcb4:
    // 0x18bcb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18bcb8:
    // 0x18bcb8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18bcb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bcbc:
    // 0x18bcbc: 0x40f809  jalr        $v0
label_18bcc0:
    if (ctx->pc == 0x18BCC0u) {
        ctx->pc = 0x18BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCBCu;
        // 0x18bcc0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BCC4u;
        goto label_18bcc4;
    }
    ctx->pc = 0x18BCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BCC4u);
        ctx->pc = 0x18BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCBCu;
        // 0x18bcc0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BCBCu, 0x18BCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BCC4u;
label_18bcc4:
    // 0x18bcc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18bcc8:
    if (ctx->pc == 0x18BCC8u) {
        ctx->pc = 0x18BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCC4u;
        // 0x18bcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BCCCu;
        goto label_18bccc;
    }
    ctx->pc = 0x18BCC4u;
    {
        const bool branch_taken_0x18bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCC4u;
        // 0x18bcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcc4) {
            ctx->pc = 0x18BCD8u;
            goto label_18bcd8;
        }
    }
    ctx->pc = 0x18BCCCu;
label_18bccc:
    // 0x18bccc: 0x96050212  lhu         $a1, 0x212($s0)
    ctx->pc = 0x18bcccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18bcd0:
    // 0x18bcd0: 0xc066b74  jal         func_19ADD0
label_18bcd4:
    if (ctx->pc == 0x18BCD4u) {
        ctx->pc = 0x18BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCD0u;
        // 0x18bcd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BCD8u;
        goto label_18bcd8;
    }
    ctx->pc = 0x18BCD0u;
    SET_GPR_U32(ctx, 31, 0x18BCD8u);
    ctx->pc = 0x18BCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCD0u;
    // 0x18bcd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19ADD0u, 0x18BCD0u, 0x18BCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BCD8u;
label_18bcd8:
    // 0x18bcd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_18bcdc:
    if (ctx->pc == 0x18BCDCu) {
        ctx->pc = 0x18BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCD8u;
        // 0x18bcdc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BCE0u;
        goto label_18bce0;
    }
    ctx->pc = 0x18BCD8u;
    {
        const bool branch_taken_0x18bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCD8u;
        // 0x18bcdc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcd8) {
            ctx->pc = 0x18BCF4u;
            goto label_18bcf4;
        }
    }
    ctx->pc = 0x18BCE0u;
label_18bce0:
    // 0x18bce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18bce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bce4:
    // 0x18bce4: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x18bce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_18bce8:
    // 0x18bce8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x18bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_18bcec:
    // 0x18bcec: 0x60f809  jalr        $v1
label_18bcf0:
    if (ctx->pc == 0x18BCF0u) {
        ctx->pc = 0x18BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCECu;
        // 0x18bcf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BCF4u;
        goto label_18bcf4;
    }
    ctx->pc = 0x18BCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18BCF4u);
        ctx->pc = 0x18BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCECu;
        // 0x18bcf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BCECu, 0x18BCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18BCF4u;
label_18bcf4:
    // 0x18bcf4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_18bcf8:
    if (ctx->pc == 0x18BCF8u) {
        ctx->pc = 0x18BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCF4u;
        // 0x18bcf8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BCFCu;
        goto label_18bcfc;
    }
    ctx->pc = 0x18BCF4u;
    {
        const bool branch_taken_0x18bcf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BCF4u;
        // 0x18bcf8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bcf4) {
            ctx->pc = 0x18BD0Cu;
            goto label_18bd0c;
        }
    }
    ctx->pc = 0x18BCFCu;
label_18bcfc:
    // 0x18bcfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x18bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_18bd00:
    // 0x18bd00: 0xc060d86  jal         func_183618
label_18bd04:
    if (ctx->pc == 0x18BD04u) {
        ctx->pc = 0x18BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD00u;
        // 0x18bd04: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BD08u;
        goto label_18bd08;
    }
    ctx->pc = 0x18BD00u;
    SET_GPR_U32(ctx, 31, 0x18BD08u);
    ctx->pc = 0x18BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD00u;
    // 0x18bd04: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183618u, 0x18BD00u, 0x18BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD08u;
label_18bd08:
    // 0x18bd08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18bd0c:
    // 0x18bd0c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_18bd10:
    // 0x18bd10: 0xc0e409a  jal         func_390268
label_18bd14:
    if (ctx->pc == 0x18BD14u) {
        ctx->pc = 0x18BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD10u;
        // 0x18bd14: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BD18u;
        goto label_18bd18;
    }
    ctx->pc = 0x18BD10u;
    SET_GPR_U32(ctx, 31, 0x18BD18u);
    ctx->pc = 0x18BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD10u;
    // 0x18bd14: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x18BD10u, 0x18BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD18u;
label_18bd18:
    // 0x18bd18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18bd1c:
    if (ctx->pc == 0x18BD1Cu) {
        ctx->pc = 0x18BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD18u;
        // 0x18bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BD20u;
        goto label_18bd20;
    }
    ctx->pc = 0x18BD18u;
    {
        const bool branch_taken_0x18bd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD18u;
        // 0x18bd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd18) {
            ctx->pc = 0x18BD2Cu;
            goto label_18bd2c;
        }
    }
    ctx->pc = 0x18BD20u;
label_18bd20:
    // 0x18bd20: 0x904505b7  lbu         $a1, 0x5B7($v0)
    ctx->pc = 0x18bd20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1463)));
label_18bd24:
    // 0x18bd24: 0xc062f74  jal         func_18BDD0
label_18bd28:
    if (ctx->pc == 0x18BD28u) {
        ctx->pc = 0x18BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD24u;
        // 0x18bd28: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BD2Cu;
        goto label_18bd2c;
    }
    ctx->pc = 0x18BD24u;
    SET_GPR_U32(ctx, 31, 0x18BD2Cu);
    ctx->pc = 0x18BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD24u;
    // 0x18bd28: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BDD0u, 0x18BD24u, 0x18BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD2Cu;
label_18bd2c:
    // 0x18bd2c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18bd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18bd30:
    // 0x18bd30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18bd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18bd34:
    // 0x18bd34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18bd34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18bd38:
    // 0x18bd38: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18bd38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18bd3c:
    // 0x18bd3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18bd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18bd40:
    // 0x18bd40: 0x3e00008  jr          $ra
label_18bd44:
    if (ctx->pc == 0x18BD44u) {
        ctx->pc = 0x18BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD40u;
        // 0x18bd44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BD48u;
        goto label_fallthrough_0x18bd40;
    }
    ctx->pc = 0x18BD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD40u;
        // 0x18bd44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18bd40:
    ctx->pc = 0x18BD48u;
}
