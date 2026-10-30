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

// Function: sub_003D85F0
// Address: 0x3d85f0 - 0x3d8698
void sub_003D85F0_0x3d85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D85F0_0x3d85f0");
#endif

    switch (ctx->pc) {
        case 0x3d85f0u: goto label_3d85f0;
        case 0x3d85f4u: goto label_3d85f4;
        case 0x3d85f8u: goto label_3d85f8;
        case 0x3d85fcu: goto label_3d85fc;
        case 0x3d8600u: goto label_3d8600;
        case 0x3d8604u: goto label_3d8604;
        case 0x3d8608u: goto label_3d8608;
        case 0x3d860cu: goto label_3d860c;
        case 0x3d8610u: goto label_3d8610;
        case 0x3d8614u: goto label_3d8614;
        case 0x3d8618u: goto label_3d8618;
        case 0x3d861cu: goto label_3d861c;
        case 0x3d8620u: goto label_3d8620;
        case 0x3d8624u: goto label_3d8624;
        case 0x3d8628u: goto label_3d8628;
        case 0x3d862cu: goto label_3d862c;
        case 0x3d8630u: goto label_3d8630;
        case 0x3d8634u: goto label_3d8634;
        case 0x3d8638u: goto label_3d8638;
        case 0x3d863cu: goto label_3d863c;
        case 0x3d8640u: goto label_3d8640;
        case 0x3d8644u: goto label_3d8644;
        case 0x3d8648u: goto label_3d8648;
        case 0x3d864cu: goto label_3d864c;
        case 0x3d8650u: goto label_3d8650;
        case 0x3d8654u: goto label_3d8654;
        case 0x3d8658u: goto label_3d8658;
        case 0x3d865cu: goto label_3d865c;
        case 0x3d8660u: goto label_3d8660;
        case 0x3d8664u: goto label_3d8664;
        case 0x3d8668u: goto label_3d8668;
        case 0x3d866cu: goto label_3d866c;
        case 0x3d8670u: goto label_3d8670;
        case 0x3d8674u: goto label_3d8674;
        case 0x3d8678u: goto label_3d8678;
        case 0x3d867cu: goto label_3d867c;
        case 0x3d8680u: goto label_3d8680;
        case 0x3d8684u: goto label_3d8684;
        case 0x3d8688u: goto label_3d8688;
        case 0x3d868cu: goto label_3d868c;
        case 0x3d8690u: goto label_3d8690;
        case 0x3d8694u: goto label_3d8694;
        default: break;
    }

    ctx->pc = 0x3d85f0u;

label_3d85f0:
    // 0x3d85f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d85f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d85f4:
    // 0x3d85f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d85f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d85f8:
    // 0x3d85f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d85fc:
    // 0x3d85fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d85fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8600:
    // 0x3d8600: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d8604:
    // 0x3d8604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d8604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8608:
    // 0x3d8608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d860c:
    // 0x3d860c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d8610:
    // 0x3d8610: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8614:
    // 0x3d8614: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8618:
    // 0x3d8618: 0x40f809  jalr        $v0
label_3d861c:
    if (ctx->pc == 0x3D861Cu) {
        ctx->pc = 0x3D861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8618u;
        // 0x3d861c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8620u;
        goto label_3d8620;
    }
    ctx->pc = 0x3D8618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8620u);
        ctx->pc = 0x3D861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8618u;
        // 0x3d861c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8618u, 0x3D8620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8620u;
label_3d8620:
    // 0x3d8620: 0x24030480  addiu       $v1, $zero, 0x480
    ctx->pc = 0x3d8620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_3d8624:
    // 0x3d8624: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d8624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8628:
    // 0x3d8628: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d8628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d862c:
    // 0x3d862c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8630:
    // 0x3d8630: 0xc0ea12a  jal         func_3A84A8
label_3d8634:
    if (ctx->pc == 0x3D8634u) {
        ctx->pc = 0x3D8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8630u;
        // 0x3d8634: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8638u;
        goto label_3d8638;
    }
    ctx->pc = 0x3D8630u;
    SET_GPR_U32(ctx, 31, 0x3D8638u);
    ctx->pc = 0x3D8634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8630u;
    // 0x3d8634: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8630u, 0x3D8638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8638u;
label_3d8638:
    // 0x3d8638: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d8638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d863c:
    // 0x3d863c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8640:
    // 0x3d8640: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d8640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8644:
    // 0x3d8644: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d8644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d8648:
    // 0x3d8648: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3d8648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d864c:
    // 0x3d864c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d864cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d8650:
    // 0x3d8650: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d8650u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d8654:
    // 0x3d8654: 0xc0e858c  jal         func_3A1630
label_3d8658:
    if (ctx->pc == 0x3D8658u) {
        ctx->pc = 0x3D8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8654u;
        // 0x3d8658: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D865Cu;
        goto label_3d865c;
    }
    ctx->pc = 0x3D8654u;
    SET_GPR_U32(ctx, 31, 0x3D865Cu);
    ctx->pc = 0x3D8658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8654u;
    // 0x3d8658: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8654u, 0x3D865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D865Cu;
label_3d865c:
    // 0x3d865c: 0x3c0227c5  lui         $v0, 0x27C5
    ctx->pc = 0x3d865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10181 << 16));
label_3d8660:
    // 0x3d8660: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d8660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d8664:
    // 0x3d8664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8668:
    // 0x3d8668: 0x344284e4  ori         $v0, $v0, 0x84E4
    ctx->pc = 0x3d8668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34020);
label_3d866c:
    // 0x3d866c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d866cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8670:
    // 0x3d8670: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d8670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d8674:
    // 0x3d8674: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3d8674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3d8678:
    // 0x3d8678: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3d8678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3d867c:
    // 0x3d867c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3d867cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3d8680:
    // 0x3d8680: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3d8680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3d8684:
    // 0x3d8684: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d8684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d8688:
    // 0x3d8688: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d8688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d868c:
    // 0x3d868c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d868cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8690:
    // 0x3d8690: 0x3e00008  jr          $ra
label_3d8694:
    if (ctx->pc == 0x3D8694u) {
        ctx->pc = 0x3D8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8690u;
        // 0x3d8694: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8698u;
        goto label_fallthrough_0x3d8690;
    }
    ctx->pc = 0x3D8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8690u;
        // 0x3d8694: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d8690:
    ctx->pc = 0x3D8698u;
}
