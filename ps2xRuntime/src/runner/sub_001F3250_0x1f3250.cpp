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

// Function: sub_001F3250
// Address: 0x1f3250 - 0x1f3300
void sub_001F3250_0x1f3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3250_0x1f3250");
#endif

    switch (ctx->pc) {
        case 0x1f3250u: goto label_1f3250;
        case 0x1f3254u: goto label_1f3254;
        case 0x1f3258u: goto label_1f3258;
        case 0x1f325cu: goto label_1f325c;
        case 0x1f3260u: goto label_1f3260;
        case 0x1f3264u: goto label_1f3264;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f326cu: goto label_1f326c;
        case 0x1f3270u: goto label_1f3270;
        case 0x1f3274u: goto label_1f3274;
        case 0x1f3278u: goto label_1f3278;
        case 0x1f327cu: goto label_1f327c;
        case 0x1f3280u: goto label_1f3280;
        case 0x1f3284u: goto label_1f3284;
        case 0x1f3288u: goto label_1f3288;
        case 0x1f328cu: goto label_1f328c;
        case 0x1f3290u: goto label_1f3290;
        case 0x1f3294u: goto label_1f3294;
        case 0x1f3298u: goto label_1f3298;
        case 0x1f329cu: goto label_1f329c;
        case 0x1f32a0u: goto label_1f32a0;
        case 0x1f32a4u: goto label_1f32a4;
        case 0x1f32a8u: goto label_1f32a8;
        case 0x1f32acu: goto label_1f32ac;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32b4u: goto label_1f32b4;
        case 0x1f32b8u: goto label_1f32b8;
        case 0x1f32bcu: goto label_1f32bc;
        case 0x1f32c0u: goto label_1f32c0;
        case 0x1f32c4u: goto label_1f32c4;
        case 0x1f32c8u: goto label_1f32c8;
        case 0x1f32ccu: goto label_1f32cc;
        case 0x1f32d0u: goto label_1f32d0;
        case 0x1f32d4u: goto label_1f32d4;
        case 0x1f32d8u: goto label_1f32d8;
        case 0x1f32dcu: goto label_1f32dc;
        case 0x1f32e0u: goto label_1f32e0;
        case 0x1f32e4u: goto label_1f32e4;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f32ecu: goto label_1f32ec;
        case 0x1f32f0u: goto label_1f32f0;
        case 0x1f32f4u: goto label_1f32f4;
        case 0x1f32f8u: goto label_1f32f8;
        case 0x1f32fcu: goto label_1f32fc;
        default: break;
    }

    ctx->pc = 0x1f3250u;

label_1f3250:
    // 0x1f3250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f3254:
    // 0x1f3254: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f3258:
    // 0x1f3258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f325c:
    // 0x1f325c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f325cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3260:
    // 0x1f3260: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f3260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3264:
    // 0x1f3264: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f3264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f3268:
    // 0x1f3268: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f326c:
    // 0x1f326c: 0x40f809  jalr        $v0
label_1f3270:
    if (ctx->pc == 0x1F3270u) {
        ctx->pc = 0x1F3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F326Cu;
        // 0x1f3270: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3274u;
        goto label_1f3274;
    }
    ctx->pc = 0x1F326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3274u);
        ctx->pc = 0x1F3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F326Cu;
        // 0x1f3270: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F326Cu, 0x1F3274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3274u;
label_1f3274:
    // 0x1f3274: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_1f3278:
    if (ctx->pc == 0x1F3278u) {
        ctx->pc = 0x1F3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3274u;
        // 0x1f3278: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F327Cu;
        goto label_1f327c;
    }
    ctx->pc = 0x1F3274u;
    {
        const bool branch_taken_0x1f3274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3274) {
            ctx->pc = 0x1F3278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3274u;
            // 0x1f3278: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32F0u;
            goto label_1f32f0;
        }
    }
    ctx->pc = 0x1F327Cu;
label_1f327c:
    // 0x1f327c: 0xc07f88a  jal         func_1FE228
label_1f3280:
    if (ctx->pc == 0x1F3280u) {
        ctx->pc = 0x1F3284u;
        goto label_1f3284;
    }
    ctx->pc = 0x1F327Cu;
    SET_GPR_U32(ctx, 31, 0x1F3284u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1F327Cu, 0x1F3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3284u;
label_1f3284:
    // 0x1f3284: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1f3288:
    if (ctx->pc == 0x1F3288u) {
        ctx->pc = 0x1F3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3284u;
        // 0x1f3288: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F328Cu;
        goto label_1f328c;
    }
    ctx->pc = 0x1F3284u;
    {
        const bool branch_taken_0x1f3284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3284) {
            ctx->pc = 0x1F3288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3284u;
            // 0x1f3288: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F32F0u;
            goto label_1f32f0;
        }
    }
    ctx->pc = 0x1F328Cu;
label_1f328c:
    // 0x1f328c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1f328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f3290:
    // 0x1f3290: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3294:
    // 0x1f3294: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f3298:
    // 0x1f3298: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f3298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f329c:
    // 0x1f329c: 0x60f809  jalr        $v1
label_1f32a0:
    if (ctx->pc == 0x1F32A0u) {
        ctx->pc = 0x1F32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F329Cu;
        // 0x1f32a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32A4u;
        goto label_1f32a4;
    }
    ctx->pc = 0x1F329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F32A4u);
        ctx->pc = 0x1F32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F329Cu;
        // 0x1f32a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F329Cu, 0x1F32A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F32A4u;
label_1f32a4:
    // 0x1f32a4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f32a8:
    // 0x1f32a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f32ac:
    // 0x1f32ac: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f32b0:
    // 0x1f32b0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f32b4:
    // 0x1f32b4: 0x60f809  jalr        $v1
label_1f32b8:
    if (ctx->pc == 0x1F32B8u) {
        ctx->pc = 0x1F32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32B4u;
        // 0x1f32b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32BCu;
        goto label_1f32bc;
    }
    ctx->pc = 0x1F32B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F32BCu);
        ctx->pc = 0x1F32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32B4u;
        // 0x1f32b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32B4u, 0x1F32BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F32BCu;
label_1f32bc:
    // 0x1f32bc: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f32c0:
    // 0x1f32c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f32c4:
    // 0x1f32c4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f32c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f32c8:
    // 0x1f32c8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f32cc:
    // 0x1f32cc: 0x60f809  jalr        $v1
label_1f32d0:
    if (ctx->pc == 0x1F32D0u) {
        ctx->pc = 0x1F32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32CCu;
        // 0x1f32d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32D4u;
        goto label_1f32d4;
    }
    ctx->pc = 0x1F32CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F32D4u);
        ctx->pc = 0x1F32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32CCu;
        // 0x1f32d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32CCu, 0x1F32D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F32D4u;
label_1f32d4:
    // 0x1f32d4: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f32d8:
    // 0x1f32d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f32dc:
    // 0x1f32dc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f32dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f32e0:
    // 0x1f32e0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f32e4:
    // 0x1f32e4: 0x60f809  jalr        $v1
label_1f32e8:
    if (ctx->pc == 0x1F32E8u) {
        ctx->pc = 0x1F32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32E4u;
        // 0x1f32e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32ECu;
        goto label_1f32ec;
    }
    ctx->pc = 0x1F32E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F32ECu);
        ctx->pc = 0x1F32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32E4u;
        // 0x1f32e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32E4u, 0x1F32ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F32ECu;
label_1f32ec:
    // 0x1f32ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f32ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f32f0:
    // 0x1f32f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f32f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f32f4:
    // 0x1f32f4: 0x3e00008  jr          $ra
label_1f32f8:
    if (ctx->pc == 0x1F32F8u) {
        ctx->pc = 0x1F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32F4u;
        // 0x1f32f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32FCu;
        goto label_1f32fc;
    }
    ctx->pc = 0x1F32F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F32F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32F4u;
        // 0x1f32f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F32FCu;
label_1f32fc:
    // 0x1f32fc: 0x0  nop
    ctx->pc = 0x1f32fcu;
    // NOP
    ctx->pc = 0x1f3300u;
}
