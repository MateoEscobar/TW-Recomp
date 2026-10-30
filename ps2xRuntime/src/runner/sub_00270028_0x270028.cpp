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

// Function: sub_00270028
// Address: 0x270028 - 0x2700a8
void sub_00270028_0x270028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270028_0x270028");
#endif

    switch (ctx->pc) {
        case 0x270044u: goto label_270044;
        case 0x270050u: goto label_270050;
        case 0x270060u: goto label_270060;
        case 0x270078u: goto label_270078;
        case 0x270088u: goto label_270088;
        case 0x270090u: goto label_270090;
        default: break;
    }

    ctx->pc = 0x270028u;

    // 0x270028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27002c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x270030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27003c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27003Cu;
    SET_GPR_U32(ctx, 31, 0x270044u);
    ctx->pc = 0x270040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27003Cu;
    // 0x270040: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27003Cu, 0x270044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270044u;
label_270044:
    // 0x270044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270048: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x270048u;
    SET_GPR_U32(ctx, 31, 0x270050u);
    ctx->pc = 0x27004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270048u;
    // 0x27004c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x270048u, 0x270050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270050u;
label_270050:
    // 0x270050: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x270050u;
    {
        const bool branch_taken_0x270050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270050) {
            ctx->pc = 0x270054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270050u;
            // 0x270054: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270094u;
            goto label_270094;
        }
    }
    ctx->pc = 0x270058u;
    // 0x270058: 0xc089f86  jal         func_227E18
    ctx->pc = 0x270058u;
    SET_GPR_U32(ctx, 31, 0x270060u);
    ctx->pc = 0x27005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270058u;
    // 0x27005c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x270058u, 0x270060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270060u;
label_270060:
    // 0x270060: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x270060u;
    {
        const bool branch_taken_0x270060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270060) {
            ctx->pc = 0x270064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270060u;
            // 0x270064: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270094u;
            goto label_270094;
        }
    }
    ctx->pc = 0x270068u;
    // 0x270068: 0x5620000a  bnel        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x270068u;
    {
        const bool branch_taken_0x270068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x270068) {
            ctx->pc = 0x27006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270068u;
            // 0x27006c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270094u;
            goto label_270094;
        }
    }
    ctx->pc = 0x270070u;
    // 0x270070: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x270070u;
    SET_GPR_U32(ctx, 31, 0x270078u);
    ctx->pc = 0x270074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270070u;
    // 0x270074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x270070u, 0x270078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270078u;
label_270078:
    // 0x270078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270078u;
    {
        const bool branch_taken_0x270078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270078u;
        // 0x27007c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270078) {
            ctx->pc = 0x270088u;
            goto label_270088;
        }
    }
    ctx->pc = 0x270080u;
    // 0x270080: 0xc08b0e2  jal         func_22C388
    ctx->pc = 0x270080u;
    SET_GPR_U32(ctx, 31, 0x270088u);
    ctx->pc = 0x270084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270080u;
    // 0x270084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x270080u, 0x270088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270088u;
label_270088:
    // 0x270088: 0xc0978b6  jal         func_25E2D8
    ctx->pc = 0x270088u;
    SET_GPR_U32(ctx, 31, 0x270090u);
    ctx->pc = 0x27008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270088u;
    // 0x27008c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E2D8u, 0x270088u, 0x270090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270090u;
label_270090:
    // 0x270090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x270090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270094:
    // 0x270094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27009c: 0x3e00008  jr          $ra
    ctx->pc = 0x27009Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2700A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27009Cu;
        // 0x2700a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27009Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2700A4u;
    // 0x2700a4: 0x0  nop
    ctx->pc = 0x2700a4u;
    // NOP
    ctx->pc = 0x2700a8u;
}
