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

// Function: sub_004E99E0
// Address: 0x4e99e0 - 0x4e9a28
void sub_004E99E0_0x4e99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E99E0_0x4e99e0");
#endif

    switch (ctx->pc) {
        case 0x4e99e0u: goto label_4e99e0;
        case 0x4e99e4u: goto label_4e99e4;
        case 0x4e99e8u: goto label_4e99e8;
        case 0x4e99ecu: goto label_4e99ec;
        case 0x4e99f0u: goto label_4e99f0;
        case 0x4e99f4u: goto label_4e99f4;
        case 0x4e99f8u: goto label_4e99f8;
        case 0x4e99fcu: goto label_4e99fc;
        case 0x4e9a00u: goto label_4e9a00;
        case 0x4e9a04u: goto label_4e9a04;
        case 0x4e9a08u: goto label_4e9a08;
        case 0x4e9a0cu: goto label_4e9a0c;
        case 0x4e9a10u: goto label_4e9a10;
        case 0x4e9a14u: goto label_4e9a14;
        case 0x4e9a18u: goto label_4e9a18;
        case 0x4e9a1cu: goto label_4e9a1c;
        case 0x4e9a20u: goto label_4e9a20;
        case 0x4e9a24u: goto label_4e9a24;
        default: break;
    }

    ctx->pc = 0x4e99e0u;

label_4e99e0:
    // 0x4e99e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e99e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e99e4:
    // 0x4e99e4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4e99e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e99e8:
    // 0x4e99e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e99e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e99ec:
    // 0x4e99ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4e99f0:
    if (ctx->pc == 0x4E99F0u) {
        ctx->pc = 0x4E99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99ECu;
        // 0x4e99f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E99F4u;
        goto label_4e99f4;
    }
    ctx->pc = 0x4E99ECu;
    {
        const bool branch_taken_0x4e99ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99ECu;
        // 0x4e99f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e99ec) {
            ctx->pc = 0x4E9A18u;
            goto label_4e9a18;
        }
    }
    ctx->pc = 0x4E99F4u;
label_4e99f4:
    // 0x4e99f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e99f8:
    // 0x4e99f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e99f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e99fc:
    // 0x4e99fc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e99fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9a00:
    // 0x4e9a00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4e9a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a04:
    // 0x4e9a04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9a08:
    // 0x4e9a08: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9a0c:
    // 0x4e9a0c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9a10:
    // 0x4e9a10: 0x60f809  jalr        $v1
label_4e9a14:
    if (ctx->pc == 0x4E9A14u) {
        ctx->pc = 0x4E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A10u;
        // 0x4e9a14: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9A18u;
        goto label_4e9a18;
    }
    ctx->pc = 0x4E9A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9A18u);
        ctx->pc = 0x4E9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A10u;
        // 0x4e9a14: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9A10u, 0x4E9A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9A18u;
label_4e9a18:
    // 0x4e9a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9a1c:
    // 0x4e9a1c: 0x3e00008  jr          $ra
label_4e9a20:
    if (ctx->pc == 0x4E9A20u) {
        ctx->pc = 0x4E9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A1Cu;
        // 0x4e9a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9A24u;
        goto label_4e9a24;
    }
    ctx->pc = 0x4E9A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9A1Cu;
        // 0x4e9a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9A24u;
label_4e9a24:
    // 0x4e9a24: 0x0  nop
    ctx->pc = 0x4e9a24u;
    // NOP
    ctx->pc = 0x4e9a28u;
}
