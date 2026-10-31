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

// Function: sub_0030BFB8
// Address: 0x30bfb8 - 0x30c000
void sub_0030BFB8_0x30bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BFB8_0x30bfb8");
#endif

    switch (ctx->pc) {
        case 0x30bfb8u: goto label_30bfb8;
        case 0x30bfbcu: goto label_30bfbc;
        case 0x30bfc0u: goto label_30bfc0;
        case 0x30bfc4u: goto label_30bfc4;
        case 0x30bfc8u: goto label_30bfc8;
        case 0x30bfccu: goto label_30bfcc;
        case 0x30bfd0u: goto label_30bfd0;
        case 0x30bfd4u: goto label_30bfd4;
        case 0x30bfd8u: goto label_30bfd8;
        case 0x30bfdcu: goto label_30bfdc;
        case 0x30bfe0u: goto label_30bfe0;
        case 0x30bfe4u: goto label_30bfe4;
        case 0x30bfe8u: goto label_30bfe8;
        case 0x30bfecu: goto label_30bfec;
        case 0x30bff0u: goto label_30bff0;
        case 0x30bff4u: goto label_30bff4;
        case 0x30bff8u: goto label_30bff8;
        case 0x30bffcu: goto label_30bffc;
        default: break;
    }

    ctx->pc = 0x30bfb8u;

label_30bfb8:
    // 0x30bfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30bfbc:
    // 0x30bfbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30bfc0:
    // 0x30bfc0: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x30bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_30bfc4:
    // 0x30bfc4: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30bfc8:
    // 0x30bfc8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_30bfcc:
    if (ctx->pc == 0x30BFCCu) {
        ctx->pc = 0x30BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFC8u;
        // 0x30bfcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BFD0u;
        goto label_30bfd0;
    }
    ctx->pc = 0x30BFC8u;
    {
        const bool branch_taken_0x30bfc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFC8u;
        // 0x30bfcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfc8) {
            ctx->pc = 0x30BFDCu;
            goto label_30bfdc;
        }
    }
    ctx->pc = 0x30BFD0u;
label_30bfd0:
    // 0x30bfd0: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x30bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_30bfd4:
    // 0x30bfd4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_30bfd8:
    if (ctx->pc == 0x30BFD8u) {
        ctx->pc = 0x30BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFD4u;
        // 0x30bfd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BFDCu;
        goto label_30bfdc;
    }
    ctx->pc = 0x30BFD4u;
    {
        const bool branch_taken_0x30bfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFD4u;
        // 0x30bfd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfd4) {
            ctx->pc = 0x30BFF8u;
            goto label_30bff8;
        }
    }
    ctx->pc = 0x30BFDCu;
label_30bfdc:
    // 0x30bfdc: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x30bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_30bfe0:
    // 0x30bfe0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_30bfe4:
    // 0x30bfe4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30bfe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30bfe8:
    // 0x30bfe8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30bfec:
    // 0x30bfec: 0x60f809  jalr        $v1
label_30bff0:
    if (ctx->pc == 0x30BFF0u) {
        ctx->pc = 0x30BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFECu;
        // 0x30bff0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BFF4u;
        goto label_30bff4;
    }
    ctx->pc = 0x30BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30BFF4u);
        ctx->pc = 0x30BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFECu;
        // 0x30bff0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BFECu, 0x30BFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30BFF4u;
label_30bff4:
    // 0x30bff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30bff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30bff8:
    // 0x30bff8: 0x3e00008  jr          $ra
label_30bffc:
    if (ctx->pc == 0x30BFFCu) {
        ctx->pc = 0x30BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFF8u;
        // 0x30bffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C000u;
        goto label_fallthrough_0x30bff8;
    }
    ctx->pc = 0x30BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFF8u;
        // 0x30bffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30bff8:
    ctx->pc = 0x30C000u;
}
