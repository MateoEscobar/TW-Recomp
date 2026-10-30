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

// Function: sub_0017A4F8
// Address: 0x17a4f8 - 0x17a560
void sub_0017A4F8_0x17a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A4F8_0x17a4f8");
#endif

    switch (ctx->pc) {
        case 0x17a4f8u: goto label_17a4f8;
        case 0x17a4fcu: goto label_17a4fc;
        case 0x17a500u: goto label_17a500;
        case 0x17a504u: goto label_17a504;
        case 0x17a508u: goto label_17a508;
        case 0x17a50cu: goto label_17a50c;
        case 0x17a510u: goto label_17a510;
        case 0x17a514u: goto label_17a514;
        case 0x17a518u: goto label_17a518;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a520u: goto label_17a520;
        case 0x17a524u: goto label_17a524;
        case 0x17a528u: goto label_17a528;
        case 0x17a52cu: goto label_17a52c;
        case 0x17a530u: goto label_17a530;
        case 0x17a534u: goto label_17a534;
        case 0x17a538u: goto label_17a538;
        case 0x17a53cu: goto label_17a53c;
        case 0x17a540u: goto label_17a540;
        case 0x17a544u: goto label_17a544;
        case 0x17a548u: goto label_17a548;
        case 0x17a54cu: goto label_17a54c;
        case 0x17a550u: goto label_17a550;
        case 0x17a554u: goto label_17a554;
        case 0x17a558u: goto label_17a558;
        case 0x17a55cu: goto label_17a55c;
        default: break;
    }

    ctx->pc = 0x17a4f8u;

label_17a4f8:
    // 0x17a4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17a4fc:
    // 0x17a4fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17a4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17a500:
    // 0x17a500: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17a500u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_17a504:
    // 0x17a504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a508:
    // 0x17a508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17a50c:
    // 0x17a50c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a510:
    // 0x17a510: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x17a510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_17a514:
    // 0x17a514: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_17a518:
    // 0x17a518: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x17a518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_17a51c:
    // 0x17a51c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x17a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_17a520:
    // 0x17a520: 0x60f809  jalr        $v1
label_17a524:
    if (ctx->pc == 0x17A524u) {
        ctx->pc = 0x17A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A520u;
        // 0x17a524: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A528u;
        goto label_17a528;
    }
    ctx->pc = 0x17A520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A528u);
        ctx->pc = 0x17A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A520u;
        // 0x17a524: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A520u, 0x17A528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A528u;
label_17a528:
    // 0x17a528: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17a528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_17a52c:
    // 0x17a52c: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x17a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_17a530:
    // 0x17a530: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_17a534:
    // 0x17a534: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x17a534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_17a538:
    // 0x17a538: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_17a53c:
    // 0x17a53c: 0x60f809  jalr        $v1
label_17a540:
    if (ctx->pc == 0x17A540u) {
        ctx->pc = 0x17A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A53Cu;
        // 0x17a540: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A544u;
        goto label_17a544;
    }
    ctx->pc = 0x17A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17A544u);
        ctx->pc = 0x17A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A53Cu;
        // 0x17a540: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A53Cu, 0x17A544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A544u;
label_17a544:
    // 0x17a544: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x17a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_17a548:
    // 0x17a548: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17a548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a54c:
    // 0x17a54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a550:
    // 0x17a550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a554:
    // 0x17a554: 0x3e00008  jr          $ra
label_17a558:
    if (ctx->pc == 0x17A558u) {
        ctx->pc = 0x17A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A554u;
        // 0x17a558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A55Cu;
        goto label_17a55c;
    }
    ctx->pc = 0x17A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A554u;
        // 0x17a558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A55Cu;
label_17a55c:
    // 0x17a55c: 0x0  nop
    ctx->pc = 0x17a55cu;
    // NOP
    ctx->pc = 0x17a560u;
}
