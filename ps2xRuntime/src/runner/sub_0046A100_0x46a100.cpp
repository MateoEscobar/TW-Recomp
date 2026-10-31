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

// Function: sub_0046A100
// Address: 0x46a100 - 0x46a190
void sub_0046A100_0x46a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A100_0x46a100");
#endif

    switch (ctx->pc) {
        case 0x46a100u: goto label_46a100;
        case 0x46a104u: goto label_46a104;
        case 0x46a108u: goto label_46a108;
        case 0x46a10cu: goto label_46a10c;
        case 0x46a110u: goto label_46a110;
        case 0x46a114u: goto label_46a114;
        case 0x46a118u: goto label_46a118;
        case 0x46a11cu: goto label_46a11c;
        case 0x46a120u: goto label_46a120;
        case 0x46a124u: goto label_46a124;
        case 0x46a128u: goto label_46a128;
        case 0x46a12cu: goto label_46a12c;
        case 0x46a130u: goto label_46a130;
        case 0x46a134u: goto label_46a134;
        case 0x46a138u: goto label_46a138;
        case 0x46a13cu: goto label_46a13c;
        case 0x46a140u: goto label_46a140;
        case 0x46a144u: goto label_46a144;
        case 0x46a148u: goto label_46a148;
        case 0x46a14cu: goto label_46a14c;
        case 0x46a150u: goto label_46a150;
        case 0x46a154u: goto label_46a154;
        case 0x46a158u: goto label_46a158;
        case 0x46a15cu: goto label_46a15c;
        case 0x46a160u: goto label_46a160;
        case 0x46a164u: goto label_46a164;
        case 0x46a168u: goto label_46a168;
        case 0x46a16cu: goto label_46a16c;
        case 0x46a170u: goto label_46a170;
        case 0x46a174u: goto label_46a174;
        case 0x46a178u: goto label_46a178;
        case 0x46a17cu: goto label_46a17c;
        case 0x46a180u: goto label_46a180;
        case 0x46a184u: goto label_46a184;
        case 0x46a188u: goto label_46a188;
        case 0x46a18cu: goto label_46a18c;
        default: break;
    }

    ctx->pc = 0x46a100u;

label_46a100:
    // 0x46a100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_46a104:
    // 0x46a104: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46a108:
    // 0x46a108: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x46a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_46a10c:
    // 0x46a10c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46a10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46a110:
    // 0x46a110: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x46a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_46a114:
    // 0x46a114: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x46a114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_46a118:
    // 0x46a118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46a11c:
    // 0x46a11c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x46a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_46a120:
    // 0x46a120: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x46a120u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_46a124:
    // 0x46a124: 0x12330010  beq         $s1, $s3, . + 4 + (0x10 << 2)
label_46a128:
    if (ctx->pc == 0x46A128u) {
        ctx->pc = 0x46A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A124u;
        // 0x46a128: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A12Cu;
        goto label_46a12c;
    }
    ctx->pc = 0x46A124u;
    {
        const bool branch_taken_0x46a124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x46A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A124u;
        // 0x46a128: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a124) {
            ctx->pc = 0x46A168u;
            goto label_46a168;
        }
    }
    ctx->pc = 0x46A12Cu;
label_46a12c:
    // 0x46a12c: 0x2630ffc0  addiu       $s0, $s1, -0x40
    ctx->pc = 0x46a12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_46a130:
    // 0x46a130: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x46a130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_46a134:
    // 0x46a134: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x46a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_46a138:
    // 0x46a138: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_46a13c:
    if (ctx->pc == 0x46A13Cu) {
        ctx->pc = 0x46A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A138u;
        // 0x46a13c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A140u;
        goto label_46a140;
    }
    ctx->pc = 0x46A138u;
    {
        const bool branch_taken_0x46a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a138) {
            ctx->pc = 0x46A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46A138u;
            // 0x46a13c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46A15Cu;
            goto label_46a15c;
        }
    }
    ctx->pc = 0x46A140u;
label_46a140:
    // 0x46a140: 0xc12104a  jal         func_484128
label_46a144:
    if (ctx->pc == 0x46A144u) {
        ctx->pc = 0x46A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A140u;
        // 0x46a144: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A148u;
        goto label_46a148;
    }
    ctx->pc = 0x46A140u;
    SET_GPR_U32(ctx, 31, 0x46A148u);
    ctx->pc = 0x46A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A140u;
    // 0x46a144: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x46A140u, 0x46A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A148u;
label_46a148:
    // 0x46a148: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x46a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_46a14c:
    // 0x46a14c: 0x40f809  jalr        $v0
label_46a150:
    if (ctx->pc == 0x46A150u) {
        ctx->pc = 0x46A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A14Cu;
        // 0x46a150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A154u;
        goto label_46a154;
    }
    ctx->pc = 0x46A14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46A154u);
        ctx->pc = 0x46A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A14Cu;
        // 0x46a150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A14Cu, 0x46A154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46A154u;
label_46a154:
    // 0x46a154: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x46a154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_46a158:
    // 0x46a158: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x46a158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46a15c:
    // 0x46a15c: 0x1633fff4  bne         $s1, $s3, . + 4 + (-0xC << 2)
label_46a160:
    if (ctx->pc == 0x46A160u) {
        ctx->pc = 0x46A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A15Cu;
        // 0x46a160: 0x2630ffc0  addiu       $s0, $s1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A164u;
        goto label_46a164;
    }
    ctx->pc = 0x46A15Cu;
    {
        const bool branch_taken_0x46a15c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x46A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A15Cu;
        // 0x46a160: 0x2630ffc0  addiu       $s0, $s1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46a15c) {
            ctx->pc = 0x46A130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46a130;
        }
    }
    ctx->pc = 0x46A164u;
label_46a164:
    // 0x46a164: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46a164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46a168:
    // 0x46a168: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x46a168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46a16c:
    // 0x46a16c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46a16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46a170:
    // 0x46a170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46a174:
    // 0x46a174: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x46a174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46a178:
    // 0x46a178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46a17c:
    // 0x46a17c: 0x3e00008  jr          $ra
label_46a180:
    if (ctx->pc == 0x46A180u) {
        ctx->pc = 0x46A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A17Cu;
        // 0x46a180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46A184u;
        goto label_46a184;
    }
    ctx->pc = 0x46A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A17Cu;
        // 0x46a180: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A184u;
label_46a184:
    // 0x46a184: 0x0  nop
    ctx->pc = 0x46a184u;
    // NOP
label_46a188:
    // 0x46a188: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x46a188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
label_46a18c:
    // 0x46a18c: 0x0  nop
    ctx->pc = 0x46a18cu;
    // NOP
    ctx->pc = 0x46a190u;
}
