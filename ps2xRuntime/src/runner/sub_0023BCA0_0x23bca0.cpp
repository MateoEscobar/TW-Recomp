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

// Function: sub_0023BCA0
// Address: 0x23bca0 - 0x23bcf0
void sub_0023BCA0_0x23bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BCA0_0x23bca0");
#endif

    switch (ctx->pc) {
        case 0x23bca0u: goto label_23bca0;
        case 0x23bca4u: goto label_23bca4;
        case 0x23bca8u: goto label_23bca8;
        case 0x23bcacu: goto label_23bcac;
        case 0x23bcb0u: goto label_23bcb0;
        case 0x23bcb4u: goto label_23bcb4;
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcbcu: goto label_23bcbc;
        case 0x23bcc0u: goto label_23bcc0;
        case 0x23bcc4u: goto label_23bcc4;
        case 0x23bcc8u: goto label_23bcc8;
        case 0x23bcccu: goto label_23bccc;
        case 0x23bcd0u: goto label_23bcd0;
        case 0x23bcd4u: goto label_23bcd4;
        case 0x23bcd8u: goto label_23bcd8;
        case 0x23bcdcu: goto label_23bcdc;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bce4u: goto label_23bce4;
        case 0x23bce8u: goto label_23bce8;
        case 0x23bcecu: goto label_23bcec;
        default: break;
    }

    ctx->pc = 0x23bca0u;

label_23bca0:
    // 0x23bca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23bca4:
    // 0x23bca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23bca8:
    // 0x23bca8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23bcac:
    // 0x23bcac: 0x84650028  lh          $a1, 0x28($v1)
    ctx->pc = 0x23bcacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_23bcb0:
    // 0x23bcb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x23bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_23bcb4:
    // 0x23bcb4: 0x40f809  jalr        $v0
label_23bcb8:
    if (ctx->pc == 0x23BCB8u) {
        ctx->pc = 0x23BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCB4u;
        // 0x23bcb8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCBCu;
        goto label_23bcbc;
    }
    ctx->pc = 0x23BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23BCBCu);
        ctx->pc = 0x23BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCB4u;
        // 0x23bcb8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCB4u, 0x23BCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BCBCu;
label_23bcbc:
    // 0x23bcbc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23bcc0:
    // 0x23bcc0: 0x24040470  addiu       $a0, $zero, 0x470
    ctx->pc = 0x23bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1136));
label_23bcc4:
    // 0x23bcc4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_23bcc8:
    // 0x23bcc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23bccc:
    // 0x23bccc: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x23bcccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_23bcd0:
    // 0x23bcd0: 0x24636880  addiu       $v1, $v1, 0x6880
    ctx->pc = 0x23bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26752));
label_23bcd4:
    // 0x23bcd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_23bcd8:
    // 0x23bcd8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x23bcd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_23bcdc:
    // 0x23bcdc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x23bcdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23bce0:
    // 0x23bce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23bce4:
    // 0x23bce4: 0x3e00008  jr          $ra
label_23bce8:
    if (ctx->pc == 0x23BCE8u) {
        ctx->pc = 0x23BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCE4u;
        // 0x23bce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BCECu;
        goto label_23bcec;
    }
    ctx->pc = 0x23BCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCE4u;
        // 0x23bce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCECu;
label_23bcec:
    // 0x23bcec: 0x0  nop
    ctx->pc = 0x23bcecu;
    // NOP
    ctx->pc = 0x23bcf0u;
}
