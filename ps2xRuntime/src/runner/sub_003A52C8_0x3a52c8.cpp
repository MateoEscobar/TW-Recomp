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

// Function: sub_003A52C8
// Address: 0x3a52c8 - 0x3a5340
void sub_003A52C8_0x3a52c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A52C8_0x3a52c8");
#endif

    switch (ctx->pc) {
        case 0x3a52c8u: goto label_3a52c8;
        case 0x3a52ccu: goto label_3a52cc;
        case 0x3a52d0u: goto label_3a52d0;
        case 0x3a52d4u: goto label_3a52d4;
        case 0x3a52d8u: goto label_3a52d8;
        case 0x3a52dcu: goto label_3a52dc;
        case 0x3a52e0u: goto label_3a52e0;
        case 0x3a52e4u: goto label_3a52e4;
        case 0x3a52e8u: goto label_3a52e8;
        case 0x3a52ecu: goto label_3a52ec;
        case 0x3a52f0u: goto label_3a52f0;
        case 0x3a52f4u: goto label_3a52f4;
        case 0x3a52f8u: goto label_3a52f8;
        case 0x3a52fcu: goto label_3a52fc;
        case 0x3a5300u: goto label_3a5300;
        case 0x3a5304u: goto label_3a5304;
        case 0x3a5308u: goto label_3a5308;
        case 0x3a530cu: goto label_3a530c;
        case 0x3a5310u: goto label_3a5310;
        case 0x3a5314u: goto label_3a5314;
        case 0x3a5318u: goto label_3a5318;
        case 0x3a531cu: goto label_3a531c;
        case 0x3a5320u: goto label_3a5320;
        case 0x3a5324u: goto label_3a5324;
        case 0x3a5328u: goto label_3a5328;
        case 0x3a532cu: goto label_3a532c;
        case 0x3a5330u: goto label_3a5330;
        case 0x3a5334u: goto label_3a5334;
        case 0x3a5338u: goto label_3a5338;
        case 0x3a533cu: goto label_3a533c;
        default: break;
    }

    ctx->pc = 0x3a52c8u;

label_3a52c8:
    // 0x3a52c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a52c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a52cc:
    // 0x3a52cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a52ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a52d0:
    // 0x3a52d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a52d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a52d4:
    // 0x3a52d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a52d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a52d8:
    // 0x3a52d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a52d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a52dc:
    // 0x3a52dc: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a52dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a52e0:
    // 0x3a52e0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a52e4:
    // 0x3a52e4: 0x40f809  jalr        $v0
label_3a52e8:
    if (ctx->pc == 0x3A52E8u) {
        ctx->pc = 0x3A52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E4u;
        // 0x3a52e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52ECu;
        goto label_3a52ec;
    }
    ctx->pc = 0x3A52E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A52ECu);
        ctx->pc = 0x3A52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E4u;
        // 0x3a52e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A52E4u, 0x3A52ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A52ECu;
label_3a52ec:
    // 0x3a52ec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a52ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3a52f0:
    // 0x3a52f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a52f4:
    if (ctx->pc == 0x3A52F4u) {
        ctx->pc = 0x3A52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52F0u;
        // 0x3a52f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A52F8u;
        goto label_3a52f8;
    }
    ctx->pc = 0x3A52F0u;
    {
        const bool branch_taken_0x3a52f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a52f0) {
            ctx->pc = 0x3A52F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A52F0u;
            // 0x3a52f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5308u;
            goto label_3a5308;
        }
    }
    ctx->pc = 0x3A52F8u;
label_3a52f8:
    // 0x3a52f8: 0xc0e3b5a  jal         func_38ED68
label_3a52fc:
    if (ctx->pc == 0x3A52FCu) {
        ctx->pc = 0x3A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52F8u;
        // 0x3a52fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5300u;
        goto label_3a5300;
    }
    ctx->pc = 0x3A52F8u;
    SET_GPR_U32(ctx, 31, 0x3A5300u);
    ctx->pc = 0x3A52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A52F8u;
    // 0x3a52fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED68u, 0x3A52F8u, 0x3A5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5300u;
label_3a5300:
    // 0x3a5300: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a5304:
    if (ctx->pc == 0x3A5304u) {
        ctx->pc = 0x3A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5300u;
        // 0x3a5304: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5308u;
        goto label_3a5308;
    }
    ctx->pc = 0x3A5300u;
    {
        const bool branch_taken_0x3a5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5300u;
        // 0x3a5304: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5300) {
            ctx->pc = 0x3A5330u;
            goto label_3a5330;
        }
    }
    ctx->pc = 0x3A5308u;
label_3a5308:
    // 0x3a5308: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a5308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a530c:
    // 0x3a530c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a5310:
    // 0x3a5310: 0x40f809  jalr        $v0
label_3a5314:
    if (ctx->pc == 0x3A5314u) {
        ctx->pc = 0x3A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5310u;
        // 0x3a5314: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5318u;
        goto label_3a5318;
    }
    ctx->pc = 0x3A5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5318u);
        ctx->pc = 0x3A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5310u;
        // 0x3a5314: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5310u, 0x3A5318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5318u;
label_3a5318:
    // 0x3a5318: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a5318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3a531c:
    // 0x3a531c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a5320:
    if (ctx->pc == 0x3A5320u) {
        ctx->pc = 0x3A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A531Cu;
        // 0x3a5320: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5324u;
        goto label_3a5324;
    }
    ctx->pc = 0x3A531Cu;
    {
        const bool branch_taken_0x3a531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a531c) {
            ctx->pc = 0x3A5320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A531Cu;
            // 0x3a5320: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5330u;
            goto label_3a5330;
        }
    }
    ctx->pc = 0x3A5324u;
label_3a5324:
    // 0x3a5324: 0xc0e4752  jal         func_391D48
label_3a5328:
    if (ctx->pc == 0x3A5328u) {
        ctx->pc = 0x3A5328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5324u;
        // 0x3a5328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A532Cu;
        goto label_3a532c;
    }
    ctx->pc = 0x3A5324u;
    SET_GPR_U32(ctx, 31, 0x3A532Cu);
    ctx->pc = 0x3A5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5324u;
    // 0x3a5328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D48u, 0x3A5324u, 0x3A532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A532Cu;
label_3a532c:
    // 0x3a532c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a532cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a5330:
    // 0x3a5330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5334:
    // 0x3a5334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5338:
    // 0x3a5338: 0x3e00008  jr          $ra
label_3a533c:
    if (ctx->pc == 0x3A533Cu) {
        ctx->pc = 0x3A533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5338u;
        // 0x3a533c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5340u;
        goto label_fallthrough_0x3a5338;
    }
    ctx->pc = 0x3A5338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5338u;
        // 0x3a533c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a5338:
    ctx->pc = 0x3A5340u;
}
