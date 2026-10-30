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

// Function: sub_00364F50
// Address: 0x364f50 - 0x365058
void sub_00364F50_0x364f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364F50_0x364f50");
#endif

    switch (ctx->pc) {
        case 0x364f84u: goto label_364f84;
        case 0x364f8cu: goto label_364f8c;
        case 0x364fa0u: goto label_364fa0;
        case 0x364fb4u: goto label_364fb4;
        case 0x364fc8u: goto label_364fc8;
        case 0x364fd0u: goto label_364fd0;
        case 0x364fe4u: goto label_364fe4;
        case 0x36500cu: goto label_36500c;
        case 0x365014u: goto label_365014;
        case 0x365030u: goto label_365030;
        default: break;
    }

    ctx->pc = 0x364f50u;

    // 0x364f50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x364f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x364f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364f58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x364f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x364f5c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x364f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x364f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x364f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x364f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x364f6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x364f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x364f70: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x364f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x364f74: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x364f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x364f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364f7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364F7Cu;
    SET_GPR_U32(ctx, 31, 0x364F84u);
    ctx->pc = 0x364F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F7Cu;
    // 0x364f80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364F7Cu, 0x364F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F84u;
label_364f84:
    // 0x364f84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364F84u;
    SET_GPR_U32(ctx, 31, 0x364F8Cu);
    ctx->pc = 0x364F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F84u;
    // 0x364f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364F84u, 0x364F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F8Cu;
label_364f8c:
    // 0x364f8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x364f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364f98: 0xc102488  jal         func_409220
    ctx->pc = 0x364F98u;
    SET_GPR_U32(ctx, 31, 0x364FA0u);
    ctx->pc = 0x364F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F98u;
    // 0x364f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x364F98u, 0x364FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FA0u;
label_364fa0:
    // 0x364fa0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x364fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fa8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364fac: 0xc102488  jal         func_409220
    ctx->pc = 0x364FACu;
    SET_GPR_U32(ctx, 31, 0x364FB4u);
    ctx->pc = 0x364FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FACu;
    // 0x364fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x364FACu, 0x364FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FB4u;
label_364fb4:
    // 0x364fb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x364fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x364fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364fc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364FC0u;
    SET_GPR_U32(ctx, 31, 0x364FC8u);
    ctx->pc = 0x364FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FC0u;
    // 0x364fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364FC0u, 0x364FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FC8u;
label_364fc8:
    // 0x364fc8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364FC8u;
    SET_GPR_U32(ctx, 31, 0x364FD0u);
    ctx->pc = 0x364FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FC8u;
    // 0x364fcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364FC8u, 0x364FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FD0u;
label_364fd0:
    // 0x364fd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364fd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x364fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x364fdc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364FDCu;
    SET_GPR_U32(ctx, 31, 0x364FE4u);
    ctx->pc = 0x364FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364FDCu;
    // 0x364fe0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364FDCu, 0x364FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364FE4u;
label_364fe4:
    // 0x364fe4: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x364fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x364fe8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x364fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x364fec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x364fecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x364ff0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x364ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x364ff4: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x364ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x364ff8: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x364ff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x364ffc: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x364ffcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x365000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365004: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365004u;
    SET_GPR_U32(ctx, 31, 0x36500Cu);
    ctx->pc = 0x365008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365004u;
    // 0x365008: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365004u, 0x36500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36500Cu;
label_36500c:
    // 0x36500c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36500Cu;
    SET_GPR_U32(ctx, 31, 0x365014u);
    ctx->pc = 0x365010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36500Cu;
    // 0x365010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36500Cu, 0x365014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365014u;
label_365014:
    // 0x365014: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x365014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x365018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36501c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365020: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x365020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365024: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x365024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365028: 0xc08e568  jal         func_2395A0
    ctx->pc = 0x365028u;
    SET_GPR_U32(ctx, 31, 0x365030u);
    ctx->pc = 0x36502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365028u;
    // 0x36502c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395A0u, 0x365028u, 0x365030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365030u;
label_365030:
    // 0x365030: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x365030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x365034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365038: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x365038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36503c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36503cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365040: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x365040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365044: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x365044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x365048: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x365048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36504c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365050: 0x3e00008  jr          $ra
    ctx->pc = 0x365050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365050u;
        // 0x365054: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365058u;
}
