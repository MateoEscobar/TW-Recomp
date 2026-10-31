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

// Function: sub_003C5270
// Address: 0x3c5270 - 0x3c5350
void sub_003C5270_0x3c5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5270_0x3c5270");
#endif

    switch (ctx->pc) {
        case 0x3c5270u: goto label_3c5270;
        case 0x3c5274u: goto label_3c5274;
        case 0x3c5278u: goto label_3c5278;
        case 0x3c527cu: goto label_3c527c;
        case 0x3c5280u: goto label_3c5280;
        case 0x3c5284u: goto label_3c5284;
        case 0x3c5288u: goto label_3c5288;
        case 0x3c528cu: goto label_3c528c;
        case 0x3c5290u: goto label_3c5290;
        case 0x3c5294u: goto label_3c5294;
        case 0x3c5298u: goto label_3c5298;
        case 0x3c529cu: goto label_3c529c;
        case 0x3c52a0u: goto label_3c52a0;
        case 0x3c52a4u: goto label_3c52a4;
        case 0x3c52a8u: goto label_3c52a8;
        case 0x3c52acu: goto label_3c52ac;
        case 0x3c52b0u: goto label_3c52b0;
        case 0x3c52b4u: goto label_3c52b4;
        case 0x3c52b8u: goto label_3c52b8;
        case 0x3c52bcu: goto label_3c52bc;
        case 0x3c52c0u: goto label_3c52c0;
        case 0x3c52c4u: goto label_3c52c4;
        case 0x3c52c8u: goto label_3c52c8;
        case 0x3c52ccu: goto label_3c52cc;
        case 0x3c52d0u: goto label_3c52d0;
        case 0x3c52d4u: goto label_3c52d4;
        case 0x3c52d8u: goto label_3c52d8;
        case 0x3c52dcu: goto label_3c52dc;
        case 0x3c52e0u: goto label_3c52e0;
        case 0x3c52e4u: goto label_3c52e4;
        case 0x3c52e8u: goto label_3c52e8;
        case 0x3c52ecu: goto label_3c52ec;
        case 0x3c52f0u: goto label_3c52f0;
        case 0x3c52f4u: goto label_3c52f4;
        case 0x3c52f8u: goto label_3c52f8;
        case 0x3c52fcu: goto label_3c52fc;
        case 0x3c5300u: goto label_3c5300;
        case 0x3c5304u: goto label_3c5304;
        case 0x3c5308u: goto label_3c5308;
        case 0x3c530cu: goto label_3c530c;
        case 0x3c5310u: goto label_3c5310;
        case 0x3c5314u: goto label_3c5314;
        case 0x3c5318u: goto label_3c5318;
        case 0x3c531cu: goto label_3c531c;
        case 0x3c5320u: goto label_3c5320;
        case 0x3c5324u: goto label_3c5324;
        case 0x3c5328u: goto label_3c5328;
        case 0x3c532cu: goto label_3c532c;
        case 0x3c5330u: goto label_3c5330;
        case 0x3c5334u: goto label_3c5334;
        case 0x3c5338u: goto label_3c5338;
        case 0x3c533cu: goto label_3c533c;
        case 0x3c5340u: goto label_3c5340;
        case 0x3c5344u: goto label_3c5344;
        case 0x3c5348u: goto label_3c5348;
        case 0x3c534cu: goto label_3c534c;
        default: break;
    }

    ctx->pc = 0x3c5270u;

label_3c5270:
    // 0x3c5270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c5274:
    // 0x3c5274: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c5274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c5278:
    // 0x3c5278: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c5278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c527c:
    // 0x3c527c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c5280:
    // 0x3c5280: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c5284:
    // 0x3c5284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c5288:
    // 0x3c5288: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3c5288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c528c:
    // 0x3c528c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c5290:
    // 0x3c5290: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c5290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c5294:
    // 0x3c5294: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c5294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c5298:
    // 0x3c5298: 0x40f809  jalr        $v0
label_3c529c:
    if (ctx->pc == 0x3C529Cu) {
        ctx->pc = 0x3C529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5298u;
        // 0x3c529c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C52A0u;
        goto label_3c52a0;
    }
    ctx->pc = 0x3C5298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C52A0u);
        ctx->pc = 0x3C529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5298u;
        // 0x3c529c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5298u, 0x3C52A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C52A0u;
label_3c52a0:
    // 0x3c52a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c52a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c52a4:
    // 0x3c52a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c52a8:
    // 0x3c52a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c52ac:
    // 0x3c52ac: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
label_3c52b0:
    if (ctx->pc == 0x3C52B0u) {
        ctx->pc = 0x3C52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52ACu;
        // 0x3c52b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C52B4u;
        goto label_3c52b4;
    }
    ctx->pc = 0x3C52ACu;
    {
        const bool branch_taken_0x3c52ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3C52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52ACu;
        // 0x3c52b0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c52ac) {
            ctx->pc = 0x3C52CCu;
            goto label_3c52cc;
        }
    }
    ctx->pc = 0x3C52B4u;
label_3c52b4:
    // 0x3c52b4: 0x3c02f45c  lui         $v0, 0xF45C
    ctx->pc = 0x3c52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62556 << 16));
label_3c52b8:
    // 0x3c52b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c52bc:
    // 0x3c52bc: 0x34421cff  ori         $v0, $v0, 0x1CFF
    ctx->pc = 0x3c52bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
label_3c52c0:
    // 0x3c52c0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3c52c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3c52c4:
    // 0x3c52c4: 0xc0e858c  jal         func_3A1630
label_3c52c8:
    if (ctx->pc == 0x3C52C8u) {
        ctx->pc = 0x3C52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52C4u;
        // 0x3c52c8: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C52CCu;
        goto label_3c52cc;
    }
    ctx->pc = 0x3C52C4u;
    SET_GPR_U32(ctx, 31, 0x3C52CCu);
    ctx->pc = 0x3C52C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C52C4u;
    // 0x3c52c8: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C52C4u, 0x3C52CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C52CCu;
label_3c52cc:
    // 0x3c52cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c52d0:
    // 0x3c52d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c52d4:
    // 0x3c52d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3c52d8:
    if (ctx->pc == 0x3C52D8u) {
        ctx->pc = 0x3C52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52D4u;
        // 0x3c52d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C52DCu;
        goto label_3c52dc;
    }
    ctx->pc = 0x3C52D4u;
    {
        const bool branch_taken_0x3c52d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52D4u;
        // 0x3c52d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c52d4) {
            ctx->pc = 0x3C52F0u;
            goto label_3c52f0;
        }
    }
    ctx->pc = 0x3C52DCu;
label_3c52dc:
    // 0x3c52dc: 0x3c02f45c  lui         $v0, 0xF45C
    ctx->pc = 0x3c52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62556 << 16));
label_3c52e0:
    // 0x3c52e0: 0x34421a90  ori         $v0, $v0, 0x1A90
    ctx->pc = 0x3c52e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6800);
label_3c52e4:
    // 0x3c52e4: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3c52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3c52e8:
    // 0x3c52e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c52ec:
    // 0x3c52ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c52f0:
    // 0x3c52f0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3c52f4:
    if (ctx->pc == 0x3C52F4u) {
        ctx->pc = 0x3C52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C52F0u;
        // 0x3c52f4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C52F8u;
        goto label_3c52f8;
    }
    ctx->pc = 0x3C52F0u;
    {
        const bool branch_taken_0x3c52f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c52f0) {
            ctx->pc = 0x3C52F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C52F0u;
            // 0x3c52f4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5308u;
            goto label_3c5308;
        }
    }
    ctx->pc = 0x3C52F8u;
label_3c52f8:
    // 0x3c52f8: 0x3c02f4ba  lui         $v0, 0xF4BA
    ctx->pc = 0x3c52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62650 << 16));
label_3c52fc:
    // 0x3c52fc: 0x34421f20  ori         $v0, $v0, 0x1F20
    ctx->pc = 0x3c52fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7968);
label_3c5300:
    // 0x3c5300: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3c5300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3c5304:
    // 0x3c5304: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c5308:
    // 0x3c5308: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c5308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c530c:
    // 0x3c530c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3c5310:
    if (ctx->pc == 0x3C5310u) {
        ctx->pc = 0x3C5310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C530Cu;
        // 0x3c5310: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5314u;
        goto label_3c5314;
    }
    ctx->pc = 0x3C530Cu;
    {
        const bool branch_taken_0x3c530c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c530c) {
            ctx->pc = 0x3C5310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C530Cu;
            // 0x3c5310: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5328u;
            goto label_3c5328;
        }
    }
    ctx->pc = 0x3C5314u;
label_3c5314:
    // 0x3c5314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c5318:
    // 0x3c5318: 0xc0e858c  jal         func_3A1630
label_3c531c:
    if (ctx->pc == 0x3C531Cu) {
        ctx->pc = 0x3C531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5318u;
        // 0x3c531c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5320u;
        goto label_3c5320;
    }
    ctx->pc = 0x3C5318u;
    SET_GPR_U32(ctx, 31, 0x3C5320u);
    ctx->pc = 0x3C531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5318u;
    // 0x3c531c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C5318u, 0x3C5320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5320u;
label_3c5320:
    // 0x3c5320: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x3c5320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_3c5324:
    // 0x3c5324: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c5328:
    // 0x3c5328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c5328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c532c:
    // 0x3c532c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c532cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5330:
    // 0x3c5330: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x3c5330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_3c5334:
    // 0x3c5334: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c5334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c5338:
    // 0x3c5338: 0x243100a  movz        $v0, $s2, $v1
    ctx->pc = 0x3c5338u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_3c533c:
    // 0x3c533c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c533cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c5340:
    // 0x3c5340: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c5340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5344:
    // 0x3c5344: 0x3e00008  jr          $ra
label_3c5348:
    if (ctx->pc == 0x3C5348u) {
        ctx->pc = 0x3C5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5344u;
        // 0x3c5348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C534Cu;
        goto label_3c534c;
    }
    ctx->pc = 0x3C5344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5344u;
        // 0x3c5348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C534Cu;
label_3c534c:
    // 0x3c534c: 0x0  nop
    ctx->pc = 0x3c534cu;
    // NOP
    ctx->pc = 0x3c5350u;
}
