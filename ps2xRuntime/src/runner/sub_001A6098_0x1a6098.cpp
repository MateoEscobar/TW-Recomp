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

// Function: sub_001A6098
// Address: 0x1a6098 - 0x1a6180
void sub_001A6098_0x1a6098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6098_0x1a6098");
#endif

    switch (ctx->pc) {
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a60e4u: goto label_1a60e4;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60f4u: goto label_1a60f4;
        case 0x1a6110u: goto label_1a6110;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a6144u: goto label_1a6144;
        default: break;
    }

    ctx->pc = 0x1a6098u;

    // 0x1a6098: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a609c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a60a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a60a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a60a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a60a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a60a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a60ac: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a60b0: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1a60b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a60b4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a60b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a60b8: 0x26500340  addiu       $s0, $s2, 0x340
    ctx->pc = 0x1a60b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x1a60bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a60bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a60c0: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1A60C0u;
    SET_GPR_U32(ctx, 31, 0x1A60C8u);
    ctx->pc = 0x1A60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60C0u;
    // 0x1a60c4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1A60C0u, 0x1A60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60C8u;
label_1a60c8:
    // 0x1a60c8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1a60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1a60cc: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1a60d0: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x1a60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x1a60d4: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1A60D4u;
    SET_GPR_U32(ctx, 31, 0x1A60DCu);
    ctx->pc = 0x1A60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60D4u;
    // 0x1a60d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1A60D4u, 0x1A60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60DCu;
label_1a60dc:
    // 0x1a60dc: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A60DCu;
    SET_GPR_U32(ctx, 31, 0x1A60E4u);
    ctx->pc = 0x1A60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60DCu;
    // 0x1a60e0: 0x26440240  addiu       $a0, $s2, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A60DCu, 0x1A60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60E4u;
label_1a60e4:
    // 0x1a60e4: 0x0  nop
    ctx->pc = 0x1a60e4u;
    // NOP
label_1a60e8:
    // 0x1a60e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a60e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60ec: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A60ECu;
    SET_GPR_U32(ctx, 31, 0x1A60F4u);
    ctx->pc = 0x1A60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60ECu;
    // 0x1a60f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A60ECu, 0x1A60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60F4u;
label_1a60f4:
    // 0x1a60f4: 0x0  nop
    ctx->pc = 0x1a60f4u;
    // NOP
    // 0x1a60f8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A60F8u;
    {
        const bool branch_taken_0x1a60f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60F8u;
        // 0x1a60fc: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60f8) {
            ctx->pc = 0x1A60E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a60e8;
        }
    }
    ctx->pc = 0x1A6100u;
    // 0x1a6100: 0x26500940  addiu       $s0, $s2, 0x940
    ctx->pc = 0x1a6100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
    // 0x1a6104: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1a6104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6108: 0x26540f40  addiu       $s4, $s2, 0xF40
    ctx->pc = 0x1a6108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
    // 0x1a610c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a6110:
    // 0x1a6110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6114: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A6114u;
    SET_GPR_U32(ctx, 31, 0x1A611Cu);
    ctx->pc = 0x1A6118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6114u;
    // 0x1a6118: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A6114u, 0x1A611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A611Cu;
label_1a611c:
    // 0x1a611c: 0x0  nop
    ctx->pc = 0x1a611cu;
    // NOP
    // 0x1a6120: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A6120u;
    {
        const bool branch_taken_0x1a6120 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6120u;
        // 0x1a6124: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6120) {
            ctx->pc = 0x1A6110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6110;
        }
    }
    ctx->pc = 0x1A6128u;
    // 0x1a6128: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1a6128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a612c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1a612cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6130: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6134: 0x0  nop
    ctx->pc = 0x1a6134u;
    // NOP
label_1a6138:
    // 0x1a6138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a613c: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1A613Cu;
    SET_GPR_U32(ctx, 31, 0x1A6144u);
    ctx->pc = 0x1A6140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A613Cu;
    // 0x1a6140: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1A613Cu, 0x1A6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6144u;
label_1a6144:
    // 0x1a6144: 0x0  nop
    ctx->pc = 0x1a6144u;
    // NOP
    // 0x1a6148: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A6148u;
    {
        const bool branch_taken_0x1a6148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6148u;
        // 0x1a614c: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6148) {
            ctx->pc = 0x1A6138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6138;
        }
    }
    ctx->pc = 0x1A6150u;
    // 0x1a6150: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a6150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6154: 0xae401544  sw          $zero, 0x1544($s2)
    ctx->pc = 0x1a6154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5444), GPR_U32(ctx, 0));
    // 0x1a6158: 0xae40156c  sw          $zero, 0x156C($s2)
    ctx->pc = 0x1a6158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5484), GPR_U32(ctx, 0));
    // 0x1a615c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a615cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6160: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6164: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a6164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6168: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a6168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a616c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a616cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6174: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A617Cu;
    // 0x1a617c: 0x0  nop
    ctx->pc = 0x1a617cu;
    // NOP
    ctx->pc = 0x1a6180u;
}
