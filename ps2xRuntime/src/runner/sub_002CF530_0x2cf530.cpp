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

// Function: sub_002CF530
// Address: 0x2cf530 - 0x2cf5b0
void sub_002CF530_0x2cf530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF530_0x2cf530");
#endif

    switch (ctx->pc) {
        case 0x2cf530u: goto label_2cf530;
        case 0x2cf534u: goto label_2cf534;
        case 0x2cf538u: goto label_2cf538;
        case 0x2cf53cu: goto label_2cf53c;
        case 0x2cf540u: goto label_2cf540;
        case 0x2cf544u: goto label_2cf544;
        case 0x2cf548u: goto label_2cf548;
        case 0x2cf54cu: goto label_2cf54c;
        case 0x2cf550u: goto label_2cf550;
        case 0x2cf554u: goto label_2cf554;
        case 0x2cf558u: goto label_2cf558;
        case 0x2cf55cu: goto label_2cf55c;
        case 0x2cf560u: goto label_2cf560;
        case 0x2cf564u: goto label_2cf564;
        case 0x2cf568u: goto label_2cf568;
        case 0x2cf56cu: goto label_2cf56c;
        case 0x2cf570u: goto label_2cf570;
        case 0x2cf574u: goto label_2cf574;
        case 0x2cf578u: goto label_2cf578;
        case 0x2cf57cu: goto label_2cf57c;
        case 0x2cf580u: goto label_2cf580;
        case 0x2cf584u: goto label_2cf584;
        case 0x2cf588u: goto label_2cf588;
        case 0x2cf58cu: goto label_2cf58c;
        case 0x2cf590u: goto label_2cf590;
        case 0x2cf594u: goto label_2cf594;
        case 0x2cf598u: goto label_2cf598;
        case 0x2cf59cu: goto label_2cf59c;
        case 0x2cf5a0u: goto label_2cf5a0;
        case 0x2cf5a4u: goto label_2cf5a4;
        case 0x2cf5a8u: goto label_2cf5a8;
        case 0x2cf5acu: goto label_2cf5ac;
        default: break;
    }

    ctx->pc = 0x2cf530u;

label_2cf530:
    // 0x2cf530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cf534:
    // 0x2cf534: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cf534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2cf538:
    // 0x2cf538: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cf53c:
    // 0x2cf53c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2cf53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2cf540:
    // 0x2cf540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cf544:
    // 0x2cf544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf548:
    // 0x2cf548: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2cf548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2cf54c:
    // 0x2cf54c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2cf54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2cf550:
    // 0x2cf550: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2cf550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2cf554:
    // 0x2cf554: 0x246315f0  addiu       $v1, $v1, 0x15F0
    ctx->pc = 0x2cf554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5616));
label_2cf558:
    // 0x2cf558: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2cf558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2cf55c:
    // 0x2cf55c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cf55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2cf560:
    // 0x2cf560: 0x8c862b04  lw          $a2, 0x2B04($a0)
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11012)));
label_2cf564:
    // 0x2cf564: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cf564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2cf568:
    // 0x2cf568: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x2cf568u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2cf56c:
    // 0x2cf56c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2cf56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2cf570:
    // 0x2cf570: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x2cf570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_2cf574:
    // 0x2cf574: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cf574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2cf578:
    // 0x2cf578: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cf578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2cf57c:
    // 0x2cf57c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2cf57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2cf580:
    // 0x2cf580: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2cf580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2cf584:
    // 0x2cf584: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf588:
    // 0x2cf588: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2cf588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2cf58c:
    // 0x2cf58c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2cf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2cf590:
    // 0x2cf590: 0x40f809  jalr        $v0
label_2cf594:
    if (ctx->pc == 0x2CF594u) {
        ctx->pc = 0x2CF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF590u;
        // 0x2cf594: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF598u;
        goto label_2cf598;
    }
    ctx->pc = 0x2CF590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF598u);
        ctx->pc = 0x2CF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF590u;
        // 0x2cf594: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF590u, 0x2CF598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF598u;
label_2cf598:
    // 0x2cf598: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2cf598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_2cf59c:
    // 0x2cf59c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cf59cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf5a0:
    // 0x2cf5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf5a4:
    // 0x2cf5a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf5a8:
    // 0x2cf5a8: 0x3e00008  jr          $ra
label_2cf5ac:
    if (ctx->pc == 0x2CF5ACu) {
        ctx->pc = 0x2CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5A8u;
        // 0x2cf5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF5B0u;
        goto label_fallthrough_0x2cf5a8;
    }
    ctx->pc = 0x2CF5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5A8u;
        // 0x2cf5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cf5a8:
    ctx->pc = 0x2CF5B0u;
}
