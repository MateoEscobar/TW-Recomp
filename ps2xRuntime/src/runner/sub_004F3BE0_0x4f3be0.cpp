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

// Function: sub_004F3BE0
// Address: 0x4f3be0 - 0x4f3c28
void sub_004F3BE0_0x4f3be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3BE0_0x4f3be0");
#endif

    switch (ctx->pc) {
        case 0x4f3be0u: goto label_4f3be0;
        case 0x4f3be4u: goto label_4f3be4;
        case 0x4f3be8u: goto label_4f3be8;
        case 0x4f3becu: goto label_4f3bec;
        case 0x4f3bf0u: goto label_4f3bf0;
        case 0x4f3bf4u: goto label_4f3bf4;
        case 0x4f3bf8u: goto label_4f3bf8;
        case 0x4f3bfcu: goto label_4f3bfc;
        case 0x4f3c00u: goto label_4f3c00;
        case 0x4f3c04u: goto label_4f3c04;
        case 0x4f3c08u: goto label_4f3c08;
        case 0x4f3c0cu: goto label_4f3c0c;
        case 0x4f3c10u: goto label_4f3c10;
        case 0x4f3c14u: goto label_4f3c14;
        case 0x4f3c18u: goto label_4f3c18;
        case 0x4f3c1cu: goto label_4f3c1c;
        case 0x4f3c20u: goto label_4f3c20;
        case 0x4f3c24u: goto label_4f3c24;
        default: break;
    }

    ctx->pc = 0x4f3be0u;

label_4f3be0:
    // 0x4f3be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f3be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f3be4:
    // 0x4f3be4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4f3be4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3be8:
    // 0x4f3be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3bec:
    // 0x4f3bec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4f3bf0:
    if (ctx->pc == 0x4F3BF0u) {
        ctx->pc = 0x4F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3BECu;
        // 0x4f3bf0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3BF4u;
        goto label_4f3bf4;
    }
    ctx->pc = 0x4F3BECu;
    {
        const bool branch_taken_0x4f3bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3BECu;
        // 0x4f3bf0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3bec) {
            ctx->pc = 0x4F3C18u;
            goto label_4f3c18;
        }
    }
    ctx->pc = 0x4F3BF4u;
label_4f3bf4:
    // 0x4f3bf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f3bf8:
    // 0x4f3bf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f3bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3bfc:
    // 0x4f3bfc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f3bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f3c00:
    // 0x4f3c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4f3c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f3c04:
    // 0x4f3c04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f3c08:
    // 0x4f3c08: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f3c08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f3c0c:
    // 0x4f3c0c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f3c10:
    // 0x4f3c10: 0x60f809  jalr        $v1
label_4f3c14:
    if (ctx->pc == 0x4F3C14u) {
        ctx->pc = 0x4F3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C10u;
        // 0x4f3c14: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3C18u;
        goto label_4f3c18;
    }
    ctx->pc = 0x4F3C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3C18u);
        ctx->pc = 0x4F3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C10u;
        // 0x4f3c14: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3C10u, 0x4F3C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3C18u;
label_4f3c18:
    // 0x4f3c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3c1c:
    // 0x4f3c1c: 0x3e00008  jr          $ra
label_4f3c20:
    if (ctx->pc == 0x4F3C20u) {
        ctx->pc = 0x4F3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C1Cu;
        // 0x4f3c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3C24u;
        goto label_4f3c24;
    }
    ctx->pc = 0x4F3C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3C1Cu;
        // 0x4f3c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3C24u;
label_4f3c24:
    // 0x4f3c24: 0x0  nop
    ctx->pc = 0x4f3c24u;
    // NOP
    ctx->pc = 0x4f3c28u;
}
