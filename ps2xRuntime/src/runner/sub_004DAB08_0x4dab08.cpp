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

// Function: sub_004DAB08
// Address: 0x4dab08 - 0x4dab50
void sub_004DAB08_0x4dab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAB08_0x4dab08");
#endif

    switch (ctx->pc) {
        case 0x4dab08u: goto label_4dab08;
        case 0x4dab0cu: goto label_4dab0c;
        case 0x4dab10u: goto label_4dab10;
        case 0x4dab14u: goto label_4dab14;
        case 0x4dab18u: goto label_4dab18;
        case 0x4dab1cu: goto label_4dab1c;
        case 0x4dab20u: goto label_4dab20;
        case 0x4dab24u: goto label_4dab24;
        case 0x4dab28u: goto label_4dab28;
        case 0x4dab2cu: goto label_4dab2c;
        case 0x4dab30u: goto label_4dab30;
        case 0x4dab34u: goto label_4dab34;
        case 0x4dab38u: goto label_4dab38;
        case 0x4dab3cu: goto label_4dab3c;
        case 0x4dab40u: goto label_4dab40;
        case 0x4dab44u: goto label_4dab44;
        case 0x4dab48u: goto label_4dab48;
        case 0x4dab4cu: goto label_4dab4c;
        default: break;
    }

    ctx->pc = 0x4dab08u;

label_4dab08:
    // 0x4dab08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dab0c:
    // 0x4dab0c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4dab0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dab10:
    // 0x4dab10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dab14:
    // 0x4dab14: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4dab18:
    if (ctx->pc == 0x4DAB18u) {
        ctx->pc = 0x4DAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB14u;
        // 0x4dab18: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DAB1Cu;
        goto label_4dab1c;
    }
    ctx->pc = 0x4DAB14u;
    {
        const bool branch_taken_0x4dab14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB14u;
        // 0x4dab18: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dab14) {
            ctx->pc = 0x4DAB40u;
            goto label_4dab40;
        }
    }
    ctx->pc = 0x4DAB1Cu;
label_4dab1c:
    // 0x4dab1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4dab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4dab20:
    // 0x4dab20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4dab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dab24:
    // 0x4dab24: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dab24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dab28:
    // 0x4dab28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4dab28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4dab2c:
    // 0x4dab2c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dab30:
    // 0x4dab30: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dab30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dab34:
    // 0x4dab34: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dab38:
    // 0x4dab38: 0x60f809  jalr        $v1
label_4dab3c:
    if (ctx->pc == 0x4DAB3Cu) {
        ctx->pc = 0x4DAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB38u;
        // 0x4dab3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DAB40u;
        goto label_4dab40;
    }
    ctx->pc = 0x4DAB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DAB40u);
        ctx->pc = 0x4DAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB38u;
        // 0x4dab3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAB38u, 0x4DAB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DAB40u;
label_4dab40:
    // 0x4dab40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dab44:
    // 0x4dab44: 0x3e00008  jr          $ra
label_4dab48:
    if (ctx->pc == 0x4DAB48u) {
        ctx->pc = 0x4DAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB44u;
        // 0x4dab48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DAB4Cu;
        goto label_4dab4c;
    }
    ctx->pc = 0x4DAB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAB44u;
        // 0x4dab48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAB4Cu;
label_4dab4c:
    // 0x4dab4c: 0x0  nop
    ctx->pc = 0x4dab4cu;
    // NOP
    ctx->pc = 0x4dab50u;
}
