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

// Function: sub_003320C8
// Address: 0x3320c8 - 0x332188
void sub_003320C8_0x3320c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003320C8_0x3320c8");
#endif

    switch (ctx->pc) {
        case 0x332100u: goto label_332100;
        case 0x332110u: goto label_332110;
        case 0x332120u: goto label_332120;
        case 0x332138u: goto label_332138;
        case 0x332164u: goto label_332164;
        default: break;
    }

    ctx->pc = 0x3320c8u;

    // 0x3320c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3320c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3320cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3320ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3320d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3320d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3320d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3320d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3320d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3320dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3320dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3320e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3320e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3320e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320e8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3320e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3320ec: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3320ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3320f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3320f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3320f4: 0x86500006  lh          $s0, 0x6($s2)
    ctx->pc = 0x3320f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3320f8: 0xc0cc822  jal         func_332088
    ctx->pc = 0x3320F8u;
    SET_GPR_U32(ctx, 31, 0x332100u);
    ctx->pc = 0x3320FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3320F8u;
    // 0x3320fc: 0x8e540000  lw          $s4, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332088u, 0x3320F8u, 0x332100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332100u;
label_332100:
    // 0x332100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x332100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x332104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332108: 0xc0cc7b6  jal         func_331ED8
    ctx->pc = 0x332108u;
    SET_GPR_U32(ctx, 31, 0x332110u);
    ctx->pc = 0x33210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332108u;
    // 0x33210c: 0x26060002  addiu       $a2, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331ED8u, 0x332108u, 0x332110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332110u;
label_332110:
    // 0x332110: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x332110u;
    {
        const bool branch_taken_0x332110 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x332114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332110u;
        // 0x332114: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332110) {
            ctx->pc = 0x332154u;
            goto label_332154;
        }
    }
    ctx->pc = 0x332118u;
    // 0x332118: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x332118u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33211c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x33211cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_332120:
    // 0x332120: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x332120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x332124: 0x10550008  beq         $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x332124u;
    {
        const bool branch_taken_0x332124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x332128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332124u;
        // 0x332128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332124) {
            ctx->pc = 0x332148u;
            goto label_332148;
        }
    }
    ctx->pc = 0x33212Cu;
    // 0x33212c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33212cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332130: 0xc0cc862  jal         func_332188
    ctx->pc = 0x332130u;
    SET_GPR_U32(ctx, 31, 0x332138u);
    ctx->pc = 0x332134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332130u;
    // 0x332134: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x332130u, 0x332138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332138u;
label_332138:
    // 0x332138: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x332138u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33213c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x33213cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x332140: 0xde040018  ld          $a0, 0x18($s0)
    ctx->pc = 0x332140u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x332144: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x332144u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
label_332148:
    // 0x332148: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x332148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33214c: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x33214Cu;
    {
        const bool branch_taken_0x33214c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x332150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33214Cu;
        // 0x332150: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33214c) {
            ctx->pc = 0x332120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332120;
        }
    }
    ctx->pc = 0x332154u;
label_332154:
    // 0x332154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x332154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332158: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x332158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33215c: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x33215Cu;
    SET_GPR_U32(ctx, 31, 0x332164u);
    ctx->pc = 0x332160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33215Cu;
    // 0x332160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x33215Cu, 0x332164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332164u;
label_332164:
    // 0x332164: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x332164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x332168: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x332168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33216c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33216cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332174: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x332174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332178: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x332178u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33217c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332180: 0x3e00008  jr          $ra
    ctx->pc = 0x332180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332180u;
        // 0x332184: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332188u;
}
