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

// Function: sub_00342168
// Address: 0x342168 - 0x3421d0
void sub_00342168_0x342168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342168_0x342168");
#endif

    switch (ctx->pc) {
        case 0x342168u: goto label_342168;
        case 0x34216cu: goto label_34216c;
        case 0x342170u: goto label_342170;
        case 0x342174u: goto label_342174;
        case 0x342178u: goto label_342178;
        case 0x34217cu: goto label_34217c;
        case 0x342180u: goto label_342180;
        case 0x342184u: goto label_342184;
        case 0x342188u: goto label_342188;
        case 0x34218cu: goto label_34218c;
        case 0x342190u: goto label_342190;
        case 0x342194u: goto label_342194;
        case 0x342198u: goto label_342198;
        case 0x34219cu: goto label_34219c;
        case 0x3421a0u: goto label_3421a0;
        case 0x3421a4u: goto label_3421a4;
        case 0x3421a8u: goto label_3421a8;
        case 0x3421acu: goto label_3421ac;
        case 0x3421b0u: goto label_3421b0;
        case 0x3421b4u: goto label_3421b4;
        case 0x3421b8u: goto label_3421b8;
        case 0x3421bcu: goto label_3421bc;
        case 0x3421c0u: goto label_3421c0;
        case 0x3421c4u: goto label_3421c4;
        case 0x3421c8u: goto label_3421c8;
        case 0x3421ccu: goto label_3421cc;
        default: break;
    }

    ctx->pc = 0x342168u;

label_342168:
    // 0x342168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34216c:
    // 0x34216c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_342170:
    // 0x342170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x342170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_342174:
    // 0x342174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x342174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342178:
    // 0x342178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34217c:
    // 0x34217c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x34217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_342180:
    // 0x342180: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_342184:
    if (ctx->pc == 0x342184u) {
        ctx->pc = 0x342184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342180u;
        // 0x342184: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342188u;
        goto label_342188;
    }
    ctx->pc = 0x342180u;
    {
        const bool branch_taken_0x342180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342180u;
        // 0x342184: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342180) {
            ctx->pc = 0x3421BCu;
            goto label_3421bc;
        }
    }
    ctx->pc = 0x342188u;
label_342188:
    // 0x342188: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_34218c:
    // 0x34218c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34218cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342190:
    // 0x342190: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x342190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_342194:
    // 0x342194: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x342194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_342198:
    // 0x342198: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x342198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_34219c:
    // 0x34219c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x34219cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3421a0:
    // 0x3421a0: 0xc0f809  jalr        $a2
label_3421a4:
    if (ctx->pc == 0x3421A4u) {
        ctx->pc = 0x3421A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421A0u;
        // 0x3421a4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421A8u;
        goto label_3421a8;
    }
    ctx->pc = 0x3421A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3421A8u);
        ctx->pc = 0x3421A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421A0u;
        // 0x3421a4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3421A0u, 0x3421A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3421A8u;
label_3421a8:
    // 0x3421a8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x3421a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_3421ac:
    // 0x3421ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3421acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3421b0:
    // 0x3421b0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_3421b4:
    if (ctx->pc == 0x3421B4u) {
        ctx->pc = 0x3421B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421B0u;
        // 0x3421b4: 0xae3000c4  sw          $s0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421B8u;
        goto label_3421b8;
    }
    ctx->pc = 0x3421B0u;
    {
        const bool branch_taken_0x3421b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3421B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421B0u;
        // 0x3421b4: 0xae3000c4  sw          $s0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421b0) {
            ctx->pc = 0x342188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342188;
        }
    }
    ctx->pc = 0x3421B8u;
label_3421b8:
    // 0x3421b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3421b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3421bc:
    // 0x3421bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3421bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3421c0:
    // 0x3421c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3421c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3421c4:
    // 0x3421c4: 0x3e00008  jr          $ra
label_3421c8:
    if (ctx->pc == 0x3421C8u) {
        ctx->pc = 0x3421C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421C4u;
        // 0x3421c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3421CCu;
        goto label_3421cc;
    }
    ctx->pc = 0x3421C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3421C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421C4u;
        // 0x3421c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3421C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3421CCu;
label_3421cc:
    // 0x3421cc: 0x0  nop
    ctx->pc = 0x3421ccu;
    // NOP
    ctx->pc = 0x3421d0u;
}
