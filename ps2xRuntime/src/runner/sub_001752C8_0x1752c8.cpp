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

// Function: sub_001752C8
// Address: 0x1752c8 - 0x175380
void sub_001752C8_0x1752c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001752C8_0x1752c8");
#endif

    switch (ctx->pc) {
        case 0x1752c8u: goto label_1752c8;
        case 0x1752ccu: goto label_1752cc;
        case 0x1752d0u: goto label_1752d0;
        case 0x1752d4u: goto label_1752d4;
        case 0x1752d8u: goto label_1752d8;
        case 0x1752dcu: goto label_1752dc;
        case 0x1752e0u: goto label_1752e0;
        case 0x1752e4u: goto label_1752e4;
        case 0x1752e8u: goto label_1752e8;
        case 0x1752ecu: goto label_1752ec;
        case 0x1752f0u: goto label_1752f0;
        case 0x1752f4u: goto label_1752f4;
        case 0x1752f8u: goto label_1752f8;
        case 0x1752fcu: goto label_1752fc;
        case 0x175300u: goto label_175300;
        case 0x175304u: goto label_175304;
        case 0x175308u: goto label_175308;
        case 0x17530cu: goto label_17530c;
        case 0x175310u: goto label_175310;
        case 0x175314u: goto label_175314;
        case 0x175318u: goto label_175318;
        case 0x17531cu: goto label_17531c;
        case 0x175320u: goto label_175320;
        case 0x175324u: goto label_175324;
        case 0x175328u: goto label_175328;
        case 0x17532cu: goto label_17532c;
        case 0x175330u: goto label_175330;
        case 0x175334u: goto label_175334;
        case 0x175338u: goto label_175338;
        case 0x17533cu: goto label_17533c;
        case 0x175340u: goto label_175340;
        case 0x175344u: goto label_175344;
        case 0x175348u: goto label_175348;
        case 0x17534cu: goto label_17534c;
        case 0x175350u: goto label_175350;
        case 0x175354u: goto label_175354;
        case 0x175358u: goto label_175358;
        case 0x17535cu: goto label_17535c;
        case 0x175360u: goto label_175360;
        case 0x175364u: goto label_175364;
        case 0x175368u: goto label_175368;
        case 0x17536cu: goto label_17536c;
        case 0x175370u: goto label_175370;
        case 0x175374u: goto label_175374;
        case 0x175378u: goto label_175378;
        case 0x17537cu: goto label_17537c;
        default: break;
    }

    ctx->pc = 0x1752c8u;

label_1752c8:
    // 0x1752c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1752c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1752cc:
    // 0x1752cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1752ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1752d0:
    // 0x1752d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1752d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1752d4:
    // 0x1752d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1752d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1752d8:
    // 0x1752d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1752d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1752dc:
    // 0x1752dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1752dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1752e0:
    // 0x1752e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1752e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1752e4:
    // 0x1752e4: 0xc05d462  jal         func_175188
label_1752e8:
    if (ctx->pc == 0x1752E8u) {
        ctx->pc = 0x1752E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752E4u;
        // 0x1752e8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1752ECu;
        goto label_1752ec;
    }
    ctx->pc = 0x1752E4u;
    SET_GPR_U32(ctx, 31, 0x1752ECu);
    ctx->pc = 0x1752E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752E4u;
    // 0x1752e8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x1752E4u, 0x1752ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752ECu;
label_1752ec:
    // 0x1752ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1752ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1752f0:
    // 0x1752f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1752f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1752f4:
    // 0x1752f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1752f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1752f8:
    // 0x1752f8: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x1752f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_1752fc:
    // 0x1752fc: 0x8c670104  lw          $a3, 0x104($v1)
    ctx->pc = 0x1752fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_175300:
    // 0x175300: 0xe0f809  jalr        $a3
label_175304:
    if (ctx->pc == 0x175304u) {
        ctx->pc = 0x175304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175300u;
        // 0x175304: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175308u;
        goto label_175308;
    }
    ctx->pc = 0x175300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x175308u);
        ctx->pc = 0x175304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175300u;
        // 0x175304: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175300u, 0x175308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175308u;
label_175308:
    // 0x175308: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17530c:
    // 0x17530c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_175310:
    // 0x175310: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_175314:
    if (ctx->pc == 0x175314u) {
        ctx->pc = 0x175318u;
        goto label_175318;
    }
    ctx->pc = 0x175310u;
    {
        const bool branch_taken_0x175310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x175310) {
            ctx->pc = 0x17533Cu;
            goto label_17533c;
        }
    }
    ctx->pc = 0x175318u;
label_175318:
    // 0x175318: 0xc05d482  jal         func_175208
label_17531c:
    if (ctx->pc == 0x17531Cu) {
        ctx->pc = 0x17531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175318u;
        // 0x17531c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175320u;
        goto label_175320;
    }
    ctx->pc = 0x175318u;
    SET_GPR_U32(ctx, 31, 0x175320u);
    ctx->pc = 0x17531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175318u;
    // 0x17531c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175208u, 0x175318u, 0x175320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175320u;
label_175320:
    // 0x175320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175324:
    // 0x175324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175328:
    // 0x175328: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x175328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17532c:
    // 0x17532c: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x17532cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_175330:
    // 0x175330: 0x8c670104  lw          $a3, 0x104($v1)
    ctx->pc = 0x175330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_175334:
    // 0x175334: 0xe0f809  jalr        $a3
label_175338:
    if (ctx->pc == 0x175338u) {
        ctx->pc = 0x175338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175334u;
        // 0x175338: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17533Cu;
        goto label_17533c;
    }
    ctx->pc = 0x175334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x17533Cu);
        ctx->pc = 0x175338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175334u;
        // 0x175338: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175334u, 0x17533Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17533Cu;
label_17533c:
    // 0x17533c: 0xc0e409a  jal         func_390268
label_175340:
    if (ctx->pc == 0x175340u) {
        ctx->pc = 0x175340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17533Cu;
        // 0x175340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175344u;
        goto label_175344;
    }
    ctx->pc = 0x17533Cu;
    SET_GPR_U32(ctx, 31, 0x175344u);
    ctx->pc = 0x175340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17533Cu;
    // 0x175340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x17533Cu, 0x175344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175344u;
label_175344:
    // 0x175344: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_175348:
    if (ctx->pc == 0x175348u) {
        ctx->pc = 0x175348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175344u;
        // 0x175348: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17534Cu;
        goto label_17534c;
    }
    ctx->pc = 0x175344u;
    {
        const bool branch_taken_0x175344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175344u;
        // 0x175348: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175344) {
            ctx->pc = 0x17536Cu;
            goto label_17536c;
        }
    }
    ctx->pc = 0x17534Cu;
label_17534c:
    // 0x17534c: 0x8e4502b8  lw          $a1, 0x2B8($s2)
    ctx->pc = 0x17534cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
label_175350:
    // 0x175350: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x175350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175354:
    // 0x175354: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x175354u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_175358:
    // 0x175358: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x175358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_17535c:
    // 0x17535c: 0x40f809  jalr        $v0
label_175360:
    if (ctx->pc == 0x175360u) {
        ctx->pc = 0x175360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17535Cu;
        // 0x175360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175364u;
        goto label_175364;
    }
    ctx->pc = 0x17535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175364u);
        ctx->pc = 0x175360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17535Cu;
        // 0x175360: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17535Cu, 0x175364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175364u;
label_175364:
    // 0x175364: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x175364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_175368:
    // 0x175368: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x175368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17536c:
    // 0x17536c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17536cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175370:
    // 0x175370: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x175370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175374:
    // 0x175374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175378:
    // 0x175378: 0x3e00008  jr          $ra
label_17537c:
    if (ctx->pc == 0x17537Cu) {
        ctx->pc = 0x17537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175378u;
        // 0x17537c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175380u;
        goto label_fallthrough_0x175378;
    }
    ctx->pc = 0x175378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175378u;
        // 0x17537c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175378:
    ctx->pc = 0x175380u;
}
