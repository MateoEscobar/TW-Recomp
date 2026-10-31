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

// Function: sub_00206488
// Address: 0x206488 - 0x206538
void sub_00206488_0x206488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206488_0x206488");
#endif

    switch (ctx->pc) {
        case 0x206488u: goto label_206488;
        case 0x20648cu: goto label_20648c;
        case 0x206490u: goto label_206490;
        case 0x206494u: goto label_206494;
        case 0x206498u: goto label_206498;
        case 0x20649cu: goto label_20649c;
        case 0x2064a0u: goto label_2064a0;
        case 0x2064a4u: goto label_2064a4;
        case 0x2064a8u: goto label_2064a8;
        case 0x2064acu: goto label_2064ac;
        case 0x2064b0u: goto label_2064b0;
        case 0x2064b4u: goto label_2064b4;
        case 0x2064b8u: goto label_2064b8;
        case 0x2064bcu: goto label_2064bc;
        case 0x2064c0u: goto label_2064c0;
        case 0x2064c4u: goto label_2064c4;
        case 0x2064c8u: goto label_2064c8;
        case 0x2064ccu: goto label_2064cc;
        case 0x2064d0u: goto label_2064d0;
        case 0x2064d4u: goto label_2064d4;
        case 0x2064d8u: goto label_2064d8;
        case 0x2064dcu: goto label_2064dc;
        case 0x2064e0u: goto label_2064e0;
        case 0x2064e4u: goto label_2064e4;
        case 0x2064e8u: goto label_2064e8;
        case 0x2064ecu: goto label_2064ec;
        case 0x2064f0u: goto label_2064f0;
        case 0x2064f4u: goto label_2064f4;
        case 0x2064f8u: goto label_2064f8;
        case 0x2064fcu: goto label_2064fc;
        case 0x206500u: goto label_206500;
        case 0x206504u: goto label_206504;
        case 0x206508u: goto label_206508;
        case 0x20650cu: goto label_20650c;
        case 0x206510u: goto label_206510;
        case 0x206514u: goto label_206514;
        case 0x206518u: goto label_206518;
        case 0x20651cu: goto label_20651c;
        case 0x206520u: goto label_206520;
        case 0x206524u: goto label_206524;
        case 0x206528u: goto label_206528;
        case 0x20652cu: goto label_20652c;
        case 0x206530u: goto label_206530;
        case 0x206534u: goto label_206534;
        default: break;
    }

    ctx->pc = 0x206488u;

label_206488:
    // 0x206488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20648c:
    // 0x20648c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_206490:
    // 0x206490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206494:
    // 0x206494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206498:
    // 0x206498: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20649c:
    // 0x20649c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2064a0:
    // 0x2064a0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2064a4:
    // 0x2064a4: 0x40f809  jalr        $v0
label_2064a8:
    if (ctx->pc == 0x2064A8u) {
        ctx->pc = 0x2064A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064A4u;
        // 0x2064a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064ACu;
        goto label_2064ac;
    }
    ctx->pc = 0x2064A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2064ACu);
        ctx->pc = 0x2064A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064A4u;
        // 0x2064a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2064A4u, 0x2064ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2064ACu;
label_2064ac:
    // 0x2064ac: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_2064b0:
    if (ctx->pc == 0x2064B0u) {
        ctx->pc = 0x2064B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064ACu;
        // 0x2064b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064B4u;
        goto label_2064b4;
    }
    ctx->pc = 0x2064ACu;
    {
        const bool branch_taken_0x2064ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064ac) {
            ctx->pc = 0x2064B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064ACu;
            // 0x2064b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206528u;
            goto label_206528;
        }
    }
    ctx->pc = 0x2064B4u;
label_2064b4:
    // 0x2064b4: 0xc080ffa  jal         func_203FE8
label_2064b8:
    if (ctx->pc == 0x2064B8u) {
        ctx->pc = 0x2064BCu;
        goto label_2064bc;
    }
    ctx->pc = 0x2064B4u;
    SET_GPR_U32(ctx, 31, 0x2064BCu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x2064B4u, 0x2064BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2064BCu;
label_2064bc:
    // 0x2064bc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2064c0:
    if (ctx->pc == 0x2064C0u) {
        ctx->pc = 0x2064C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064BCu;
        // 0x2064c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064C4u;
        goto label_2064c4;
    }
    ctx->pc = 0x2064BCu;
    {
        const bool branch_taken_0x2064bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2064bc) {
            ctx->pc = 0x2064C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2064BCu;
            // 0x2064c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206528u;
            goto label_206528;
        }
    }
    ctx->pc = 0x2064C4u;
label_2064c4:
    // 0x2064c4: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2064c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2064c8:
    // 0x2064c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2064c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2064cc:
    // 0x2064cc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2064ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2064d0:
    // 0x2064d0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2064d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2064d4:
    // 0x2064d4: 0x60f809  jalr        $v1
label_2064d8:
    if (ctx->pc == 0x2064D8u) {
        ctx->pc = 0x2064D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064D4u;
        // 0x2064d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064DCu;
        goto label_2064dc;
    }
    ctx->pc = 0x2064D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2064DCu);
        ctx->pc = 0x2064D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064D4u;
        // 0x2064d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2064D4u, 0x2064DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2064DCu;
label_2064dc:
    // 0x2064dc: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x2064dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2064e0:
    // 0x2064e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2064e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2064e4:
    // 0x2064e4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2064e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2064e8:
    // 0x2064e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2064ec:
    // 0x2064ec: 0x60f809  jalr        $v1
label_2064f0:
    if (ctx->pc == 0x2064F0u) {
        ctx->pc = 0x2064F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064ECu;
        // 0x2064f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2064F4u;
        goto label_2064f4;
    }
    ctx->pc = 0x2064ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2064F4u);
        ctx->pc = 0x2064F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064ECu;
        // 0x2064f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2064ECu, 0x2064F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2064F4u;
label_2064f4:
    // 0x2064f4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x2064f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2064f8:
    // 0x2064f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2064f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2064fc:
    // 0x2064fc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2064fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_206500:
    // 0x206500: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x206500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_206504:
    // 0x206504: 0x60f809  jalr        $v1
label_206508:
    if (ctx->pc == 0x206508u) {
        ctx->pc = 0x206508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206504u;
        // 0x206508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20650Cu;
        goto label_20650c;
    }
    ctx->pc = 0x206504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20650Cu);
        ctx->pc = 0x206508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206504u;
        // 0x206508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206504u, 0x20650Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20650Cu;
label_20650c:
    // 0x20650c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_206510:
    // 0x206510: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206514:
    // 0x206514: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_206518:
    // 0x206518: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x206518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20651c:
    // 0x20651c: 0x60f809  jalr        $v1
label_206520:
    if (ctx->pc == 0x206520u) {
        ctx->pc = 0x206520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20651Cu;
        // 0x206520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206524u;
        goto label_206524;
    }
    ctx->pc = 0x20651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206524u);
        ctx->pc = 0x206520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20651Cu;
        // 0x206520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20651Cu, 0x206524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206524u;
label_206524:
    // 0x206524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206528:
    // 0x206528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20652c:
    // 0x20652c: 0x3e00008  jr          $ra
label_206530:
    if (ctx->pc == 0x206530u) {
        ctx->pc = 0x206530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20652Cu;
        // 0x206530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206534u;
        goto label_206534;
    }
    ctx->pc = 0x20652Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20652Cu;
        // 0x206530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20652Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206534u;
label_206534:
    // 0x206534: 0x0  nop
    ctx->pc = 0x206534u;
    // NOP
    ctx->pc = 0x206538u;
}
