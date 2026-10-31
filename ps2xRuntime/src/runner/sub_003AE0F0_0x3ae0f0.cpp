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

// Function: sub_003AE0F0
// Address: 0x3ae0f0 - 0x3ae180
void sub_003AE0F0_0x3ae0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE0F0_0x3ae0f0");
#endif

    switch (ctx->pc) {
        case 0x3ae0f0u: goto label_3ae0f0;
        case 0x3ae0f4u: goto label_3ae0f4;
        case 0x3ae0f8u: goto label_3ae0f8;
        case 0x3ae0fcu: goto label_3ae0fc;
        case 0x3ae100u: goto label_3ae100;
        case 0x3ae104u: goto label_3ae104;
        case 0x3ae108u: goto label_3ae108;
        case 0x3ae10cu: goto label_3ae10c;
        case 0x3ae110u: goto label_3ae110;
        case 0x3ae114u: goto label_3ae114;
        case 0x3ae118u: goto label_3ae118;
        case 0x3ae11cu: goto label_3ae11c;
        case 0x3ae120u: goto label_3ae120;
        case 0x3ae124u: goto label_3ae124;
        case 0x3ae128u: goto label_3ae128;
        case 0x3ae12cu: goto label_3ae12c;
        case 0x3ae130u: goto label_3ae130;
        case 0x3ae134u: goto label_3ae134;
        case 0x3ae138u: goto label_3ae138;
        case 0x3ae13cu: goto label_3ae13c;
        case 0x3ae140u: goto label_3ae140;
        case 0x3ae144u: goto label_3ae144;
        case 0x3ae148u: goto label_3ae148;
        case 0x3ae14cu: goto label_3ae14c;
        case 0x3ae150u: goto label_3ae150;
        case 0x3ae154u: goto label_3ae154;
        case 0x3ae158u: goto label_3ae158;
        case 0x3ae15cu: goto label_3ae15c;
        case 0x3ae160u: goto label_3ae160;
        case 0x3ae164u: goto label_3ae164;
        case 0x3ae168u: goto label_3ae168;
        case 0x3ae16cu: goto label_3ae16c;
        case 0x3ae170u: goto label_3ae170;
        case 0x3ae174u: goto label_3ae174;
        case 0x3ae178u: goto label_3ae178;
        case 0x3ae17cu: goto label_3ae17c;
        default: break;
    }

    ctx->pc = 0x3ae0f0u;

label_3ae0f0:
    // 0x3ae0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ae0f4:
    // 0x3ae0f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ae0f8:
    // 0x3ae0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ae0fc:
    // 0x3ae0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ae100:
    // 0x3ae100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae104:
    // 0x3ae104: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ae104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae108:
    // 0x3ae108: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae10c:
    // 0x3ae10c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae110:
    // 0x3ae110: 0x40f809  jalr        $v0
label_3ae114:
    if (ctx->pc == 0x3AE114u) {
        ctx->pc = 0x3AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE110u;
        // 0x3ae114: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE118u;
        goto label_3ae118;
    }
    ctx->pc = 0x3AE110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE118u);
        ctx->pc = 0x3AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE110u;
        // 0x3ae114: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE110u, 0x3AE118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE118u;
label_3ae118:
    // 0x3ae118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ae118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae11c:
    // 0x3ae11c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ae11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ae120:
    // 0x3ae120: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ae120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae124:
    // 0x3ae124: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_3ae128:
    if (ctx->pc == 0x3AE128u) {
        ctx->pc = 0x3AE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE124u;
        // 0x3ae128: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE12Cu;
        goto label_3ae12c;
    }
    ctx->pc = 0x3AE124u;
    {
        const bool branch_taken_0x3ae124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ae124) {
            ctx->pc = 0x3AE128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE124u;
            // 0x3ae128: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE140u;
            goto label_3ae140;
        }
    }
    ctx->pc = 0x3AE12Cu;
label_3ae12c:
    // 0x3ae12c: 0xc0e9694  jal         func_3A5A50
label_3ae130:
    if (ctx->pc == 0x3AE130u) {
        ctx->pc = 0x3AE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE12Cu;
        // 0x3ae130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE134u;
        goto label_3ae134;
    }
    ctx->pc = 0x3AE12Cu;
    SET_GPR_U32(ctx, 31, 0x3AE134u);
    ctx->pc = 0x3AE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE12Cu;
    // 0x3ae130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AE12Cu, 0x3AE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE134u;
label_3ae134:
    // 0x3ae134: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ae138:
    if (ctx->pc == 0x3AE138u) {
        ctx->pc = 0x3AE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE134u;
        // 0x3ae138: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE13Cu;
        goto label_3ae13c;
    }
    ctx->pc = 0x3AE134u;
    {
        const bool branch_taken_0x3ae134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae134) {
            ctx->pc = 0x3AE138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE134u;
            // 0x3ae138: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE144u;
            goto label_3ae144;
        }
    }
    ctx->pc = 0x3AE13Cu;
label_3ae13c:
    // 0x3ae13c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x3ae13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_3ae140:
    // 0x3ae140: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ae140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae144:
    // 0x3ae144: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3ae144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3ae148:
    // 0x3ae148: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3ae14c:
    if (ctx->pc == 0x3AE14Cu) {
        ctx->pc = 0x3AE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE148u;
        // 0x3ae14c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE150u;
        goto label_3ae150;
    }
    ctx->pc = 0x3AE148u;
    {
        const bool branch_taken_0x3ae148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE148u;
        // 0x3ae14c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae148) {
            ctx->pc = 0x3AE15Cu;
            goto label_3ae15c;
        }
    }
    ctx->pc = 0x3AE150u;
label_3ae150:
    // 0x3ae150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae154:
    // 0x3ae154: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ae158:
    if (ctx->pc == 0x3AE158u) {
        ctx->pc = 0x3AE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE154u;
        // 0x3ae158: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE15Cu;
        goto label_3ae15c;
    }
    ctx->pc = 0x3AE154u;
    {
        const bool branch_taken_0x3ae154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE154u;
        // 0x3ae158: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae154) {
            ctx->pc = 0x3AE168u;
            goto label_3ae168;
        }
    }
    ctx->pc = 0x3AE15Cu;
label_3ae15c:
    // 0x3ae15c: 0xc0e93de  jal         func_3A4F78
label_3ae160:
    if (ctx->pc == 0x3AE160u) {
        ctx->pc = 0x3AE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE15Cu;
        // 0x3ae160: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE164u;
        goto label_3ae164;
    }
    ctx->pc = 0x3AE15Cu;
    SET_GPR_U32(ctx, 31, 0x3AE164u);
    ctx->pc = 0x3AE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE15Cu;
    // 0x3ae160: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3AE15Cu, 0x3AE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE164u;
label_3ae164:
    // 0x3ae164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ae168:
    // 0x3ae168: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae16c:
    // 0x3ae16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae170:
    // 0x3ae170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae174:
    // 0x3ae174: 0x3e00008  jr          $ra
label_3ae178:
    if (ctx->pc == 0x3AE178u) {
        ctx->pc = 0x3AE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE174u;
        // 0x3ae178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE17Cu;
        goto label_3ae17c;
    }
    ctx->pc = 0x3AE174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE174u;
        // 0x3ae178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE17Cu;
label_3ae17c:
    // 0x3ae17c: 0x0  nop
    ctx->pc = 0x3ae17cu;
    // NOP
    ctx->pc = 0x3ae180u;
}
