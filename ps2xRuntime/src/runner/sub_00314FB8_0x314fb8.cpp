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

// Function: sub_00314FB8
// Address: 0x314fb8 - 0x3150c8
void sub_00314FB8_0x314fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314FB8_0x314fb8");
#endif

    switch (ctx->pc) {
        case 0x314fb8u: goto label_314fb8;
        case 0x314fbcu: goto label_314fbc;
        case 0x314fc0u: goto label_314fc0;
        case 0x314fc4u: goto label_314fc4;
        case 0x314fc8u: goto label_314fc8;
        case 0x314fccu: goto label_314fcc;
        case 0x314fd0u: goto label_314fd0;
        case 0x314fd4u: goto label_314fd4;
        case 0x314fd8u: goto label_314fd8;
        case 0x314fdcu: goto label_314fdc;
        case 0x314fe0u: goto label_314fe0;
        case 0x314fe4u: goto label_314fe4;
        case 0x314fe8u: goto label_314fe8;
        case 0x314fecu: goto label_314fec;
        case 0x314ff0u: goto label_314ff0;
        case 0x314ff4u: goto label_314ff4;
        case 0x314ff8u: goto label_314ff8;
        case 0x314ffcu: goto label_314ffc;
        case 0x315000u: goto label_315000;
        case 0x315004u: goto label_315004;
        case 0x315008u: goto label_315008;
        case 0x31500cu: goto label_31500c;
        case 0x315010u: goto label_315010;
        case 0x315014u: goto label_315014;
        case 0x315018u: goto label_315018;
        case 0x31501cu: goto label_31501c;
        case 0x315020u: goto label_315020;
        case 0x315024u: goto label_315024;
        case 0x315028u: goto label_315028;
        case 0x31502cu: goto label_31502c;
        case 0x315030u: goto label_315030;
        case 0x315034u: goto label_315034;
        case 0x315038u: goto label_315038;
        case 0x31503cu: goto label_31503c;
        case 0x315040u: goto label_315040;
        case 0x315044u: goto label_315044;
        case 0x315048u: goto label_315048;
        case 0x31504cu: goto label_31504c;
        case 0x315050u: goto label_315050;
        case 0x315054u: goto label_315054;
        case 0x315058u: goto label_315058;
        case 0x31505cu: goto label_31505c;
        case 0x315060u: goto label_315060;
        case 0x315064u: goto label_315064;
        case 0x315068u: goto label_315068;
        case 0x31506cu: goto label_31506c;
        case 0x315070u: goto label_315070;
        case 0x315074u: goto label_315074;
        case 0x315078u: goto label_315078;
        case 0x31507cu: goto label_31507c;
        case 0x315080u: goto label_315080;
        case 0x315084u: goto label_315084;
        case 0x315088u: goto label_315088;
        case 0x31508cu: goto label_31508c;
        case 0x315090u: goto label_315090;
        case 0x315094u: goto label_315094;
        case 0x315098u: goto label_315098;
        case 0x31509cu: goto label_31509c;
        case 0x3150a0u: goto label_3150a0;
        case 0x3150a4u: goto label_3150a4;
        case 0x3150a8u: goto label_3150a8;
        case 0x3150acu: goto label_3150ac;
        case 0x3150b0u: goto label_3150b0;
        case 0x3150b4u: goto label_3150b4;
        case 0x3150b8u: goto label_3150b8;
        case 0x3150bcu: goto label_3150bc;
        case 0x3150c0u: goto label_3150c0;
        case 0x3150c4u: goto label_3150c4;
        default: break;
    }

    ctx->pc = 0x314fb8u;

label_314fb8:
    // 0x314fb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x314fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_314fbc:
    // 0x314fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314fc0:
    // 0x314fc0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x314fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_314fc4:
    // 0x314fc4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x314fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_314fc8:
    // 0x314fc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x314fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_314fcc:
    // 0x314fcc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x314fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_314fd0:
    // 0x314fd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x314fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_314fd4:
    // 0x314fd4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x314fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_314fd8:
    // 0x314fd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x314fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_314fdc:
    // 0x314fdc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x314fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_314fe0:
    // 0x314fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_314fe4:
    // 0x314fe4: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x314fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_314fe8:
    // 0x314fe8: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
label_314fec:
    if (ctx->pc == 0x314FECu) {
        ctx->pc = 0x314FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FE8u;
        // 0x314fec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314FF0u;
        goto label_314ff0;
    }
    ctx->pc = 0x314FE8u;
    {
        const bool branch_taken_0x314fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x314FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FE8u;
        // 0x314fec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fe8) {
            ctx->pc = 0x31509Cu;
            goto label_31509c;
        }
    }
    ctx->pc = 0x314FF0u;
label_314ff0:
    // 0x314ff0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314ff4:
    // 0x314ff4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x314ff4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314ff8:
    // 0x314ff8: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x314ff8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_314ffc:
    // 0x314ffc: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x314ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_315000:
    // 0x315000: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x315000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_315004:
    // 0x315004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x315004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315008:
    // 0x315008: 0xc137826  jal         func_4DE098
label_31500c:
    if (ctx->pc == 0x31500Cu) {
        ctx->pc = 0x31500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315008u;
        // 0x31500c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315010u;
        goto label_315010;
    }
    ctx->pc = 0x315008u;
    SET_GPR_U32(ctx, 31, 0x315010u);
    ctx->pc = 0x31500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315008u;
    // 0x31500c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x315008u, 0x315010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315010u;
label_315010:
    // 0x315010: 0xc0e409a  jal         func_390268
label_315014:
    if (ctx->pc == 0x315014u) {
        ctx->pc = 0x315014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315010u;
        // 0x315014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315018u;
        goto label_315018;
    }
    ctx->pc = 0x315010u;
    SET_GPR_U32(ctx, 31, 0x315018u);
    ctx->pc = 0x315014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315010u;
    // 0x315014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x315010u, 0x315018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315018u;
label_315018:
    // 0x315018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x315018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31501c:
    // 0x31501c: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
label_315020:
    if (ctx->pc == 0x315020u) {
        ctx->pc = 0x315020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31501Cu;
        // 0x315020: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315024u;
        goto label_315024;
    }
    ctx->pc = 0x31501Cu;
    {
        const bool branch_taken_0x31501c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31501c) {
            ctx->pc = 0x315020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31501Cu;
            // 0x315020: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315088u;
            goto label_315088;
        }
    }
    ctx->pc = 0x315024u;
label_315024:
    // 0x315024: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x315024u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_315028:
    // 0x315028: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x315028u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31502c:
    // 0x31502c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31502cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_315030:
    // 0x315030: 0x50560015  beql        $v0, $s6, . + 4 + (0x15 << 2)
label_315034:
    if (ctx->pc == 0x315034u) {
        ctx->pc = 0x315034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315030u;
        // 0x315034: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315038u;
        goto label_315038;
    }
    ctx->pc = 0x315030u;
    {
        const bool branch_taken_0x315030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x315030) {
            ctx->pc = 0x315034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315030u;
            // 0x315034: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315088u;
            goto label_315088;
        }
    }
    ctx->pc = 0x315038u;
label_315038:
    // 0x315038: 0xc087502  jal         func_21D408
label_31503c:
    if (ctx->pc == 0x31503Cu) {
        ctx->pc = 0x315040u;
        goto label_315040;
    }
    ctx->pc = 0x315038u;
    SET_GPR_U32(ctx, 31, 0x315040u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x315038u, 0x315040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315040u;
label_315040:
    // 0x315040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x315040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315044:
    // 0x315044: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x315044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_315048:
    // 0x315048: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31504c:
    if (ctx->pc == 0x31504Cu) {
        ctx->pc = 0x31504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315048u;
        // 0x31504c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315050u;
        goto label_315050;
    }
    ctx->pc = 0x315048u;
    {
        const bool branch_taken_0x315048 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315048u;
        // 0x31504c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315048) {
            ctx->pc = 0x31505Cu;
            goto label_31505c;
        }
    }
    ctx->pc = 0x315050u;
label_315050:
    // 0x315050: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x315050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315054:
    // 0x315054: 0x10000002  b           . + 4 + (0x2 << 2)
label_315058:
    if (ctx->pc == 0x315058u) {
        ctx->pc = 0x315058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315054u;
        // 0x315058: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31505Cu;
        goto label_31505c;
    }
    ctx->pc = 0x315054u;
    {
        const bool branch_taken_0x315054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315054u;
        // 0x315058: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315054) {
            ctx->pc = 0x315060u;
            goto label_315060;
        }
    }
    ctx->pc = 0x31505Cu;
label_31505c:
    // 0x31505c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315060:
    // 0x315060: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_315064:
    if (ctx->pc == 0x315064u) {
        ctx->pc = 0x315064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315060u;
        // 0x315064: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315068u;
        goto label_315068;
    }
    ctx->pc = 0x315060u;
    {
        const bool branch_taken_0x315060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x315060) {
            ctx->pc = 0x315064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315060u;
            // 0x315064: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315088u;
            goto label_315088;
        }
    }
    ctx->pc = 0x315068u;
label_315068:
    // 0x315068: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x315068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31506c:
    // 0x31506c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31506cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_315070:
    // 0x315070: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x315070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_315074:
    // 0x315074: 0x40f809  jalr        $v0
label_315078:
    if (ctx->pc == 0x315078u) {
        ctx->pc = 0x315078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315074u;
        // 0x315078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31507Cu;
        goto label_31507c;
    }
    ctx->pc = 0x315074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31507Cu);
        ctx->pc = 0x315078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315074u;
        // 0x315078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315074u, 0x31507Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31507Cu;
label_31507c:
    // 0x31507c: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
label_315080:
    if (ctx->pc == 0x315080u) {
        ctx->pc = 0x315080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31507Cu;
        // 0x315080: 0xa2140024  sb          $s4, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315084u;
        goto label_315084;
    }
    ctx->pc = 0x31507Cu;
    {
        const bool branch_taken_0x31507c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x31507c) {
            ctx->pc = 0x315080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31507Cu;
            // 0x315080: 0xa2140024  sb          $s4, 0x24($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315084u;
            goto label_315084;
        }
    }
    ctx->pc = 0x315084u;
label_315084:
    // 0x315084: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x315084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_315088:
    // 0x315088: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x315088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31508c:
    // 0x31508c: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
label_315090:
    if (ctx->pc == 0x315090u) {
        ctx->pc = 0x315090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31508Cu;
        // 0x315090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315094u;
        goto label_315094;
    }
    ctx->pc = 0x31508Cu;
    {
        const bool branch_taken_0x31508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31508c) {
            ctx->pc = 0x315090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31508Cu;
            // 0x315090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315008;
        }
    }
    ctx->pc = 0x315094u;
label_315094:
    // 0x315094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315098:
    // 0x315098: 0xa2420034  sb          $v0, 0x34($s2)
    ctx->pc = 0x315098u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 2));
label_31509c:
    // 0x31509c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31509cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3150a0:
    // 0x3150a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3150a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3150a4:
    // 0x3150a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3150a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3150a8:
    // 0x3150a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3150a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3150ac:
    // 0x3150ac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3150acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3150b0:
    // 0x3150b0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3150b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3150b4:
    // 0x3150b4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3150b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3150b8:
    // 0x3150b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3150b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3150bc:
    // 0x3150bc: 0x3e00008  jr          $ra
label_3150c0:
    if (ctx->pc == 0x3150C0u) {
        ctx->pc = 0x3150C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150BCu;
        // 0x3150c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3150C4u;
        goto label_3150c4;
    }
    ctx->pc = 0x3150BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3150C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150BCu;
        // 0x3150c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3150BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3150C4u;
label_3150c4:
    // 0x3150c4: 0x0  nop
    ctx->pc = 0x3150c4u;
    // NOP
    ctx->pc = 0x3150c8u;
}
