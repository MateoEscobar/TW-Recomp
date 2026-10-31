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

// Function: sub_001E3758
// Address: 0x1e3758 - 0x1e3828
void sub_001E3758_0x1e3758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3758_0x1e3758");
#endif

    switch (ctx->pc) {
        case 0x1e3758u: goto label_1e3758;
        case 0x1e375cu: goto label_1e375c;
        case 0x1e3760u: goto label_1e3760;
        case 0x1e3764u: goto label_1e3764;
        case 0x1e3768u: goto label_1e3768;
        case 0x1e376cu: goto label_1e376c;
        case 0x1e3770u: goto label_1e3770;
        case 0x1e3774u: goto label_1e3774;
        case 0x1e3778u: goto label_1e3778;
        case 0x1e377cu: goto label_1e377c;
        case 0x1e3780u: goto label_1e3780;
        case 0x1e3784u: goto label_1e3784;
        case 0x1e3788u: goto label_1e3788;
        case 0x1e378cu: goto label_1e378c;
        case 0x1e3790u: goto label_1e3790;
        case 0x1e3794u: goto label_1e3794;
        case 0x1e3798u: goto label_1e3798;
        case 0x1e379cu: goto label_1e379c;
        case 0x1e37a0u: goto label_1e37a0;
        case 0x1e37a4u: goto label_1e37a4;
        case 0x1e37a8u: goto label_1e37a8;
        case 0x1e37acu: goto label_1e37ac;
        case 0x1e37b0u: goto label_1e37b0;
        case 0x1e37b4u: goto label_1e37b4;
        case 0x1e37b8u: goto label_1e37b8;
        case 0x1e37bcu: goto label_1e37bc;
        case 0x1e37c0u: goto label_1e37c0;
        case 0x1e37c4u: goto label_1e37c4;
        case 0x1e37c8u: goto label_1e37c8;
        case 0x1e37ccu: goto label_1e37cc;
        case 0x1e37d0u: goto label_1e37d0;
        case 0x1e37d4u: goto label_1e37d4;
        case 0x1e37d8u: goto label_1e37d8;
        case 0x1e37dcu: goto label_1e37dc;
        case 0x1e37e0u: goto label_1e37e0;
        case 0x1e37e4u: goto label_1e37e4;
        case 0x1e37e8u: goto label_1e37e8;
        case 0x1e37ecu: goto label_1e37ec;
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e37f4u: goto label_1e37f4;
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e37fcu: goto label_1e37fc;
        case 0x1e3800u: goto label_1e3800;
        case 0x1e3804u: goto label_1e3804;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e380cu: goto label_1e380c;
        case 0x1e3810u: goto label_1e3810;
        case 0x1e3814u: goto label_1e3814;
        case 0x1e3818u: goto label_1e3818;
        case 0x1e381cu: goto label_1e381c;
        case 0x1e3820u: goto label_1e3820;
        case 0x1e3824u: goto label_1e3824;
        default: break;
    }

    ctx->pc = 0x1e3758u;

label_1e3758:
    // 0x1e3758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e375c:
    // 0x1e375c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1e3760:
    // 0x1e3760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3764:
    // 0x1e3764: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e3768:
    // 0x1e3768: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e376c:
    // 0x1e376c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e376cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3770:
    // 0x1e3770: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e3770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e3774:
    // 0x1e3774: 0x2442c560  addiu       $v0, $v0, -0x3AA0
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952288));
label_1e3778:
    // 0x1e3778: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e377c:
    // 0x1e377c: 0x2463c588  addiu       $v1, $v1, -0x3A78
    ctx->pc = 0x1e377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952328));
label_1e3780:
    // 0x1e3780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3784:
    // 0x1e3784: 0x26443960  addiu       $a0, $s2, 0x3960
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14688));
label_1e3788:
    // 0x1e3788: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e3788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e378c:
    // 0x1e378c: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1e378cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_1e3790:
    // 0x1e3790: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1e3794:
    if (ctx->pc == 0x1E3794u) {
        ctx->pc = 0x1E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3790u;
        // 0x1e3794: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3798u;
        goto label_1e3798;
    }
    ctx->pc = 0x1E3790u;
    {
        const bool branch_taken_0x1e3790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3790u;
        // 0x1e3794: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3790) {
            ctx->pc = 0x1E37C8u;
            goto label_1e37c8;
        }
    }
    ctx->pc = 0x1E3798u;
label_1e3798:
    // 0x1e3798: 0x26507170  addiu       $s0, $s2, 0x7170
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 29040));
label_1e379c:
    // 0x1e379c: 0x1090000a  beq         $a0, $s0, . + 4 + (0xA << 2)
label_1e37a0:
    if (ctx->pc == 0x1E37A0u) {
        ctx->pc = 0x1E37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E379Cu;
        // 0x1e37a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37A4u;
        goto label_1e37a4;
    }
    ctx->pc = 0x1E379Cu;
    {
        const bool branch_taken_0x1e379c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E379Cu;
        // 0x1e37a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e379c) {
            ctx->pc = 0x1E37C8u;
            goto label_1e37c8;
        }
    }
    ctx->pc = 0x1E37A4u;
label_1e37a4:
    // 0x1e37a4: 0x2610fd90  addiu       $s0, $s0, -0x270
    ctx->pc = 0x1e37a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966672));
label_1e37a8:
    // 0x1e37a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e37a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e37ac:
    // 0x1e37ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e37b0:
    // 0x1e37b0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e37b4:
    // 0x1e37b4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e37b8:
    // 0x1e37b8: 0x60f809  jalr        $v1
label_1e37bc:
    if (ctx->pc == 0x1E37BCu) {
        ctx->pc = 0x1E37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37B8u;
        // 0x1e37bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37C0u;
        goto label_1e37c0;
    }
    ctx->pc = 0x1E37B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E37C0u);
        ctx->pc = 0x1E37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37B8u;
        // 0x1e37bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E37B8u, 0x1E37C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E37C0u;
label_1e37c0:
    // 0x1e37c0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1e37c4:
    if (ctx->pc == 0x1E37C4u) {
        ctx->pc = 0x1E37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37C0u;
        // 0x1e37c4: 0x2610fd90  addiu       $s0, $s0, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37C8u;
        goto label_1e37c8;
    }
    ctx->pc = 0x1E37C0u;
    {
        const bool branch_taken_0x1e37c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37C0u;
        // 0x1e37c4: 0x2610fd90  addiu       $s0, $s0, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37c0) {
            ctx->pc = 0x1E37A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e37a8;
        }
    }
    ctx->pc = 0x1E37C8u;
label_1e37c8:
    // 0x1e37c8: 0x26510150  addiu       $s1, $s2, 0x150
    ctx->pc = 0x1e37c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_1e37cc:
    // 0x1e37cc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1e37d0:
    if (ctx->pc == 0x1E37D0u) {
        ctx->pc = 0x1E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37CCu;
        // 0x1e37d0: 0x26503960  addiu       $s0, $s2, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 14688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37D4u;
        goto label_1e37d4;
    }
    ctx->pc = 0x1E37CCu;
    {
        const bool branch_taken_0x1e37cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37CCu;
        // 0x1e37d0: 0x26503960  addiu       $s0, $s2, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 14688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37cc) {
            ctx->pc = 0x1E3800u;
            goto label_1e3800;
        }
    }
    ctx->pc = 0x1E37D4u;
label_1e37d4:
    // 0x1e37d4: 0x5230000b  beql        $s1, $s0, . + 4 + (0xB << 2)
label_1e37d8:
    if (ctx->pc == 0x1E37D8u) {
        ctx->pc = 0x1E37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37D4u;
        // 0x1e37d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37DCu;
        goto label_1e37dc;
    }
    ctx->pc = 0x1E37D4u;
    {
        const bool branch_taken_0x1e37d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e37d4) {
            ctx->pc = 0x1E37D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E37D4u;
            // 0x1e37d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3804u;
            goto label_1e3804;
        }
    }
    ctx->pc = 0x1E37DCu;
label_1e37dc:
    // 0x1e37dc: 0x2610fd90  addiu       $s0, $s0, -0x270
    ctx->pc = 0x1e37dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966672));
label_1e37e0:
    // 0x1e37e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e37e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e37e4:
    // 0x1e37e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e37e8:
    // 0x1e37e8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e37e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e37ec:
    // 0x1e37ec: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e37f0:
    // 0x1e37f0: 0x60f809  jalr        $v1
label_1e37f4:
    if (ctx->pc == 0x1E37F4u) {
        ctx->pc = 0x1E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F0u;
        // 0x1e37f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E37F8u;
        goto label_1e37f8;
    }
    ctx->pc = 0x1E37F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E37F8u);
        ctx->pc = 0x1E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F0u;
        // 0x1e37f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E37F0u, 0x1E37F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E37F8u;
label_1e37f8:
    // 0x1e37f8: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1e37fc:
    if (ctx->pc == 0x1E37FCu) {
        ctx->pc = 0x1E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F8u;
        // 0x1e37fc: 0x2610fd90  addiu       $s0, $s0, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3800u;
        goto label_1e3800;
    }
    ctx->pc = 0x1E37F8u;
    {
        const bool branch_taken_0x1e37f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E37F8u;
        // 0x1e37fc: 0x2610fd90  addiu       $s0, $s0, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37f8) {
            ctx->pc = 0x1E37E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e37e0;
        }
    }
    ctx->pc = 0x1E3800u;
label_1e3800:
    // 0x1e3800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3804:
    // 0x1e3804: 0xc078d30  jal         func_1E34C0
label_1e3808:
    if (ctx->pc == 0x1E3808u) {
        ctx->pc = 0x1E3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3804u;
        // 0x1e3808: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E380Cu;
        goto label_1e380c;
    }
    ctx->pc = 0x1E3804u;
    SET_GPR_U32(ctx, 31, 0x1E380Cu);
    ctx->pc = 0x1E3808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3804u;
    // 0x1e3808: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E34C0u, 0x1E3804u, 0x1E380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E380Cu;
label_1e380c:
    // 0x1e380c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e380cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3810:
    // 0x1e3810: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e3810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3814:
    // 0x1e3814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3818:
    // 0x1e3818: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e3818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e381c:
    // 0x1e381c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3820:
    // 0x1e3820: 0x3e00008  jr          $ra
label_1e3824:
    if (ctx->pc == 0x1E3824u) {
        ctx->pc = 0x1E3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3820u;
        // 0x1e3824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3828u;
        goto label_fallthrough_0x1e3820;
    }
    ctx->pc = 0x1E3820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3820u;
        // 0x1e3824: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3820:
    ctx->pc = 0x1E3828u;
}
