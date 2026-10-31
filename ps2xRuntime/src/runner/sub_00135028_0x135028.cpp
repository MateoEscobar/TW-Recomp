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

// Function: sub_00135028
// Address: 0x135028 - 0x135138
void sub_00135028_0x135028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135028_0x135028");
#endif

    switch (ctx->pc) {
        case 0x135028u: goto label_135028;
        case 0x13502cu: goto label_13502c;
        case 0x135030u: goto label_135030;
        case 0x135034u: goto label_135034;
        case 0x135038u: goto label_135038;
        case 0x13503cu: goto label_13503c;
        case 0x135040u: goto label_135040;
        case 0x135044u: goto label_135044;
        case 0x135048u: goto label_135048;
        case 0x13504cu: goto label_13504c;
        case 0x135050u: goto label_135050;
        case 0x135054u: goto label_135054;
        case 0x135058u: goto label_135058;
        case 0x13505cu: goto label_13505c;
        case 0x135060u: goto label_135060;
        case 0x135064u: goto label_135064;
        case 0x135068u: goto label_135068;
        case 0x13506cu: goto label_13506c;
        case 0x135070u: goto label_135070;
        case 0x135074u: goto label_135074;
        case 0x135078u: goto label_135078;
        case 0x13507cu: goto label_13507c;
        case 0x135080u: goto label_135080;
        case 0x135084u: goto label_135084;
        case 0x135088u: goto label_135088;
        case 0x13508cu: goto label_13508c;
        case 0x135090u: goto label_135090;
        case 0x135094u: goto label_135094;
        case 0x135098u: goto label_135098;
        case 0x13509cu: goto label_13509c;
        case 0x1350a0u: goto label_1350a0;
        case 0x1350a4u: goto label_1350a4;
        case 0x1350a8u: goto label_1350a8;
        case 0x1350acu: goto label_1350ac;
        case 0x1350b0u: goto label_1350b0;
        case 0x1350b4u: goto label_1350b4;
        case 0x1350b8u: goto label_1350b8;
        case 0x1350bcu: goto label_1350bc;
        case 0x1350c0u: goto label_1350c0;
        case 0x1350c4u: goto label_1350c4;
        case 0x1350c8u: goto label_1350c8;
        case 0x1350ccu: goto label_1350cc;
        case 0x1350d0u: goto label_1350d0;
        case 0x1350d4u: goto label_1350d4;
        case 0x1350d8u: goto label_1350d8;
        case 0x1350dcu: goto label_1350dc;
        case 0x1350e0u: goto label_1350e0;
        case 0x1350e4u: goto label_1350e4;
        case 0x1350e8u: goto label_1350e8;
        case 0x1350ecu: goto label_1350ec;
        case 0x1350f0u: goto label_1350f0;
        case 0x1350f4u: goto label_1350f4;
        case 0x1350f8u: goto label_1350f8;
        case 0x1350fcu: goto label_1350fc;
        case 0x135100u: goto label_135100;
        case 0x135104u: goto label_135104;
        case 0x135108u: goto label_135108;
        case 0x13510cu: goto label_13510c;
        case 0x135110u: goto label_135110;
        case 0x135114u: goto label_135114;
        case 0x135118u: goto label_135118;
        case 0x13511cu: goto label_13511c;
        case 0x135120u: goto label_135120;
        case 0x135124u: goto label_135124;
        case 0x135128u: goto label_135128;
        case 0x13512cu: goto label_13512c;
        case 0x135130u: goto label_135130;
        case 0x135134u: goto label_135134;
        default: break;
    }

    ctx->pc = 0x135028u;

label_135028:
    // 0x135028: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x135028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13502c:
    // 0x13502c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_135030:
    // 0x135030: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x135030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_135034:
    // 0x135034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135038:
    // 0x135038: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x135038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13503c:
    // 0x13503c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13503cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135040:
    // 0x135040: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x135040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_135044:
    // 0x135044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x135044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135048:
    // 0x135048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13504c:
    // 0x13504c: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x13504cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_135050:
    // 0x135050: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x135050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
label_135054:
    // 0x135054: 0x266491a8  addiu       $a0, $s3, -0x6E58
    ctx->pc = 0x135054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
label_135058:
    // 0x135058: 0xc136b7c  jal         func_4DADF0
label_13505c:
    if (ctx->pc == 0x13505Cu) {
        ctx->pc = 0x13505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135058u;
        // 0x13505c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135060u;
        goto label_135060;
    }
    ctx->pc = 0x135058u;
    SET_GPR_U32(ctx, 31, 0x135060u);
    ctx->pc = 0x13505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135058u;
    // 0x13505c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x135058u, 0x135060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135060u;
label_135060:
    // 0x135060: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135064:
    // 0x135064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135068:
    // 0x135068: 0xc0e409a  jal         func_390268
label_13506c:
    if (ctx->pc == 0x13506Cu) {
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135068u;
        // 0x13506c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135070u;
        goto label_135070;
    }
    ctx->pc = 0x135068u;
    SET_GPR_U32(ctx, 31, 0x135070u);
    ctx->pc = 0x13506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135068u;
    // 0x13506c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x135068u, 0x135070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135070u;
label_135070:
    // 0x135070: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x135070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_135074:
    // 0x135074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_135078:
    // 0x135078: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x135078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_13507c:
    // 0x13507c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13507cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_135080:
    // 0x135080: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x135080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_135084:
    // 0x135084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x135084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_135088:
    // 0x135088: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x135088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_13508c:
    // 0x13508c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13508cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135090:
    // 0x135090: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_135094:
    if (ctx->pc == 0x135094u) {
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135090u;
        // 0x135094: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135098u;
        goto label_135098;
    }
    ctx->pc = 0x135090u;
    {
        const bool branch_taken_0x135090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135090u;
        // 0x135094: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135090) {
            ctx->pc = 0x1350B4u;
            goto label_1350b4;
        }
    }
    ctx->pc = 0x135098u;
label_135098:
    // 0x135098: 0xc048d40  jal         func_123500
label_13509c:
    if (ctx->pc == 0x13509Cu) {
        ctx->pc = 0x1350A0u;
        goto label_1350a0;
    }
    ctx->pc = 0x135098u;
    SET_GPR_U32(ctx, 31, 0x1350A0u);
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x135098u, 0x1350A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350A0u;
label_1350a0:
    // 0x1350a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1350a4:
    if (ctx->pc == 0x1350A4u) {
        ctx->pc = 0x1350A8u;
        goto label_1350a8;
    }
    ctx->pc = 0x1350A0u;
    {
        const bool branch_taken_0x1350a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350a0) {
            ctx->pc = 0x1350B4u;
            goto label_1350b4;
        }
    }
    ctx->pc = 0x1350A8u;
label_1350a8:
    // 0x1350a8: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1350a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1350ac:
    // 0x1350ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1350acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1350b0:
    // 0x1350b0: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x1350b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_1350b4:
    // 0x1350b4: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1350b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1350b8:
    // 0x1350b8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1350bc:
    if (ctx->pc == 0x1350BCu) {
        ctx->pc = 0x1350BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350B8u;
        // 0x1350bc: 0x266491a8  addiu       $a0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350C0u;
        goto label_1350c0;
    }
    ctx->pc = 0x1350B8u;
    {
        const bool branch_taken_0x1350b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1350BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350B8u;
        // 0x1350bc: 0x266491a8  addiu       $a0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350b8) {
            ctx->pc = 0x135058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135058;
        }
    }
    ctx->pc = 0x1350C0u;
label_1350c0:
    // 0x1350c0: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1350c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1350c4:
    // 0x1350c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1350c8:
    if (ctx->pc == 0x1350C8u) {
        ctx->pc = 0x1350C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350C4u;
        // 0x1350c8: 0x8e050210  lw          $a1, 0x210($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350CCu;
        goto label_1350cc;
    }
    ctx->pc = 0x1350C4u;
    {
        const bool branch_taken_0x1350c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350c4) {
            ctx->pc = 0x1350C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1350C4u;
            // 0x1350c8: 0x8e050210  lw          $a1, 0x210($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1350D8u;
            goto label_1350d8;
        }
    }
    ctx->pc = 0x1350CCu;
label_1350cc:
    // 0x1350cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1350d0:
    // 0x1350d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1350d4:
    if (ctx->pc == 0x1350D4u) {
        ctx->pc = 0x1350D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D0u;
        // 0x1350d4: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350D8u;
        goto label_1350d8;
    }
    ctx->pc = 0x1350D0u;
    {
        const bool branch_taken_0x1350d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D0u;
        // 0x1350d4: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350d0) {
            ctx->pc = 0x13511Cu;
            goto label_13511c;
        }
    }
    ctx->pc = 0x1350D8u;
label_1350d8:
    // 0x1350d8: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
label_1350dc:
    if (ctx->pc == 0x1350DCu) {
        ctx->pc = 0x1350DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D8u;
        // 0x1350dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350E0u;
        goto label_1350e0;
    }
    ctx->pc = 0x1350D8u;
    {
        const bool branch_taken_0x1350d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350d8) {
            ctx->pc = 0x1350DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1350D8u;
            // 0x1350dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135120u;
            goto label_135120;
        }
    }
    ctx->pc = 0x1350E0u;
label_1350e0:
    // 0x1350e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1350e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1350e4:
    // 0x1350e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1350e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1350e8:
    // 0x1350e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1350e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1350ec:
    // 0x1350ec: 0x40f809  jalr        $v0
label_1350f0:
    if (ctx->pc == 0x1350F0u) {
        ctx->pc = 0x1350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350ECu;
        // 0x1350f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350F4u;
        goto label_1350f4;
    }
    ctx->pc = 0x1350ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1350F4u);
        ctx->pc = 0x1350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350ECu;
        // 0x1350f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1350ECu, 0x1350F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1350F4u;
label_1350f4:
    // 0x1350f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1350f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1350f8:
    // 0x1350f8: 0xc0e4060  jal         func_390180
label_1350fc:
    if (ctx->pc == 0x1350FCu) {
        ctx->pc = 0x1350FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350F8u;
        // 0x1350fc: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135100u;
        goto label_135100;
    }
    ctx->pc = 0x1350F8u;
    SET_GPR_U32(ctx, 31, 0x135100u);
    ctx->pc = 0x1350FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350F8u;
    // 0x1350fc: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1350F8u, 0x135100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135100u;
label_135100:
    // 0x135100: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_135104:
    if (ctx->pc == 0x135104u) {
        ctx->pc = 0x135104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135100u;
        // 0x135104: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135108u;
        goto label_135108;
    }
    ctx->pc = 0x135100u;
    {
        const bool branch_taken_0x135100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135100) {
            ctx->pc = 0x135104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135100u;
            // 0x135104: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135120u;
            goto label_135120;
        }
    }
    ctx->pc = 0x135108u;
label_135108:
    // 0x135108: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x135108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_13510c:
    // 0x13510c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x13510cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_135110:
    // 0x135110: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x135110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_135114:
    // 0x135114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x135114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_135118:
    // 0x135118: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x135118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_13511c:
    // 0x13511c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13511cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_135120:
    // 0x135120: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x135120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135124:
    // 0x135124: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x135124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_135128:
    // 0x135128: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x135128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13512c:
    // 0x13512c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135130:
    // 0x135130: 0x3e00008  jr          $ra
label_135134:
    if (ctx->pc == 0x135134u) {
        ctx->pc = 0x135134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135130u;
        // 0x135134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135138u;
        goto label_fallthrough_0x135130;
    }
    ctx->pc = 0x135130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135130u;
        // 0x135134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135130:
    ctx->pc = 0x135138u;
}
