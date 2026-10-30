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

// Function: sub_003EACC8
// Address: 0x3eacc8 - 0x3eada0
void sub_003EACC8_0x3eacc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EACC8_0x3eacc8");
#endif

    switch (ctx->pc) {
        case 0x3eacc8u: goto label_3eacc8;
        case 0x3eacccu: goto label_3eaccc;
        case 0x3eacd0u: goto label_3eacd0;
        case 0x3eacd4u: goto label_3eacd4;
        case 0x3eacd8u: goto label_3eacd8;
        case 0x3eacdcu: goto label_3eacdc;
        case 0x3eace0u: goto label_3eace0;
        case 0x3eace4u: goto label_3eace4;
        case 0x3eace8u: goto label_3eace8;
        case 0x3eacecu: goto label_3eacec;
        case 0x3eacf0u: goto label_3eacf0;
        case 0x3eacf4u: goto label_3eacf4;
        case 0x3eacf8u: goto label_3eacf8;
        case 0x3eacfcu: goto label_3eacfc;
        case 0x3ead00u: goto label_3ead00;
        case 0x3ead04u: goto label_3ead04;
        case 0x3ead08u: goto label_3ead08;
        case 0x3ead0cu: goto label_3ead0c;
        case 0x3ead10u: goto label_3ead10;
        case 0x3ead14u: goto label_3ead14;
        case 0x3ead18u: goto label_3ead18;
        case 0x3ead1cu: goto label_3ead1c;
        case 0x3ead20u: goto label_3ead20;
        case 0x3ead24u: goto label_3ead24;
        case 0x3ead28u: goto label_3ead28;
        case 0x3ead2cu: goto label_3ead2c;
        case 0x3ead30u: goto label_3ead30;
        case 0x3ead34u: goto label_3ead34;
        case 0x3ead38u: goto label_3ead38;
        case 0x3ead3cu: goto label_3ead3c;
        case 0x3ead40u: goto label_3ead40;
        case 0x3ead44u: goto label_3ead44;
        case 0x3ead48u: goto label_3ead48;
        case 0x3ead4cu: goto label_3ead4c;
        case 0x3ead50u: goto label_3ead50;
        case 0x3ead54u: goto label_3ead54;
        case 0x3ead58u: goto label_3ead58;
        case 0x3ead5cu: goto label_3ead5c;
        case 0x3ead60u: goto label_3ead60;
        case 0x3ead64u: goto label_3ead64;
        case 0x3ead68u: goto label_3ead68;
        case 0x3ead6cu: goto label_3ead6c;
        case 0x3ead70u: goto label_3ead70;
        case 0x3ead74u: goto label_3ead74;
        case 0x3ead78u: goto label_3ead78;
        case 0x3ead7cu: goto label_3ead7c;
        case 0x3ead80u: goto label_3ead80;
        case 0x3ead84u: goto label_3ead84;
        case 0x3ead88u: goto label_3ead88;
        case 0x3ead8cu: goto label_3ead8c;
        case 0x3ead90u: goto label_3ead90;
        case 0x3ead94u: goto label_3ead94;
        case 0x3ead98u: goto label_3ead98;
        case 0x3ead9cu: goto label_3ead9c;
        default: break;
    }

    ctx->pc = 0x3eacc8u;

label_3eacc8:
    // 0x3eacc8: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3eacc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3eaccc:
    // 0x3eaccc: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3eacccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3eacd0:
    // 0x3eacd0: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3eacd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3eacd4:
    // 0x3eacd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eacd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eacd8:
    // 0x3eacd8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3eacd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3eacdc:
    // 0x3eacdc: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x3eacdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_3eace0:
    // 0x3eace0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3eace0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eace4:
    // 0x3eace4: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3eace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3eace8:
    // 0x3eace8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3eace8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3eacec:
    // 0x3eacec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eacecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eacf0:
    // 0x3eacf0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eacf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eacf4:
    // 0x3eacf4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eacf8:
    // 0x3eacf8: 0x40f809  jalr        $v0
label_3eacfc:
    if (ctx->pc == 0x3EACFCu) {
        ctx->pc = 0x3EACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACF8u;
        // 0x3eacfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD00u;
        goto label_3ead00;
    }
    ctx->pc = 0x3EACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAD00u);
        ctx->pc = 0x3EACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACF8u;
        // 0x3eacfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EACF8u, 0x3EAD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAD00u;
label_3ead00:
    // 0x3ead00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ead00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ead04:
    // 0x3ead04: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3ead04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ead08:
    // 0x3ead08: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3ead0c:
    if (ctx->pc == 0x3EAD0Cu) {
        ctx->pc = 0x3EAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD08u;
        // 0x3ead0c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD10u;
        goto label_3ead10;
    }
    ctx->pc = 0x3EAD08u;
    {
        const bool branch_taken_0x3ead08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD08u;
        // 0x3ead0c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead08) {
            ctx->pc = 0x3EAD20u;
            goto label_3ead20;
        }
    }
    ctx->pc = 0x3EAD10u;
label_3ead10:
    // 0x3ead10: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
label_3ead14:
    if (ctx->pc == 0x3EAD14u) {
        ctx->pc = 0x3EAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD10u;
        // 0x3ead14: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD18u;
        goto label_3ead18;
    }
    ctx->pc = 0x3EAD10u;
    {
        const bool branch_taken_0x3ead10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD10u;
        // 0x3ead14: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead10) {
            ctx->pc = 0x3EAD5Cu;
            goto label_3ead5c;
        }
    }
    ctx->pc = 0x3EAD18u;
label_3ead18:
    // 0x3ead18: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3ead1c:
    if (ctx->pc == 0x3EAD1Cu) {
        ctx->pc = 0x3EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD18u;
        // 0x3ead1c: 0x7bb10450  lq          $s1, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD20u;
        goto label_3ead20;
    }
    ctx->pc = 0x3EAD18u;
    {
        const bool branch_taken_0x3ead18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD18u;
        // 0x3ead1c: 0x7bb10450  lq          $s1, 0x450($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead18) {
            ctx->pc = 0x3EAD8Cu;
            goto label_3ead8c;
        }
    }
    ctx->pc = 0x3EAD20u;
label_3ead20:
    // 0x3ead20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ead20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ead24:
    // 0x3ead24: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3ead28:
    if (ctx->pc == 0x3EAD28u) {
        ctx->pc = 0x3EAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD24u;
        // 0x3ead28: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD2Cu;
        goto label_3ead2c;
    }
    ctx->pc = 0x3EAD24u;
    {
        const bool branch_taken_0x3ead24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ead24) {
            ctx->pc = 0x3EAD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAD24u;
            // 0x3ead28: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAD88u;
            goto label_3ead88;
        }
    }
    ctx->pc = 0x3EAD2Cu;
label_3ead2c:
    // 0x3ead2c: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3ead2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3ead30:
    // 0x3ead30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ead30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ead34:
    // 0x3ead34: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ead34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ead38:
    // 0x3ead38: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3ead38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3ead3c:
    // 0x3ead3c: 0x26105b88  addiu       $s0, $s0, 0x5B88
    ctx->pc = 0x3ead3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23432));
label_3ead40:
    // 0x3ead40: 0xc0e9f6a  jal         func_3A7DA8
label_3ead44:
    if (ctx->pc == 0x3EAD44u) {
        ctx->pc = 0x3EAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD40u;
        // 0x3ead44: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD48u;
        goto label_3ead48;
    }
    ctx->pc = 0x3EAD40u;
    SET_GPR_U32(ctx, 31, 0x3EAD48u);
    ctx->pc = 0x3EAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD40u;
    // 0x3ead44: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3EAD40u, 0x3EAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD48u;
label_3ead48:
    // 0x3ead48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ead48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ead4c:
    // 0x3ead4c: 0xc0f15bc  jal         func_3C56F0
label_3ead50:
    if (ctx->pc == 0x3EAD50u) {
        ctx->pc = 0x3EAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD4Cu;
        // 0x3ead50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD54u;
        goto label_3ead54;
    }
    ctx->pc = 0x3EAD4Cu;
    SET_GPR_U32(ctx, 31, 0x3EAD54u);
    ctx->pc = 0x3EAD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD4Cu;
    // 0x3ead50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3EAD4Cu, 0x3EAD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD54u;
label_3ead54:
    // 0x3ead54: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ead58:
    if (ctx->pc == 0x3EAD58u) {
        ctx->pc = 0x3EAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD54u;
        // 0x3ead58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD5Cu;
        goto label_3ead5c;
    }
    ctx->pc = 0x3EAD54u;
    {
        const bool branch_taken_0x3ead54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD54u;
        // 0x3ead58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead54) {
            ctx->pc = 0x3EAD84u;
            goto label_3ead84;
        }
    }
    ctx->pc = 0x3EAD5Cu;
label_3ead5c:
    // 0x3ead5c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x3ead5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ead60:
    // 0x3ead60: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3ead64:
    if (ctx->pc == 0x3EAD64u) {
        ctx->pc = 0x3EAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD60u;
        // 0x3ead64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD68u;
        goto label_3ead68;
    }
    ctx->pc = 0x3EAD60u;
    {
        const bool branch_taken_0x3ead60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD60u;
        // 0x3ead64: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead60) {
            ctx->pc = 0x3EAD80u;
            goto label_3ead80;
        }
    }
    ctx->pc = 0x3EAD68u;
label_3ead68:
    // 0x3ead68: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ead68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ead6c:
    // 0x3ead6c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3ead6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3ead70:
    // 0x3ead70: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3ead70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3ead74:
    // 0x3ead74: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3ead74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3ead78:
    // 0x3ead78: 0x60f809  jalr        $v1
label_3ead7c:
    if (ctx->pc == 0x3EAD7Cu) {
        ctx->pc = 0x3EAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD78u;
        // 0x3ead7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD80u;
        goto label_3ead80;
    }
    ctx->pc = 0x3EAD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EAD80u);
        ctx->pc = 0x3EAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD78u;
        // 0x3ead7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAD78u, 0x3EAD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAD80u;
label_3ead80:
    // 0x3ead80: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3ead80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3ead84:
    // 0x3ead84: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3ead84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3ead88:
    // 0x3ead88: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3ead88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3ead8c:
    // 0x3ead8c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3ead8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3ead90:
    // 0x3ead90: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3ead90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ead94:
    // 0x3ead94: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3ead94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ead98:
    // 0x3ead98: 0x3e00008  jr          $ra
label_3ead9c:
    if (ctx->pc == 0x3EAD9Cu) {
        ctx->pc = 0x3EAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD98u;
        // 0x3ead9c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EADA0u;
        goto label_fallthrough_0x3ead98;
    }
    ctx->pc = 0x3EAD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD98u;
        // 0x3ead9c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ead98:
    ctx->pc = 0x3EADA0u;
}
