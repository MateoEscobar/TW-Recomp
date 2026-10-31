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

// Function: sub_00235010
// Address: 0x235010 - 0x2350c8
void sub_00235010_0x235010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235010_0x235010");
#endif

    switch (ctx->pc) {
        case 0x235010u: goto label_235010;
        case 0x235014u: goto label_235014;
        case 0x235018u: goto label_235018;
        case 0x23501cu: goto label_23501c;
        case 0x235020u: goto label_235020;
        case 0x235024u: goto label_235024;
        case 0x235028u: goto label_235028;
        case 0x23502cu: goto label_23502c;
        case 0x235030u: goto label_235030;
        case 0x235034u: goto label_235034;
        case 0x235038u: goto label_235038;
        case 0x23503cu: goto label_23503c;
        case 0x235040u: goto label_235040;
        case 0x235044u: goto label_235044;
        case 0x235048u: goto label_235048;
        case 0x23504cu: goto label_23504c;
        case 0x235050u: goto label_235050;
        case 0x235054u: goto label_235054;
        case 0x235058u: goto label_235058;
        case 0x23505cu: goto label_23505c;
        case 0x235060u: goto label_235060;
        case 0x235064u: goto label_235064;
        case 0x235068u: goto label_235068;
        case 0x23506cu: goto label_23506c;
        case 0x235070u: goto label_235070;
        case 0x235074u: goto label_235074;
        case 0x235078u: goto label_235078;
        case 0x23507cu: goto label_23507c;
        case 0x235080u: goto label_235080;
        case 0x235084u: goto label_235084;
        case 0x235088u: goto label_235088;
        case 0x23508cu: goto label_23508c;
        case 0x235090u: goto label_235090;
        case 0x235094u: goto label_235094;
        case 0x235098u: goto label_235098;
        case 0x23509cu: goto label_23509c;
        case 0x2350a0u: goto label_2350a0;
        case 0x2350a4u: goto label_2350a4;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350acu: goto label_2350ac;
        case 0x2350b0u: goto label_2350b0;
        case 0x2350b4u: goto label_2350b4;
        case 0x2350b8u: goto label_2350b8;
        case 0x2350bcu: goto label_2350bc;
        case 0x2350c0u: goto label_2350c0;
        case 0x2350c4u: goto label_2350c4;
        default: break;
    }

    ctx->pc = 0x235010u;

label_235010:
    // 0x235010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_235014:
    // 0x235014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x235014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_235018:
    // 0x235018: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x235018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_23501c:
    // 0x23501c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23501cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235020:
    // 0x235020: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x235020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_235024:
    // 0x235024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235028:
    // 0x235028: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x235028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_23502c:
    // 0x23502c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x23502cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_235030:
    // 0x235030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235034:
    // 0x235034: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x235034u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_235038:
    // 0x235038: 0xc0e402c  jal         func_3900B0
label_23503c:
    if (ctx->pc == 0x23503Cu) {
        ctx->pc = 0x235040u;
        goto label_235040;
    }
    ctx->pc = 0x235038u;
    SET_GPR_U32(ctx, 31, 0x235040u);
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x235038u, 0x235040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235040u;
label_235040:
    // 0x235040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235044:
    // 0x235044: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_235048:
    if (ctx->pc == 0x235048u) {
        ctx->pc = 0x235048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235044u;
        // 0x235048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23504Cu;
        goto label_23504c;
    }
    ctx->pc = 0x235044u;
    {
        const bool branch_taken_0x235044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235044u;
        // 0x235048: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235044) {
            ctx->pc = 0x235090u;
            goto label_235090;
        }
    }
    ctx->pc = 0x23504Cu;
label_23504c:
    // 0x23504c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235050:
    // 0x235050: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x235050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_235054:
    // 0x235054: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x235054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_235058:
    // 0x235058: 0x40f809  jalr        $v0
label_23505c:
    if (ctx->pc == 0x23505Cu) {
        ctx->pc = 0x23505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235058u;
        // 0x23505c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235060u;
        goto label_235060;
    }
    ctx->pc = 0x235058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235060u);
        ctx->pc = 0x23505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235058u;
        // 0x23505c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235058u, 0x235060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235060u;
label_235060:
    // 0x235060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235064:
    // 0x235064: 0xc10c313  jal         func_430C4C
label_235068:
    if (ctx->pc == 0x235068u) {
        ctx->pc = 0x235068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235064u;
        // 0x235068: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23506Cu;
        goto label_23506c;
    }
    ctx->pc = 0x235064u;
    SET_GPR_U32(ctx, 31, 0x23506Cu);
    ctx->pc = 0x235068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235064u;
    // 0x235068: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x235064u, 0x23506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23506Cu;
label_23506c:
    // 0x23506c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_235070:
    if (ctx->pc == 0x235070u) {
        ctx->pc = 0x235070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23506Cu;
        // 0x235070: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235074u;
        goto label_235074;
    }
    ctx->pc = 0x23506Cu;
    {
        const bool branch_taken_0x23506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23506Cu;
        // 0x235070: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23506c) {
            ctx->pc = 0x235090u;
            goto label_235090;
        }
    }
    ctx->pc = 0x235074u;
label_235074:
    // 0x235074: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x235074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_235078:
    // 0x235078: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x235078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_23507c:
    // 0x23507c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x23507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_235080:
    // 0x235080: 0x40f809  jalr        $v0
label_235084:
    if (ctx->pc == 0x235084u) {
        ctx->pc = 0x235084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235080u;
        // 0x235084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235088u;
        goto label_235088;
    }
    ctx->pc = 0x235080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235088u);
        ctx->pc = 0x235084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235080u;
        // 0x235084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235080u, 0x235088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235088u;
label_235088:
    // 0x235088: 0x10000008  b           . + 4 + (0x8 << 2)
label_23508c:
    if (ctx->pc == 0x23508Cu) {
        ctx->pc = 0x23508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235088u;
        // 0x23508c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235090u;
        goto label_235090;
    }
    ctx->pc = 0x235088u;
    {
        const bool branch_taken_0x235088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235088u;
        // 0x23508c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235088) {
            ctx->pc = 0x2350ACu;
            goto label_2350ac;
        }
    }
    ctx->pc = 0x235090u;
label_235090:
    // 0x235090: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x235090u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_235094:
    // 0x235094: 0x2882003c  slti        $v0, $a0, 0x3C
    ctx->pc = 0x235094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
label_235098:
    // 0x235098: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_23509c:
    if (ctx->pc == 0x23509Cu) {
        ctx->pc = 0x23509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235098u;
        // 0x23509c: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350A0u;
        goto label_2350a0;
    }
    ctx->pc = 0x235098u;
    {
        const bool branch_taken_0x235098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235098u;
        // 0x23509c: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235098) {
            ctx->pc = 0x235038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235038;
        }
    }
    ctx->pc = 0x2350A0u;
label_2350a0:
    // 0x2350a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2350a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2350a4:
    // 0x2350a4: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2350a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2350a8:
    // 0x2350a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2350a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2350ac:
    // 0x2350ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2350acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2350b0:
    // 0x2350b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2350b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2350b4:
    // 0x2350b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2350b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2350b8:
    // 0x2350b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2350b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2350bc:
    // 0x2350bc: 0x3e00008  jr          $ra
label_2350c0:
    if (ctx->pc == 0x2350C0u) {
        ctx->pc = 0x2350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350BCu;
        // 0x2350c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350C4u;
        goto label_2350c4;
    }
    ctx->pc = 0x2350BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350BCu;
        // 0x2350c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2350BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2350C4u;
label_2350c4:
    // 0x2350c4: 0x0  nop
    ctx->pc = 0x2350c4u;
    // NOP
    ctx->pc = 0x2350c8u;
}
