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

// Function: sub_004CBE58
// Address: 0x4cbe58 - 0x4cc008
void sub_004CBE58_0x4cbe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBE58_0x4cbe58");
#endif

    switch (ctx->pc) {
        case 0x4cbe58u: goto label_4cbe58;
        case 0x4cbe5cu: goto label_4cbe5c;
        case 0x4cbe60u: goto label_4cbe60;
        case 0x4cbe64u: goto label_4cbe64;
        case 0x4cbe68u: goto label_4cbe68;
        case 0x4cbe6cu: goto label_4cbe6c;
        case 0x4cbe70u: goto label_4cbe70;
        case 0x4cbe74u: goto label_4cbe74;
        case 0x4cbe78u: goto label_4cbe78;
        case 0x4cbe7cu: goto label_4cbe7c;
        case 0x4cbe80u: goto label_4cbe80;
        case 0x4cbe84u: goto label_4cbe84;
        case 0x4cbe88u: goto label_4cbe88;
        case 0x4cbe8cu: goto label_4cbe8c;
        case 0x4cbe90u: goto label_4cbe90;
        case 0x4cbe94u: goto label_4cbe94;
        case 0x4cbe98u: goto label_4cbe98;
        case 0x4cbe9cu: goto label_4cbe9c;
        case 0x4cbea0u: goto label_4cbea0;
        case 0x4cbea4u: goto label_4cbea4;
        case 0x4cbea8u: goto label_4cbea8;
        case 0x4cbeacu: goto label_4cbeac;
        case 0x4cbeb0u: goto label_4cbeb0;
        case 0x4cbeb4u: goto label_4cbeb4;
        case 0x4cbeb8u: goto label_4cbeb8;
        case 0x4cbebcu: goto label_4cbebc;
        case 0x4cbec0u: goto label_4cbec0;
        case 0x4cbec4u: goto label_4cbec4;
        case 0x4cbec8u: goto label_4cbec8;
        case 0x4cbeccu: goto label_4cbecc;
        case 0x4cbed0u: goto label_4cbed0;
        case 0x4cbed4u: goto label_4cbed4;
        case 0x4cbed8u: goto label_4cbed8;
        case 0x4cbedcu: goto label_4cbedc;
        case 0x4cbee0u: goto label_4cbee0;
        case 0x4cbee4u: goto label_4cbee4;
        case 0x4cbee8u: goto label_4cbee8;
        case 0x4cbeecu: goto label_4cbeec;
        case 0x4cbef0u: goto label_4cbef0;
        case 0x4cbef4u: goto label_4cbef4;
        case 0x4cbef8u: goto label_4cbef8;
        case 0x4cbefcu: goto label_4cbefc;
        case 0x4cbf00u: goto label_4cbf00;
        case 0x4cbf04u: goto label_4cbf04;
        case 0x4cbf08u: goto label_4cbf08;
        case 0x4cbf0cu: goto label_4cbf0c;
        case 0x4cbf10u: goto label_4cbf10;
        case 0x4cbf14u: goto label_4cbf14;
        case 0x4cbf18u: goto label_4cbf18;
        case 0x4cbf1cu: goto label_4cbf1c;
        case 0x4cbf20u: goto label_4cbf20;
        case 0x4cbf24u: goto label_4cbf24;
        case 0x4cbf28u: goto label_4cbf28;
        case 0x4cbf2cu: goto label_4cbf2c;
        case 0x4cbf30u: goto label_4cbf30;
        case 0x4cbf34u: goto label_4cbf34;
        case 0x4cbf38u: goto label_4cbf38;
        case 0x4cbf3cu: goto label_4cbf3c;
        case 0x4cbf40u: goto label_4cbf40;
        case 0x4cbf44u: goto label_4cbf44;
        case 0x4cbf48u: goto label_4cbf48;
        case 0x4cbf4cu: goto label_4cbf4c;
        case 0x4cbf50u: goto label_4cbf50;
        case 0x4cbf54u: goto label_4cbf54;
        case 0x4cbf58u: goto label_4cbf58;
        case 0x4cbf5cu: goto label_4cbf5c;
        case 0x4cbf60u: goto label_4cbf60;
        case 0x4cbf64u: goto label_4cbf64;
        case 0x4cbf68u: goto label_4cbf68;
        case 0x4cbf6cu: goto label_4cbf6c;
        case 0x4cbf70u: goto label_4cbf70;
        case 0x4cbf74u: goto label_4cbf74;
        case 0x4cbf78u: goto label_4cbf78;
        case 0x4cbf7cu: goto label_4cbf7c;
        case 0x4cbf80u: goto label_4cbf80;
        case 0x4cbf84u: goto label_4cbf84;
        case 0x4cbf88u: goto label_4cbf88;
        case 0x4cbf8cu: goto label_4cbf8c;
        case 0x4cbf90u: goto label_4cbf90;
        case 0x4cbf94u: goto label_4cbf94;
        case 0x4cbf98u: goto label_4cbf98;
        case 0x4cbf9cu: goto label_4cbf9c;
        case 0x4cbfa0u: goto label_4cbfa0;
        case 0x4cbfa4u: goto label_4cbfa4;
        case 0x4cbfa8u: goto label_4cbfa8;
        case 0x4cbfacu: goto label_4cbfac;
        case 0x4cbfb0u: goto label_4cbfb0;
        case 0x4cbfb4u: goto label_4cbfb4;
        case 0x4cbfb8u: goto label_4cbfb8;
        case 0x4cbfbcu: goto label_4cbfbc;
        case 0x4cbfc0u: goto label_4cbfc0;
        case 0x4cbfc4u: goto label_4cbfc4;
        case 0x4cbfc8u: goto label_4cbfc8;
        case 0x4cbfccu: goto label_4cbfcc;
        case 0x4cbfd0u: goto label_4cbfd0;
        case 0x4cbfd4u: goto label_4cbfd4;
        case 0x4cbfd8u: goto label_4cbfd8;
        case 0x4cbfdcu: goto label_4cbfdc;
        case 0x4cbfe0u: goto label_4cbfe0;
        case 0x4cbfe4u: goto label_4cbfe4;
        case 0x4cbfe8u: goto label_4cbfe8;
        case 0x4cbfecu: goto label_4cbfec;
        case 0x4cbff0u: goto label_4cbff0;
        case 0x4cbff4u: goto label_4cbff4;
        case 0x4cbff8u: goto label_4cbff8;
        case 0x4cbffcu: goto label_4cbffc;
        case 0x4cc000u: goto label_4cc000;
        case 0x4cc004u: goto label_4cc004;
        default: break;
    }

    ctx->pc = 0x4cbe58u;

label_4cbe58:
    // 0x4cbe58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4cbe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4cbe5c:
    // 0x4cbe5c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cbe60:
    // 0x4cbe60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4cbe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_4cbe64:
    // 0x4cbe64: 0x24424748  addiu       $v0, $v0, 0x4748
    ctx->pc = 0x4cbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18248));
label_4cbe68:
    // 0x4cbe68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cbe68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cbe6c:
    // 0x4cbe6c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4cbe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_4cbe70:
    // 0x4cbe70: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4cbe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_4cbe74:
    // 0x4cbe74: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x4cbe74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_4cbe78:
    // 0x4cbe78: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4cbe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_4cbe7c:
    // 0x4cbe7c: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x4cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_4cbe80:
    // 0x4cbe80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4cbe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_4cbe84:
    // 0x4cbe84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4cbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4cbe88:
    // 0x4cbe88: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4cbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_4cbe8c:
    // 0x4cbe8c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cbe90:
    // 0x4cbe90: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4cbe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_4cbe94:
    // 0x4cbe94: 0x24634788  addiu       $v1, $v1, 0x4788
    ctx->pc = 0x4cbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18312));
label_4cbe98:
    // 0x4cbe98: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4cbe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_4cbe9c:
    // 0x4cbe9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4cbe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4cbea0:
    // 0x4cbea0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4cbea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_4cbea4:
    // 0x4cbea4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4cbea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbea8:
    // 0x4cbea8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4cbea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_4cbeac:
    // 0x4cbeac: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x4cbeacu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
label_4cbeb0:
    // 0x4cbeb0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4cbeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cbeb4:
    // 0x4cbeb4: 0x1204001c  beq         $s0, $a0, . + 4 + (0x1C << 2)
label_4cbeb8:
    if (ctx->pc == 0x4CBEB8u) {
        ctx->pc = 0x4CBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBEB4u;
        // 0x4cbeb8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBEBCu;
        goto label_4cbebc;
    }
    ctx->pc = 0x4CBEB4u;
    {
        const bool branch_taken_0x4cbeb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x4CBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBEB4u;
        // 0x4cbeb8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbeb4) {
            ctx->pc = 0x4CBF28u;
            goto label_4cbf28;
        }
    }
    ctx->pc = 0x4CBEBCu;
label_4cbebc:
    // 0x4cbebc: 0x26c339c0  addiu       $v1, $s6, 0x39C0
    ctx->pc = 0x4cbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 14784));
label_4cbec0:
    // 0x4cbec0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4cbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4cbec4:
    // 0x4cbec4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x4cbec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cbec8:
    // 0x4cbec8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4cbec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cbecc:
    // 0x4cbecc: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x4cbeccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cbed0:
    // 0x4cbed0: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x4cbed0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_4cbed4:
    // 0x4cbed4: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4cbed4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
label_4cbed8:
    // 0x4cbed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cbedc:
    // 0x4cbedc: 0x0  nop
    ctx->pc = 0x4cbedcu;
    // NOP
label_4cbee0:
    // 0x4cbee0: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x4cbee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4cbee4:
    // 0x4cbee4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4cbee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4cbee8:
    // 0x4cbee8: 0x145e000d  bne         $v0, $fp, . + 4 + (0xD << 2)
label_4cbeec:
    if (ctx->pc == 0x4CBEECu) {
        ctx->pc = 0x4CBEF0u;
        goto label_4cbef0;
    }
    ctx->pc = 0x4CBEE8u;
    {
        const bool branch_taken_0x4cbee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x4cbee8) {
            ctx->pc = 0x4CBF20u;
            goto label_4cbf20;
        }
    }
    ctx->pc = 0x4CBEF0u;
label_4cbef0:
    // 0x4cbef0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4cbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4cbef4:
    // 0x4cbef4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4cbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4cbef8:
    // 0x4cbef8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4cbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4cbefc:
    // 0x4cbefc: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x4cbefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_4cbf00:
    // 0x4cbf00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4cbf04:
    if (ctx->pc == 0x4CBF04u) {
        ctx->pc = 0x4CBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF00u;
        // 0x4cbf04: 0xac970008  sw          $s7, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF08u;
        goto label_4cbf08;
    }
    ctx->pc = 0x4CBF00u;
    {
        const bool branch_taken_0x4cbf00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF00u;
        // 0x4cbf04: 0xac970008  sw          $s7, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbf00) {
            ctx->pc = 0x4CBF20u;
            goto label_4cbf20;
        }
    }
    ctx->pc = 0x4CBF08u;
label_4cbf08:
    // 0x4cbf08: 0x8ea23964  lw          $v0, 0x3964($s5)
    ctx->pc = 0x4cbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14692)));
label_4cbf0c:
    // 0x4cbf0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4cbf10:
    if (ctx->pc == 0x4CBF10u) {
        ctx->pc = 0x4CBF14u;
        goto label_4cbf14;
    }
    ctx->pc = 0x4CBF0Cu;
    {
        const bool branch_taken_0x4cbf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cbf0c) {
            ctx->pc = 0x4CBF20u;
            goto label_4cbf20;
        }
    }
    ctx->pc = 0x4CBF14u;
label_4cbf14:
    // 0x4cbf14: 0x60f809  jalr        $v1
label_4cbf18:
    if (ctx->pc == 0x4CBF18u) {
        ctx->pc = 0x4CBF1Cu;
        goto label_4cbf1c;
    }
    ctx->pc = 0x4CBF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CBF1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBF14u, 0x4CBF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CBF1Cu;
label_4cbf1c:
    // 0x4cbf1c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x4cbf1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_4cbf20:
    // 0x4cbf20: 0x1613ffef  bne         $s0, $s3, . + 4 + (-0x11 << 2)
label_4cbf24:
    if (ctx->pc == 0x4CBF24u) {
        ctx->pc = 0x4CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF20u;
        // 0x4cbf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF28u;
        goto label_4cbf28;
    }
    ctx->pc = 0x4CBF20u;
    {
        const bool branch_taken_0x4cbf20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x4CBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF20u;
        // 0x4cbf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbf20) {
            ctx->pc = 0x4CBEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cbee0;
        }
    }
    ctx->pc = 0x4CBF28u;
label_4cbf28:
    // 0x4cbf28: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4cbf2c:
    if (ctx->pc == 0x4CBF2Cu) {
        ctx->pc = 0x4CBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF28u;
        // 0x4cbf2c: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF30u;
        goto label_4cbf30;
    }
    ctx->pc = 0x4CBF28u;
    {
        const bool branch_taken_0x4cbf28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF28u;
        // 0x4cbf2c: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbf28) {
            ctx->pc = 0x4CBF7Cu;
            goto label_4cbf7c;
        }
    }
    ctx->pc = 0x4CBF30u;
label_4cbf30:
    // 0x4cbf30: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4cbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4cbf34:
    // 0x4cbf34: 0x248339b8  addiu       $v1, $a0, 0x39B8
    ctx->pc = 0x4cbf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14776));
label_4cbf38:
    // 0x4cbf38: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4cbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cbf3c:
    // 0x4cbf3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cbf40:
    // 0x4cbf40: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_4cbf44:
    if (ctx->pc == 0x4CBF44u) {
        ctx->pc = 0x4CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF40u;
        // 0x4cbf44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF48u;
        goto label_4cbf48;
    }
    ctx->pc = 0x4CBF40u;
    {
        const bool branch_taken_0x4cbf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF40u;
        // 0x4cbf44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbf40) {
            ctx->pc = 0x4CBFA4u;
            goto label_4cbfa4;
        }
    }
    ctx->pc = 0x4CBF48u;
label_4cbf48:
    // 0x4cbf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbf4c:
    // 0x4cbf4c: 0x26d039c0  addiu       $s0, $s6, 0x39C0
    ctx->pc = 0x4cbf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 14784));
label_4cbf50:
    // 0x4cbf50: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x4cbf50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4cbf54:
    // 0x4cbf54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cbf58:
    // 0x4cbf58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4cbf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cbf5c:
    // 0x4cbf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cbf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cbf60:
    // 0x4cbf60: 0xc13372a  jal         func_4CDCA8
label_4cbf64:
    if (ctx->pc == 0x4CBF64u) {
        ctx->pc = 0x4CBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF60u;
        // 0x4cbf64: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF68u;
        goto label_4cbf68;
    }
    ctx->pc = 0x4CBF60u;
    SET_GPR_U32(ctx, 31, 0x4CBF68u);
    ctx->pc = 0x4CBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBF60u;
    // 0x4cbf64: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4CBF60u, 0x4CBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBF68u;
label_4cbf68:
    // 0x4cbf68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4cbf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cbf6c:
    // 0x4cbf6c: 0xc10f644  jal         func_43D910
label_4cbf70:
    if (ctx->pc == 0x4CBF70u) {
        ctx->pc = 0x4CBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF6Cu;
        // 0x4cbf70: 0x248507ff  addiu       $a1, $a0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF74u;
        goto label_4cbf74;
    }
    ctx->pc = 0x4CBF6Cu;
    SET_GPR_U32(ctx, 31, 0x4CBF74u);
    ctx->pc = 0x4CBF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBF6Cu;
    // 0x4cbf70: 0x248507ff  addiu       $a1, $a0, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4CBF6Cu, 0x4CBF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBF74u;
label_4cbf74:
    // 0x4cbf74: 0x1000000c  b           . + 4 + (0xC << 2)
label_4cbf78:
    if (ctx->pc == 0x4CBF78u) {
        ctx->pc = 0x4CBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF74u;
        // 0x4cbf78: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBF7Cu;
        goto label_4cbf7c;
    }
    ctx->pc = 0x4CBF74u;
    {
        const bool branch_taken_0x4cbf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF74u;
        // 0x4cbf78: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbf74) {
            ctx->pc = 0x4CBFA8u;
            goto label_4cbfa8;
        }
    }
    ctx->pc = 0x4CBF7Cu;
label_4cbf7c:
    // 0x4cbf7c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x4cbf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4cbf80:
    // 0x4cbf80: 0x26c239c0  addiu       $v0, $s6, 0x39C0
    ctx->pc = 0x4cbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 14784));
label_4cbf84:
    // 0x4cbf84: 0x248339b8  addiu       $v1, $a0, 0x39B8
    ctx->pc = 0x4cbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 14776));
label_4cbf88:
    // 0x4cbf88: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4cbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4cbf8c:
    // 0x4cbf8c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4cbf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4cbf90:
    // 0x4cbf90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4cbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cbf94:
    // 0x4cbf94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4cbf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4cbf98:
    // 0x4cbf98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4cbf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4cbf9c:
    // 0x4cbf9c: 0xc10f644  jal         func_43D910
label_4cbfa0:
    if (ctx->pc == 0x4CBFA0u) {
        ctx->pc = 0x4CBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF9Cu;
        // 0x4cbfa0: 0x248507ff  addiu       $a1, $a0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBFA4u;
        goto label_4cbfa4;
    }
    ctx->pc = 0x4CBF9Cu;
    SET_GPR_U32(ctx, 31, 0x4CBFA4u);
    ctx->pc = 0x4CBFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBF9Cu;
    // 0x4cbfa0: 0x248507ff  addiu       $a1, $a0, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4CBF9Cu, 0x4CBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBFA4u;
label_4cbfa4:
    // 0x4cbfa4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4cbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4cbfa8:
    // 0x4cbfa8: 0x26c239c0  addiu       $v0, $s6, 0x39C0
    ctx->pc = 0x4cbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 14784));
label_4cbfac:
    // 0x4cbfac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4cbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4cbfb0:
    // 0x4cbfb0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x4cbfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_4cbfb4:
    // 0x4cbfb4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4cbfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4cbfb8:
    // 0x4cbfb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4cbfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4cbfbc:
    // 0x4cbfbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4cbfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cbfc0:
    // 0x4cbfc0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4cbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_4cbfc4:
    // 0x4cbfc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4cbfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cbfc8:
    // 0x4cbfc8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4cbfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4cbfcc:
    // 0x4cbfcc: 0xc10f51c  jal         func_43D470
label_4cbfd0:
    if (ctx->pc == 0x4CBFD0u) {
        ctx->pc = 0x4CBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBFCCu;
        // 0x4cbfd0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CBFD4u;
        goto label_4cbfd4;
    }
    ctx->pc = 0x4CBFCCu;
    SET_GPR_U32(ctx, 31, 0x4CBFD4u);
    ctx->pc = 0x4CBFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBFCCu;
    // 0x4cbfd0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D470u, 0x4CBFCCu, 0x4CBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBFD4u;
label_4cbfd4:
    // 0x4cbfd4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cbfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cbfd8:
    // 0x4cbfd8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4cbfd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4cbfdc:
    // 0x4cbfdc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4cbfdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4cbfe0:
    // 0x4cbfe0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4cbfe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4cbfe4:
    // 0x4cbfe4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4cbfe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cbfe8:
    // 0x4cbfe8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4cbfe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4cbfec:
    // 0x4cbfec: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4cbfecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4cbff0:
    // 0x4cbff0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4cbff0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4cbff4:
    // 0x4cbff4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4cbff4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4cbff8:
    // 0x4cbff8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4cbff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4cbffc:
    // 0x4cbffc: 0x3e00008  jr          $ra
label_4cc000:
    if (ctx->pc == 0x4CC000u) {
        ctx->pc = 0x4CC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBFFCu;
        // 0x4cc000: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC004u;
        goto label_4cc004;
    }
    ctx->pc = 0x4CBFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBFFCu;
        // 0x4cc000: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CBFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CC004u;
label_4cc004:
    // 0x4cc004: 0x0  nop
    ctx->pc = 0x4cc004u;
    // NOP
    ctx->pc = 0x4cc008u;
}
