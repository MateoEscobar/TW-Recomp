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

// Function: sub_001ABBF8
// Address: 0x1abbf8 - 0x1abd30
void sub_001ABBF8_0x1abbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABBF8_0x1abbf8");
#endif

    switch (ctx->pc) {
        case 0x1abbf8u: goto label_1abbf8;
        case 0x1abbfcu: goto label_1abbfc;
        case 0x1abc00u: goto label_1abc00;
        case 0x1abc04u: goto label_1abc04;
        case 0x1abc08u: goto label_1abc08;
        case 0x1abc0cu: goto label_1abc0c;
        case 0x1abc10u: goto label_1abc10;
        case 0x1abc14u: goto label_1abc14;
        case 0x1abc18u: goto label_1abc18;
        case 0x1abc1cu: goto label_1abc1c;
        case 0x1abc20u: goto label_1abc20;
        case 0x1abc24u: goto label_1abc24;
        case 0x1abc28u: goto label_1abc28;
        case 0x1abc2cu: goto label_1abc2c;
        case 0x1abc30u: goto label_1abc30;
        case 0x1abc34u: goto label_1abc34;
        case 0x1abc38u: goto label_1abc38;
        case 0x1abc3cu: goto label_1abc3c;
        case 0x1abc40u: goto label_1abc40;
        case 0x1abc44u: goto label_1abc44;
        case 0x1abc48u: goto label_1abc48;
        case 0x1abc4cu: goto label_1abc4c;
        case 0x1abc50u: goto label_1abc50;
        case 0x1abc54u: goto label_1abc54;
        case 0x1abc58u: goto label_1abc58;
        case 0x1abc5cu: goto label_1abc5c;
        case 0x1abc60u: goto label_1abc60;
        case 0x1abc64u: goto label_1abc64;
        case 0x1abc68u: goto label_1abc68;
        case 0x1abc6cu: goto label_1abc6c;
        case 0x1abc70u: goto label_1abc70;
        case 0x1abc74u: goto label_1abc74;
        case 0x1abc78u: goto label_1abc78;
        case 0x1abc7cu: goto label_1abc7c;
        case 0x1abc80u: goto label_1abc80;
        case 0x1abc84u: goto label_1abc84;
        case 0x1abc88u: goto label_1abc88;
        case 0x1abc8cu: goto label_1abc8c;
        case 0x1abc90u: goto label_1abc90;
        case 0x1abc94u: goto label_1abc94;
        case 0x1abc98u: goto label_1abc98;
        case 0x1abc9cu: goto label_1abc9c;
        case 0x1abca0u: goto label_1abca0;
        case 0x1abca4u: goto label_1abca4;
        case 0x1abca8u: goto label_1abca8;
        case 0x1abcacu: goto label_1abcac;
        case 0x1abcb0u: goto label_1abcb0;
        case 0x1abcb4u: goto label_1abcb4;
        case 0x1abcb8u: goto label_1abcb8;
        case 0x1abcbcu: goto label_1abcbc;
        case 0x1abcc0u: goto label_1abcc0;
        case 0x1abcc4u: goto label_1abcc4;
        case 0x1abcc8u: goto label_1abcc8;
        case 0x1abcccu: goto label_1abccc;
        case 0x1abcd0u: goto label_1abcd0;
        case 0x1abcd4u: goto label_1abcd4;
        case 0x1abcd8u: goto label_1abcd8;
        case 0x1abcdcu: goto label_1abcdc;
        case 0x1abce0u: goto label_1abce0;
        case 0x1abce4u: goto label_1abce4;
        case 0x1abce8u: goto label_1abce8;
        case 0x1abcecu: goto label_1abcec;
        case 0x1abcf0u: goto label_1abcf0;
        case 0x1abcf4u: goto label_1abcf4;
        case 0x1abcf8u: goto label_1abcf8;
        case 0x1abcfcu: goto label_1abcfc;
        case 0x1abd00u: goto label_1abd00;
        case 0x1abd04u: goto label_1abd04;
        case 0x1abd08u: goto label_1abd08;
        case 0x1abd0cu: goto label_1abd0c;
        case 0x1abd10u: goto label_1abd10;
        case 0x1abd14u: goto label_1abd14;
        case 0x1abd18u: goto label_1abd18;
        case 0x1abd1cu: goto label_1abd1c;
        case 0x1abd20u: goto label_1abd20;
        case 0x1abd24u: goto label_1abd24;
        case 0x1abd28u: goto label_1abd28;
        case 0x1abd2cu: goto label_1abd2c;
        default: break;
    }

    ctx->pc = 0x1abbf8u;

label_1abbf8:
    // 0x1abbf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1abbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1abbfc:
    // 0x1abbfc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1abbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1abc00:
    // 0x1abc00: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1abc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1abc04:
    // 0x1abc04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1abc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abc08:
    // 0x1abc08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1abc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1abc0c:
    // 0x1abc0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1abc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1abc10:
    // 0x1abc10: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1abc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1abc14:
    // 0x1abc14: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1abc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1abc18:
    // 0x1abc18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1abc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1abc1c:
    // 0x1abc1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1abc20:
    // 0x1abc20: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1abc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1abc24:
    // 0x1abc24: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1abc28:
    if (ctx->pc == 0x1ABC28u) {
        ctx->pc = 0x1ABC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC24u;
        // 0x1abc28: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC2Cu;
        goto label_1abc2c;
    }
    ctx->pc = 0x1ABC24u;
    {
        const bool branch_taken_0x1abc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC24u;
        // 0x1abc28: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc24) {
            ctx->pc = 0x1ABD0Cu;
            goto label_1abd0c;
        }
    }
    ctx->pc = 0x1ABC2Cu;
label_1abc2c:
    // 0x1abc2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1abc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1abc30:
    // 0x1abc30: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1abc30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1abc34:
    // 0x1abc34: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1abc34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1abc38:
    // 0x1abc38: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1abc38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1abc3c:
    // 0x1abc3c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1abc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1abc40:
    // 0x1abc40: 0x60f809  jalr        $v1
label_1abc44:
    if (ctx->pc == 0x1ABC44u) {
        ctx->pc = 0x1ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC40u;
        // 0x1abc44: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC48u;
        goto label_1abc48;
    }
    ctx->pc = 0x1ABC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ABC48u);
        ctx->pc = 0x1ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC40u;
        // 0x1abc44: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABC40u, 0x1ABC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABC48u;
label_1abc48:
    // 0x1abc48: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x1abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1abc4c:
    // 0x1abc4c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1abc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1abc50:
    // 0x1abc50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1abc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1abc54:
    // 0x1abc54: 0x12430022  beq         $s2, $v1, . + 4 + (0x22 << 2)
label_1abc58:
    if (ctx->pc == 0x1ABC58u) {
        ctx->pc = 0x1ABC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC54u;
        // 0x1abc58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC5Cu;
        goto label_1abc5c;
    }
    ctx->pc = 0x1ABC54u;
    {
        const bool branch_taken_0x1abc54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ABC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC54u;
        // 0x1abc58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc54) {
            ctx->pc = 0x1ABCE0u;
            goto label_1abce0;
        }
    }
    ctx->pc = 0x1ABC5Cu;
label_1abc5c:
    // 0x1abc5c: 0x3c160055  lui         $s6, 0x55
    ctx->pc = 0x1abc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)85 << 16));
label_1abc60:
    // 0x1abc60: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1abc60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1abc64:
    // 0x1abc64: 0x0  nop
    ctx->pc = 0x1abc64u;
    // NOP
label_1abc68:
    // 0x1abc68: 0x5220001a  beql        $s1, $zero, . + 4 + (0x1A << 2)
label_1abc6c:
    if (ctx->pc == 0x1ABC6Cu) {
        ctx->pc = 0x1ABC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC68u;
        // 0x1abc6c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC70u;
        goto label_1abc70;
    }
    ctx->pc = 0x1ABC68u;
    {
        const bool branch_taken_0x1abc68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abc68) {
            ctx->pc = 0x1ABC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABC68u;
            // 0x1abc6c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABCD4u;
            goto label_1abcd4;
        }
    }
    ctx->pc = 0x1ABC70u;
label_1abc70:
    // 0x1abc70: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x1abc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1abc74:
    // 0x1abc74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1abc78:
    if (ctx->pc == 0x1ABC78u) {
        ctx->pc = 0x1ABC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC74u;
        // 0x1abc78: 0x3c150055  lui         $s5, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC7Cu;
        goto label_1abc7c;
    }
    ctx->pc = 0x1ABC74u;
    {
        const bool branch_taken_0x1abc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC74u;
        // 0x1abc78: 0x3c150055  lui         $s5, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc74) {
            ctx->pc = 0x1ABCC0u;
            goto label_1abcc0;
        }
    }
    ctx->pc = 0x1ABC7Cu;
label_1abc7c:
    // 0x1abc7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1abc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1abc80:
    // 0x1abc80: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1abc84:
    // 0x1abc84: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1abc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1abc88:
    // 0x1abc88: 0x40f809  jalr        $v0
label_1abc8c:
    if (ctx->pc == 0x1ABC8Cu) {
        ctx->pc = 0x1ABC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC88u;
        // 0x1abc8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC90u;
        goto label_1abc90;
    }
    ctx->pc = 0x1ABC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABC90u);
        ctx->pc = 0x1ABC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC88u;
        // 0x1abc8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABC88u, 0x1ABC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABC90u;
label_1abc90:
    // 0x1abc90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1abc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abc94:
    // 0x1abc94: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_1abc98:
    if (ctx->pc == 0x1ABC98u) {
        ctx->pc = 0x1ABC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC94u;
        // 0x1abc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABC9Cu;
        goto label_1abc9c;
    }
    ctx->pc = 0x1ABC94u;
    {
        const bool branch_taken_0x1abc94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abc94) {
            ctx->pc = 0x1ABC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABC94u;
            // 0x1abc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABCC4u;
            goto label_1abcc4;
        }
    }
    ctx->pc = 0x1ABC9Cu;
label_1abc9c:
    // 0x1abc9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1abc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abca0:
    // 0x1abca0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1abca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1abca4:
    // 0x1abca4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1abca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1abca8:
    // 0x1abca8: 0x60f809  jalr        $v1
label_1abcac:
    if (ctx->pc == 0x1ABCACu) {
        ctx->pc = 0x1ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCA8u;
        // 0x1abcac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCB0u;
        goto label_1abcb0;
    }
    ctx->pc = 0x1ABCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ABCB0u);
        ctx->pc = 0x1ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCA8u;
        // 0x1abcac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABCA8u, 0x1ABCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABCB0u;
label_1abcb0:
    // 0x1abcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abcb4:
    // 0x1abcb4: 0x26c544c8  addiu       $a1, $s6, 0x44C8
    ctx->pc = 0x1abcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17608));
label_1abcb8:
    // 0x1abcb8: 0xc1391da  jal         func_4E4768
label_1abcbc:
    if (ctx->pc == 0x1ABCBCu) {
        ctx->pc = 0x1ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCB8u;
        // 0x1abcbc: 0x24060099  addiu       $a2, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCC0u;
        goto label_1abcc0;
    }
    ctx->pc = 0x1ABCB8u;
    SET_GPR_U32(ctx, 31, 0x1ABCC0u);
    ctx->pc = 0x1ABCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCB8u;
    // 0x1abcbc: 0x24060099  addiu       $a2, $zero, 0x99 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4768u, 0x1ABCB8u, 0x1ABCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCC0u;
label_1abcc0:
    // 0x1abcc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abcc4:
    // 0x1abcc4: 0x26a544c8  addiu       $a1, $s5, 0x44C8
    ctx->pc = 0x1abcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 17608));
label_1abcc8:
    // 0x1abcc8: 0xc1391fa  jal         func_4E47E8
label_1abccc:
    if (ctx->pc == 0x1ABCCCu) {
        ctx->pc = 0x1ABCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCC8u;
        // 0x1abccc: 0x2406009d  addiu       $a2, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCD0u;
        goto label_1abcd0;
    }
    ctx->pc = 0x1ABCC8u;
    SET_GPR_U32(ctx, 31, 0x1ABCD0u);
    ctx->pc = 0x1ABCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCC8u;
    // 0x1abccc: 0x2406009d  addiu       $a2, $zero, 0x9D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E47E8u, 0x1ABCC8u, 0x1ABCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCD0u;
label_1abcd0:
    // 0x1abcd0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1abcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1abcd4:
    // 0x1abcd4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1abcd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1abcd8:
    // 0x1abcd8: 0x5642ffe3  bnel        $s2, $v0, . + 4 + (-0x1D << 2)
label_1abcdc:
    if (ctx->pc == 0x1ABCDCu) {
        ctx->pc = 0x1ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCD8u;
        // 0x1abcdc: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCE0u;
        goto label_1abce0;
    }
    ctx->pc = 0x1ABCD8u;
    {
        const bool branch_taken_0x1abcd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abcd8) {
            ctx->pc = 0x1ABCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABCD8u;
            // 0x1abcdc: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abc68;
        }
    }
    ctx->pc = 0x1ABCE0u;
label_1abce0:
    // 0x1abce0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x1abce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1abce4:
    // 0x1abce4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abce8:
    // 0x1abce8: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1abce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1abcec:
    // 0x1abcec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1abcf0:
    // 0x1abcf0: 0xc10c1bb  jal         func_4306EC
label_1abcf4:
    if (ctx->pc == 0x1ABCF4u) {
        ctx->pc = 0x1ABCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCF0u;
        // 0x1abcf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABCF8u;
        goto label_1abcf8;
    }
    ctx->pc = 0x1ABCF0u;
    SET_GPR_U32(ctx, 31, 0x1ABCF8u);
    ctx->pc = 0x1ABCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCF0u;
    // 0x1abcf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1ABCF0u, 0x1ABCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCF8u;
label_1abcf8:
    // 0x1abcf8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1abcfc:
    // 0x1abcfc: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1abcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1abd00:
    // 0x1abd00: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1abd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1abd04:
    // 0x1abd04: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1abd04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1abd08:
    // 0x1abd08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1abd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1abd0c:
    // 0x1abd0c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1abd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1abd10:
    // 0x1abd10: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1abd10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1abd14:
    // 0x1abd14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1abd14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1abd18:
    // 0x1abd18: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1abd18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1abd1c:
    // 0x1abd1c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1abd1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1abd20:
    // 0x1abd20: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1abd20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abd24:
    // 0x1abd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1abd28:
    // 0x1abd28: 0x3e00008  jr          $ra
label_1abd2c:
    if (ctx->pc == 0x1ABD2Cu) {
        ctx->pc = 0x1ABD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD28u;
        // 0x1abd2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABD30u;
        goto label_fallthrough_0x1abd28;
    }
    ctx->pc = 0x1ABD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD28u;
        // 0x1abd2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1abd28:
    ctx->pc = 0x1ABD30u;
}
