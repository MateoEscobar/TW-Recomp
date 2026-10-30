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

// Function: sub_004F4BF8
// Address: 0x4f4bf8 - 0x4f4c40
void sub_004F4BF8_0x4f4bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4BF8_0x4f4bf8");
#endif

    switch (ctx->pc) {
        case 0x4f4bf8u: goto label_4f4bf8;
        case 0x4f4bfcu: goto label_4f4bfc;
        case 0x4f4c00u: goto label_4f4c00;
        case 0x4f4c04u: goto label_4f4c04;
        case 0x4f4c08u: goto label_4f4c08;
        case 0x4f4c0cu: goto label_4f4c0c;
        case 0x4f4c10u: goto label_4f4c10;
        case 0x4f4c14u: goto label_4f4c14;
        case 0x4f4c18u: goto label_4f4c18;
        case 0x4f4c1cu: goto label_4f4c1c;
        case 0x4f4c20u: goto label_4f4c20;
        case 0x4f4c24u: goto label_4f4c24;
        case 0x4f4c28u: goto label_4f4c28;
        case 0x4f4c2cu: goto label_4f4c2c;
        case 0x4f4c30u: goto label_4f4c30;
        case 0x4f4c34u: goto label_4f4c34;
        case 0x4f4c38u: goto label_4f4c38;
        case 0x4f4c3cu: goto label_4f4c3c;
        default: break;
    }

    ctx->pc = 0x4f4bf8u;

label_4f4bf8:
    // 0x4f4bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f4bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f4bfc:
    // 0x4f4bfc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4f4bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c00:
    // 0x4f4c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4c04:
    // 0x4f4c04: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4f4c08:
    if (ctx->pc == 0x4F4C08u) {
        ctx->pc = 0x4F4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C04u;
        // 0x4f4c08: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4C0Cu;
        goto label_4f4c0c;
    }
    ctx->pc = 0x4F4C04u;
    {
        const bool branch_taken_0x4f4c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C04u;
        // 0x4f4c08: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4c04) {
            ctx->pc = 0x4F4C30u;
            goto label_4f4c30;
        }
    }
    ctx->pc = 0x4F4C0Cu;
label_4f4c0c:
    // 0x4f4c0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f4c10:
    // 0x4f4c10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f4c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c14:
    // 0x4f4c14: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f4c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f4c18:
    // 0x4f4c18: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4f4c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f4c1c:
    // 0x4f4c1c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4c20:
    // 0x4f4c20: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f4c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4c24:
    // 0x4f4c24: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f4c28:
    // 0x4f4c28: 0x60f809  jalr        $v1
label_4f4c2c:
    if (ctx->pc == 0x4F4C2Cu) {
        ctx->pc = 0x4F4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C28u;
        // 0x4f4c2c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4C30u;
        goto label_4f4c30;
    }
    ctx->pc = 0x4F4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4C30u);
        ctx->pc = 0x4F4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C28u;
        // 0x4f4c2c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4C28u, 0x4F4C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4C30u;
label_4f4c30:
    // 0x4f4c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4c34:
    // 0x4f4c34: 0x3e00008  jr          $ra
label_4f4c38:
    if (ctx->pc == 0x4F4C38u) {
        ctx->pc = 0x4F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C34u;
        // 0x4f4c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4C3Cu;
        goto label_4f4c3c;
    }
    ctx->pc = 0x4F4C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4C34u;
        // 0x4f4c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4C3Cu;
label_4f4c3c:
    // 0x4f4c3c: 0x0  nop
    ctx->pc = 0x4f4c3cu;
    // NOP
    ctx->pc = 0x4f4c40u;
}
