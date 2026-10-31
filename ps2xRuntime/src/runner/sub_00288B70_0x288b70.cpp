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

// Function: sub_00288B70
// Address: 0x288b70 - 0x288be0
void sub_00288B70_0x288b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B70_0x288b70");
#endif

    switch (ctx->pc) {
        case 0x288bc4u: goto label_288bc4;
        default: break;
    }

    ctx->pc = 0x288b70u;

    // 0x288b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288b74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x288b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288b84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x288b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b88: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x288b8c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x288B8Cu;
    {
        const bool branch_taken_0x288b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B8Cu;
        // 0x288b90: 0x8045000b  lb          $a1, 0xB($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b8c) {
            ctx->pc = 0x288BA4u;
            goto label_288ba4;
        }
    }
    ctx->pc = 0x288B94u;
    // 0x288b94: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x288b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x288b98: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x288b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x288b9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x288B9Cu;
    {
        const bool branch_taken_0x288b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B9Cu;
        // 0x288ba0: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b9c) {
            ctx->pc = 0x288BB4u;
            goto label_288bb4;
        }
    }
    ctx->pc = 0x288BA4u;
label_288ba4:
    // 0x288ba4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x288ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x288ba8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x288BA8u;
    {
        const bool branch_taken_0x288ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BA8u;
        // 0x288bac: 0x5102a  slt         $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ba8) {
            ctx->pc = 0x288BB4u;
            goto label_288bb4;
        }
    }
    ctx->pc = 0x288BB0u;
    // 0x288bb0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x288bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_288bb4:
    // 0x288bb4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x288bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x288bb8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x288bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x288bbc: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x288BBCu;
    SET_GPR_U32(ctx, 31, 0x288BC4u);
    ctx->pc = 0x288BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BBCu;
    // 0x288bc0: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x288BBCu, 0x288BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BC4u;
label_288bc4:
    // 0x288bc4: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x288bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x288bc8: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x288bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x288bcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x288bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x288BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BD8u;
        // 0x288bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288BE0u;
}
