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

// Function: sub_004E3780
// Address: 0x4e3780 - 0x4e3820
void sub_004E3780_0x4e3780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3780_0x4e3780");
#endif

    switch (ctx->pc) {
        case 0x4e3780u: goto label_4e3780;
        case 0x4e3784u: goto label_4e3784;
        case 0x4e3788u: goto label_4e3788;
        case 0x4e378cu: goto label_4e378c;
        case 0x4e3790u: goto label_4e3790;
        case 0x4e3794u: goto label_4e3794;
        case 0x4e3798u: goto label_4e3798;
        case 0x4e379cu: goto label_4e379c;
        case 0x4e37a0u: goto label_4e37a0;
        case 0x4e37a4u: goto label_4e37a4;
        case 0x4e37a8u: goto label_4e37a8;
        case 0x4e37acu: goto label_4e37ac;
        case 0x4e37b0u: goto label_4e37b0;
        case 0x4e37b4u: goto label_4e37b4;
        case 0x4e37b8u: goto label_4e37b8;
        case 0x4e37bcu: goto label_4e37bc;
        case 0x4e37c0u: goto label_4e37c0;
        case 0x4e37c4u: goto label_4e37c4;
        case 0x4e37c8u: goto label_4e37c8;
        case 0x4e37ccu: goto label_4e37cc;
        case 0x4e37d0u: goto label_4e37d0;
        case 0x4e37d4u: goto label_4e37d4;
        case 0x4e37d8u: goto label_4e37d8;
        case 0x4e37dcu: goto label_4e37dc;
        case 0x4e37e0u: goto label_4e37e0;
        case 0x4e37e4u: goto label_4e37e4;
        case 0x4e37e8u: goto label_4e37e8;
        case 0x4e37ecu: goto label_4e37ec;
        case 0x4e37f0u: goto label_4e37f0;
        case 0x4e37f4u: goto label_4e37f4;
        case 0x4e37f8u: goto label_4e37f8;
        case 0x4e37fcu: goto label_4e37fc;
        case 0x4e3800u: goto label_4e3800;
        case 0x4e3804u: goto label_4e3804;
        case 0x4e3808u: goto label_4e3808;
        case 0x4e380cu: goto label_4e380c;
        case 0x4e3810u: goto label_4e3810;
        case 0x4e3814u: goto label_4e3814;
        case 0x4e3818u: goto label_4e3818;
        case 0x4e381cu: goto label_4e381c;
        default: break;
    }

    ctx->pc = 0x4e3780u;

label_4e3780:
    // 0x4e3780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e3784:
    // 0x4e3784: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e3784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e3788:
    // 0x4e3788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e3788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e378c:
    // 0x4e378c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3790:
    // 0x4e3790: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e3790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e3794:
    // 0x4e3794: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3798:
    // 0x4e3798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e379c:
    // 0x4e379c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e37a0:
    if (ctx->pc == 0x4E37A0u) {
        ctx->pc = 0x4E37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E379Cu;
        // 0x4e37a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37A4u;
        goto label_4e37a4;
    }
    ctx->pc = 0x4E379Cu;
    {
        const bool branch_taken_0x4e379c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E379Cu;
        // 0x4e37a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e379c) {
            ctx->pc = 0x4E37E4u;
            goto label_4e37e4;
        }
    }
    ctx->pc = 0x4E37A4u;
label_4e37a4:
    // 0x4e37a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4e37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4e37a8:
    // 0x4e37a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e37a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e37ac:
    // 0x4e37ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4e37acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4e37b0:
    // 0x4e37b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e37b4:
    // 0x4e37b4: 0x60f809  jalr        $v1
label_4e37b8:
    if (ctx->pc == 0x4E37B8u) {
        ctx->pc = 0x4E37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37B4u;
        // 0x4e37b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37BCu;
        goto label_4e37bc;
    }
    ctx->pc = 0x4E37B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E37BCu);
        ctx->pc = 0x4E37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37B4u;
        // 0x4e37b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E37B4u, 0x4E37BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E37BCu;
label_4e37bc:
    // 0x4e37bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e37c0:
    // 0x4e37c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e37c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e37c4:
    // 0x4e37c4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e37c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e37c8:
    // 0x4e37c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e37c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e37cc:
    // 0x4e37cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e37ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e37d0:
    // 0x4e37d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e37d4:
    // 0x4e37d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e37d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e37d8:
    // 0x4e37d8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e37dc:
    // 0x4e37dc: 0x60f809  jalr        $v1
label_4e37e0:
    if (ctx->pc == 0x4E37E0u) {
        ctx->pc = 0x4E37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37DCu;
        // 0x4e37e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37E4u;
        goto label_4e37e4;
    }
    ctx->pc = 0x4E37DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E37E4u);
        ctx->pc = 0x4E37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37DCu;
        // 0x4e37e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E37DCu, 0x4E37E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E37E4u;
label_4e37e4:
    // 0x4e37e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e37e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e37e8:
    // 0x4e37e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e37e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e37ec:
    // 0x4e37ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e37ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e37f0:
    // 0x4e37f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e37f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e37f4:
    // 0x4e37f4: 0x3e00008  jr          $ra
label_4e37f8:
    if (ctx->pc == 0x4E37F8u) {
        ctx->pc = 0x4E37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37F4u;
        // 0x4e37f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E37FCu;
        goto label_4e37fc;
    }
    ctx->pc = 0x4E37F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E37F4u;
        // 0x4e37f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E37F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E37FCu;
label_4e37fc:
    // 0x4e37fc: 0x0  nop
    ctx->pc = 0x4e37fcu;
    // NOP
label_4e3800:
    // 0x4e3800: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4e3800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4e3804:
    // 0x4e3804: 0x0  nop
    ctx->pc = 0x4e3804u;
    // NOP
label_4e3808:
    // 0x4e3808: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4e3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4e380c:
    // 0x4e380c: 0x0  nop
    ctx->pc = 0x4e380cu;
    // NOP
label_4e3810:
    // 0x4e3810: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4e3810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e3814:
    // 0x4e3814: 0x0  nop
    ctx->pc = 0x4e3814u;
    // NOP
label_4e3818:
    // 0x4e3818: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4e3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4e381c:
    // 0x4e381c: 0x0  nop
    ctx->pc = 0x4e381cu;
    // NOP
    ctx->pc = 0x4e3820u;
}
