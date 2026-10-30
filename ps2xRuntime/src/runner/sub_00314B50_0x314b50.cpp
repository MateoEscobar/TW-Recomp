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

// Function: sub_00314B50
// Address: 0x314b50 - 0x314bd0
void sub_00314B50_0x314b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314B50_0x314b50");
#endif

    switch (ctx->pc) {
        case 0x314b70u: goto label_314b70;
        case 0x314b7cu: goto label_314b7c;
        case 0x314b84u: goto label_314b84;
        case 0x314b8cu: goto label_314b8c;
        case 0x314bacu: goto label_314bac;
        case 0x314bb8u: goto label_314bb8;
        default: break;
    }

    ctx->pc = 0x314b50u;

    // 0x314b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x314b54: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x314b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x314b58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x314b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x314b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x314b60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x314b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x314b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314b68: 0xc087502  jal         func_21D408
    ctx->pc = 0x314B68u;
    SET_GPR_U32(ctx, 31, 0x314B70u);
    ctx->pc = 0x314B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B68u;
    // 0x314b6c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314B68u, 0x314B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B70u;
label_314b70:
    // 0x314b70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b74: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x314B74u;
    SET_GPR_U32(ctx, 31, 0x314B7Cu);
    ctx->pc = 0x314B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B74u;
    // 0x314b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x314B74u, 0x314B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B7Cu;
label_314b7c:
    // 0x314b7c: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x314B7Cu;
    SET_GPR_U32(ctx, 31, 0x314B84u);
    ctx->pc = 0x314B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B7Cu;
    // 0x314b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x314B7Cu, 0x314B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B84u;
label_314b84:
    // 0x314b84: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x314B84u;
    SET_GPR_U32(ctx, 31, 0x314B8Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x314B84u, 0x314B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B8Cu;
label_314b8c:
    // 0x314b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b90: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314B90u;
    {
        const bool branch_taken_0x314b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B90u;
        // 0x314b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b90) {
            ctx->pc = 0x314BACu;
            goto label_314bac;
        }
    }
    ctx->pc = 0x314B98u;
    // 0x314b98: 0x92460032  lbu         $a2, 0x32($s2)
    ctx->pc = 0x314b98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x314b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x314b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ba0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x314ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314ba4: 0xc0b2bde  jal         func_2CAF78
    ctx->pc = 0x314BA4u;
    SET_GPR_U32(ctx, 31, 0x314BACu);
    ctx->pc = 0x314BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BA4u;
    // 0x314ba8: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF78u, 0x314BA4u, 0x314BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BACu;
label_314bac:
    // 0x314bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bb0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x314BB0u;
    SET_GPR_U32(ctx, 31, 0x314BB8u);
    ctx->pc = 0x314BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BB0u;
    // 0x314bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x314BB0u, 0x314BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BB8u;
label_314bb8:
    // 0x314bb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x314bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314bbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314bc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x314bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x314BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BC8u;
        // 0x314bcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314BD0u;
}
