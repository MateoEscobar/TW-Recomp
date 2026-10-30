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

// Function: sub_0014BF88
// Address: 0x14bf88 - 0x14c020
void sub_0014BF88_0x14bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BF88_0x14bf88");
#endif

    switch (ctx->pc) {
        case 0x14bfccu: goto label_14bfcc;
        case 0x14bfd8u: goto label_14bfd8;
        case 0x14c004u: goto label_14c004;
        default: break;
    }

    ctx->pc = 0x14bf88u;

    // 0x14bf88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14bf8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14bf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14bf90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14bf94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14bf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14bfa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14bfa4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x14bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14bfa8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14bfac: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x14bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14bfb0: 0x8c73088c  lw          $s3, 0x88C($v1)
    ctx->pc = 0x14bfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2188)));
    // 0x14bfb4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14bfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfb8: 0x8e050840  lw          $a1, 0x840($s0)
    ctx->pc = 0x14bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    // 0x14bfbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfc0: 0x8c520890  lw          $s2, 0x890($v0)
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2192)));
    // 0x14bfc4: 0xc053a8a  jal         func_14EA28
    ctx->pc = 0x14BFC4u;
    SET_GPR_U32(ctx, 31, 0x14BFCCu);
    ctx->pc = 0x14BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFC4u;
    // 0x14bfc8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x14BFC4u, 0x14BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFCCu;
label_14bfcc:
    // 0x14bfcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfd0: 0xc053b1a  jal         func_14EC68
    ctx->pc = 0x14BFD0u;
    SET_GPR_U32(ctx, 31, 0x14BFD8u);
    ctx->pc = 0x14BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFD0u;
    // 0x14bfd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC68u, 0x14BFD0u, 0x14BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFD8u;
label_14bfd8:
    // 0x14bfd8: 0x8e030840  lw          $v1, 0x840($s0)
    ctx->pc = 0x14bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    // 0x14bfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14bfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfe0: 0x8e020830  lw          $v0, 0x830($s0)
    ctx->pc = 0x14bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2096)));
    // 0x14bfe4: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x14bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x14bfe8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14bfec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14bff0: 0xae030840  sw          $v1, 0x840($s0)
    ctx->pc = 0x14bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 3));
    // 0x14bff4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x14bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14bff8: 0xae020830  sw          $v0, 0x830($s0)
    ctx->pc = 0x14bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2096), GPR_U32(ctx, 2));
    // 0x14bffc: 0xc053008  jal         func_14C020
    ctx->pc = 0x14BFFCu;
    SET_GPR_U32(ctx, 31, 0x14C004u);
    ctx->pc = 0x14C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFFCu;
    // 0x14c000: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C020u, 0x14BFFCu, 0x14C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C004u;
label_14c004:
    // 0x14c004: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14c004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c008: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14c008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c00c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14c00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c010: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14c010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c018: 0x3e00008  jr          $ra
    ctx->pc = 0x14C018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C018u;
        // 0x14c01c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C020u;
}
