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

// Function: sub_003A4288
// Address: 0x3a4288 - 0x3a42d8
void sub_003A4288_0x3a4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4288_0x3a4288");
#endif

    switch (ctx->pc) {
        case 0x3a4288u: goto label_3a4288;
        case 0x3a428cu: goto label_3a428c;
        case 0x3a4290u: goto label_3a4290;
        case 0x3a4294u: goto label_3a4294;
        case 0x3a4298u: goto label_3a4298;
        case 0x3a429cu: goto label_3a429c;
        case 0x3a42a0u: goto label_3a42a0;
        case 0x3a42a4u: goto label_3a42a4;
        case 0x3a42a8u: goto label_3a42a8;
        case 0x3a42acu: goto label_3a42ac;
        case 0x3a42b0u: goto label_3a42b0;
        case 0x3a42b4u: goto label_3a42b4;
        case 0x3a42b8u: goto label_3a42b8;
        case 0x3a42bcu: goto label_3a42bc;
        case 0x3a42c0u: goto label_3a42c0;
        case 0x3a42c4u: goto label_3a42c4;
        case 0x3a42c8u: goto label_3a42c8;
        case 0x3a42ccu: goto label_3a42cc;
        case 0x3a42d0u: goto label_3a42d0;
        case 0x3a42d4u: goto label_3a42d4;
        default: break;
    }

    ctx->pc = 0x3a4288u;

label_3a4288:
    // 0x3a4288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a428c:
    // 0x3a428c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a428cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a4290:
    // 0x3a4290: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
label_3a4294:
    if (ctx->pc == 0x3A4294u) {
        ctx->pc = 0x3A4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4290u;
        // 0x3a4294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4298u;
        goto label_3a4298;
    }
    ctx->pc = 0x3A4290u;
    {
        const bool branch_taken_0x3a4290 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4290u;
        // 0x3a4294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4290) {
            ctx->pc = 0x3A42C8u;
            goto label_3a42c8;
        }
    }
    ctx->pc = 0x3A4298u;
label_3a4298:
    // 0x3a4298: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a429c:
    // 0x3a429c: 0x24040410  addiu       $a0, $zero, 0x410
    ctx->pc = 0x3a429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_3a42a0:
    // 0x3a42a0: 0x8c432c8c  lw          $v1, 0x2C8C($v0)
    ctx->pc = 0x3a42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11404)));
label_3a42a4:
    // 0x3a42a4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x3a42a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_3a42a8:
    // 0x3a42a8: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x3a42a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3a42ac:
    // 0x3a42ac: 0x24c61550  addiu       $a2, $a2, 0x1550
    ctx->pc = 0x3a42acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5456));
label_3a42b0:
    // 0x3a42b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3a42b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3a42b4:
    // 0x3a42b4: 0x84e400c8  lh          $a0, 0xC8($a3)
    ctx->pc = 0x3a42b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 200)));
label_3a42b8:
    // 0x3a42b8: 0x8ce200cc  lw          $v0, 0xCC($a3)
    ctx->pc = 0x3a42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 204)));
label_3a42bc:
    // 0x3a42bc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x3a42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3a42c0:
    // 0x3a42c0: 0x40f809  jalr        $v0
label_3a42c4:
    if (ctx->pc == 0x3A42C4u) {
        ctx->pc = 0x3A42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42C0u;
        // 0x3a42c4: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A42C8u;
        goto label_3a42c8;
    }
    ctx->pc = 0x3A42C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A42C8u);
        ctx->pc = 0x3A42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42C0u;
        // 0x3a42c4: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A42C0u, 0x3A42C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A42C8u;
label_3a42c8:
    // 0x3a42c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a42c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a42cc:
    // 0x3a42cc: 0x3e00008  jr          $ra
label_3a42d0:
    if (ctx->pc == 0x3A42D0u) {
        ctx->pc = 0x3A42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42CCu;
        // 0x3a42d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A42D4u;
        goto label_3a42d4;
    }
    ctx->pc = 0x3A42CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42CCu;
        // 0x3a42d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A42CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A42D4u;
label_3a42d4:
    // 0x3a42d4: 0x0  nop
    ctx->pc = 0x3a42d4u;
    // NOP
    ctx->pc = 0x3a42d8u;
}
