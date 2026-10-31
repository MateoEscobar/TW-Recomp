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

// Function: sub_002672D0
// Address: 0x2672d0 - 0x267338
void sub_002672D0_0x2672d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002672D0_0x2672d0");
#endif

    switch (ctx->pc) {
        case 0x2672d0u: goto label_2672d0;
        case 0x2672d4u: goto label_2672d4;
        case 0x2672d8u: goto label_2672d8;
        case 0x2672dcu: goto label_2672dc;
        case 0x2672e0u: goto label_2672e0;
        case 0x2672e4u: goto label_2672e4;
        case 0x2672e8u: goto label_2672e8;
        case 0x2672ecu: goto label_2672ec;
        case 0x2672f0u: goto label_2672f0;
        case 0x2672f4u: goto label_2672f4;
        case 0x2672f8u: goto label_2672f8;
        case 0x2672fcu: goto label_2672fc;
        case 0x267300u: goto label_267300;
        case 0x267304u: goto label_267304;
        case 0x267308u: goto label_267308;
        case 0x26730cu: goto label_26730c;
        case 0x267310u: goto label_267310;
        case 0x267314u: goto label_267314;
        case 0x267318u: goto label_267318;
        case 0x26731cu: goto label_26731c;
        case 0x267320u: goto label_267320;
        case 0x267324u: goto label_267324;
        case 0x267328u: goto label_267328;
        case 0x26732cu: goto label_26732c;
        case 0x267330u: goto label_267330;
        case 0x267334u: goto label_267334;
        default: break;
    }

    ctx->pc = 0x2672d0u;

label_2672d0:
    // 0x2672d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2672d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2672d4:
    // 0x2672d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2672d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2672d8:
    // 0x2672d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2672d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2672dc:
    // 0x2672dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2672dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2672e0:
    // 0x2672e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2672e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2672e4:
    // 0x2672e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2672e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2672e8:
    // 0x2672e8: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_2672ec:
    if (ctx->pc == 0x2672ECu) {
        ctx->pc = 0x2672ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672E8u;
        // 0x2672ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2672F0u;
        goto label_2672f0;
    }
    ctx->pc = 0x2672E8u;
    {
        const bool branch_taken_0x2672e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2672ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672E8u;
        // 0x2672ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672e8) {
            ctx->pc = 0x267320u;
            goto label_267320;
        }
    }
    ctx->pc = 0x2672F0u;
label_2672f0:
    // 0x2672f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2672f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2672f4:
    // 0x2672f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2672f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2672f8:
    // 0x2672f8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2672f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2672fc:
    // 0x2672fc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2672fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_267300:
    // 0x267300: 0x60f809  jalr        $v1
label_267304:
    if (ctx->pc == 0x267304u) {
        ctx->pc = 0x267304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267300u;
        // 0x267304: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267308u;
        goto label_267308;
    }
    ctx->pc = 0x267300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x267308u);
        ctx->pc = 0x267304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267300u;
        // 0x267304: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267300u, 0x267308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267308u;
label_267308:
    // 0x267308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26730c:
    // 0x26730c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26730cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267310:
    // 0x267310: 0xc099cce  jal         func_267338
label_267314:
    if (ctx->pc == 0x267314u) {
        ctx->pc = 0x267314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267310u;
        // 0x267314: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267318u;
        goto label_267318;
    }
    ctx->pc = 0x267310u;
    SET_GPR_U32(ctx, 31, 0x267318u);
    ctx->pc = 0x267314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267310u;
    // 0x267314: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267338u, 0x267310u, 0x267318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267318u;
label_267318:
    // 0x267318: 0x10000003  b           . + 4 + (0x3 << 2)
label_26731c:
    if (ctx->pc == 0x26731Cu) {
        ctx->pc = 0x26731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267318u;
        // 0x26731c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267320u;
        goto label_267320;
    }
    ctx->pc = 0x267318u;
    {
        const bool branch_taken_0x267318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267318u;
        // 0x26731c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267318) {
            ctx->pc = 0x267328u;
            goto label_267328;
        }
    }
    ctx->pc = 0x267320u;
label_267320:
    // 0x267320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267324:
    // 0x267324: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x267324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_267328:
    // 0x267328: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x267328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26732c:
    // 0x26732c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26732cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_267330:
    // 0x267330: 0x3e00008  jr          $ra
label_267334:
    if (ctx->pc == 0x267334u) {
        ctx->pc = 0x267334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267330u;
        // 0x267334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267338u;
        goto label_fallthrough_0x267330;
    }
    ctx->pc = 0x267330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267330u;
        // 0x267334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x267330:
    ctx->pc = 0x267338u;
}
