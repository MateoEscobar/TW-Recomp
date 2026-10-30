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

// Function: sub_002ECFE8
// Address: 0x2ecfe8 - 0x2ed0a8
void sub_002ECFE8_0x2ecfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECFE8_0x2ecfe8");
#endif

    switch (ctx->pc) {
        case 0x2ed02cu: goto label_2ed02c;
        case 0x2ed034u: goto label_2ed034;
        case 0x2ed044u: goto label_2ed044;
        case 0x2ed04cu: goto label_2ed04c;
        case 0x2ed074u: goto label_2ed074;
        case 0x2ed080u: goto label_2ed080;
        default: break;
    }

    ctx->pc = 0x2ecfe8u;

    // 0x2ecfe8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ecfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ecfec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ecfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ecff0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ecff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2ecff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ecff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecff8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ecff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ecffc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ecffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed000: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ed000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ed004: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ed004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed008: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2ed008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2ed00c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ed00cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed010: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2ed010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2ed014: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2ed014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed018: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ed018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2ed01c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ed01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2ed020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed024: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2ED024u;
    SET_GPR_U32(ctx, 31, 0x2ED02Cu);
    ctx->pc = 0x2ED028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED024u;
    // 0x2ed028: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2ED024u, 0x2ED02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED02Cu;
label_2ed02c:
    // 0x2ed02c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2ED02Cu;
    SET_GPR_U32(ctx, 31, 0x2ED034u);
    ctx->pc = 0x2ED030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED02Cu;
    // 0x2ed030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2ED02Cu, 0x2ED034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED034u;
label_2ed034:
    // 0x2ed034: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED034u;
    {
        const bool branch_taken_0x2ed034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED034u;
        // 0x2ed038: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed034) {
            ctx->pc = 0x2ED084u;
            goto label_2ed084;
        }
    }
    ctx->pc = 0x2ED03Cu;
    // 0x2ed03c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2ED03Cu;
    SET_GPR_U32(ctx, 31, 0x2ED044u);
    ctx->pc = 0x2ED040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED03Cu;
    // 0x2ed040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ED03Cu, 0x2ED044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED044u;
label_2ed044:
    // 0x2ed044: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2ED044u;
    SET_GPR_U32(ctx, 31, 0x2ED04Cu);
    ctx->pc = 0x2ED048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED044u;
    // 0x2ed048: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2ED044u, 0x2ED04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED04Cu;
label_2ed04c:
    // 0x2ed04c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed050: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED050u;
    {
        const bool branch_taken_0x2ed050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED050u;
        // 0x2ed054: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed050) {
            ctx->pc = 0x2ED074u;
            goto label_2ed074;
        }
    }
    ctx->pc = 0x2ED058u;
    // 0x2ed058: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ed058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed05c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2ed05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed060: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2ed060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed064: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2ed064u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed06c: 0xc0bb42a  jal         func_2ED0A8
    ctx->pc = 0x2ED06Cu;
    SET_GPR_U32(ctx, 31, 0x2ED074u);
    ctx->pc = 0x2ED070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED06Cu;
    // 0x2ed070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED0A8u, 0x2ED06Cu, 0x2ED074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED074u;
label_2ed074:
    // 0x2ed074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed078: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2ED078u;
    SET_GPR_U32(ctx, 31, 0x2ED080u);
    ctx->pc = 0x2ED07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED078u;
    // 0x2ed07c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2ED078u, 0x2ED080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED080u;
label_2ed080:
    // 0x2ed080: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ed080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ed084:
    // 0x2ed084: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ed084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed088: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2ed088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed08c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ed08cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ed090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed094: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2ed094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed098: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2ed098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed09c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0A0u;
        // 0x2ed0a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED0A8u;
}
