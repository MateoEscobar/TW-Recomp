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

// Function: sub_003385D0
// Address: 0x3385d0 - 0x338610
void sub_003385D0_0x3385d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003385D0_0x3385d0");
#endif

    switch (ctx->pc) {
        case 0x3385d0u: goto label_3385d0;
        case 0x3385d4u: goto label_3385d4;
        case 0x3385d8u: goto label_3385d8;
        case 0x3385dcu: goto label_3385dc;
        case 0x3385e0u: goto label_3385e0;
        case 0x3385e4u: goto label_3385e4;
        case 0x3385e8u: goto label_3385e8;
        case 0x3385ecu: goto label_3385ec;
        case 0x3385f0u: goto label_3385f0;
        case 0x3385f4u: goto label_3385f4;
        case 0x3385f8u: goto label_3385f8;
        case 0x3385fcu: goto label_3385fc;
        case 0x338600u: goto label_338600;
        case 0x338604u: goto label_338604;
        case 0x338608u: goto label_338608;
        case 0x33860cu: goto label_33860c;
        default: break;
    }

    ctx->pc = 0x3385d0u;

label_3385d0:
    // 0x3385d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3385d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3385d4:
    // 0x3385d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3385d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3385d8:
    // 0x3385d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3385d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3385dc:
    // 0x3385dc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3385e0:
    // 0x3385e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3385e4:
    if (ctx->pc == 0x3385E4u) {
        ctx->pc = 0x3385E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385E0u;
        // 0x3385e4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385E8u;
        goto label_3385e8;
    }
    ctx->pc = 0x3385E0u;
    {
        const bool branch_taken_0x3385e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3385e0) {
            ctx->pc = 0x3385E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3385E0u;
            // 0x3385e4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3385F0u;
            goto label_3385f0;
        }
    }
    ctx->pc = 0x3385E8u;
label_3385e8:
    // 0x3385e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3385ec:
    if (ctx->pc == 0x3385ECu) {
        ctx->pc = 0x3385ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385E8u;
        // 0x3385ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385F0u;
        goto label_3385f0;
    }
    ctx->pc = 0x3385E8u;
    {
        const bool branch_taken_0x3385e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3385ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385E8u;
        // 0x3385ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385e8) {
            ctx->pc = 0x338604u;
            goto label_338604;
        }
    }
    ctx->pc = 0x3385F0u;
label_3385f0:
    // 0x3385f0: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x3385f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_3385f4:
    // 0x3385f4: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x3385f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_3385f8:
    // 0x3385f8: 0x60f809  jalr        $v1
label_3385fc:
    if (ctx->pc == 0x3385FCu) {
        ctx->pc = 0x3385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385F8u;
        // 0x3385fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338600u;
        goto label_338600;
    }
    ctx->pc = 0x3385F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x338600u);
        ctx->pc = 0x3385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385F8u;
        // 0x3385fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3385F8u, 0x338600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338600u;
label_338600:
    // 0x338600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338604:
    // 0x338604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338608:
    // 0x338608: 0x3e00008  jr          $ra
label_33860c:
    if (ctx->pc == 0x33860Cu) {
        ctx->pc = 0x33860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338608u;
        // 0x33860c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338610u;
        goto label_fallthrough_0x338608;
    }
    ctx->pc = 0x338608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338608u;
        // 0x33860c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338608:
    ctx->pc = 0x338610u;
}
