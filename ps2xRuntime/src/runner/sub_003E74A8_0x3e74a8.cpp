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

// Function: sub_003E74A8
// Address: 0x3e74a8 - 0x3e75d0
void sub_003E74A8_0x3e74a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E74A8_0x3e74a8");
#endif

    switch (ctx->pc) {
        case 0x3e74a8u: goto label_3e74a8;
        case 0x3e74acu: goto label_3e74ac;
        case 0x3e74b0u: goto label_3e74b0;
        case 0x3e74b4u: goto label_3e74b4;
        case 0x3e74b8u: goto label_3e74b8;
        case 0x3e74bcu: goto label_3e74bc;
        case 0x3e74c0u: goto label_3e74c0;
        case 0x3e74c4u: goto label_3e74c4;
        case 0x3e74c8u: goto label_3e74c8;
        case 0x3e74ccu: goto label_3e74cc;
        case 0x3e74d0u: goto label_3e74d0;
        case 0x3e74d4u: goto label_3e74d4;
        case 0x3e74d8u: goto label_3e74d8;
        case 0x3e74dcu: goto label_3e74dc;
        case 0x3e74e0u: goto label_3e74e0;
        case 0x3e74e4u: goto label_3e74e4;
        case 0x3e74e8u: goto label_3e74e8;
        case 0x3e74ecu: goto label_3e74ec;
        case 0x3e74f0u: goto label_3e74f0;
        case 0x3e74f4u: goto label_3e74f4;
        case 0x3e74f8u: goto label_3e74f8;
        case 0x3e74fcu: goto label_3e74fc;
        case 0x3e7500u: goto label_3e7500;
        case 0x3e7504u: goto label_3e7504;
        case 0x3e7508u: goto label_3e7508;
        case 0x3e750cu: goto label_3e750c;
        case 0x3e7510u: goto label_3e7510;
        case 0x3e7514u: goto label_3e7514;
        case 0x3e7518u: goto label_3e7518;
        case 0x3e751cu: goto label_3e751c;
        case 0x3e7520u: goto label_3e7520;
        case 0x3e7524u: goto label_3e7524;
        case 0x3e7528u: goto label_3e7528;
        case 0x3e752cu: goto label_3e752c;
        case 0x3e7530u: goto label_3e7530;
        case 0x3e7534u: goto label_3e7534;
        case 0x3e7538u: goto label_3e7538;
        case 0x3e753cu: goto label_3e753c;
        case 0x3e7540u: goto label_3e7540;
        case 0x3e7544u: goto label_3e7544;
        case 0x3e7548u: goto label_3e7548;
        case 0x3e754cu: goto label_3e754c;
        case 0x3e7550u: goto label_3e7550;
        case 0x3e7554u: goto label_3e7554;
        case 0x3e7558u: goto label_3e7558;
        case 0x3e755cu: goto label_3e755c;
        case 0x3e7560u: goto label_3e7560;
        case 0x3e7564u: goto label_3e7564;
        case 0x3e7568u: goto label_3e7568;
        case 0x3e756cu: goto label_3e756c;
        case 0x3e7570u: goto label_3e7570;
        case 0x3e7574u: goto label_3e7574;
        case 0x3e7578u: goto label_3e7578;
        case 0x3e757cu: goto label_3e757c;
        case 0x3e7580u: goto label_3e7580;
        case 0x3e7584u: goto label_3e7584;
        case 0x3e7588u: goto label_3e7588;
        case 0x3e758cu: goto label_3e758c;
        case 0x3e7590u: goto label_3e7590;
        case 0x3e7594u: goto label_3e7594;
        case 0x3e7598u: goto label_3e7598;
        case 0x3e759cu: goto label_3e759c;
        case 0x3e75a0u: goto label_3e75a0;
        case 0x3e75a4u: goto label_3e75a4;
        case 0x3e75a8u: goto label_3e75a8;
        case 0x3e75acu: goto label_3e75ac;
        case 0x3e75b0u: goto label_3e75b0;
        case 0x3e75b4u: goto label_3e75b4;
        case 0x3e75b8u: goto label_3e75b8;
        case 0x3e75bcu: goto label_3e75bc;
        case 0x3e75c0u: goto label_3e75c0;
        case 0x3e75c4u: goto label_3e75c4;
        case 0x3e75c8u: goto label_3e75c8;
        case 0x3e75ccu: goto label_3e75cc;
        default: break;
    }

    ctx->pc = 0x3e74a8u;

label_3e74a8:
    // 0x3e74a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e74a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e74ac:
    // 0x3e74ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e74acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3e74b0:
    // 0x3e74b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e74b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3e74b4:
    // 0x3e74b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e74b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e74b8:
    // 0x3e74b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3e74bc:
    // 0x3e74bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e74bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e74c0:
    // 0x3e74c0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e74c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3e74c4:
    // 0x3e74c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e74c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e74c8:
    // 0x3e74c8: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x3e74c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3e74cc:
    // 0x3e74cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e74ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e74d0:
    // 0x3e74d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e74d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e74d4:
    // 0x3e74d4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e74d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e74d8:
    // 0x3e74d8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e74dc:
    // 0x3e74dc: 0x40f809  jalr        $v0
label_3e74e0:
    if (ctx->pc == 0x3E74E0u) {
        ctx->pc = 0x3E74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E74DCu;
        // 0x3e74e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E74E4u;
        goto label_3e74e4;
    }
    ctx->pc = 0x3E74DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E74E4u);
        ctx->pc = 0x3E74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E74DCu;
        // 0x3e74e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E74DCu, 0x3E74E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E74E4u;
label_3e74e4:
    // 0x3e74e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e74e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e74e8:
    // 0x3e74e8: 0xc0ea14c  jal         func_3A8530
label_3e74ec:
    if (ctx->pc == 0x3E74ECu) {
        ctx->pc = 0x3E74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E74E8u;
        // 0x3e74ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E74F0u;
        goto label_3e74f0;
    }
    ctx->pc = 0x3E74E8u;
    SET_GPR_U32(ctx, 31, 0x3E74F0u);
    ctx->pc = 0x3E74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E74E8u;
    // 0x3e74ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E74E8u, 0x3E74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E74F0u;
label_3e74f0:
    // 0x3e74f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e74f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e74f4:
    // 0x3e74f4: 0xc0ea12a  jal         func_3A84A8
label_3e74f8:
    if (ctx->pc == 0x3E74F8u) {
        ctx->pc = 0x3E74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E74F4u;
        // 0x3e74f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E74FCu;
        goto label_3e74fc;
    }
    ctx->pc = 0x3E74F4u;
    SET_GPR_U32(ctx, 31, 0x3E74FCu);
    ctx->pc = 0x3E74F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E74F4u;
    // 0x3e74f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E74F4u, 0x3E74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E74FCu;
label_3e74fc:
    // 0x3e74fc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3e74fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e7500:
    // 0x3e7500: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7504:
    // 0x3e7504: 0xc0ea12a  jal         func_3A84A8
label_3e7508:
    if (ctx->pc == 0x3E7508u) {
        ctx->pc = 0x3E7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7504u;
        // 0x3e7508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E750Cu;
        goto label_3e750c;
    }
    ctx->pc = 0x3E7504u;
    SET_GPR_U32(ctx, 31, 0x3E750Cu);
    ctx->pc = 0x3E7508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7504u;
    // 0x3e7508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E7504u, 0x3E750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E750Cu;
label_3e750c:
    // 0x3e750c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e750cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7510:
    // 0x3e7510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7514:
    // 0x3e7514: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x3e7514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3e7518:
    // 0x3e7518: 0xc0e858c  jal         func_3A1630
label_3e751c:
    if (ctx->pc == 0x3E751Cu) {
        ctx->pc = 0x3E751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7518u;
        // 0x3e751c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7520u;
        goto label_3e7520;
    }
    ctx->pc = 0x3E7518u;
    SET_GPR_U32(ctx, 31, 0x3E7520u);
    ctx->pc = 0x3E751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7518u;
    // 0x3e751c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E7518u, 0x3E7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7520u;
label_3e7520:
    // 0x3e7520: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3e7520u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7524:
    // 0x3e7524: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3e7524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_3e7528:
    // 0x3e7528: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3e7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3e752c:
    // 0x3e752c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3e752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e7530:
    // 0x3e7530: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3e7530u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3e7534:
    // 0x3e7534: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e7534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e7538:
    // 0x3e7538: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e7538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e753c:
    // 0x3e753c: 0x84c40088  lh          $a0, 0x88($a2)
    ctx->pc = 0x3e753cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 136)));
label_3e7540:
    // 0x3e7540: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x3e7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
label_3e7544:
    // 0x3e7544: 0x40f809  jalr        $v0
label_3e7548:
    if (ctx->pc == 0x3E7548u) {
        ctx->pc = 0x3E7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7544u;
        // 0x3e7548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E754Cu;
        goto label_3e754c;
    }
    ctx->pc = 0x3E7544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E754Cu);
        ctx->pc = 0x3E7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7544u;
        // 0x3e7548: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7544u, 0x3E754Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E754Cu;
label_3e754c:
    // 0x3e754c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3e754cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7550:
    // 0x3e7550: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3e7550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3e7554:
    // 0x3e7554: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3e7554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3e7558:
    // 0x3e7558: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x3e7558u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
label_3e755c:
    // 0x3e755c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3e755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e7560:
    // 0x3e7560: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e7560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e7564:
    // 0x3e7564: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e7568:
    // 0x3e7568: 0x60f809  jalr        $v1
label_3e756c:
    if (ctx->pc == 0x3E756Cu) {
        ctx->pc = 0x3E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7568u;
        // 0x3e756c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7570u;
        goto label_3e7570;
    }
    ctx->pc = 0x3E7568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7570u);
        ctx->pc = 0x3E756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7568u;
        // 0x3e756c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7568u, 0x3E7570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7570u;
label_3e7570:
    // 0x3e7570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7574:
    // 0x3e7574: 0xc0e9132  jal         func_3A44C8
label_3e7578:
    if (ctx->pc == 0x3E7578u) {
        ctx->pc = 0x3E7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7574u;
        // 0x3e7578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E757Cu;
        goto label_3e757c;
    }
    ctx->pc = 0x3E7574u;
    SET_GPR_U32(ctx, 31, 0x3E757Cu);
    ctx->pc = 0x3E7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7574u;
    // 0x3e7578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3E7574u, 0x3E757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E757Cu;
label_3e757c:
    // 0x3e757c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3e757cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3e7580:
    // 0x3e7580: 0x3c03bbbe  lui         $v1, 0xBBBE
    ctx->pc = 0x3e7580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48062 << 16));
label_3e7584:
    // 0x3e7584: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3e7584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3e7588:
    // 0x3e7588: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x3e7588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_3e758c:
    // 0x3e758c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x3e758cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
label_3e7590:
    // 0x3e7590: 0x3463f927  ori         $v1, $v1, 0xF927
    ctx->pc = 0x3e7590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63783);
label_3e7594:
    // 0x3e7594: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x3e7594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
label_3e7598:
    // 0x3e7598: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x3e7598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
label_3e759c:
    // 0x3e759c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3e759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3e75a0:
    // 0x3e75a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3e75a4:
    if (ctx->pc == 0x3E75A4u) {
        ctx->pc = 0x3E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75A0u;
        // 0x3e75a4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E75A8u;
        goto label_3e75a8;
    }
    ctx->pc = 0x3E75A0u;
    {
        const bool branch_taken_0x3e75a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75A0u;
        // 0x3e75a4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e75a0) {
            ctx->pc = 0x3E75B0u;
            goto label_3e75b0;
        }
    }
    ctx->pc = 0x3E75A8u;
label_3e75a8:
    // 0x3e75a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e75ac:
    // 0x3e75ac: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x3e75acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_3e75b0:
    // 0x3e75b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e75b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e75b4:
    // 0x3e75b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e75b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e75b8:
    // 0x3e75b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e75b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e75bc:
    // 0x3e75bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e75bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e75c0:
    // 0x3e75c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e75c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e75c4:
    // 0x3e75c4: 0x3e00008  jr          $ra
label_3e75c8:
    if (ctx->pc == 0x3E75C8u) {
        ctx->pc = 0x3E75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75C4u;
        // 0x3e75c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E75CCu;
        goto label_3e75cc;
    }
    ctx->pc = 0x3E75C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75C4u;
        // 0x3e75c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E75C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E75CCu;
label_3e75cc:
    // 0x3e75cc: 0x0  nop
    ctx->pc = 0x3e75ccu;
    // NOP
    ctx->pc = 0x3e75d0u;
}
