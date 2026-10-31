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

// Function: sub_003D37B0
// Address: 0x3d37b0 - 0x3d3870
void sub_003D37B0_0x3d37b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D37B0_0x3d37b0");
#endif

    switch (ctx->pc) {
        case 0x3d37b0u: goto label_3d37b0;
        case 0x3d37b4u: goto label_3d37b4;
        case 0x3d37b8u: goto label_3d37b8;
        case 0x3d37bcu: goto label_3d37bc;
        case 0x3d37c0u: goto label_3d37c0;
        case 0x3d37c4u: goto label_3d37c4;
        case 0x3d37c8u: goto label_3d37c8;
        case 0x3d37ccu: goto label_3d37cc;
        case 0x3d37d0u: goto label_3d37d0;
        case 0x3d37d4u: goto label_3d37d4;
        case 0x3d37d8u: goto label_3d37d8;
        case 0x3d37dcu: goto label_3d37dc;
        case 0x3d37e0u: goto label_3d37e0;
        case 0x3d37e4u: goto label_3d37e4;
        case 0x3d37e8u: goto label_3d37e8;
        case 0x3d37ecu: goto label_3d37ec;
        case 0x3d37f0u: goto label_3d37f0;
        case 0x3d37f4u: goto label_3d37f4;
        case 0x3d37f8u: goto label_3d37f8;
        case 0x3d37fcu: goto label_3d37fc;
        case 0x3d3800u: goto label_3d3800;
        case 0x3d3804u: goto label_3d3804;
        case 0x3d3808u: goto label_3d3808;
        case 0x3d380cu: goto label_3d380c;
        case 0x3d3810u: goto label_3d3810;
        case 0x3d3814u: goto label_3d3814;
        case 0x3d3818u: goto label_3d3818;
        case 0x3d381cu: goto label_3d381c;
        case 0x3d3820u: goto label_3d3820;
        case 0x3d3824u: goto label_3d3824;
        case 0x3d3828u: goto label_3d3828;
        case 0x3d382cu: goto label_3d382c;
        case 0x3d3830u: goto label_3d3830;
        case 0x3d3834u: goto label_3d3834;
        case 0x3d3838u: goto label_3d3838;
        case 0x3d383cu: goto label_3d383c;
        case 0x3d3840u: goto label_3d3840;
        case 0x3d3844u: goto label_3d3844;
        case 0x3d3848u: goto label_3d3848;
        case 0x3d384cu: goto label_3d384c;
        case 0x3d3850u: goto label_3d3850;
        case 0x3d3854u: goto label_3d3854;
        case 0x3d3858u: goto label_3d3858;
        case 0x3d385cu: goto label_3d385c;
        case 0x3d3860u: goto label_3d3860;
        case 0x3d3864u: goto label_3d3864;
        case 0x3d3868u: goto label_3d3868;
        case 0x3d386cu: goto label_3d386c;
        default: break;
    }

    ctx->pc = 0x3d37b0u;

label_3d37b0:
    // 0x3d37b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d37b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d37b4:
    // 0x3d37b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d37b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d37b8:
    // 0x3d37b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d37b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d37bc:
    // 0x3d37bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d37bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d37c0:
    // 0x3d37c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d37c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d37c4:
    // 0x3d37c4: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x3d37c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
label_3d37c8:
    // 0x3d37c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d37c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d37cc:
    // 0x3d37cc: 0x363100ff  ori         $s1, $s1, 0xFF
    ctx->pc = 0x3d37ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)255);
label_3d37d0:
    // 0x3d37d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d37d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d37d4:
    // 0x3d37d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d37d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d37d8:
    // 0x3d37d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d37dc:
    // 0x3d37dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d37dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d37e0:
    // 0x3d37e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d37e4:
    // 0x3d37e4: 0x40f809  jalr        $v0
label_3d37e8:
    if (ctx->pc == 0x3D37E8u) {
        ctx->pc = 0x3D37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37E4u;
        // 0x3d37e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D37ECu;
        goto label_3d37ec;
    }
    ctx->pc = 0x3D37E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D37ECu);
        ctx->pc = 0x3D37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D37E4u;
        // 0x3d37e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D37E4u, 0x3D37ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D37ECu;
label_3d37ec:
    // 0x3d37ec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3d37ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3d37f0:
    // 0x3d37f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d37f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d37f4:
    // 0x3d37f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d37f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d37f8:
    // 0x3d37f8: 0x24030488  addiu       $v1, $zero, 0x488
    ctx->pc = 0x3d37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
label_3d37fc:
    // 0x3d37fc: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x3d37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
label_3d3800:
    // 0x3d3800: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d3800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3804:
    // 0x3d3804: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d3804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d3808:
    // 0x3d3808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d380c:
    // 0x3d380c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3d380cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3d3810:
    // 0x3d3810: 0xc0e858c  jal         func_3A1630
label_3d3814:
    if (ctx->pc == 0x3D3814u) {
        ctx->pc = 0x3D3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3810u;
        // 0x3d3814: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3818u;
        goto label_3d3818;
    }
    ctx->pc = 0x3D3810u;
    SET_GPR_U32(ctx, 31, 0x3D3818u);
    ctx->pc = 0x3D3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3810u;
    // 0x3d3814: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3810u, 0x3D3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3818u;
label_3d3818:
    // 0x3d3818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d3818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d381c:
    // 0x3d381c: 0xc0ea12a  jal         func_3A84A8
label_3d3820:
    if (ctx->pc == 0x3D3820u) {
        ctx->pc = 0x3D3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D381Cu;
        // 0x3d3820: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3824u;
        goto label_3d3824;
    }
    ctx->pc = 0x3D381Cu;
    SET_GPR_U32(ctx, 31, 0x3D3824u);
    ctx->pc = 0x3D3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D381Cu;
    // 0x3d3820: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D381Cu, 0x3D3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3824u;
label_3d3824:
    // 0x3d3824: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d3828:
    // 0x3d3828: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d3828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d382c:
    // 0x3d382c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d382cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3830:
    // 0x3d3830: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3d3830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d3834:
    // 0x3d3834: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x3d3834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
label_3d3838:
    // 0x3d3838: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d3838u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d383c:
    // 0x3d383c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d3840:
    // 0x3d3840: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3d3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3d3844:
    // 0x3d3844: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x3d3844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
label_3d3848:
    // 0x3d3848: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x3d3848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_3d384c:
    // 0x3d384c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3d384cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_3d3850:
    // 0x3d3850: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3d3850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3d3854:
    // 0x3d3854: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d3854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d3858:
    // 0x3d3858: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d3858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d385c:
    // 0x3d385c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d385cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d3860:
    // 0x3d3860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d3860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d3864:
    // 0x3d3864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d3864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d3868:
    // 0x3d3868: 0x3e00008  jr          $ra
label_3d386c:
    if (ctx->pc == 0x3D386Cu) {
        ctx->pc = 0x3D386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3868u;
        // 0x3d386c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3870u;
        goto label_fallthrough_0x3d3868;
    }
    ctx->pc = 0x3D3868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3868u;
        // 0x3d386c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d3868:
    ctx->pc = 0x3D3870u;
}
