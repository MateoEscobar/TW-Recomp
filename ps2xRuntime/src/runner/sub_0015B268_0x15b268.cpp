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

// Function: sub_0015B268
// Address: 0x15b268 - 0x15b2d8
void sub_0015B268_0x15b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B268_0x15b268");
#endif

    switch (ctx->pc) {
        case 0x15b268u: goto label_15b268;
        case 0x15b26cu: goto label_15b26c;
        case 0x15b270u: goto label_15b270;
        case 0x15b274u: goto label_15b274;
        case 0x15b278u: goto label_15b278;
        case 0x15b27cu: goto label_15b27c;
        case 0x15b280u: goto label_15b280;
        case 0x15b284u: goto label_15b284;
        case 0x15b288u: goto label_15b288;
        case 0x15b28cu: goto label_15b28c;
        case 0x15b290u: goto label_15b290;
        case 0x15b294u: goto label_15b294;
        case 0x15b298u: goto label_15b298;
        case 0x15b29cu: goto label_15b29c;
        case 0x15b2a0u: goto label_15b2a0;
        case 0x15b2a4u: goto label_15b2a4;
        case 0x15b2a8u: goto label_15b2a8;
        case 0x15b2acu: goto label_15b2ac;
        case 0x15b2b0u: goto label_15b2b0;
        case 0x15b2b4u: goto label_15b2b4;
        case 0x15b2b8u: goto label_15b2b8;
        case 0x15b2bcu: goto label_15b2bc;
        case 0x15b2c0u: goto label_15b2c0;
        case 0x15b2c4u: goto label_15b2c4;
        case 0x15b2c8u: goto label_15b2c8;
        case 0x15b2ccu: goto label_15b2cc;
        case 0x15b2d0u: goto label_15b2d0;
        case 0x15b2d4u: goto label_15b2d4;
        default: break;
    }

    ctx->pc = 0x15b268u;

label_15b268:
    // 0x15b268: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b26c:
    // 0x15b26c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b26cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b270:
    // 0x15b270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b274:
    // 0x15b274: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b278:
    // 0x15b278: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b27c:
    // 0x15b27c: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x15b27cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_15b280:
    // 0x15b280: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x15b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_15b284:
    // 0x15b284: 0x40f809  jalr        $v0
label_15b288:
    if (ctx->pc == 0x15B288u) {
        ctx->pc = 0x15B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B284u;
        // 0x15b288: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B28Cu;
        goto label_15b28c;
    }
    ctx->pc = 0x15B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B28Cu);
        ctx->pc = 0x15B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B284u;
        // 0x15b288: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B284u, 0x15B28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B28Cu;
label_15b28c:
    // 0x15b28c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_15b290:
    if (ctx->pc == 0x15B290u) {
        ctx->pc = 0x15B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B28Cu;
        // 0x15b290: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B294u;
        goto label_15b294;
    }
    ctx->pc = 0x15B28Cu;
    {
        const bool branch_taken_0x15b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B28Cu;
        // 0x15b290: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b28c) {
            ctx->pc = 0x15B2BCu;
            goto label_15b2bc;
        }
    }
    ctx->pc = 0x15B294u;
label_15b294:
    // 0x15b294: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15b298:
    // 0x15b298: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_15b29c:
    if (ctx->pc == 0x15B29Cu) {
        ctx->pc = 0x15B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B298u;
        // 0x15b29c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2A0u;
        goto label_15b2a0;
    }
    ctx->pc = 0x15B298u;
    {
        const bool branch_taken_0x15b298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b298) {
            ctx->pc = 0x15B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B298u;
            // 0x15b29c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B2B0u;
            goto label_15b2b0;
        }
    }
    ctx->pc = 0x15B2A0u;
label_15b2a0:
    // 0x15b2a0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15b2a4:
    // 0x15b2a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b2a8:
    // 0x15b2a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_15b2ac:
    if (ctx->pc == 0x15B2ACu) {
        ctx->pc = 0x15B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2A8u;
        // 0x15b2ac: 0x2442b528  addiu       $v0, $v0, -0x4AD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2B0u;
        goto label_15b2b0;
    }
    ctx->pc = 0x15B2A8u;
    {
        const bool branch_taken_0x15b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2A8u;
        // 0x15b2ac: 0x2442b528  addiu       $v0, $v0, -0x4AD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2a8) {
            ctx->pc = 0x15B2C8u;
            goto label_15b2c8;
        }
    }
    ctx->pc = 0x15B2B0u;
label_15b2b0:
    // 0x15b2b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b2b4:
    // 0x15b2b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_15b2b8:
    if (ctx->pc == 0x15B2B8u) {
        ctx->pc = 0x15B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2B4u;
        // 0x15b2b8: 0x2442b8c0  addiu       $v0, $v0, -0x4740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2BCu;
        goto label_15b2bc;
    }
    ctx->pc = 0x15B2B4u;
    {
        const bool branch_taken_0x15b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2B4u;
        // 0x15b2b8: 0x2442b8c0  addiu       $v0, $v0, -0x4740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2b4) {
            ctx->pc = 0x15B2C8u;
            goto label_15b2c8;
        }
    }
    ctx->pc = 0x15B2BCu;
label_15b2bc:
    // 0x15b2bc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15b2c0:
    // 0x15b2c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b2c4:
    // 0x15b2c4: 0x2442b2d8  addiu       $v0, $v0, -0x4D28
    ctx->pc = 0x15b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947544));
label_15b2c8:
    // 0x15b2c8: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15b2cc:
    // 0x15b2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b2d0:
    // 0x15b2d0: 0x3e00008  jr          $ra
label_15b2d4:
    if (ctx->pc == 0x15B2D4u) {
        ctx->pc = 0x15B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2D0u;
        // 0x15b2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B2D8u;
        goto label_fallthrough_0x15b2d0;
    }
    ctx->pc = 0x15B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2D0u;
        // 0x15b2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b2d0:
    ctx->pc = 0x15B2D8u;
}
