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

// Function: sub_00410558
// Address: 0x410558 - 0x410648
void sub_00410558_0x410558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410558_0x410558");
#endif

    switch (ctx->pc) {
        case 0x410558u: goto label_410558;
        case 0x41055cu: goto label_41055c;
        case 0x410560u: goto label_410560;
        case 0x410564u: goto label_410564;
        case 0x410568u: goto label_410568;
        case 0x41056cu: goto label_41056c;
        case 0x410570u: goto label_410570;
        case 0x410574u: goto label_410574;
        case 0x410578u: goto label_410578;
        case 0x41057cu: goto label_41057c;
        case 0x410580u: goto label_410580;
        case 0x410584u: goto label_410584;
        case 0x410588u: goto label_410588;
        case 0x41058cu: goto label_41058c;
        case 0x410590u: goto label_410590;
        case 0x410594u: goto label_410594;
        case 0x410598u: goto label_410598;
        case 0x41059cu: goto label_41059c;
        case 0x4105a0u: goto label_4105a0;
        case 0x4105a4u: goto label_4105a4;
        case 0x4105a8u: goto label_4105a8;
        case 0x4105acu: goto label_4105ac;
        case 0x4105b0u: goto label_4105b0;
        case 0x4105b4u: goto label_4105b4;
        case 0x4105b8u: goto label_4105b8;
        case 0x4105bcu: goto label_4105bc;
        case 0x4105c0u: goto label_4105c0;
        case 0x4105c4u: goto label_4105c4;
        case 0x4105c8u: goto label_4105c8;
        case 0x4105ccu: goto label_4105cc;
        case 0x4105d0u: goto label_4105d0;
        case 0x4105d4u: goto label_4105d4;
        case 0x4105d8u: goto label_4105d8;
        case 0x4105dcu: goto label_4105dc;
        case 0x4105e0u: goto label_4105e0;
        case 0x4105e4u: goto label_4105e4;
        case 0x4105e8u: goto label_4105e8;
        case 0x4105ecu: goto label_4105ec;
        case 0x4105f0u: goto label_4105f0;
        case 0x4105f4u: goto label_4105f4;
        case 0x4105f8u: goto label_4105f8;
        case 0x4105fcu: goto label_4105fc;
        case 0x410600u: goto label_410600;
        case 0x410604u: goto label_410604;
        case 0x410608u: goto label_410608;
        case 0x41060cu: goto label_41060c;
        case 0x410610u: goto label_410610;
        case 0x410614u: goto label_410614;
        case 0x410618u: goto label_410618;
        case 0x41061cu: goto label_41061c;
        case 0x410620u: goto label_410620;
        case 0x410624u: goto label_410624;
        case 0x410628u: goto label_410628;
        case 0x41062cu: goto label_41062c;
        case 0x410630u: goto label_410630;
        case 0x410634u: goto label_410634;
        case 0x410638u: goto label_410638;
        case 0x41063cu: goto label_41063c;
        case 0x410640u: goto label_410640;
        case 0x410644u: goto label_410644;
        default: break;
    }

    ctx->pc = 0x410558u;

label_410558:
    // 0x410558: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x410558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41055c:
    // 0x41055c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_410560:
    // 0x410560: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x410560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_410564:
    // 0x410564: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x410564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410568:
    // 0x410568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x410568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41056c:
    // 0x41056c: 0x26920940  addiu       $s2, $s4, 0x940
    ctx->pc = 0x41056cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_410570:
    // 0x410570: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x410570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_410574:
    // 0x410574: 0x2413008b  addiu       $s3, $zero, 0x8B
    ctx->pc = 0x410574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_410578:
    // 0x410578: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x410578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_41057c:
    // 0x41057c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41057cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410580:
    // 0x410580: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x410580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_410584:
    // 0x410584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410588:
    // 0x410588: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x410588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_41058c:
    // 0x41058c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41058cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410590:
    // 0x410590: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x410590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_410594:
    // 0x410594: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x410594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410598:
    // 0x410598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41059c:
    // 0x41059c: 0xc10c1bb  jal         func_4306EC
label_4105a0:
    if (ctx->pc == 0x4105A0u) {
        ctx->pc = 0x4105A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41059Cu;
        // 0x4105a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105A4u;
        goto label_4105a4;
    }
    ctx->pc = 0x41059Cu;
    SET_GPR_U32(ctx, 31, 0x4105A4u);
    ctx->pc = 0x4105A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41059Cu;
    // 0x4105a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x41059Cu, 0x4105A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4105A4u;
label_4105a4:
    // 0x4105a4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4105a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4105a8:
    // 0x4105a8: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x4105a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4105ac:
    // 0x4105ac: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4105acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4105b0:
    // 0x4105b0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4105b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4105b4:
    // 0x4105b4: 0x661fff4  bgez        $s3, . + 4 + (-0xC << 2)
label_4105b8:
    if (ctx->pc == 0x4105B8u) {
        ctx->pc = 0x4105B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105B4u;
        // 0x4105b8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105BCu;
        goto label_4105bc;
    }
    ctx->pc = 0x4105B4u;
    {
        const bool branch_taken_0x4105b4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x4105B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105B4u;
        // 0x4105b8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4105b4) {
            ctx->pc = 0x410588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410588;
        }
    }
    ctx->pc = 0x4105BCu;
label_4105bc:
    // 0x4105bc: 0x26910940  addiu       $s1, $s4, 0x940
    ctx->pc = 0x4105bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2368));
label_4105c0:
    // 0x4105c0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4105c4:
    if (ctx->pc == 0x4105C4u) {
        ctx->pc = 0x4105C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105C0u;
        // 0x4105c4: 0x32b50001  andi        $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105C8u;
        goto label_4105c8;
    }
    ctx->pc = 0x4105C0u;
    {
        const bool branch_taken_0x4105c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4105C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105C0u;
        // 0x4105c4: 0x32b50001  andi        $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4105c0) {
            ctx->pc = 0x410610u;
            goto label_410610;
        }
    }
    ctx->pc = 0x4105C8u;
label_4105c8:
    // 0x4105c8: 0x26901200  addiu       $s0, $s4, 0x1200
    ctx->pc = 0x4105c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4608));
label_4105cc:
    // 0x4105cc: 0x12300010  beq         $s1, $s0, . + 4 + (0x10 << 2)
label_4105d0:
    if (ctx->pc == 0x4105D0u) {
        ctx->pc = 0x4105D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105CCu;
        // 0x4105d0: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105D4u;
        goto label_4105d4;
    }
    ctx->pc = 0x4105CCu;
    {
        const bool branch_taken_0x4105cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x4105D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105CCu;
        // 0x4105d0: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4105cc) {
            ctx->pc = 0x410610u;
            goto label_410610;
        }
    }
    ctx->pc = 0x4105D4u;
label_4105d4:
    // 0x4105d4: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4105d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_4105d8:
    // 0x4105d8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x4105d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_4105dc:
    // 0x4105dc: 0x0  nop
    ctx->pc = 0x4105dcu;
    // NOP
label_4105e0:
    // 0x4105e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4105e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4105e4:
    // 0x4105e4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4105e8:
    if (ctx->pc == 0x4105E8u) {
        ctx->pc = 0x4105E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105E4u;
        // 0x4105e8: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4105ECu;
        goto label_4105ec;
    }
    ctx->pc = 0x4105E4u;
    {
        const bool branch_taken_0x4105e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4105E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4105E4u;
        // 0x4105e8: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4105e4) {
            ctx->pc = 0x410608u;
            goto label_410608;
        }
    }
    ctx->pc = 0x4105ECu;
label_4105ec:
    // 0x4105ec: 0x26468d70  addiu       $a2, $s2, -0x7290
    ctx->pc = 0x4105ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937968));
label_4105f0:
    // 0x4105f0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4105f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4105f4:
    // 0x4105f4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4105f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4105f8:
    // 0x4105f8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4105f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4105fc:
    // 0x4105fc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4105fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_410600:
    // 0x410600: 0x60f809  jalr        $v1
label_410604:
    if (ctx->pc == 0x410604u) {
        ctx->pc = 0x410604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410600u;
        // 0x410604: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410608u;
        goto label_410608;
    }
    ctx->pc = 0x410600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410608u);
        ctx->pc = 0x410604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410600u;
        // 0x410604: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410600u, 0x410608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410608u;
label_410608:
    // 0x410608: 0x1630fff5  bne         $s1, $s0, . + 4 + (-0xB << 2)
label_41060c:
    if (ctx->pc == 0x41060Cu) {
        ctx->pc = 0x41060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410608u;
        // 0x41060c: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410610u;
        goto label_410610;
    }
    ctx->pc = 0x410608u;
    {
        const bool branch_taken_0x410608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x41060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410608u;
        // 0x41060c: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410608) {
            ctx->pc = 0x4105E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4105e0;
        }
    }
    ctx->pc = 0x410610u;
label_410610:
    // 0x410610: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_410614:
    if (ctx->pc == 0x410614u) {
        ctx->pc = 0x410614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410610u;
        // 0x410614: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410618u;
        goto label_410618;
    }
    ctx->pc = 0x410610u;
    {
        const bool branch_taken_0x410610 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x410614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410610u;
        // 0x410614: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410610) {
            ctx->pc = 0x410624u;
            goto label_410624;
        }
    }
    ctx->pc = 0x410618u;
label_410618:
    // 0x410618: 0xc10b208  jal         func_42C820
label_41061c:
    if (ctx->pc == 0x41061Cu) {
        ctx->pc = 0x41061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410618u;
        // 0x41061c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410620u;
        goto label_410620;
    }
    ctx->pc = 0x410618u;
    SET_GPR_U32(ctx, 31, 0x410620u);
    ctx->pc = 0x41061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410618u;
    // 0x41061c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x410618u, 0x410620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410620u;
label_410620:
    // 0x410620: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x410620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410624:
    // 0x410624: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x410624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410628:
    // 0x410628: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x410628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41062c:
    // 0x41062c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41062cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410630:
    // 0x410630: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x410630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410634:
    // 0x410634: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x410634u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410638:
    // 0x410638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41063c:
    // 0x41063c: 0x3e00008  jr          $ra
label_410640:
    if (ctx->pc == 0x410640u) {
        ctx->pc = 0x410640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41063Cu;
        // 0x410640: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410644u;
        goto label_410644;
    }
    ctx->pc = 0x41063Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41063Cu;
        // 0x410640: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41063Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410644u;
label_410644:
    // 0x410644: 0x0  nop
    ctx->pc = 0x410644u;
    // NOP
    ctx->pc = 0x410648u;
}
