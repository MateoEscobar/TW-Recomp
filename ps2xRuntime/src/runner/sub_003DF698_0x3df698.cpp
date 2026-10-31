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

// Function: sub_003DF698
// Address: 0x3df698 - 0x3df730
void sub_003DF698_0x3df698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF698_0x3df698");
#endif

    switch (ctx->pc) {
        case 0x3df698u: goto label_3df698;
        case 0x3df69cu: goto label_3df69c;
        case 0x3df6a0u: goto label_3df6a0;
        case 0x3df6a4u: goto label_3df6a4;
        case 0x3df6a8u: goto label_3df6a8;
        case 0x3df6acu: goto label_3df6ac;
        case 0x3df6b0u: goto label_3df6b0;
        case 0x3df6b4u: goto label_3df6b4;
        case 0x3df6b8u: goto label_3df6b8;
        case 0x3df6bcu: goto label_3df6bc;
        case 0x3df6c0u: goto label_3df6c0;
        case 0x3df6c4u: goto label_3df6c4;
        case 0x3df6c8u: goto label_3df6c8;
        case 0x3df6ccu: goto label_3df6cc;
        case 0x3df6d0u: goto label_3df6d0;
        case 0x3df6d4u: goto label_3df6d4;
        case 0x3df6d8u: goto label_3df6d8;
        case 0x3df6dcu: goto label_3df6dc;
        case 0x3df6e0u: goto label_3df6e0;
        case 0x3df6e4u: goto label_3df6e4;
        case 0x3df6e8u: goto label_3df6e8;
        case 0x3df6ecu: goto label_3df6ec;
        case 0x3df6f0u: goto label_3df6f0;
        case 0x3df6f4u: goto label_3df6f4;
        case 0x3df6f8u: goto label_3df6f8;
        case 0x3df6fcu: goto label_3df6fc;
        case 0x3df700u: goto label_3df700;
        case 0x3df704u: goto label_3df704;
        case 0x3df708u: goto label_3df708;
        case 0x3df70cu: goto label_3df70c;
        case 0x3df710u: goto label_3df710;
        case 0x3df714u: goto label_3df714;
        case 0x3df718u: goto label_3df718;
        case 0x3df71cu: goto label_3df71c;
        case 0x3df720u: goto label_3df720;
        case 0x3df724u: goto label_3df724;
        case 0x3df728u: goto label_3df728;
        case 0x3df72cu: goto label_3df72c;
        default: break;
    }

    ctx->pc = 0x3df698u;

label_3df698:
    // 0x3df698: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3df698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3df69c:
    // 0x3df69c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3df69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3df6a0:
    // 0x3df6a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3df6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3df6a4:
    // 0x3df6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3df6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df6a8:
    // 0x3df6a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3df6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3df6ac:
    // 0x3df6ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3df6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3df6b0:
    // 0x3df6b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3df6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3df6b4:
    // 0x3df6b4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3df6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3df6b8:
    // 0x3df6b8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3df6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3df6bc:
    // 0x3df6bc: 0x40f809  jalr        $v0
label_3df6c0:
    if (ctx->pc == 0x3DF6C0u) {
        ctx->pc = 0x3DF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6BCu;
        // 0x3df6c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF6C4u;
        goto label_3df6c4;
    }
    ctx->pc = 0x3DF6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF6C4u);
        ctx->pc = 0x3DF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6BCu;
        // 0x3df6c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF6BCu, 0x3DF6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF6C4u;
label_3df6c4:
    // 0x3df6c4: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3df6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3df6c8:
    // 0x3df6c8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3df6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3df6cc:
    // 0x3df6cc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3df6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3df6d0:
    // 0x3df6d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3df6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3df6d4:
    // 0x3df6d4: 0xc0e858c  jal         func_3A1630
label_3df6d8:
    if (ctx->pc == 0x3DF6D8u) {
        ctx->pc = 0x3DF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6D4u;
        // 0x3df6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF6DCu;
        goto label_3df6dc;
    }
    ctx->pc = 0x3DF6D4u;
    SET_GPR_U32(ctx, 31, 0x3DF6DCu);
    ctx->pc = 0x3DF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF6D4u;
    // 0x3df6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DF6D4u, 0x3DF6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF6DCu;
label_3df6dc:
    // 0x3df6dc: 0xc0ea14c  jal         func_3A8530
label_3df6e0:
    if (ctx->pc == 0x3DF6E0u) {
        ctx->pc = 0x3DF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6DCu;
        // 0x3df6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF6E4u;
        goto label_3df6e4;
    }
    ctx->pc = 0x3DF6DCu;
    SET_GPR_U32(ctx, 31, 0x3DF6E4u);
    ctx->pc = 0x3DF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF6DCu;
    // 0x3df6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DF6DCu, 0x3DF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF6E4u;
label_3df6e4:
    // 0x3df6e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3df6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df6e8:
    // 0x3df6e8: 0xc0ea12a  jal         func_3A84A8
label_3df6ec:
    if (ctx->pc == 0x3DF6ECu) {
        ctx->pc = 0x3DF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6E8u;
        // 0x3df6ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF6F0u;
        goto label_3df6f0;
    }
    ctx->pc = 0x3DF6E8u;
    SET_GPR_U32(ctx, 31, 0x3DF6F0u);
    ctx->pc = 0x3DF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF6E8u;
    // 0x3df6ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF6E8u, 0x3DF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF6F0u;
label_3df6f0:
    // 0x3df6f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3df6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df6f4:
    // 0x3df6f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df6f8:
    // 0x3df6f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3df6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3df6fc:
    // 0x3df6fc: 0xc0ea12a  jal         func_3A84A8
label_3df700:
    if (ctx->pc == 0x3DF700u) {
        ctx->pc = 0x3DF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF6FCu;
        // 0x3df700: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF704u;
        goto label_3df704;
    }
    ctx->pc = 0x3DF6FCu;
    SET_GPR_U32(ctx, 31, 0x3DF704u);
    ctx->pc = 0x3DF700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF6FCu;
    // 0x3df700: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DF6FCu, 0x3DF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF704u;
label_3df704:
    // 0x3df704: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3df704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df708:
    // 0x3df708: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3df708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df70c:
    // 0x3df70c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3df70cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3df710:
    // 0x3df710: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3df710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3df714:
    // 0x3df714: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3df714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3df718:
    // 0x3df718: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3df718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df71c:
    // 0x3df71c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3df71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3df720:
    // 0x3df720: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3df720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3df724:
    // 0x3df724: 0x3e00008  jr          $ra
label_3df728:
    if (ctx->pc == 0x3DF728u) {
        ctx->pc = 0x3DF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF724u;
        // 0x3df728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF72Cu;
        goto label_3df72c;
    }
    ctx->pc = 0x3DF724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF724u;
        // 0x3df728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF72Cu;
label_3df72c:
    // 0x3df72c: 0x0  nop
    ctx->pc = 0x3df72cu;
    // NOP
    ctx->pc = 0x3df730u;
}
