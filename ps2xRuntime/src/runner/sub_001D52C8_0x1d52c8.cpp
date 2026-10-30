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

// Function: sub_001D52C8
// Address: 0x1d52c8 - 0x1d5350
void sub_001D52C8_0x1d52c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D52C8_0x1d52c8");
#endif

    switch (ctx->pc) {
        case 0x1d52c8u: goto label_1d52c8;
        case 0x1d52ccu: goto label_1d52cc;
        case 0x1d52d0u: goto label_1d52d0;
        case 0x1d52d4u: goto label_1d52d4;
        case 0x1d52d8u: goto label_1d52d8;
        case 0x1d52dcu: goto label_1d52dc;
        case 0x1d52e0u: goto label_1d52e0;
        case 0x1d52e4u: goto label_1d52e4;
        case 0x1d52e8u: goto label_1d52e8;
        case 0x1d52ecu: goto label_1d52ec;
        case 0x1d52f0u: goto label_1d52f0;
        case 0x1d52f4u: goto label_1d52f4;
        case 0x1d52f8u: goto label_1d52f8;
        case 0x1d52fcu: goto label_1d52fc;
        case 0x1d5300u: goto label_1d5300;
        case 0x1d5304u: goto label_1d5304;
        case 0x1d5308u: goto label_1d5308;
        case 0x1d530cu: goto label_1d530c;
        case 0x1d5310u: goto label_1d5310;
        case 0x1d5314u: goto label_1d5314;
        case 0x1d5318u: goto label_1d5318;
        case 0x1d531cu: goto label_1d531c;
        case 0x1d5320u: goto label_1d5320;
        case 0x1d5324u: goto label_1d5324;
        case 0x1d5328u: goto label_1d5328;
        case 0x1d532cu: goto label_1d532c;
        case 0x1d5330u: goto label_1d5330;
        case 0x1d5334u: goto label_1d5334;
        case 0x1d5338u: goto label_1d5338;
        case 0x1d533cu: goto label_1d533c;
        case 0x1d5340u: goto label_1d5340;
        case 0x1d5344u: goto label_1d5344;
        case 0x1d5348u: goto label_1d5348;
        case 0x1d534cu: goto label_1d534c;
        default: break;
    }

    ctx->pc = 0x1d52c8u;

label_1d52c8:
    // 0x1d52c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d52c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d52cc:
    // 0x1d52cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d52ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d52d0:
    // 0x1d52d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d52d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d52d4:
    // 0x1d52d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d52d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d52d8:
    // 0x1d52d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d52d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d52dc:
    // 0x1d52dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d52e0:
    // 0x1d52e0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1d52e4:
    if (ctx->pc == 0x1D52E4u) {
        ctx->pc = 0x1D52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52E0u;
        // 0x1d52e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D52E8u;
        goto label_1d52e8;
    }
    ctx->pc = 0x1D52E0u;
    {
        const bool branch_taken_0x1d52e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d52e0) {
            ctx->pc = 0x1D52E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D52E0u;
            // 0x1d52e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5340u;
            goto label_1d5340;
        }
    }
    ctx->pc = 0x1D52E8u;
label_1d52e8:
    // 0x1d52e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d52ec:
    // 0x1d52ec: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d52f0:
    // 0x1d52f0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d52f4:
    // 0x1d52f4: 0x40f809  jalr        $v0
label_1d52f8:
    if (ctx->pc == 0x1D52F8u) {
        ctx->pc = 0x1D52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F4u;
        // 0x1d52f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D52FCu;
        goto label_1d52fc;
    }
    ctx->pc = 0x1D52F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D52FCu);
        ctx->pc = 0x1D52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F4u;
        // 0x1d52f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52F4u, 0x1D52FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D52FCu;
label_1d52fc:
    // 0x1d52fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d5300:
    if (ctx->pc == 0x1D5300u) {
        ctx->pc = 0x1D5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52FCu;
        // 0x1d5300: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5304u;
        goto label_1d5304;
    }
    ctx->pc = 0x1D52FCu;
    {
        const bool branch_taken_0x1d52fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52FCu;
        // 0x1d5300: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52fc) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D5304u;
label_1d5304:
    // 0x1d5304: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1d5304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d5308:
    // 0x1d5308: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d530c:
    // 0x1d530c: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
label_1d5310:
    if (ctx->pc == 0x1D5310u) {
        ctx->pc = 0x1D5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D530Cu;
        // 0x1d5310: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5314u;
        goto label_1d5314;
    }
    ctx->pc = 0x1D530Cu;
    {
        const bool branch_taken_0x1d530c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D530Cu;
        // 0x1d5310: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d530c) {
            ctx->pc = 0x1D533Cu;
            goto label_1d533c;
        }
    }
    ctx->pc = 0x1D5314u;
label_1d5314:
    // 0x1d5314: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d5314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5318:
    // 0x1d5318: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d5318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1d531c:
    // 0x1d531c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d5320:
    // 0x1d5320: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1d5320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1d5324:
    // 0x1d5324: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1d5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1d5328:
    // 0x1d5328: 0x60f809  jalr        $v1
label_1d532c:
    if (ctx->pc == 0x1D532Cu) {
        ctx->pc = 0x1D532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5328u;
        // 0x1d532c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5330u;
        goto label_1d5330;
    }
    ctx->pc = 0x1D5328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D5330u);
        ctx->pc = 0x1D532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5328u;
        // 0x1d532c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5328u, 0x1D5330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5330u;
label_1d5330:
    // 0x1d5330: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d5334:
    // 0x1d5334: 0x5602fff8  bnel        $s0, $v0, . + 4 + (-0x8 << 2)
label_1d5338:
    if (ctx->pc == 0x1D5338u) {
        ctx->pc = 0x1D5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5334u;
        // 0x1d5338: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D533Cu;
        goto label_1d533c;
    }
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D5338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5334u;
            // 0x1d5338: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5318;
        }
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d533cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5340:
    // 0x1d5340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5344:
    // 0x1d5344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5348:
    // 0x1d5348: 0x3e00008  jr          $ra
label_1d534c:
    if (ctx->pc == 0x1D534Cu) {
        ctx->pc = 0x1D534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5348u;
        // 0x1d534c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5350u;
        goto label_fallthrough_0x1d5348;
    }
    ctx->pc = 0x1D5348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5348u;
        // 0x1d534c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d5348:
    ctx->pc = 0x1D5350u;
}
