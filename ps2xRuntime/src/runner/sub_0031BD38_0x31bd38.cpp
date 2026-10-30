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

// Function: sub_0031BD38
// Address: 0x31bd38 - 0x31be48
void sub_0031BD38_0x31bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BD38_0x31bd38");
#endif

    switch (ctx->pc) {
        case 0x31bd38u: goto label_31bd38;
        case 0x31bd3cu: goto label_31bd3c;
        case 0x31bd40u: goto label_31bd40;
        case 0x31bd44u: goto label_31bd44;
        case 0x31bd48u: goto label_31bd48;
        case 0x31bd4cu: goto label_31bd4c;
        case 0x31bd50u: goto label_31bd50;
        case 0x31bd54u: goto label_31bd54;
        case 0x31bd58u: goto label_31bd58;
        case 0x31bd5cu: goto label_31bd5c;
        case 0x31bd60u: goto label_31bd60;
        case 0x31bd64u: goto label_31bd64;
        case 0x31bd68u: goto label_31bd68;
        case 0x31bd6cu: goto label_31bd6c;
        case 0x31bd70u: goto label_31bd70;
        case 0x31bd74u: goto label_31bd74;
        case 0x31bd78u: goto label_31bd78;
        case 0x31bd7cu: goto label_31bd7c;
        case 0x31bd80u: goto label_31bd80;
        case 0x31bd84u: goto label_31bd84;
        case 0x31bd88u: goto label_31bd88;
        case 0x31bd8cu: goto label_31bd8c;
        case 0x31bd90u: goto label_31bd90;
        case 0x31bd94u: goto label_31bd94;
        case 0x31bd98u: goto label_31bd98;
        case 0x31bd9cu: goto label_31bd9c;
        case 0x31bda0u: goto label_31bda0;
        case 0x31bda4u: goto label_31bda4;
        case 0x31bda8u: goto label_31bda8;
        case 0x31bdacu: goto label_31bdac;
        case 0x31bdb0u: goto label_31bdb0;
        case 0x31bdb4u: goto label_31bdb4;
        case 0x31bdb8u: goto label_31bdb8;
        case 0x31bdbcu: goto label_31bdbc;
        case 0x31bdc0u: goto label_31bdc0;
        case 0x31bdc4u: goto label_31bdc4;
        case 0x31bdc8u: goto label_31bdc8;
        case 0x31bdccu: goto label_31bdcc;
        case 0x31bdd0u: goto label_31bdd0;
        case 0x31bdd4u: goto label_31bdd4;
        case 0x31bdd8u: goto label_31bdd8;
        case 0x31bddcu: goto label_31bddc;
        case 0x31bde0u: goto label_31bde0;
        case 0x31bde4u: goto label_31bde4;
        case 0x31bde8u: goto label_31bde8;
        case 0x31bdecu: goto label_31bdec;
        case 0x31bdf0u: goto label_31bdf0;
        case 0x31bdf4u: goto label_31bdf4;
        case 0x31bdf8u: goto label_31bdf8;
        case 0x31bdfcu: goto label_31bdfc;
        case 0x31be00u: goto label_31be00;
        case 0x31be04u: goto label_31be04;
        case 0x31be08u: goto label_31be08;
        case 0x31be0cu: goto label_31be0c;
        case 0x31be10u: goto label_31be10;
        case 0x31be14u: goto label_31be14;
        case 0x31be18u: goto label_31be18;
        case 0x31be1cu: goto label_31be1c;
        case 0x31be20u: goto label_31be20;
        case 0x31be24u: goto label_31be24;
        case 0x31be28u: goto label_31be28;
        case 0x31be2cu: goto label_31be2c;
        case 0x31be30u: goto label_31be30;
        case 0x31be34u: goto label_31be34;
        case 0x31be38u: goto label_31be38;
        case 0x31be3cu: goto label_31be3c;
        case 0x31be40u: goto label_31be40;
        case 0x31be44u: goto label_31be44;
        default: break;
    }

    ctx->pc = 0x31bd38u;

label_31bd38:
    // 0x31bd38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31bd3c:
    // 0x31bd3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31bd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bd40:
    // 0x31bd40: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_31bd44:
    // 0x31bd44: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_31bd48:
    // 0x31bd48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31bd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31bd4c:
    // 0x31bd4c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_31bd50:
    // 0x31bd50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_31bd54:
    // 0x31bd54: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_31bd58:
    // 0x31bd58: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_31bd5c:
    // 0x31bd5c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_31bd60:
    // 0x31bd60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31bd64:
    // 0x31bd64: 0xc059856  jal         func_166158
label_31bd68:
    if (ctx->pc == 0x31BD68u) {
        ctx->pc = 0x31BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD64u;
        // 0x31bd68: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD6Cu;
        goto label_31bd6c;
    }
    ctx->pc = 0x31BD64u;
    SET_GPR_U32(ctx, 31, 0x31BD6Cu);
    ctx->pc = 0x31BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD64u;
    // 0x31bd68: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31BD64u, 0x31BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BD6Cu;
label_31bd6c:
    // 0x31bd6c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_31bd70:
    if (ctx->pc == 0x31BD70u) {
        ctx->pc = 0x31BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD6Cu;
        // 0x31bd70: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BD74u;
        goto label_31bd74;
    }
    ctx->pc = 0x31BD6Cu;
    {
        const bool branch_taken_0x31bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD6Cu;
        // 0x31bd70: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd6c) {
            ctx->pc = 0x31BE20u;
            goto label_31be20;
        }
    }
    ctx->pc = 0x31BD74u;
label_31bd74:
    // 0x31bd74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31bd78:
    // 0x31bd78: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x31bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_31bd7c:
    // 0x31bd7c: 0x247615b8  addiu       $s6, $v1, 0x15B8
    ctx->pc = 0x31bd7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 5560));
label_31bd80:
    // 0x31bd80: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x31bd80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31bd84:
    // 0x31bd84: 0x24954b00  addiu       $s5, $a0, 0x4B00
    ctx->pc = 0x31bd84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_31bd88:
    // 0x31bd88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31bd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31bd8c:
    // 0x31bd8c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x31bd8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bd90:
    // 0x31bd90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31bd94:
    // 0x31bd94: 0x0  nop
    ctx->pc = 0x31bd94u;
    // NOP
label_31bd98:
    // 0x31bd98: 0xc137826  jal         func_4DE098
label_31bd9c:
    if (ctx->pc == 0x31BD9Cu) {
        ctx->pc = 0x31BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BD98u;
        // 0x31bd9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDA0u;
        goto label_31bda0;
    }
    ctx->pc = 0x31BD98u;
    SET_GPR_U32(ctx, 31, 0x31BDA0u);
    ctx->pc = 0x31BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BD98u;
    // 0x31bd9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31BD98u, 0x31BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDA0u;
label_31bda0:
    // 0x31bda0: 0xc0e409a  jal         func_390268
label_31bda4:
    if (ctx->pc == 0x31BDA4u) {
        ctx->pc = 0x31BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDA0u;
        // 0x31bda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDA8u;
        goto label_31bda8;
    }
    ctx->pc = 0x31BDA0u;
    SET_GPR_U32(ctx, 31, 0x31BDA8u);
    ctx->pc = 0x31BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDA0u;
    // 0x31bda4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31BDA0u, 0x31BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDA8u;
label_31bda8:
    // 0x31bda8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31bda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bdac:
    // 0x31bdac: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
label_31bdb0:
    if (ctx->pc == 0x31BDB0u) {
        ctx->pc = 0x31BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDACu;
        // 0x31bdb0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDB4u;
        goto label_31bdb4;
    }
    ctx->pc = 0x31BDACu;
    {
        const bool branch_taken_0x31bdac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bdac) {
            ctx->pc = 0x31BDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BDACu;
            // 0x31bdb0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BE14u;
            goto label_31be14;
        }
    }
    ctx->pc = 0x31BDB4u;
label_31bdb4:
    // 0x31bdb4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31bdb8:
    // 0x31bdb8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31bdb8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31bdbc:
    // 0x31bdbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31bdbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31bdc0:
    // 0x31bdc0: 0x50540014  beql        $v0, $s4, . + 4 + (0x14 << 2)
label_31bdc4:
    if (ctx->pc == 0x31BDC4u) {
        ctx->pc = 0x31BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDC0u;
        // 0x31bdc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDC8u;
        goto label_31bdc8;
    }
    ctx->pc = 0x31BDC0u;
    {
        const bool branch_taken_0x31bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x31bdc0) {
            ctx->pc = 0x31BDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BDC0u;
            // 0x31bdc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BE14u;
            goto label_31be14;
        }
    }
    ctx->pc = 0x31BDC8u;
label_31bdc8:
    // 0x31bdc8: 0xc087502  jal         func_21D408
label_31bdcc:
    if (ctx->pc == 0x31BDCCu) {
        ctx->pc = 0x31BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDC8u;
        // 0x31bdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDD0u;
        goto label_31bdd0;
    }
    ctx->pc = 0x31BDC8u;
    SET_GPR_U32(ctx, 31, 0x31BDD0u);
    ctx->pc = 0x31BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDC8u;
    // 0x31bdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31BDC8u, 0x31BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDD0u;
label_31bdd0:
    // 0x31bdd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31bdd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bdd4:
    // 0x31bdd4: 0xae160208  sw          $s6, 0x208($s0)
    ctx->pc = 0x31bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 22));
label_31bdd8:
    // 0x31bdd8: 0xc0a3630  jal         func_28D8C0
label_31bddc:
    if (ctx->pc == 0x31BDDCu) {
        ctx->pc = 0x31BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDD8u;
        // 0x31bddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDE0u;
        goto label_31bde0;
    }
    ctx->pc = 0x31BDD8u;
    SET_GPR_U32(ctx, 31, 0x31BDE0u);
    ctx->pc = 0x31BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDD8u;
    // 0x31bddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31BDD8u, 0x31BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDE0u;
label_31bde0:
    // 0x31bde0: 0xc0a3628  jal         func_28D8A0
label_31bde4:
    if (ctx->pc == 0x31BDE4u) {
        ctx->pc = 0x31BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDE0u;
        // 0x31bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDE8u;
        goto label_31bde8;
    }
    ctx->pc = 0x31BDE0u;
    SET_GPR_U32(ctx, 31, 0x31BDE8u);
    ctx->pc = 0x31BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDE0u;
    // 0x31bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31BDE0u, 0x31BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDE8u;
label_31bde8:
    // 0x31bde8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31bdec:
    // 0x31bdec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31bdecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31bdf0:
    // 0x31bdf0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31bdf4:
    // 0x31bdf4: 0x40f809  jalr        $v0
label_31bdf8:
    if (ctx->pc == 0x31BDF8u) {
        ctx->pc = 0x31BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDF4u;
        // 0x31bdf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BDFCu;
        goto label_31bdfc;
    }
    ctx->pc = 0x31BDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31BDFCu);
        ctx->pc = 0x31BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDF4u;
        // 0x31bdf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BDF4u, 0x31BDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31BDFCu;
label_31bdfc:
    // 0x31bdfc: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x31bdfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_31be00:
    // 0x31be00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31be00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31be04:
    // 0x31be04: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31be04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31be08:
    // 0x31be08: 0xc0ae960  jal         func_2BA580
label_31be0c:
    if (ctx->pc == 0x31BE0Cu) {
        ctx->pc = 0x31BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE08u;
        // 0x31be0c: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE10u;
        goto label_31be10;
    }
    ctx->pc = 0x31BE08u;
    SET_GPR_U32(ctx, 31, 0x31BE10u);
    ctx->pc = 0x31BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE08u;
    // 0x31be0c: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA580u, 0x31BE08u, 0x31BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE10u;
label_31be10:
    // 0x31be10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31be10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31be14:
    // 0x31be14: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31be14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31be18:
    // 0x31be18: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_31be1c:
    if (ctx->pc == 0x31BE1Cu) {
        ctx->pc = 0x31BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE18u;
        // 0x31be1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE20u;
        goto label_31be20;
    }
    ctx->pc = 0x31BE18u;
    {
        const bool branch_taken_0x31be18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE18u;
        // 0x31be1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be18) {
            ctx->pc = 0x31BD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bd98;
        }
    }
    ctx->pc = 0x31BE20u;
label_31be20:
    // 0x31be20: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31be20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31be24:
    // 0x31be24: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31be24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31be28:
    // 0x31be28: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31be28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31be2c:
    // 0x31be2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31be2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31be30:
    // 0x31be30: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31be30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31be34:
    // 0x31be34: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31be34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31be38:
    // 0x31be38: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31be38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31be3c:
    // 0x31be3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31be40:
    // 0x31be40: 0x3e00008  jr          $ra
label_31be44:
    if (ctx->pc == 0x31BE44u) {
        ctx->pc = 0x31BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE40u;
        // 0x31be44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BE48u;
        goto label_fallthrough_0x31be40;
    }
    ctx->pc = 0x31BE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE40u;
        // 0x31be44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31be40:
    ctx->pc = 0x31BE48u;
}
