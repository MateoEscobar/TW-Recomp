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

// Function: sub_0043AD18
// Address: 0x43ad18 - 0x43ae20
void sub_0043AD18_0x43ad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AD18_0x43ad18");
#endif

    switch (ctx->pc) {
        case 0x43ad50u: goto label_43ad50;
        case 0x43adbcu: goto label_43adbc;
        case 0x43add8u: goto label_43add8;
        case 0x43ade4u: goto label_43ade4;
        default: break;
    }

    ctx->pc = 0x43ad18u;

    // 0x43ad18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43ad1c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x43ad1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ad20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x43ad20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x43ad24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x43ad24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ad28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x43ad28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x43ad2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43ad2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ad30: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x43ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x43ad34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x43ad34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ad38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x43ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x43ad3c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43ad3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ad40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43ad44: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x43ad44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x43ad48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x43ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x43ad4c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x43ad4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_43ad50:
    // 0x43ad50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x43ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43ad54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x43ad54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x43ad58: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x43ad58u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x43ad5c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x43ad5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x43ad60: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x43ad60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x43ad64: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x43ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43ad68: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x43ad68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x43ad6c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x43ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x43ad70: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x43ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x43ad74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43ad78: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x43ad78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x43ad7c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x43ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x43ad80: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x43ad80u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x43ad84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x43ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x43ad88: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x43ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x43ad8c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x43AD8Cu;
    {
        const bool branch_taken_0x43ad8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x43AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AD8Cu;
        // 0x43ad90: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ad8c) {
            ctx->pc = 0x43AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43ad50;
        }
    }
    ctx->pc = 0x43AD94u;
    // 0x43ad94: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x43AD94u;
    {
        const bool branch_taken_0x43ad94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x43AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AD94u;
        // 0x43ad98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ad94) {
            ctx->pc = 0x43AE00u;
            goto label_43ae00;
        }
    }
    ctx->pc = 0x43AD9Cu;
    // 0x43ad9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43ada0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x43ada0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43ada4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x43ADA4u;
    {
        const bool branch_taken_0x43ada4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43ADA4u;
        // 0x43ada8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ada4) {
            ctx->pc = 0x43ADECu;
            goto label_43adec;
        }
    }
    ctx->pc = 0x43ADACu;
    // 0x43adac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x43adacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x43adb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x43adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43adb4: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43ADB4u;
    SET_GPR_U32(ctx, 31, 0x43ADBCu);
    ctx->pc = 0x43ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43ADB4u;
    // 0x43adb8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43ADB4u, 0x43ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43ADBCu;
label_43adbc:
    // 0x43adbc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x43adbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43adc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43adc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43adc4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x43adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x43adc8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x43adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x43adcc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x43adccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x43add0: 0xc10c190  jal         func_430640
    ctx->pc = 0x43ADD0u;
    SET_GPR_U32(ctx, 31, 0x43ADD8u);
    ctx->pc = 0x43ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43ADD0u;
    // 0x43add4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x43ADD0u, 0x43ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43ADD8u;
label_43add8:
    // 0x43add8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43add8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43addc: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x43ADDCu;
    SET_GPR_U32(ctx, 31, 0x43ADE4u);
    ctx->pc = 0x43ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43ADDCu;
    // 0x43ade0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x43ADDCu, 0x43ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43ADE4u;
label_43ade4:
    // 0x43ade4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x43ade4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ade8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x43ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_43adec:
    // 0x43adec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x43adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x43adf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43adf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x43adf4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x43adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x43adf8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x43adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x43adfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43adfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43ae00:
    // 0x43ae00: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x43ae00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43ae04: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x43ae04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43ae08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x43ae08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43ae0c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x43ae0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43ae10: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x43ae10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43ae14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43ae18: 0x3e00008  jr          $ra
    ctx->pc = 0x43AE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AE18u;
        // 0x43ae1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AE20u;
}
