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

// Function: sub_002C0CA8
// Address: 0x2c0ca8 - 0x2c0dd0
void sub_002C0CA8_0x2c0ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0CA8_0x2c0ca8");
#endif

    switch (ctx->pc) {
        case 0x2c0d18u: goto label_2c0d18;
        case 0x2c0d24u: goto label_2c0d24;
        case 0x2c0d2cu: goto label_2c0d2c;
        default: break;
    }

    ctx->pc = 0x2c0ca8u;

    // 0x2c0ca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c0cac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2c0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2c0cb0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c0cb4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2c0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2c0cb8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2c0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2c0cbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c0cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0cc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c0cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c0cc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c0cc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0cc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c0cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c0ccc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c0cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c0cd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0cd4: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x2c0cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2c0cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0cdc: 0x79400  sll         $s2, $a3, 16
    ctx->pc = 0x2c0cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2c0ce0: 0x24420b10  addiu       $v0, $v0, 0xB10
    ctx->pc = 0x2c0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x2c0ce4: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x2c0ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x2c0ce8: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2c0ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
    // 0x2c0cec: 0xa2600004  sb          $zero, 0x4($s3)
    ctx->pc = 0x2c0cecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0cf0: 0xa2600005  sb          $zero, 0x5($s3)
    ctx->pc = 0x2c0cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0cf4: 0x248450c8  addiu       $a0, $a0, 0x50C8
    ctx->pc = 0x2c0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20680));
    // 0x2c0cf8: 0xa6600024  sh          $zero, 0x24($s3)
    ctx->pc = 0x2c0cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c0cfc: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x2c0cfcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2c0d00: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x2c0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
    // 0x2c0d04: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x2c0d04u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x2c0d08: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x2c0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x2c0d0c: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x2c0d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2c0d10: 0xc105712  jal         func_415C48
    ctx->pc = 0x2C0D10u;
    SET_GPR_U32(ctx, 31, 0x2C0D18u);
    ctx->pc = 0x2C0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D10u;
    // 0x2c0d14: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x2C0D10u, 0x2C0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D18u;
label_2c0d18:
    // 0x2c0d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d1c: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2C0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C0D24u);
    ctx->pc = 0x2C0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D1Cu;
    // 0x2c0d20: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C0D1Cu, 0x2C0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D24u;
label_2c0d24:
    // 0x2c0d24: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2C0D24u;
    SET_GPR_U32(ctx, 31, 0x2C0D2Cu);
    ctx->pc = 0x2C0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D24u;
    // 0x2c0d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C0D24u, 0x2C0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D2Cu;
label_2c0d2c:
    // 0x2c0d2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c0d2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0d30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c0d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0d38: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x2c0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x2c0d3c: 0xa282028d  sb          $v0, 0x28D($s4)
    ctx->pc = 0x2c0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 653), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0d40: 0x86840210  lh          $a0, 0x210($s4)
    ctx->pc = 0x2c0d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 528)));
    // 0x2c0d44: 0x10860017  beq         $a0, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C0D44u;
    {
        const bool branch_taken_0x2c0d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D44u;
        // 0x2c0d48: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d44) {
            ctx->pc = 0x2C0DA4u;
            goto label_2c0da4;
        }
    }
    ctx->pc = 0x2C0D4Cu;
    // 0x2c0d4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c0d50: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2c0d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c0d54: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2c0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x2c0d58: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x2c0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2c0d5c: 0x16260008  bne         $s1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0D5Cu;
    {
        const bool branch_taken_0x2c0d5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x2C0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D5Cu;
        // 0x2c0d60: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d5c) {
            ctx->pc = 0x2C0D80u;
            goto label_2c0d80;
        }
    }
    ctx->pc = 0x2C0D64u;
    // 0x2c0d64: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c0d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2c0d68: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c0d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0d6c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x2c0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2c0d70: 0x90620291  lbu         $v0, 0x291($v1)
    ctx->pc = 0x2c0d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 657)));
    // 0x2c0d74: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2c0d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c0d78: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2c0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c0d7c: 0x84510090  lh          $s1, 0x90($v0)
    ctx->pc = 0x2c0d7cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_2c0d80:
    // 0x2c0d80: 0x56460009  bnel        $s2, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C0D80u;
    {
        const bool branch_taken_0x2c0d80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c0d80) {
            ctx->pc = 0x2C0D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0D80u;
            // 0x2c0d84: 0xa692027a  sh          $s2, 0x27A($s4) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 20), 634), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0DA8u;
            goto label_2c0da8;
        }
    }
    ctx->pc = 0x2C0D88u;
    // 0x2c0d88: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2c0d8c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0d90: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x2c0d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2c0d94: 0x90620291  lbu         $v0, 0x291($v1)
    ctx->pc = 0x2c0d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 657)));
    // 0x2c0d98: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2c0d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c0d9c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2c0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c0da0: 0x84520094  lh          $s2, 0x94($v0)
    ctx->pc = 0x2c0da0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
label_2c0da4:
    // 0x2c0da4: 0xa692027a  sh          $s2, 0x27A($s4)
    ctx->pc = 0x2c0da4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 634), (uint16_t)GPR_U32(ctx, 18));
label_2c0da8:
    // 0x2c0da8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c0da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dac: 0xa6910278  sh          $s1, 0x278($s4)
    ctx->pc = 0x2c0dacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 632), (uint16_t)GPR_U32(ctx, 17));
    // 0x2c0db0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c0db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0db4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c0db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0db8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0dbc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c0dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0dc0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2c0dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DC8u;
        // 0x2c0dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0DD0u;
}
