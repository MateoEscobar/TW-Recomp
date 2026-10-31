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

// Function: sub_0033A6F0
// Address: 0x33a6f0 - 0x33a7d0
void sub_0033A6F0_0x33a6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A6F0_0x33a6f0");
#endif

    switch (ctx->pc) {
        case 0x33a6f0u: goto label_33a6f0;
        case 0x33a6f4u: goto label_33a6f4;
        case 0x33a6f8u: goto label_33a6f8;
        case 0x33a6fcu: goto label_33a6fc;
        case 0x33a700u: goto label_33a700;
        case 0x33a704u: goto label_33a704;
        case 0x33a708u: goto label_33a708;
        case 0x33a70cu: goto label_33a70c;
        case 0x33a710u: goto label_33a710;
        case 0x33a714u: goto label_33a714;
        case 0x33a718u: goto label_33a718;
        case 0x33a71cu: goto label_33a71c;
        case 0x33a720u: goto label_33a720;
        case 0x33a724u: goto label_33a724;
        case 0x33a728u: goto label_33a728;
        case 0x33a72cu: goto label_33a72c;
        case 0x33a730u: goto label_33a730;
        case 0x33a734u: goto label_33a734;
        case 0x33a738u: goto label_33a738;
        case 0x33a73cu: goto label_33a73c;
        case 0x33a740u: goto label_33a740;
        case 0x33a744u: goto label_33a744;
        case 0x33a748u: goto label_33a748;
        case 0x33a74cu: goto label_33a74c;
        case 0x33a750u: goto label_33a750;
        case 0x33a754u: goto label_33a754;
        case 0x33a758u: goto label_33a758;
        case 0x33a75cu: goto label_33a75c;
        case 0x33a760u: goto label_33a760;
        case 0x33a764u: goto label_33a764;
        case 0x33a768u: goto label_33a768;
        case 0x33a76cu: goto label_33a76c;
        case 0x33a770u: goto label_33a770;
        case 0x33a774u: goto label_33a774;
        case 0x33a778u: goto label_33a778;
        case 0x33a77cu: goto label_33a77c;
        case 0x33a780u: goto label_33a780;
        case 0x33a784u: goto label_33a784;
        case 0x33a788u: goto label_33a788;
        case 0x33a78cu: goto label_33a78c;
        case 0x33a790u: goto label_33a790;
        case 0x33a794u: goto label_33a794;
        case 0x33a798u: goto label_33a798;
        case 0x33a79cu: goto label_33a79c;
        case 0x33a7a0u: goto label_33a7a0;
        case 0x33a7a4u: goto label_33a7a4;
        case 0x33a7a8u: goto label_33a7a8;
        case 0x33a7acu: goto label_33a7ac;
        case 0x33a7b0u: goto label_33a7b0;
        case 0x33a7b4u: goto label_33a7b4;
        case 0x33a7b8u: goto label_33a7b8;
        case 0x33a7bcu: goto label_33a7bc;
        case 0x33a7c0u: goto label_33a7c0;
        case 0x33a7c4u: goto label_33a7c4;
        case 0x33a7c8u: goto label_33a7c8;
        case 0x33a7ccu: goto label_33a7cc;
        default: break;
    }

    ctx->pc = 0x33a6f0u;

label_33a6f0:
    // 0x33a6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33a6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33a6f4:
    // 0x33a6f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x33a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_33a6f8:
    // 0x33a6f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x33a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_33a6fc:
    // 0x33a6fc: 0x244245f8  addiu       $v0, $v0, 0x45F8
    ctx->pc = 0x33a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17912));
label_33a700:
    // 0x33a700: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x33a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_33a704:
    // 0x33a704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a708:
    // 0x33a708: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33a70c:
    // 0x33a70c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_33a710:
    // 0x33a710: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x33a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_33a714:
    // 0x33a714: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x33a714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_33a718:
    // 0x33a718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33a71c:
    // 0x33a71c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33a71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33a720:
    // 0x33a720: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33a720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_33a724:
    // 0x33a724: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33a724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a728:
    // 0x33a728: 0x8c6227e4  lw          $v0, 0x27E4($v1)
    ctx->pc = 0x33a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_33a72c:
    // 0x33a72c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x33a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_33a730:
    // 0x33a730: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33a730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_33a734:
    // 0x33a734: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x33a734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_33a738:
    // 0x33a738: 0x3c0a0057  lui         $t2, 0x57
    ctx->pc = 0x33a738u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
label_33a73c:
    // 0x33a73c: 0x25086ea0  addiu       $t0, $t0, 0x6EA0
    ctx->pc = 0x33a73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28320));
label_33a740:
    // 0x33a740: 0x8c4c000c  lw          $t4, 0xC($v0)
    ctx->pc = 0x33a740u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_33a744:
    // 0x33a744: 0x254a6ef0  addiu       $t2, $t2, 0x6EF0
    ctx->pc = 0x33a744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28400));
label_33a748:
    // 0x33a748: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x33a748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_33a74c:
    // 0x33a74c: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x33a74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_33a750:
    // 0x33a750: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x33a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_33a754:
    // 0x33a754: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33a754u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a758:
    // 0x33a758: 0x24a56ee8  addiu       $a1, $a1, 0x6EE8
    ctx->pc = 0x33a758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28392));
label_33a75c:
    // 0x33a75c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x33a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_33a760:
    // 0x33a760: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33a760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33a764:
    // 0x33a764: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33a768:
    // 0x33a768: 0x40f809  jalr        $v0
label_33a76c:
    if (ctx->pc == 0x33A76Cu) {
        ctx->pc = 0x33A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A768u;
        // 0x33a76c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A770u;
        goto label_33a770;
    }
    ctx->pc = 0x33A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A770u);
        ctx->pc = 0x33A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A768u;
        // 0x33a76c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A768u, 0x33A770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A770u;
label_33a770:
    // 0x33a770: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33a770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33a774:
    // 0x33a774: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33a774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a778:
    // 0x33a778: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x33a778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_33a77c:
    // 0x33a77c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33a77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a780:
    // 0x33a780: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x33a780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_33a784:
    // 0x33a784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33a784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a788:
    // 0x33a788: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33a788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_33a78c:
    // 0x33a78c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a790:
    // 0x33a790: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33a790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_33a794:
    // 0x33a794: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a798:
    // 0x33a798: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x33a798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_33a79c:
    // 0x33a79c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33a7a0:
    // 0x33a7a0: 0xc0ce1b6  jal         func_3386D8
label_33a7a4:
    if (ctx->pc == 0x33A7A4u) {
        ctx->pc = 0x33A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7A0u;
        // 0x33a7a4: 0xac63000c  sw          $v1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7A8u;
        goto label_33a7a8;
    }
    ctx->pc = 0x33A7A0u;
    SET_GPR_U32(ctx, 31, 0x33A7A8u);
    ctx->pc = 0x33A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A7A0u;
    // 0x33a7a4: 0xac63000c  sw          $v1, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3386D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3386D8u, 0x33A7A0u, 0x33A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A7A8u;
label_33a7a8:
    // 0x33a7a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33a7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a7ac:
    // 0x33a7ac: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x33a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_33a7b0:
    // 0x33a7b0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x33a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_33a7b4:
    // 0x33a7b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x33a7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33a7b8:
    // 0x33a7b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x33a7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33a7bc:
    // 0x33a7bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33a7bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33a7c0:
    // 0x33a7c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x33a7c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33a7c4:
    // 0x33a7c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33a7c8:
    // 0x33a7c8: 0x3e00008  jr          $ra
label_33a7cc:
    if (ctx->pc == 0x33A7CCu) {
        ctx->pc = 0x33A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7C8u;
        // 0x33a7cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7D0u;
        goto label_fallthrough_0x33a7c8;
    }
    ctx->pc = 0x33A7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7C8u;
        // 0x33a7cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33a7c8:
    ctx->pc = 0x33A7D0u;
}
