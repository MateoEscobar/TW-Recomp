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

// Function: sub_004EAB10
// Address: 0x4eab10 - 0x4eab58
void sub_004EAB10_0x4eab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAB10_0x4eab10");
#endif

    switch (ctx->pc) {
        case 0x4eab10u: goto label_4eab10;
        case 0x4eab14u: goto label_4eab14;
        case 0x4eab18u: goto label_4eab18;
        case 0x4eab1cu: goto label_4eab1c;
        case 0x4eab20u: goto label_4eab20;
        case 0x4eab24u: goto label_4eab24;
        case 0x4eab28u: goto label_4eab28;
        case 0x4eab2cu: goto label_4eab2c;
        case 0x4eab30u: goto label_4eab30;
        case 0x4eab34u: goto label_4eab34;
        case 0x4eab38u: goto label_4eab38;
        case 0x4eab3cu: goto label_4eab3c;
        case 0x4eab40u: goto label_4eab40;
        case 0x4eab44u: goto label_4eab44;
        case 0x4eab48u: goto label_4eab48;
        case 0x4eab4cu: goto label_4eab4c;
        case 0x4eab50u: goto label_4eab50;
        case 0x4eab54u: goto label_4eab54;
        default: break;
    }

    ctx->pc = 0x4eab10u;

label_4eab10:
    // 0x4eab10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4eab14:
    // 0x4eab14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4eab14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eab18:
    // 0x4eab18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eab1c:
    // 0x4eab1c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4eab20:
    if (ctx->pc == 0x4EAB20u) {
        ctx->pc = 0x4EAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB1Cu;
        // 0x4eab20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB24u;
        goto label_4eab24;
    }
    ctx->pc = 0x4EAB1Cu;
    {
        const bool branch_taken_0x4eab1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB1Cu;
        // 0x4eab20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eab1c) {
            ctx->pc = 0x4EAB48u;
            goto label_4eab48;
        }
    }
    ctx->pc = 0x4EAB24u;
label_4eab24:
    // 0x4eab24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eab28:
    // 0x4eab28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4eab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eab2c:
    // 0x4eab2c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eab2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eab30:
    // 0x4eab30: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4eab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4eab34:
    // 0x4eab34: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eab38:
    // 0x4eab38: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eab38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eab3c:
    // 0x4eab3c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eab40:
    // 0x4eab40: 0x60f809  jalr        $v1
label_4eab44:
    if (ctx->pc == 0x4EAB44u) {
        ctx->pc = 0x4EAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB40u;
        // 0x4eab44: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB48u;
        goto label_4eab48;
    }
    ctx->pc = 0x4EAB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAB48u);
        ctx->pc = 0x4EAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB40u;
        // 0x4eab44: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAB40u, 0x4EAB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAB48u;
label_4eab48:
    // 0x4eab48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eab4c:
    // 0x4eab4c: 0x3e00008  jr          $ra
label_4eab50:
    if (ctx->pc == 0x4EAB50u) {
        ctx->pc = 0x4EAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB4Cu;
        // 0x4eab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB54u;
        goto label_4eab54;
    }
    ctx->pc = 0x4EAB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB4Cu;
        // 0x4eab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAB54u;
label_4eab54:
    // 0x4eab54: 0x0  nop
    ctx->pc = 0x4eab54u;
    // NOP
    ctx->pc = 0x4eab58u;
}
