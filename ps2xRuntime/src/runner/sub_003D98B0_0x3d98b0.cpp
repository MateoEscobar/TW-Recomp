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

// Function: sub_003D98B0
// Address: 0x3d98b0 - 0x3d9978
void sub_003D98B0_0x3d98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D98B0_0x3d98b0");
#endif

    switch (ctx->pc) {
        case 0x3d98b0u: goto label_3d98b0;
        case 0x3d98b4u: goto label_3d98b4;
        case 0x3d98b8u: goto label_3d98b8;
        case 0x3d98bcu: goto label_3d98bc;
        case 0x3d98c0u: goto label_3d98c0;
        case 0x3d98c4u: goto label_3d98c4;
        case 0x3d98c8u: goto label_3d98c8;
        case 0x3d98ccu: goto label_3d98cc;
        case 0x3d98d0u: goto label_3d98d0;
        case 0x3d98d4u: goto label_3d98d4;
        case 0x3d98d8u: goto label_3d98d8;
        case 0x3d98dcu: goto label_3d98dc;
        case 0x3d98e0u: goto label_3d98e0;
        case 0x3d98e4u: goto label_3d98e4;
        case 0x3d98e8u: goto label_3d98e8;
        case 0x3d98ecu: goto label_3d98ec;
        case 0x3d98f0u: goto label_3d98f0;
        case 0x3d98f4u: goto label_3d98f4;
        case 0x3d98f8u: goto label_3d98f8;
        case 0x3d98fcu: goto label_3d98fc;
        case 0x3d9900u: goto label_3d9900;
        case 0x3d9904u: goto label_3d9904;
        case 0x3d9908u: goto label_3d9908;
        case 0x3d990cu: goto label_3d990c;
        case 0x3d9910u: goto label_3d9910;
        case 0x3d9914u: goto label_3d9914;
        case 0x3d9918u: goto label_3d9918;
        case 0x3d991cu: goto label_3d991c;
        case 0x3d9920u: goto label_3d9920;
        case 0x3d9924u: goto label_3d9924;
        case 0x3d9928u: goto label_3d9928;
        case 0x3d992cu: goto label_3d992c;
        case 0x3d9930u: goto label_3d9930;
        case 0x3d9934u: goto label_3d9934;
        case 0x3d9938u: goto label_3d9938;
        case 0x3d993cu: goto label_3d993c;
        case 0x3d9940u: goto label_3d9940;
        case 0x3d9944u: goto label_3d9944;
        case 0x3d9948u: goto label_3d9948;
        case 0x3d994cu: goto label_3d994c;
        case 0x3d9950u: goto label_3d9950;
        case 0x3d9954u: goto label_3d9954;
        case 0x3d9958u: goto label_3d9958;
        case 0x3d995cu: goto label_3d995c;
        case 0x3d9960u: goto label_3d9960;
        case 0x3d9964u: goto label_3d9964;
        case 0x3d9968u: goto label_3d9968;
        case 0x3d996cu: goto label_3d996c;
        case 0x3d9970u: goto label_3d9970;
        case 0x3d9974u: goto label_3d9974;
        default: break;
    }

    ctx->pc = 0x3d98b0u;

label_3d98b0:
    // 0x3d98b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d98b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d98b4:
    // 0x3d98b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d98b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d98b8:
    // 0x3d98b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d98b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d98bc:
    // 0x3d98bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d98bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d98c0:
    // 0x3d98c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d98c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d98c4:
    // 0x3d98c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d98c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d98c8:
    // 0x3d98c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d98c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d98cc:
    // 0x3d98cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d98d0:
    // 0x3d98d0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d98d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d98d4:
    // 0x3d98d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d98d8:
    // 0x3d98d8: 0x40f809  jalr        $v0
label_3d98dc:
    if (ctx->pc == 0x3D98DCu) {
        ctx->pc = 0x3D98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98D8u;
        // 0x3d98dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D98E0u;
        goto label_3d98e0;
    }
    ctx->pc = 0x3D98D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D98E0u);
        ctx->pc = 0x3D98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98D8u;
        // 0x3d98dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D98D8u, 0x3D98E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D98E0u;
label_3d98e0:
    // 0x3d98e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d98e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d98e4:
    // 0x3d98e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d98e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d98e8:
    // 0x3d98e8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3d98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3d98ec:
    // 0x3d98ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d98ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d98f0:
    // 0x3d98f0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d98f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d98f4:
    // 0x3d98f4: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3d98f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3d98f8:
    // 0x3d98f8: 0xc0ea14c  jal         func_3A8530
label_3d98fc:
    if (ctx->pc == 0x3D98FCu) {
        ctx->pc = 0x3D98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98F8u;
        // 0x3d98fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9900u;
        goto label_3d9900;
    }
    ctx->pc = 0x3D98F8u;
    SET_GPR_U32(ctx, 31, 0x3D9900u);
    ctx->pc = 0x3D98FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D98F8u;
    // 0x3d98fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D98F8u, 0x3D9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9900u;
label_3d9900:
    // 0x3d9900: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9904:
    // 0x3d9904: 0xc0ea12a  jal         func_3A84A8
label_3d9908:
    if (ctx->pc == 0x3D9908u) {
        ctx->pc = 0x3D9908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9904u;
        // 0x3d9908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D990Cu;
        goto label_3d990c;
    }
    ctx->pc = 0x3D9904u;
    SET_GPR_U32(ctx, 31, 0x3D990Cu);
    ctx->pc = 0x3D9908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9904u;
    // 0x3d9908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9904u, 0x3D990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D990Cu;
label_3d990c:
    // 0x3d990c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d990cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9910:
    // 0x3d9910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d9910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9914:
    // 0x3d9914: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d9914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9918:
    // 0x3d9918: 0xc0ea12a  jal         func_3A84A8
label_3d991c:
    if (ctx->pc == 0x3D991Cu) {
        ctx->pc = 0x3D991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9918u;
        // 0x3d991c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9920u;
        goto label_3d9920;
    }
    ctx->pc = 0x3D9918u;
    SET_GPR_U32(ctx, 31, 0x3D9920u);
    ctx->pc = 0x3D991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9918u;
    // 0x3d991c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9918u, 0x3D9920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9920u;
label_3d9920:
    // 0x3d9920: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9924:
    // 0x3d9924: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x3d9924u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9928:
    // 0x3d9928: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x3d9928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_3d992c:
    // 0x3d992c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3d992cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3d9930:
    // 0x3d9930: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d9930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d9934:
    // 0x3d9934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9938:
    // 0x3d9938: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3d9938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_3d993c:
    // 0x3d993c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d993cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d9940:
    // 0x3d9940: 0xc0e858c  jal         func_3A1630
label_3d9944:
    if (ctx->pc == 0x3D9944u) {
        ctx->pc = 0x3D9944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9940u;
        // 0x3d9944: 0x8cc54588  lw          $a1, 0x4588($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9948u;
        goto label_3d9948;
    }
    ctx->pc = 0x3D9940u;
    SET_GPR_U32(ctx, 31, 0x3D9948u);
    ctx->pc = 0x3D9944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9940u;
    // 0x3d9944: 0x8cc54588  lw          $a1, 0x4588($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9940u, 0x3D9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9948u;
label_3d9948:
    // 0x3d9948: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3d9948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3d994c:
    // 0x3d994c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3d994cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3d9950:
    // 0x3d9950: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d9950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d9954:
    // 0x3d9954: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3d9954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3d9958:
    // 0x3d9958: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3d9958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3d995c:
    // 0x3d995c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d995cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d9960:
    // 0x3d9960: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d9960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d9964:
    // 0x3d9964: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d9964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d9968:
    // 0x3d9968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d9968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d996c:
    // 0x3d996c: 0x3e00008  jr          $ra
label_3d9970:
    if (ctx->pc == 0x3D9970u) {
        ctx->pc = 0x3D9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D996Cu;
        // 0x3d9970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9974u;
        goto label_3d9974;
    }
    ctx->pc = 0x3D996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D996Cu;
        // 0x3d9970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9974u;
label_3d9974:
    // 0x3d9974: 0x0  nop
    ctx->pc = 0x3d9974u;
    // NOP
    ctx->pc = 0x3d9978u;
}
