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

// Function: sub_004CEAC0
// Address: 0x4ceac0 - 0x4cef98
void sub_004CEAC0_0x4ceac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CEAC0_0x4ceac0");
#endif

    switch (ctx->pc) {
        case 0x4ceb10u: goto label_4ceb10;
        case 0x4ceb4cu: goto label_4ceb4c;
        case 0x4cebacu: goto label_4cebac;
        case 0x4cebbcu: goto label_4cebbc;
        case 0x4cebc8u: goto label_4cebc8;
        case 0x4cebf4u: goto label_4cebf4;
        case 0x4cec08u: goto label_4cec08;
        case 0x4cec28u: goto label_4cec28;
        case 0x4cec40u: goto label_4cec40;
        case 0x4cecc8u: goto label_4cecc8;
        case 0x4cecd0u: goto label_4cecd0;
        case 0x4cecf0u: goto label_4cecf0;
        case 0x4cecf8u: goto label_4cecf8;
        case 0x4ced24u: goto label_4ced24;
        case 0x4ced68u: goto label_4ced68;
        case 0x4ced70u: goto label_4ced70;
        case 0x4cedc8u: goto label_4cedc8;
        case 0x4cee08u: goto label_4cee08;
        case 0x4cee6cu: goto label_4cee6c;
        case 0x4cee80u: goto label_4cee80;
        case 0x4ceea8u: goto label_4ceea8;
        case 0x4ceec0u: goto label_4ceec0;
        case 0x4ceed0u: goto label_4ceed0;
        case 0x4ceef8u: goto label_4ceef8;
        case 0x4cef14u: goto label_4cef14;
        default: break;
    }

    ctx->pc = 0x4ceac0u;

    // 0x4ceac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ceac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ceac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ceac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ceac8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ceac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ceacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ceaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cead0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cead4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4cead4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cead8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ceadc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4ceadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceae0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ceae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ceae4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4ceae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ceae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ceaec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4ceaecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceaf0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ceaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ceaf4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ceaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ceaf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ceaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ceafc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4ceafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4ceb00: 0x1440011a  bnez        $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x4CEB00u;
    {
        const bool branch_taken_0x4ceb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEB00u;
        // 0x4ceb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceb00) {
            ctx->pc = 0x4CEF6Cu;
            goto label_4cef6c;
        }
    }
    ctx->pc = 0x4CEB08u;
    // 0x4ceb08: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CEB08u;
    SET_GPR_U32(ctx, 31, 0x4CEB10u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CEB08u, 0x4CEB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEB10u;
label_4ceb10:
    // 0x4ceb10: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4ceb10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceb14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ceb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ceb18: 0x52220037  beql        $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4CEB18u;
    {
        const bool branch_taken_0x4ceb18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ceb18) {
            ctx->pc = 0x4CEB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CEB18u;
            // 0x4ceb1c: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CEBF8u;
            goto label_4cebf8;
        }
    }
    ctx->pc = 0x4CEB20u;
    // 0x4ceb20: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x4ceb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4ceb24: 0x10510033  beq         $v0, $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x4CEB24u;
    {
        const bool branch_taken_0x4ceb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4CEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEB24u;
        // 0x4ceb28: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceb24) {
            ctx->pc = 0x4CEBF4u;
            goto label_4cebf4;
        }
    }
    ctx->pc = 0x4CEB2Cu;
    // 0x4ceb2c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x4CEB2Cu;
    {
        const bool branch_taken_0x4ceb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceb2c) {
            ctx->pc = 0x4CEB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CEB2Cu;
            // 0x4ceb30: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CEBB4u;
            goto label_4cebb4;
        }
    }
    ctx->pc = 0x4CEB34u;
    // 0x4ceb34: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4ceb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4ceb38: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x4ceb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4ceb3c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x4CEB3Cu;
    {
        const bool branch_taken_0x4ceb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ceb3c) {
            ctx->pc = 0x4CEB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CEB3Cu;
            // 0x4ceb40: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CEBB4u;
            goto label_4cebb4;
        }
    }
    ctx->pc = 0x4CEB44u;
    // 0x4ceb44: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CEB44u;
    SET_GPR_U32(ctx, 31, 0x4CEB4Cu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CEB44u, 0x4CEB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEB4Cu;
label_4ceb4c:
    // 0x4ceb4c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4ceb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4ceb50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4ceb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceb54: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4ceb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4ceb58: 0x2232823  subu        $a1, $s1, $v1
    ctx->pc = 0x4ceb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4ceb5c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4ceb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4ceb60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ceb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ceb64: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x4ceb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4ceb68: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4ceb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x4ceb6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ceb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4ceb70: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x4ceb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x4ceb74: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x4ceb74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4ceb78: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4ceb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4ceb7c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4ceb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x4ceb80: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4ceb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ceb84: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x4ceb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x4ceb88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEB88u;
    {
        const bool branch_taken_0x4ceb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceb88) {
            ctx->pc = 0x4CEB9Cu;
            goto label_4ceb9c;
        }
    }
    ctx->pc = 0x4CEB90u;
    // 0x4ceb90: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4ceb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4ceb94: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4ceb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ceb98: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4ceb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4ceb9c:
    // 0x4ceb9c: 0x50c00016  beql        $a2, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4CEB9Cu;
    {
        const bool branch_taken_0x4ceb9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceb9c) {
            ctx->pc = 0x4CEBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CEB9Cu;
            // 0x4ceba0: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CEBF8u;
            goto label_4cebf8;
        }
    }
    ctx->pc = 0x4CEBA4u;
    // 0x4ceba4: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CEBA4u;
    SET_GPR_U32(ctx, 31, 0x4CEBACu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CEBA4u, 0x4CEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEBACu;
label_4cebac:
    // 0x4cebac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4CEBACu;
    {
        const bool branch_taken_0x4cebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEBACu;
        // 0x4cebb0: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cebac) {
            ctx->pc = 0x4CEBF8u;
            goto label_4cebf8;
        }
    }
    ctx->pc = 0x4CEBB4u;
label_4cebb4:
    // 0x4cebb4: 0xc1332ba  jal         func_4CCAE8
    ctx->pc = 0x4CEBB4u;
    SET_GPR_U32(ctx, 31, 0x4CEBBCu);
    ctx->pc = 0x4CEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEBB4u;
    // 0x4cebb8: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCAE8u, 0x4CEBB4u, 0x4CEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEBBCu;
label_4cebbc:
    // 0x4cebbc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4cebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4cebc0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CEBC0u;
    SET_GPR_U32(ctx, 31, 0x4CEBC8u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CEBC0u, 0x4CEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEBC8u;
label_4cebc8:
    // 0x4cebc8: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x4cebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x4cebcc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4cebccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4cebd0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x4cebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4cebd4: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x4cebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x4cebd8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x4cebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x4cebdc: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4cebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x4cebe0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x4cebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x4cebe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CEBE4u;
    {
        const bool branch_taken_0x4cebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEBE4u;
        // 0x4cebe8: 0xae040054  sw          $a0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cebe4) {
            ctx->pc = 0x4CEBF4u;
            goto label_4cebf4;
        }
    }
    ctx->pc = 0x4CEBECu;
    // 0x4cebec: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CEBECu;
    SET_GPR_U32(ctx, 31, 0x4CEBF4u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CEBECu, 0x4CEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEBF4u;
label_4cebf4:
    // 0x4cebf4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x4cebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4cebf8:
    // 0x4cebf8: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4CEBF8u;
    {
        const bool branch_taken_0x4cebf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cebf8) {
            ctx->pc = 0x4CED50u;
            goto label_4ced50;
        }
    }
    ctx->pc = 0x4CEC00u;
    // 0x4cec00: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CEC00u;
    SET_GPR_U32(ctx, 31, 0x4CEC08u);
    ctx->pc = 0x4CEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEC00u;
    // 0x4cec04: 0x26110080  addiu       $s1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CEC00u, 0x4CEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEC08u;
label_4cec08:
    // 0x4cec08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4cec08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cec0c: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x4cec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x4cec10: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4cec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4cec14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cec18: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x4cec18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x4cec1c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x4cec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x4cec20: 0xc133470  jal         func_4CD1C0
    ctx->pc = 0x4CEC20u;
    SET_GPR_U32(ctx, 31, 0x4CEC28u);
    ctx->pc = 0x4CEC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEC20u;
    // 0x4cec24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD1C0u, 0x4CEC20u, 0x4CEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEC28u;
label_4cec28:
    // 0x4cec28: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4CEC28u;
    {
        const bool branch_taken_0x4cec28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEC28u;
        // 0x4cec2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cec28) {
            ctx->pc = 0x4CEC78u;
            goto label_4cec78;
        }
    }
    ctx->pc = 0x4CEC30u;
    // 0x4cec30: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x4cec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x4cec34: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4cec34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4cec38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CEC38u;
    {
        const bool branch_taken_0x4cec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cec38) {
            ctx->pc = 0x4CEC5Cu;
            goto label_4cec5c;
        }
    }
    ctx->pc = 0x4CEC40u;
label_4cec40:
    // 0x4cec40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4cec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cec44: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4cec44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4cec48: 0x0  nop
    ctx->pc = 0x4cec48u;
    // NOP
    // 0x4cec4c: 0x0  nop
    ctx->pc = 0x4cec4cu;
    // NOP
    // 0x4cec50: 0x0  nop
    ctx->pc = 0x4cec50u;
    // NOP
    // 0x4cec54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CEC54u;
    {
        const bool branch_taken_0x4cec54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cec54) {
            ctx->pc = 0x4CEC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cec40;
        }
    }
    ctx->pc = 0x4CEC5Cu;
label_4cec5c:
    // 0x4cec5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cec60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4cec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4cec64: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEC64u;
    {
        const bool branch_taken_0x4cec64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEC64u;
        // 0x4cec68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cec64) {
            ctx->pc = 0x4CEC78u;
            goto label_4cec78;
        }
    }
    ctx->pc = 0x4CEC6Cu;
    // 0x4cec6c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4cec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4cec70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4CEC70u;
    {
        const bool branch_taken_0x4cec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEC70u;
        // 0x4cec74: 0xb4102b  sltu        $v0, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cec70) {
            ctx->pc = 0x4CEC7Cu;
            goto label_4cec7c;
        }
    }
    ctx->pc = 0x4CEC78u;
label_4cec78:
    // 0x4cec78: 0xb4102b  sltu        $v0, $a1, $s4
    ctx->pc = 0x4cec78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4cec7c:
    // 0x4cec7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CEC7Cu;
    {
        const bool branch_taken_0x4cec7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEC7Cu;
        // 0x4cec80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cec7c) {
            ctx->pc = 0x4CEC88u;
            goto label_4cec88;
        }
    }
    ctx->pc = 0x4CEC84u;
    // 0x4cec84: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4cec84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_4cec88:
    // 0x4cec88: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4cec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4cec8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4cec8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cec90: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4cec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4cec94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cec98: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x4cec98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x4cec9c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x4cec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x4ceca0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ceca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ceca4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x4ceca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x4ceca8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4ceca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4cecac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cecb0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x4cecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x4cecb4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x4CECB4u;
    {
        const bool branch_taken_0x4cecb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cecb4) {
            ctx->pc = 0x4CED1Cu;
            goto label_4ced1c;
        }
    }
    ctx->pc = 0x4CECBCu;
    // 0x4cecbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cecc0: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4CECC0u;
    SET_GPR_U32(ctx, 31, 0x4CECC8u);
    ctx->pc = 0x4CECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CECC0u;
    // 0x4cecc4: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4CECC0u, 0x4CECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CECC8u;
label_4cecc8:
    // 0x4cecc8: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CECC8u;
    SET_GPR_U32(ctx, 31, 0x4CECD0u);
    ctx->pc = 0x4CECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CECC8u;
    // 0x4ceccc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CECC8u, 0x4CECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CECD0u;
label_4cecd0:
    // 0x4cecd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cecd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cecd4: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x4cecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x4cecd8: 0x2561023  subu        $v0, $s2, $s6
    ctx->pc = 0x4cecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x4cecdc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4cecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4cece0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cece4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4CECE4u;
    {
        const bool branch_taken_0x4cece4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4CECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CECE4u;
        // 0x4cece8: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cece4) {
            ctx->pc = 0x4CED1Cu;
            goto label_4ced1c;
        }
    }
    ctx->pc = 0x4CECECu;
    // 0x4cecec: 0x0  nop
    ctx->pc = 0x4cececu;
    // NOP
label_4cecf0:
    // 0x4cecf0: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CECF0u;
    SET_GPR_U32(ctx, 31, 0x4CECF8u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CECF0u, 0x4CECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CECF8u;
label_4cecf8:
    // 0x4cecf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4cecf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cecfc: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x4cecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x4ced00: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x4ced00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4ced04: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x4ced04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4ced08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4CED08u;
    {
        const bool branch_taken_0x4ced08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CED08u;
        // 0x4ced0c: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ced08) {
            ctx->pc = 0x4CECF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cecf0;
        }
    }
    ctx->pc = 0x4CED10u;
    // 0x4ced10: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4ced10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ced14: 0x1c40fff6  bgtz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CED14u;
    {
        const bool branch_taken_0x4ced14 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4CED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CED14u;
        // 0x4ced18: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ced14) {
            ctx->pc = 0x4CECF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cecf0;
        }
    }
    ctx->pc = 0x4CED1Cu;
label_4ced1c:
    // 0x4ced1c: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CED1Cu;
    SET_GPR_U32(ctx, 31, 0x4CED24u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CED1Cu, 0x4CED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CED24u;
label_4ced24:
    // 0x4ced24: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x4ced24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4ced28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ced28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ced2c: 0xb61023  subu        $v0, $a1, $s6
    ctx->pc = 0x4ced2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x4ced30: 0xb72023  subu        $a0, $a1, $s7
    ctx->pc = 0x4ced30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x4ced34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ced34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ced38: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4ced38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x4ced3c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4ced40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ced40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ced44: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x4ced44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x4ced48: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x4CED48u;
    {
        const bool branch_taken_0x4ced48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CED48u;
        // 0x4ced4c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ced48) {
            ctx->pc = 0x4CEF28u;
            goto label_4cef28;
        }
    }
    ctx->pc = 0x4CED50u;
label_4ced50:
    // 0x4ced50: 0x1280006e  beqz        $s4, . + 4 + (0x6E << 2)
    ctx->pc = 0x4CED50u;
    {
        const bool branch_taken_0x4ced50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ced50) {
            ctx->pc = 0x4CEF0Cu;
            goto label_4cef0c;
        }
    }
    ctx->pc = 0x4CED58u;
    // 0x4ced58: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4ced58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4ced5c: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x4CED5Cu;
    {
        const bool branch_taken_0x4ced5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CED5Cu;
        // 0x4ced60: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ced5c) {
            ctx->pc = 0x4CEF0Cu;
            goto label_4cef0c;
        }
    }
    ctx->pc = 0x4CED64u;
    // 0x4ced64: 0x2456e910  addiu       $s6, $v0, -0x16F0
    ctx->pc = 0x4ced64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
label_4ced68:
    // 0x4ced68: 0xc133448  jal         func_4CD120
    ctx->pc = 0x4CED68u;
    SET_GPR_U32(ctx, 31, 0x4CED70u);
    ctx->pc = 0x4CD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD120u, 0x4CED68u, 0x4CED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CED70u;
label_4ced70:
    // 0x4ced70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CED70u;
    {
        const bool branch_taken_0x4ced70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CED70u;
        // 0x4ced74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ced70) {
            ctx->pc = 0x4CED84u;
            goto label_4ced84;
        }
    }
    ctx->pc = 0x4CED78u;
    // 0x4ced78: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4ced78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x4ced7c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4CED7Cu;
    {
        const bool branch_taken_0x4ced7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ced7c) {
            ctx->pc = 0x4CEE28u;
            goto label_4cee28;
        }
    }
    ctx->pc = 0x4CED84u;
label_4ced84:
    // 0x4ced84: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4ced84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4ced88: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4CED88u;
    {
        const bool branch_taken_0x4ced88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ced88) {
            ctx->pc = 0x4CEE28u;
            goto label_4cee28;
        }
    }
    ctx->pc = 0x4CED90u;
    // 0x4ced90: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x4ced90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4ced94: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4ced94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4ced98: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x4ced98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x4ced9c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4ced9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4ceda0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ceda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ceda4: 0x2c421000  sltiu       $v0, $v0, 0x1000
    ctx->pc = 0x4ceda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4ceda8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4CEDA8u;
    {
        const bool branch_taken_0x4ceda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEDA8u;
        // 0x4cedac: 0xa38823  subu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceda8) {
            ctx->pc = 0x4CEE20u;
            goto label_4cee20;
        }
    }
    ctx->pc = 0x4CEDB0u;
    // 0x4cedb0: 0x1a20001b  blez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4CEDB0u;
    {
        const bool branch_taken_0x4cedb0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x4cedb0) {
            ctx->pc = 0x4CEE20u;
            goto label_4cee20;
        }
    }
    ctx->pc = 0x4CEDB8u;
    // 0x4cedb8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4cedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4cedbc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4cedbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cedc0: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CEDC0u;
    SET_GPR_U32(ctx, 31, 0x4CEDC8u);
    ctx->pc = 0x4CEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEDC0u;
    // 0x4cedc4: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CEDC0u, 0x4CEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEDC8u;
label_4cedc8:
    // 0x4cedc8: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x4cedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x4cedcc: 0x2a241001  slti        $a0, $s1, 0x1001
    ctx->pc = 0x4cedccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x4cedd0: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x4cedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4cedd4: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x4cedd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4cedd8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x4cedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4ceddc: 0x64880a  movz        $s1, $v1, $a0
    ctx->pc = 0x4ceddcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4cede0: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x4cede0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x4cede4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x4cede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x4cede8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4cedec: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x4cedecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
    // 0x4cedf0: 0xae100094  sw          $s0, 0x94($s0)
    ctx->pc = 0x4cedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 16));
    // 0x4cedf4: 0xae16009c  sw          $s6, 0x9C($s0)
    ctx->pc = 0x4cedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 22));
    // 0x4cedf8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x4cedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x4cedfc: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x4cedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    // 0x4cee00: 0xc133470  jal         func_4CD1C0
    ctx->pc = 0x4CEE00u;
    SET_GPR_U32(ctx, 31, 0x4CEE08u);
    ctx->pc = 0x4CEE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEE00u;
    // 0x4cee04: 0xae070090  sw          $a3, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD1C0u, 0x4CEE00u, 0x4CEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE08u;
label_4cee08:
    // 0x4cee08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CEE08u;
    {
        const bool branch_taken_0x4cee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cee08) {
            ctx->pc = 0x4CEE28u;
            goto label_4cee28;
        }
    }
    ctx->pc = 0x4CEE10u;
    // 0x4cee10: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x4cee10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x4cee14: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4cee14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4cee18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4CEE18u;
    {
        const bool branch_taken_0x4cee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cee18) {
            ctx->pc = 0x4CEE28u;
            goto label_4cee28;
        }
    }
    ctx->pc = 0x4CEE20u;
label_4cee20:
    // 0x4cee20: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4cee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cee24: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x4cee24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_4cee28:
    // 0x4cee28: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x4cee28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cee2c: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x4CEE2Cu;
    {
        const bool branch_taken_0x4cee2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEE2Cu;
        // 0x4cee30: 0x291182b  sltu        $v1, $s4, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cee2c) {
            ctx->pc = 0x4CEEF8u;
            goto label_4ceef8;
        }
    }
    ctx->pc = 0x4CEE34u;
    // 0x4cee34: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x4cee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4cee38: 0x283880b  movn        $s1, $s4, $v1
    ctx->pc = 0x4cee38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
    // 0x4cee3c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4cee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x4cee40: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x4cee40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4cee44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4cee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4cee48: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x4cee48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x4cee4c: 0x291a023  subu        $s4, $s4, $s1
    ctx->pc = 0x4cee4cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x4cee50: 0x859023  subu        $s2, $a0, $a1
    ctx->pc = 0x4cee50u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4cee54: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x4cee54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4cee58: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4CEE58u;
    {
        const bool branch_taken_0x4cee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEE58u;
        // 0x4cee5c: 0x2b1a821  addu        $s5, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cee58) {
            ctx->pc = 0x4CEEA8u;
            goto label_4ceea8;
        }
    }
    ctx->pc = 0x4CEE60u;
    // 0x4cee60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cee64: 0xc133518  jal         func_4CD460
    ctx->pc = 0x4CEE64u;
    SET_GPR_U32(ctx, 31, 0x4CEE6Cu);
    ctx->pc = 0x4CEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEE64u;
    // 0x4cee68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4CEE64u, 0x4CEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE6Cu;
label_4cee6c:
    // 0x4cee6c: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x4cee6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x4cee70: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x4cee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x4cee74: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x4cee74u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4cee78: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CEE78u;
    SET_GPR_U32(ctx, 31, 0x4CEE80u);
    ctx->pc = 0x4CEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEE78u;
    // 0x4cee7c: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CEE78u, 0x4CEE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE80u;
label_4cee80:
    // 0x4cee80: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x4cee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cee84: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x4cee84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4cee88: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4cee88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x4cee8c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x4cee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4cee90: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4cee90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x4cee94: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x4cee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x4cee98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CEE98u;
    {
        const bool branch_taken_0x4cee98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cee98) {
            ctx->pc = 0x4CEEA8u;
            goto label_4ceea8;
        }
    }
    ctx->pc = 0x4CEEA0u;
    // 0x4ceea0: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CEEA0u;
    SET_GPR_U32(ctx, 31, 0x4CEEA8u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CEEA0u, 0x4CEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEEA8u;
label_4ceea8:
    // 0x4ceea8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4CEEA8u;
    {
        const bool branch_taken_0x4ceea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEEA8u;
        // 0x4ceeac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceea8) {
            ctx->pc = 0x4CEEF8u;
            goto label_4ceef8;
        }
    }
    ctx->pc = 0x4CEEB0u;
    // 0x4ceeb0: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x4ceeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4ceeb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ceeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceeb8: 0xc133518  jal         func_4CD460
    ctx->pc = 0x4CEEB8u;
    SET_GPR_U32(ctx, 31, 0x4CEEC0u);
    ctx->pc = 0x4CEEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEEB8u;
    // 0x4ceebc: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4CEEB8u, 0x4CEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEEC0u;
label_4ceec0:
    // 0x4ceec0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4ceec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4ceec4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ceec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x4ceec8: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CEEC8u;
    SET_GPR_U32(ctx, 31, 0x4CEED0u);
    ctx->pc = 0x4CEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEEC8u;
    // 0x4ceecc: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CEEC8u, 0x4CEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEED0u;
label_4ceed0:
    // 0x4ceed0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x4ceed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4ceed4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4ceed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4ceed8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x4ceed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x4ceedc: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x4ceedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4ceee0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x4ceee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x4ceee4: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x4ceee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x4ceee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CEEE8u;
    {
        const bool branch_taken_0x4ceee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceee8) {
            ctx->pc = 0x4CEEF8u;
            goto label_4ceef8;
        }
    }
    ctx->pc = 0x4CEEF0u;
    // 0x4ceef0: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CEEF0u;
    SET_GPR_U32(ctx, 31, 0x4CEEF8u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CEEF0u, 0x4CEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEEF8u;
label_4ceef8:
    // 0x4ceef8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEEF8u;
    {
        const bool branch_taken_0x4ceef8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceef8) {
            ctx->pc = 0x4CEF0Cu;
            goto label_4cef0c;
        }
    }
    ctx->pc = 0x4CEF00u;
    // 0x4cef00: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4cef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x4cef04: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x4CEF04u;
    {
        const bool branch_taken_0x4cef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef04) {
            ctx->pc = 0x4CED68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ced68;
        }
    }
    ctx->pc = 0x4CEF0Cu;
label_4cef0c:
    // 0x4cef0c: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CEF0Cu;
    SET_GPR_U32(ctx, 31, 0x4CEF14u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CEF0Cu, 0x4CEF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEF14u;
label_4cef14:
    // 0x4cef14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x4cef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4cef18: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x4cef18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x4cef1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cef20: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x4cef20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x4cef24: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x4cef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_4cef28:
    // 0x4cef28: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4cef2c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x4cef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x4cef30: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x4cef30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4cef34: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4cef34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4cef38: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CEF38u;
    {
        const bool branch_taken_0x4cef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEF38u;
        // 0x4cef3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cef38) {
            ctx->pc = 0x4CEF44u;
            goto label_4cef44;
        }
    }
    ctx->pc = 0x4CEF40u;
    // 0x4cef40: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x4cef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4cef44:
    // 0x4cef44: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x4cef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x4cef48: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cef4c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x4cef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x4cef50: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x4cef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x4cef54: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4cef54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4cef58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEF58u;
    {
        const bool branch_taken_0x4cef58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEF58u;
        // 0x4cef5c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cef58) {
            ctx->pc = 0x4CEF6Cu;
            goto label_4cef6c;
        }
    }
    ctx->pc = 0x4CEF60u;
    // 0x4cef60: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4cef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cef64: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x4cef64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x4cef68: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4cef68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4cef6c:
    // 0x4cef6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cef6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cef70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cef70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cef74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cef74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cef78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cef78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cef7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cef7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cef80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cef80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cef84: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cef84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cef88: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cef88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cef8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cef90: 0x3e00008  jr          $ra
    ctx->pc = 0x4CEF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEF90u;
        // 0x4cef94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CEF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CEF98u;
}
