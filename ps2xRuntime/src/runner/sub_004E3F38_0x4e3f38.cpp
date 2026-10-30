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

// Function: sub_004E3F38
// Address: 0x4e3f38 - 0x4e3f88
void sub_004E3F38_0x4e3f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F38_0x4e3f38");
#endif

    switch (ctx->pc) {
        case 0x4e3f38u: goto label_4e3f38;
        case 0x4e3f3cu: goto label_4e3f3c;
        case 0x4e3f40u: goto label_4e3f40;
        case 0x4e3f44u: goto label_4e3f44;
        case 0x4e3f48u: goto label_4e3f48;
        case 0x4e3f4cu: goto label_4e3f4c;
        case 0x4e3f50u: goto label_4e3f50;
        case 0x4e3f54u: goto label_4e3f54;
        case 0x4e3f58u: goto label_4e3f58;
        case 0x4e3f5cu: goto label_4e3f5c;
        case 0x4e3f60u: goto label_4e3f60;
        case 0x4e3f64u: goto label_4e3f64;
        case 0x4e3f68u: goto label_4e3f68;
        case 0x4e3f6cu: goto label_4e3f6c;
        case 0x4e3f70u: goto label_4e3f70;
        case 0x4e3f74u: goto label_4e3f74;
        case 0x4e3f78u: goto label_4e3f78;
        case 0x4e3f7cu: goto label_4e3f7c;
        case 0x4e3f80u: goto label_4e3f80;
        case 0x4e3f84u: goto label_4e3f84;
        default: break;
    }

    ctx->pc = 0x4e3f38u;

label_4e3f38:
    // 0x4e3f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e3f3c:
    // 0x4e3f3c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4e3f3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3f40:
    // 0x4e3f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3f44:
    // 0x4e3f44: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4e3f48:
    if (ctx->pc == 0x4E3F48u) {
        ctx->pc = 0x4E3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3F44u;
        // 0x4e3f48: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3F4Cu;
        goto label_4e3f4c;
    }
    ctx->pc = 0x4E3F44u;
    {
        const bool branch_taken_0x4e3f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3F44u;
        // 0x4e3f48: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3f44) {
            ctx->pc = 0x4E3F70u;
            goto label_4e3f70;
        }
    }
    ctx->pc = 0x4E3F4Cu;
label_4e3f4c:
    // 0x4e3f4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e3f50:
    // 0x4e3f50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e3f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3f54:
    // 0x4e3f54: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e3f54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e3f58:
    // 0x4e3f58: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4e3f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e3f5c:
    // 0x4e3f5c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3f60:
    // 0x4e3f60: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3f64:
    // 0x4e3f64: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3f68:
    // 0x4e3f68: 0x60f809  jalr        $v1
label_4e3f6c:
    if (ctx->pc == 0x4E3F6Cu) {
        ctx->pc = 0x4E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3F68u;
        // 0x4e3f6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3F70u;
        goto label_4e3f70;
    }
    ctx->pc = 0x4E3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3F70u);
        ctx->pc = 0x4E3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3F68u;
        // 0x4e3f6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3F68u, 0x4E3F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3F70u;
label_4e3f70:
    // 0x4e3f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3f74:
    // 0x4e3f74: 0x3e00008  jr          $ra
label_4e3f78:
    if (ctx->pc == 0x4E3F78u) {
        ctx->pc = 0x4E3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3F74u;
        // 0x4e3f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3F7Cu;
        goto label_4e3f7c;
    }
    ctx->pc = 0x4E3F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3F74u;
        // 0x4e3f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3F7Cu;
label_4e3f7c:
    // 0x4e3f7c: 0x0  nop
    ctx->pc = 0x4e3f7cu;
    // NOP
label_4e3f80:
    // 0x4e3f80: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4e3f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3f84:
    // 0x4e3f84: 0x0  nop
    ctx->pc = 0x4e3f84u;
    // NOP
    ctx->pc = 0x4e3f88u;
}
