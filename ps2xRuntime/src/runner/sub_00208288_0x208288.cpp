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

// Function: sub_00208288
// Address: 0x208288 - 0x208320
void sub_00208288_0x208288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208288_0x208288");
#endif

    switch (ctx->pc) {
        case 0x208288u: goto label_208288;
        case 0x20828cu: goto label_20828c;
        case 0x208290u: goto label_208290;
        case 0x208294u: goto label_208294;
        case 0x208298u: goto label_208298;
        case 0x20829cu: goto label_20829c;
        case 0x2082a0u: goto label_2082a0;
        case 0x2082a4u: goto label_2082a4;
        case 0x2082a8u: goto label_2082a8;
        case 0x2082acu: goto label_2082ac;
        case 0x2082b0u: goto label_2082b0;
        case 0x2082b4u: goto label_2082b4;
        case 0x2082b8u: goto label_2082b8;
        case 0x2082bcu: goto label_2082bc;
        case 0x2082c0u: goto label_2082c0;
        case 0x2082c4u: goto label_2082c4;
        case 0x2082c8u: goto label_2082c8;
        case 0x2082ccu: goto label_2082cc;
        case 0x2082d0u: goto label_2082d0;
        case 0x2082d4u: goto label_2082d4;
        case 0x2082d8u: goto label_2082d8;
        case 0x2082dcu: goto label_2082dc;
        case 0x2082e0u: goto label_2082e0;
        case 0x2082e4u: goto label_2082e4;
        case 0x2082e8u: goto label_2082e8;
        case 0x2082ecu: goto label_2082ec;
        case 0x2082f0u: goto label_2082f0;
        case 0x2082f4u: goto label_2082f4;
        case 0x2082f8u: goto label_2082f8;
        case 0x2082fcu: goto label_2082fc;
        case 0x208300u: goto label_208300;
        case 0x208304u: goto label_208304;
        case 0x208308u: goto label_208308;
        case 0x20830cu: goto label_20830c;
        case 0x208310u: goto label_208310;
        case 0x208314u: goto label_208314;
        case 0x208318u: goto label_208318;
        case 0x20831cu: goto label_20831c;
        default: break;
    }

    ctx->pc = 0x208288u;

label_208288:
    // 0x208288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20828c:
    // 0x20828c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_208290:
    // 0x208290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208294:
    // 0x208294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208298:
    // 0x208298: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20829c:
    // 0x20829c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20829cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2082a0:
    // 0x2082a0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2082a4:
    // 0x2082a4: 0x40f809  jalr        $v0
label_2082a8:
    if (ctx->pc == 0x2082A8u) {
        ctx->pc = 0x2082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082A4u;
        // 0x2082a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082ACu;
        goto label_2082ac;
    }
    ctx->pc = 0x2082A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2082ACu);
        ctx->pc = 0x2082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082A4u;
        // 0x2082a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082A4u, 0x2082ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2082ACu;
label_2082ac:
    // 0x2082ac: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_2082b0:
    if (ctx->pc == 0x2082B0u) {
        ctx->pc = 0x2082B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082ACu;
        // 0x2082b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082B4u;
        goto label_2082b4;
    }
    ctx->pc = 0x2082ACu;
    {
        const bool branch_taken_0x2082ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2082ac) {
            ctx->pc = 0x2082B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2082ACu;
            // 0x2082b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208310u;
            goto label_208310;
        }
    }
    ctx->pc = 0x2082B4u;
label_2082b4:
    // 0x2082b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2082b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2082b8:
    // 0x2082b8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2082bc:
    // 0x2082bc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2082bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2082c0:
    // 0x2082c0: 0x40f809  jalr        $v0
label_2082c4:
    if (ctx->pc == 0x2082C4u) {
        ctx->pc = 0x2082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C0u;
        // 0x2082c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082C8u;
        goto label_2082c8;
    }
    ctx->pc = 0x2082C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2082C8u);
        ctx->pc = 0x2082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C0u;
        // 0x2082c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082C0u, 0x2082C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2082C8u;
label_2082c8:
    // 0x2082c8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2082cc:
    if (ctx->pc == 0x2082CCu) {
        ctx->pc = 0x2082CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C8u;
        // 0x2082cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082D0u;
        goto label_2082d0;
    }
    ctx->pc = 0x2082C8u;
    {
        const bool branch_taken_0x2082c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2082c8) {
            ctx->pc = 0x2082CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2082C8u;
            // 0x2082cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208310u;
            goto label_208310;
        }
    }
    ctx->pc = 0x2082D0u;
label_2082d0:
    // 0x2082d0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2082d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2082d4:
    // 0x2082d4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2082d8:
    if (ctx->pc == 0x2082D8u) {
        ctx->pc = 0x2082D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082D4u;
        // 0x2082d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082DCu;
        goto label_2082dc;
    }
    ctx->pc = 0x2082D4u;
    {
        const bool branch_taken_0x2082d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2082d4) {
            ctx->pc = 0x2082D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2082D4u;
            // 0x2082d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208310u;
            goto label_208310;
        }
    }
    ctx->pc = 0x2082DCu;
label_2082dc:
    // 0x2082dc: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2082dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2082e0:
    // 0x2082e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2082e4:
    // 0x2082e4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2082e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2082e8:
    // 0x2082e8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2082e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2082ec:
    // 0x2082ec: 0x60f809  jalr        $v1
label_2082f0:
    if (ctx->pc == 0x2082F0u) {
        ctx->pc = 0x2082F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082ECu;
        // 0x2082f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082F4u;
        goto label_2082f4;
    }
    ctx->pc = 0x2082ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2082F4u);
        ctx->pc = 0x2082F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082ECu;
        // 0x2082f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082ECu, 0x2082F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2082F4u;
label_2082f4:
    // 0x2082f4: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x2082f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_2082f8:
    // 0x2082f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2082f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2082fc:
    // 0x2082fc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2082fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_208300:
    // 0x208300: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x208300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_208304:
    // 0x208304: 0x60f809  jalr        $v1
label_208308:
    if (ctx->pc == 0x208308u) {
        ctx->pc = 0x208308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208304u;
        // 0x208308: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20830Cu;
        goto label_20830c;
    }
    ctx->pc = 0x208304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20830Cu);
        ctx->pc = 0x208308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208304u;
        // 0x208308: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208304u, 0x20830Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20830Cu;
label_20830c:
    // 0x20830c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20830cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208310:
    // 0x208310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208314:
    // 0x208314: 0x3e00008  jr          $ra
label_208318:
    if (ctx->pc == 0x208318u) {
        ctx->pc = 0x208318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208314u;
        // 0x208318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20831Cu;
        goto label_20831c;
    }
    ctx->pc = 0x208314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208314u;
        // 0x208318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20831Cu;
label_20831c:
    // 0x20831c: 0x0  nop
    ctx->pc = 0x20831cu;
    // NOP
    ctx->pc = 0x208320u;
}
