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

// Function: sub_0035AEB0
// Address: 0x35aeb0 - 0x35af48
void sub_0035AEB0_0x35aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AEB0_0x35aeb0");
#endif

    switch (ctx->pc) {
        case 0x35aedcu: goto label_35aedc;
        case 0x35aee4u: goto label_35aee4;
        case 0x35aef8u: goto label_35aef8;
        case 0x35af0cu: goto label_35af0c;
        case 0x35af14u: goto label_35af14;
        case 0x35af24u: goto label_35af24;
        default: break;
    }

    ctx->pc = 0x35aeb0u;

    // 0x35aeb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35aeb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aeb8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35aebc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35aec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35aec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aec4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35aec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35aecc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35aed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35aed4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AED4u;
    SET_GPR_U32(ctx, 31, 0x35AEDCu);
    ctx->pc = 0x35AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AED4u;
    // 0x35aed8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AED4u, 0x35AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEDCu;
label_35aedc:
    // 0x35aedc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AEDCu;
    SET_GPR_U32(ctx, 31, 0x35AEE4u);
    ctx->pc = 0x35AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEDCu;
    // 0x35aee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AEDCu, 0x35AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEE4u;
label_35aee4:
    // 0x35aee4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35aee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35aee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aeec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35aef0: 0xc102488  jal         func_409220
    ctx->pc = 0x35AEF0u;
    SET_GPR_U32(ctx, 31, 0x35AEF8u);
    ctx->pc = 0x35AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEF0u;
    // 0x35aef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35AEF0u, 0x35AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEF8u;
label_35aef8:
    // 0x35aef8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35aef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aefc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35aefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AF04u;
    SET_GPR_U32(ctx, 31, 0x35AF0Cu);
    ctx->pc = 0x35AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF04u;
    // 0x35af08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AF04u, 0x35AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF0Cu;
label_35af0c:
    // 0x35af0c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35AF0Cu;
    SET_GPR_U32(ctx, 31, 0x35AF14u);
    ctx->pc = 0x35AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF0Cu;
    // 0x35af10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35AF0Cu, 0x35AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF14u;
label_35af14:
    // 0x35af14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35af14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af1c: 0xc08e2a2  jal         func_238A88
    ctx->pc = 0x35AF1Cu;
    SET_GPR_U32(ctx, 31, 0x35AF24u);
    ctx->pc = 0x35AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF1Cu;
    // 0x35af20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x35AF1Cu, 0x35AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF24u;
label_35af24:
    // 0x35af24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35af24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35af28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35af28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35af2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35af30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35af30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35af34: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35af34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35af38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35af38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af3c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF3Cu;
        // 0x35af40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AF44u;
    // 0x35af44: 0x0  nop
    ctx->pc = 0x35af44u;
    // NOP
    ctx->pc = 0x35af48u;
}
