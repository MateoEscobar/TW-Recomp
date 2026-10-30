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

// Function: sub_0042CE28
// Address: 0x42ce28 - 0x42cf70
void sub_0042CE28_0x42ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CE28_0x42ce28");
#endif

    switch (ctx->pc) {
        case 0x42ce28u: goto label_42ce28;
        case 0x42ce2cu: goto label_42ce2c;
        case 0x42ce30u: goto label_42ce30;
        case 0x42ce34u: goto label_42ce34;
        case 0x42ce38u: goto label_42ce38;
        case 0x42ce3cu: goto label_42ce3c;
        case 0x42ce40u: goto label_42ce40;
        case 0x42ce44u: goto label_42ce44;
        case 0x42ce48u: goto label_42ce48;
        case 0x42ce4cu: goto label_42ce4c;
        case 0x42ce50u: goto label_42ce50;
        case 0x42ce54u: goto label_42ce54;
        case 0x42ce58u: goto label_42ce58;
        case 0x42ce5cu: goto label_42ce5c;
        case 0x42ce60u: goto label_42ce60;
        case 0x42ce64u: goto label_42ce64;
        case 0x42ce68u: goto label_42ce68;
        case 0x42ce6cu: goto label_42ce6c;
        case 0x42ce70u: goto label_42ce70;
        case 0x42ce74u: goto label_42ce74;
        case 0x42ce78u: goto label_42ce78;
        case 0x42ce7cu: goto label_42ce7c;
        case 0x42ce80u: goto label_42ce80;
        case 0x42ce84u: goto label_42ce84;
        case 0x42ce88u: goto label_42ce88;
        case 0x42ce8cu: goto label_42ce8c;
        case 0x42ce90u: goto label_42ce90;
        case 0x42ce94u: goto label_42ce94;
        case 0x42ce98u: goto label_42ce98;
        case 0x42ce9cu: goto label_42ce9c;
        case 0x42cea0u: goto label_42cea0;
        case 0x42cea4u: goto label_42cea4;
        case 0x42cea8u: goto label_42cea8;
        case 0x42ceacu: goto label_42ceac;
        case 0x42ceb0u: goto label_42ceb0;
        case 0x42ceb4u: goto label_42ceb4;
        case 0x42ceb8u: goto label_42ceb8;
        case 0x42cebcu: goto label_42cebc;
        case 0x42cec0u: goto label_42cec0;
        case 0x42cec4u: goto label_42cec4;
        case 0x42cec8u: goto label_42cec8;
        case 0x42ceccu: goto label_42cecc;
        case 0x42ced0u: goto label_42ced0;
        case 0x42ced4u: goto label_42ced4;
        case 0x42ced8u: goto label_42ced8;
        case 0x42cedcu: goto label_42cedc;
        case 0x42cee0u: goto label_42cee0;
        case 0x42cee4u: goto label_42cee4;
        case 0x42cee8u: goto label_42cee8;
        case 0x42ceecu: goto label_42ceec;
        case 0x42cef0u: goto label_42cef0;
        case 0x42cef4u: goto label_42cef4;
        case 0x42cef8u: goto label_42cef8;
        case 0x42cefcu: goto label_42cefc;
        case 0x42cf00u: goto label_42cf00;
        case 0x42cf04u: goto label_42cf04;
        case 0x42cf08u: goto label_42cf08;
        case 0x42cf0cu: goto label_42cf0c;
        case 0x42cf10u: goto label_42cf10;
        case 0x42cf14u: goto label_42cf14;
        case 0x42cf18u: goto label_42cf18;
        case 0x42cf1cu: goto label_42cf1c;
        case 0x42cf20u: goto label_42cf20;
        case 0x42cf24u: goto label_42cf24;
        case 0x42cf28u: goto label_42cf28;
        case 0x42cf2cu: goto label_42cf2c;
        case 0x42cf30u: goto label_42cf30;
        case 0x42cf34u: goto label_42cf34;
        case 0x42cf38u: goto label_42cf38;
        case 0x42cf3cu: goto label_42cf3c;
        case 0x42cf40u: goto label_42cf40;
        case 0x42cf44u: goto label_42cf44;
        case 0x42cf48u: goto label_42cf48;
        case 0x42cf4cu: goto label_42cf4c;
        case 0x42cf50u: goto label_42cf50;
        case 0x42cf54u: goto label_42cf54;
        case 0x42cf58u: goto label_42cf58;
        case 0x42cf5cu: goto label_42cf5c;
        case 0x42cf60u: goto label_42cf60;
        case 0x42cf64u: goto label_42cf64;
        case 0x42cf68u: goto label_42cf68;
        case 0x42cf6cu: goto label_42cf6c;
        default: break;
    }

    ctx->pc = 0x42ce28u;

label_42ce28:
    // 0x42ce28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x42ce28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_42ce2c:
    // 0x42ce2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42ce30:
    // 0x42ce30: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x42ce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_42ce34:
    // 0x42ce34: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x42ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_42ce38:
    // 0x42ce38: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x42ce38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_42ce3c:
    // 0x42ce3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x42ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_42ce40:
    // 0x42ce40: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x42ce40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42ce44:
    // 0x42ce44: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x42ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_42ce48:
    // 0x42ce48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x42ce48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42ce4c:
    // 0x42ce4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_42ce50:
    // 0x42ce50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42ce50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ce54:
    // 0x42ce54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x42ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_42ce58:
    // 0x42ce58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42ce58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42ce5c:
    // 0x42ce5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42ce5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_42ce60:
    // 0x42ce60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42ce60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_42ce64:
    // 0x42ce64: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_42ce68:
    if (ctx->pc == 0x42CE68u) {
        ctx->pc = 0x42CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE64u;
        // 0x42ce68: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CE6Cu;
        goto label_42ce6c;
    }
    ctx->pc = 0x42CE64u;
    {
        const bool branch_taken_0x42ce64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE64u;
        // 0x42ce68: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ce64) {
            ctx->pc = 0x42CF40u;
            goto label_42cf40;
        }
    }
    ctx->pc = 0x42CE6Cu;
label_42ce6c:
    // 0x42ce6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42ce6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ce70:
    // 0x42ce70: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_42ce74:
    if (ctx->pc == 0x42CE74u) {
        ctx->pc = 0x42CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE70u;
        // 0x42ce74: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CE78u;
        goto label_42ce78;
    }
    ctx->pc = 0x42CE70u;
    {
        const bool branch_taken_0x42ce70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE70u;
        // 0x42ce74: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ce70) {
            ctx->pc = 0x42CEA4u;
            goto label_42cea4;
        }
    }
    ctx->pc = 0x42CE78u;
label_42ce78:
    // 0x42ce78: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x42ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_42ce7c:
    // 0x42ce7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x42ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42ce80:
    // 0x42ce80: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x42ce80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_42ce84:
    // 0x42ce84: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x42ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_42ce88:
    // 0x42ce88: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x42ce88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_42ce8c:
    // 0x42ce8c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x42ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_42ce90:
    // 0x42ce90: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x42ce90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_42ce94:
    // 0x42ce94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ce98:
    // 0x42ce98: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x42ce98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_42ce9c:
    // 0x42ce9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_42cea0:
    if (ctx->pc == 0x42CEA0u) {
        ctx->pc = 0x42CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE9Cu;
        // 0x42cea0: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CEA4u;
        goto label_42cea4;
    }
    ctx->pc = 0x42CE9Cu;
    {
        const bool branch_taken_0x42ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CE9Cu;
        // 0x42cea0: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ce9c) {
            ctx->pc = 0x42CEA8u;
            goto label_42cea8;
        }
    }
    ctx->pc = 0x42CEA4u;
label_42cea4:
    // 0x42cea4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x42cea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_42cea8:
    // 0x42cea8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x42cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_42ceac:
    // 0x42ceac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x42ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_42ceb0:
    // 0x42ceb0: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x42ceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_42ceb4:
    // 0x42ceb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42ceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_42ceb8:
    // 0x42ceb8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x42ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42cebc:
    // 0x42cebc: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_42cec0:
    if (ctx->pc == 0x42CEC0u) {
        ctx->pc = 0x42CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CEBCu;
        // 0x42cec0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CEC4u;
        goto label_42cec4;
    }
    ctx->pc = 0x42CEBCu;
    {
        const bool branch_taken_0x42cebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x42CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CEBCu;
        // 0x42cec0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cebc) {
            ctx->pc = 0x42CF40u;
            goto label_42cf40;
        }
    }
    ctx->pc = 0x42CEC4u;
label_42cec4:
    // 0x42cec4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x42cec4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_42cec8:
    // 0x42cec8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x42cec8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_42cecc:
    // 0x42cecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42ced0:
    // 0x42ced0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x42ced0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42ced4:
    // 0x42ced4: 0x0  nop
    ctx->pc = 0x42ced4u;
    // NOP
label_42ced8:
    // 0x42ced8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_42cedc:
    if (ctx->pc == 0x42CEDCu) {
        ctx->pc = 0x42CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CED8u;
        // 0x42cedc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CEE0u;
        goto label_42cee0;
    }
    ctx->pc = 0x42CED8u;
    {
        const bool branch_taken_0x42ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42ced8) {
            ctx->pc = 0x42CEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CED8u;
            // 0x42cedc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CF34u;
            goto label_42cf34;
        }
    }
    ctx->pc = 0x42CEE0u;
label_42cee0:
    // 0x42cee0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x42cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42cee4:
    // 0x42cee4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x42cee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42cee8:
    // 0x42cee8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_42ceec:
    if (ctx->pc == 0x42CEECu) {
        ctx->pc = 0x42CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CEE8u;
        // 0x42ceec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CEF0u;
        goto label_42cef0;
    }
    ctx->pc = 0x42CEE8u;
    {
        const bool branch_taken_0x42cee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cee8) {
            ctx->pc = 0x42CEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CEE8u;
            // 0x42ceec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CF34u;
            goto label_42cf34;
        }
    }
    ctx->pc = 0x42CEF0u;
label_42cef0:
    // 0x42cef0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x42cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_42cef4:
    // 0x42cef4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_42cef8:
    if (ctx->pc == 0x42CEF8u) {
        ctx->pc = 0x42CEFCu;
        goto label_42cefc;
    }
    ctx->pc = 0x42CEF4u;
    {
        const bool branch_taken_0x42cef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cef4) {
            ctx->pc = 0x42CF28u;
            goto label_42cf28;
        }
    }
    ctx->pc = 0x42CEFCu;
label_42cefc:
    // 0x42cefc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x42cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_42cf00:
    // 0x42cf00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_42cf04:
    if (ctx->pc == 0x42CF04u) {
        ctx->pc = 0x42CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF00u;
        // 0x42cf04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF08u;
        goto label_42cf08;
    }
    ctx->pc = 0x42CF00u;
    {
        const bool branch_taken_0x42cf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF00u;
        // 0x42cf04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cf00) {
            ctx->pc = 0x42CF30u;
            goto label_42cf30;
        }
    }
    ctx->pc = 0x42CF08u;
label_42cf08:
    // 0x42cf08: 0x40f809  jalr        $v0
label_42cf0c:
    if (ctx->pc == 0x42CF0Cu) {
        ctx->pc = 0x42CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF08u;
        // 0x42cf0c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF10u;
        goto label_42cf10;
    }
    ctx->pc = 0x42CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42CF10u);
        ctx->pc = 0x42CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF08u;
        // 0x42cf0c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CF08u, 0x42CF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42CF10u;
label_42cf10:
    // 0x42cf10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_42cf14:
    if (ctx->pc == 0x42CF14u) {
        ctx->pc = 0x42CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF10u;
        // 0x42cf14: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF18u;
        goto label_42cf18;
    }
    ctx->pc = 0x42CF10u;
    {
        const bool branch_taken_0x42cf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cf10) {
            ctx->pc = 0x42CF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CF10u;
            // 0x42cf14: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CF34u;
            goto label_42cf34;
        }
    }
    ctx->pc = 0x42CF18u;
label_42cf18:
    // 0x42cf18: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_42cf1c:
    if (ctx->pc == 0x42CF1Cu) {
        ctx->pc = 0x42CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF18u;
        // 0x42cf1c: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF20u;
        goto label_42cf20;
    }
    ctx->pc = 0x42CF18u;
    {
        const bool branch_taken_0x42cf18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cf18) {
            ctx->pc = 0x42CF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CF18u;
            // 0x42cf1c: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CF20u;
            goto label_42cf20;
        }
    }
    ctx->pc = 0x42CF20u;
label_42cf20:
    // 0x42cf20: 0x10000007  b           . + 4 + (0x7 << 2)
label_42cf24:
    if (ctx->pc == 0x42CF24u) {
        ctx->pc = 0x42CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF20u;
        // 0x42cf24: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF28u;
        goto label_42cf28;
    }
    ctx->pc = 0x42CF20u;
    {
        const bool branch_taken_0x42cf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF20u;
        // 0x42cf24: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cf20) {
            ctx->pc = 0x42CF40u;
            goto label_42cf40;
        }
    }
    ctx->pc = 0x42CF28u;
label_42cf28:
    // 0x42cf28: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_42cf2c:
    if (ctx->pc == 0x42CF2Cu) {
        ctx->pc = 0x42CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF28u;
        // 0x42cf2c: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF30u;
        goto label_42cf30;
    }
    ctx->pc = 0x42CF28u;
    {
        const bool branch_taken_0x42cf28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cf28) {
            ctx->pc = 0x42CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CF28u;
            // 0x42cf2c: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CF30u;
            goto label_42cf30;
        }
    }
    ctx->pc = 0x42CF30u;
label_42cf30:
    // 0x42cf30: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x42cf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42cf34:
    // 0x42cf34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x42cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42cf38:
    // 0x42cf38: 0x1452ffe7  bne         $v0, $s2, . + 4 + (-0x19 << 2)
label_42cf3c:
    if (ctx->pc == 0x42CF3Cu) {
        ctx->pc = 0x42CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF38u;
        // 0x42cf3c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF40u;
        goto label_42cf40;
    }
    ctx->pc = 0x42CF38u;
    {
        const bool branch_taken_0x42cf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x42CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF38u;
        // 0x42cf3c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cf38) {
            ctx->pc = 0x42CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ced8;
        }
    }
    ctx->pc = 0x42CF40u;
label_42cf40:
    // 0x42cf40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42cf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42cf44:
    // 0x42cf44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x42cf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_42cf48:
    // 0x42cf48: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x42cf48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_42cf4c:
    // 0x42cf4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x42cf4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42cf50:
    // 0x42cf50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x42cf50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42cf54:
    // 0x42cf54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x42cf54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42cf58:
    // 0x42cf58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42cf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42cf5c:
    // 0x42cf5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42cf5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42cf60:
    // 0x42cf60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42cf60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42cf64:
    // 0x42cf64: 0x3e00008  jr          $ra
label_42cf68:
    if (ctx->pc == 0x42CF68u) {
        ctx->pc = 0x42CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF64u;
        // 0x42cf68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42CF6Cu;
        goto label_42cf6c;
    }
    ctx->pc = 0x42CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF64u;
        // 0x42cf68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42CF6Cu;
label_42cf6c:
    // 0x42cf6c: 0x0  nop
    ctx->pc = 0x42cf6cu;
    // NOP
    ctx->pc = 0x42cf70u;
}
