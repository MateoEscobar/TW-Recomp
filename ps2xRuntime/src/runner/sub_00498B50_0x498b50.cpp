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

// Function: sub_00498B50
// Address: 0x498b50 - 0x498be0
void sub_00498B50_0x498b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498B50_0x498b50");
#endif

    switch (ctx->pc) {
        case 0x498b78u: goto label_498b78;
        case 0x498b90u: goto label_498b90;
        default: break;
    }

    ctx->pc = 0x498b50u;

    // 0x498b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x498b54: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x498b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x498b58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x498b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x498b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x498b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x498b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x498b6c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x498b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x498b70: 0xc12a66a  jal         func_4A99A8
    ctx->pc = 0x498B70u;
    SET_GPR_U32(ctx, 31, 0x498B78u);
    ctx->pc = 0x498B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498B70u;
    // 0x498b74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A8u, 0x498B70u, 0x498B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498B78u;
label_498b78:
    // 0x498b78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x498b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498b7c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x498b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x498b80: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x498b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x498b84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x498b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x498b88: 0xc12a66a  jal         func_4A99A8
    ctx->pc = 0x498B88u;
    SET_GPR_U32(ctx, 31, 0x498B90u);
    ctx->pc = 0x498B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498B88u;
    // 0x498b8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A99A8u, 0x498B88u, 0x498B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498B90u;
label_498b90:
    // 0x498b90: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x498b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498b98: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x498b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x498b9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x498b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x498ba0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x498ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x498ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498ba8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x498ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x498bac: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x498bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x498bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x498bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498bb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x498bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x498bb8: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x498bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x498bbc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x498bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x498bc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x498bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x498bc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x498bc8: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x498bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x498bcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x498bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x498bd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x498BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498BD4u;
        // 0x498bd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498BDCu;
    // 0x498bdc: 0x0  nop
    ctx->pc = 0x498bdcu;
    // NOP
    ctx->pc = 0x498be0u;
}
