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

// Function: sub_001FC2F8
// Address: 0x1fc2f8 - 0x1fc380
void sub_001FC2F8_0x1fc2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC2F8_0x1fc2f8");
#endif

    switch (ctx->pc) {
        case 0x1fc2f8u: goto label_1fc2f8;
        case 0x1fc2fcu: goto label_1fc2fc;
        case 0x1fc300u: goto label_1fc300;
        case 0x1fc304u: goto label_1fc304;
        case 0x1fc308u: goto label_1fc308;
        case 0x1fc30cu: goto label_1fc30c;
        case 0x1fc310u: goto label_1fc310;
        case 0x1fc314u: goto label_1fc314;
        case 0x1fc318u: goto label_1fc318;
        case 0x1fc31cu: goto label_1fc31c;
        case 0x1fc320u: goto label_1fc320;
        case 0x1fc324u: goto label_1fc324;
        case 0x1fc328u: goto label_1fc328;
        case 0x1fc32cu: goto label_1fc32c;
        case 0x1fc330u: goto label_1fc330;
        case 0x1fc334u: goto label_1fc334;
        case 0x1fc338u: goto label_1fc338;
        case 0x1fc33cu: goto label_1fc33c;
        case 0x1fc340u: goto label_1fc340;
        case 0x1fc344u: goto label_1fc344;
        case 0x1fc348u: goto label_1fc348;
        case 0x1fc34cu: goto label_1fc34c;
        case 0x1fc350u: goto label_1fc350;
        case 0x1fc354u: goto label_1fc354;
        case 0x1fc358u: goto label_1fc358;
        case 0x1fc35cu: goto label_1fc35c;
        case 0x1fc360u: goto label_1fc360;
        case 0x1fc364u: goto label_1fc364;
        case 0x1fc368u: goto label_1fc368;
        case 0x1fc36cu: goto label_1fc36c;
        case 0x1fc370u: goto label_1fc370;
        case 0x1fc374u: goto label_1fc374;
        case 0x1fc378u: goto label_1fc378;
        case 0x1fc37cu: goto label_1fc37c;
        default: break;
    }

    ctx->pc = 0x1fc2f8u;

label_1fc2f8:
    // 0x1fc2f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc2fc:
    // 0x1fc2fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fc2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fc300:
    // 0x1fc300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc304:
    // 0x1fc304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc308:
    // 0x1fc308: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fc308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc30c:
    // 0x1fc30c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fc30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fc310:
    // 0x1fc310: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fc310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fc314:
    // 0x1fc314: 0x40f809  jalr        $v0
label_1fc318:
    if (ctx->pc == 0x1FC318u) {
        ctx->pc = 0x1FC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC314u;
        // 0x1fc318: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC31Cu;
        goto label_1fc31c;
    }
    ctx->pc = 0x1FC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC31Cu);
        ctx->pc = 0x1FC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC314u;
        // 0x1fc318: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC314u, 0x1FC31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC31Cu;
label_1fc31c:
    // 0x1fc31c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1fc320:
    if (ctx->pc == 0x1FC320u) {
        ctx->pc = 0x1FC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC31Cu;
        // 0x1fc320: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC324u;
        goto label_1fc324;
    }
    ctx->pc = 0x1FC31Cu;
    {
        const bool branch_taken_0x1fc31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc31c) {
            ctx->pc = 0x1FC320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC31Cu;
            // 0x1fc320: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC374u;
            goto label_1fc374;
        }
    }
    ctx->pc = 0x1FC324u;
label_1fc324:
    // 0x1fc324: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc328:
    // 0x1fc328: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1fc328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1fc32c:
    // 0x1fc32c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1fc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1fc330:
    // 0x1fc330: 0x40f809  jalr        $v0
label_1fc334:
    if (ctx->pc == 0x1FC334u) {
        ctx->pc = 0x1FC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC330u;
        // 0x1fc334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC338u;
        goto label_1fc338;
    }
    ctx->pc = 0x1FC330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC338u);
        ctx->pc = 0x1FC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC330u;
        // 0x1fc334: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC330u, 0x1FC338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC338u;
label_1fc338:
    // 0x1fc338: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1fc33c:
    if (ctx->pc == 0x1FC33Cu) {
        ctx->pc = 0x1FC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC338u;
        // 0x1fc33c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC340u;
        goto label_1fc340;
    }
    ctx->pc = 0x1FC338u;
    {
        const bool branch_taken_0x1fc338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc338) {
            ctx->pc = 0x1FC33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC338u;
            // 0x1fc33c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC374u;
            goto label_1fc374;
        }
    }
    ctx->pc = 0x1FC340u;
label_1fc340:
    // 0x1fc340: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x1fc340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1fc344:
    // 0x1fc344: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc348:
    // 0x1fc348: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fc34c:
    // 0x1fc34c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fc34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fc350:
    // 0x1fc350: 0x60f809  jalr        $v1
label_1fc354:
    if (ctx->pc == 0x1FC354u) {
        ctx->pc = 0x1FC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC350u;
        // 0x1fc354: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC358u;
        goto label_1fc358;
    }
    ctx->pc = 0x1FC350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC358u);
        ctx->pc = 0x1FC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC350u;
        // 0x1fc354: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC350u, 0x1FC358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC358u;
label_1fc358:
    // 0x1fc358: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1fc358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1fc35c:
    // 0x1fc35c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fc360:
    // 0x1fc360: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fc360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fc364:
    // 0x1fc364: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fc364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fc368:
    // 0x1fc368: 0x60f809  jalr        $v1
label_1fc36c:
    if (ctx->pc == 0x1FC36Cu) {
        ctx->pc = 0x1FC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC368u;
        // 0x1fc36c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC370u;
        goto label_1fc370;
    }
    ctx->pc = 0x1FC368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC370u);
        ctx->pc = 0x1FC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC368u;
        // 0x1fc36c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC368u, 0x1FC370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC370u;
label_1fc370:
    // 0x1fc370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc374:
    // 0x1fc374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc378:
    // 0x1fc378: 0x3e00008  jr          $ra
label_1fc37c:
    if (ctx->pc == 0x1FC37Cu) {
        ctx->pc = 0x1FC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC378u;
        // 0x1fc37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC380u;
        goto label_fallthrough_0x1fc378;
    }
    ctx->pc = 0x1FC378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC378u;
        // 0x1fc37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc378:
    ctx->pc = 0x1FC380u;
}
