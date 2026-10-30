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

// Function: sub_003C3BB0
// Address: 0x3c3bb0 - 0x3c3c08
void sub_003C3BB0_0x3c3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3BB0_0x3c3bb0");
#endif

    switch (ctx->pc) {
        case 0x3c3bb0u: goto label_3c3bb0;
        case 0x3c3bb4u: goto label_3c3bb4;
        case 0x3c3bb8u: goto label_3c3bb8;
        case 0x3c3bbcu: goto label_3c3bbc;
        case 0x3c3bc0u: goto label_3c3bc0;
        case 0x3c3bc4u: goto label_3c3bc4;
        case 0x3c3bc8u: goto label_3c3bc8;
        case 0x3c3bccu: goto label_3c3bcc;
        case 0x3c3bd0u: goto label_3c3bd0;
        case 0x3c3bd4u: goto label_3c3bd4;
        case 0x3c3bd8u: goto label_3c3bd8;
        case 0x3c3bdcu: goto label_3c3bdc;
        case 0x3c3be0u: goto label_3c3be0;
        case 0x3c3be4u: goto label_3c3be4;
        case 0x3c3be8u: goto label_3c3be8;
        case 0x3c3becu: goto label_3c3bec;
        case 0x3c3bf0u: goto label_3c3bf0;
        case 0x3c3bf4u: goto label_3c3bf4;
        case 0x3c3bf8u: goto label_3c3bf8;
        case 0x3c3bfcu: goto label_3c3bfc;
        case 0x3c3c00u: goto label_3c3c00;
        case 0x3c3c04u: goto label_3c3c04;
        default: break;
    }

    ctx->pc = 0x3c3bb0u;

label_3c3bb0:
    // 0x3c3bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3c3bb4:
    // 0x3c3bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c3bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c3bb8:
    // 0x3c3bb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c3bbc:
    // 0x3c3bbc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c3bbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c3bc0:
    // 0x3c3bc0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c3bc4:
    // 0x3c3bc4: 0x40f809  jalr        $v0
label_3c3bc8:
    if (ctx->pc == 0x3C3BC8u) {
        ctx->pc = 0x3C3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BC4u;
        // 0x3c3bc8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3BCCu;
        goto label_3c3bcc;
    }
    ctx->pc = 0x3C3BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3BCCu);
        ctx->pc = 0x3C3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BC4u;
        // 0x3c3bc8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3BC4u, 0x3C3BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3BCCu;
label_3c3bcc:
    // 0x3c3bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c3bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3bd0:
    // 0x3c3bd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c3bd4:
    // 0x3c3bd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c3bd8:
    // 0x3c3bd8: 0x2c430019  sltiu       $v1, $v0, 0x19
    ctx->pc = 0x3c3bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_3c3bdc:
    // 0x3c3bdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c3be0:
    if (ctx->pc == 0x3C3BE0u) {
        ctx->pc = 0x3C3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BDCu;
        // 0x3c3be0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3BE4u;
        goto label_3c3be4;
    }
    ctx->pc = 0x3C3BDCu;
    {
        const bool branch_taken_0x3c3bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BDCu;
        // 0x3c3be0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bdc) {
            ctx->pc = 0x3C3BECu;
            goto label_3c3bec;
        }
    }
    ctx->pc = 0x3C3BE4u;
label_3c3be4:
    // 0x3c3be4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c3be8:
    if (ctx->pc == 0x3C3BE8u) {
        ctx->pc = 0x3C3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BE4u;
        // 0x3c3be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3BECu;
        goto label_3c3bec;
    }
    ctx->pc = 0x3C3BE4u;
    {
        const bool branch_taken_0x3c3be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BE4u;
        // 0x3c3be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3be4) {
            ctx->pc = 0x3C3BF8u;
            goto label_3c3bf8;
        }
    }
    ctx->pc = 0x3C3BECu;
label_3c3bec:
    // 0x3c3bec: 0xc0e93de  jal         func_3A4F78
label_3c3bf0:
    if (ctx->pc == 0x3C3BF0u) {
        ctx->pc = 0x3C3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BECu;
        // 0x3c3bf0: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3BF4u;
        goto label_3c3bf4;
    }
    ctx->pc = 0x3C3BECu;
    SET_GPR_U32(ctx, 31, 0x3C3BF4u);
    ctx->pc = 0x3C3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3BECu;
    // 0x3c3bf0: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3C3BECu, 0x3C3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3BF4u;
label_3c3bf4:
    // 0x3c3bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3bf8:
    // 0x3c3bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c3bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3bfc:
    // 0x3c3bfc: 0x3e00008  jr          $ra
label_3c3c00:
    if (ctx->pc == 0x3C3C00u) {
        ctx->pc = 0x3C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BFCu;
        // 0x3c3c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3C04u;
        goto label_3c3c04;
    }
    ctx->pc = 0x3C3BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BFCu;
        // 0x3c3c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C3C04u;
label_3c3c04:
    // 0x3c3c04: 0x0  nop
    ctx->pc = 0x3c3c04u;
    // NOP
    ctx->pc = 0x3c3c08u;
}
