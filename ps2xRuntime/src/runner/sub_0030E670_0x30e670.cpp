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

// Function: sub_0030E670
// Address: 0x30e670 - 0x30e998
void sub_0030E670_0x30e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E670_0x30e670");
#endif

    switch (ctx->pc) {
        case 0x30e670u: goto label_30e670;
        case 0x30e674u: goto label_30e674;
        case 0x30e678u: goto label_30e678;
        case 0x30e67cu: goto label_30e67c;
        case 0x30e680u: goto label_30e680;
        case 0x30e684u: goto label_30e684;
        case 0x30e688u: goto label_30e688;
        case 0x30e68cu: goto label_30e68c;
        case 0x30e690u: goto label_30e690;
        case 0x30e694u: goto label_30e694;
        case 0x30e698u: goto label_30e698;
        case 0x30e69cu: goto label_30e69c;
        case 0x30e6a0u: goto label_30e6a0;
        case 0x30e6a4u: goto label_30e6a4;
        case 0x30e6a8u: goto label_30e6a8;
        case 0x30e6acu: goto label_30e6ac;
        case 0x30e6b0u: goto label_30e6b0;
        case 0x30e6b4u: goto label_30e6b4;
        case 0x30e6b8u: goto label_30e6b8;
        case 0x30e6bcu: goto label_30e6bc;
        case 0x30e6c0u: goto label_30e6c0;
        case 0x30e6c4u: goto label_30e6c4;
        case 0x30e6c8u: goto label_30e6c8;
        case 0x30e6ccu: goto label_30e6cc;
        case 0x30e6d0u: goto label_30e6d0;
        case 0x30e6d4u: goto label_30e6d4;
        case 0x30e6d8u: goto label_30e6d8;
        case 0x30e6dcu: goto label_30e6dc;
        case 0x30e6e0u: goto label_30e6e0;
        case 0x30e6e4u: goto label_30e6e4;
        case 0x30e6e8u: goto label_30e6e8;
        case 0x30e6ecu: goto label_30e6ec;
        case 0x30e6f0u: goto label_30e6f0;
        case 0x30e6f4u: goto label_30e6f4;
        case 0x30e6f8u: goto label_30e6f8;
        case 0x30e6fcu: goto label_30e6fc;
        case 0x30e700u: goto label_30e700;
        case 0x30e704u: goto label_30e704;
        case 0x30e708u: goto label_30e708;
        case 0x30e70cu: goto label_30e70c;
        case 0x30e710u: goto label_30e710;
        case 0x30e714u: goto label_30e714;
        case 0x30e718u: goto label_30e718;
        case 0x30e71cu: goto label_30e71c;
        case 0x30e720u: goto label_30e720;
        case 0x30e724u: goto label_30e724;
        case 0x30e728u: goto label_30e728;
        case 0x30e72cu: goto label_30e72c;
        case 0x30e730u: goto label_30e730;
        case 0x30e734u: goto label_30e734;
        case 0x30e738u: goto label_30e738;
        case 0x30e73cu: goto label_30e73c;
        case 0x30e740u: goto label_30e740;
        case 0x30e744u: goto label_30e744;
        case 0x30e748u: goto label_30e748;
        case 0x30e74cu: goto label_30e74c;
        case 0x30e750u: goto label_30e750;
        case 0x30e754u: goto label_30e754;
        case 0x30e758u: goto label_30e758;
        case 0x30e75cu: goto label_30e75c;
        case 0x30e760u: goto label_30e760;
        case 0x30e764u: goto label_30e764;
        case 0x30e768u: goto label_30e768;
        case 0x30e76cu: goto label_30e76c;
        case 0x30e770u: goto label_30e770;
        case 0x30e774u: goto label_30e774;
        case 0x30e778u: goto label_30e778;
        case 0x30e77cu: goto label_30e77c;
        case 0x30e780u: goto label_30e780;
        case 0x30e784u: goto label_30e784;
        case 0x30e788u: goto label_30e788;
        case 0x30e78cu: goto label_30e78c;
        case 0x30e790u: goto label_30e790;
        case 0x30e794u: goto label_30e794;
        case 0x30e798u: goto label_30e798;
        case 0x30e79cu: goto label_30e79c;
        case 0x30e7a0u: goto label_30e7a0;
        case 0x30e7a4u: goto label_30e7a4;
        case 0x30e7a8u: goto label_30e7a8;
        case 0x30e7acu: goto label_30e7ac;
        case 0x30e7b0u: goto label_30e7b0;
        case 0x30e7b4u: goto label_30e7b4;
        case 0x30e7b8u: goto label_30e7b8;
        case 0x30e7bcu: goto label_30e7bc;
        case 0x30e7c0u: goto label_30e7c0;
        case 0x30e7c4u: goto label_30e7c4;
        case 0x30e7c8u: goto label_30e7c8;
        case 0x30e7ccu: goto label_30e7cc;
        case 0x30e7d0u: goto label_30e7d0;
        case 0x30e7d4u: goto label_30e7d4;
        case 0x30e7d8u: goto label_30e7d8;
        case 0x30e7dcu: goto label_30e7dc;
        case 0x30e7e0u: goto label_30e7e0;
        case 0x30e7e4u: goto label_30e7e4;
        case 0x30e7e8u: goto label_30e7e8;
        case 0x30e7ecu: goto label_30e7ec;
        case 0x30e7f0u: goto label_30e7f0;
        case 0x30e7f4u: goto label_30e7f4;
        case 0x30e7f8u: goto label_30e7f8;
        case 0x30e7fcu: goto label_30e7fc;
        case 0x30e800u: goto label_30e800;
        case 0x30e804u: goto label_30e804;
        case 0x30e808u: goto label_30e808;
        case 0x30e80cu: goto label_30e80c;
        case 0x30e810u: goto label_30e810;
        case 0x30e814u: goto label_30e814;
        case 0x30e818u: goto label_30e818;
        case 0x30e81cu: goto label_30e81c;
        case 0x30e820u: goto label_30e820;
        case 0x30e824u: goto label_30e824;
        case 0x30e828u: goto label_30e828;
        case 0x30e82cu: goto label_30e82c;
        case 0x30e830u: goto label_30e830;
        case 0x30e834u: goto label_30e834;
        case 0x30e838u: goto label_30e838;
        case 0x30e83cu: goto label_30e83c;
        case 0x30e840u: goto label_30e840;
        case 0x30e844u: goto label_30e844;
        case 0x30e848u: goto label_30e848;
        case 0x30e84cu: goto label_30e84c;
        case 0x30e850u: goto label_30e850;
        case 0x30e854u: goto label_30e854;
        case 0x30e858u: goto label_30e858;
        case 0x30e85cu: goto label_30e85c;
        case 0x30e860u: goto label_30e860;
        case 0x30e864u: goto label_30e864;
        case 0x30e868u: goto label_30e868;
        case 0x30e86cu: goto label_30e86c;
        case 0x30e870u: goto label_30e870;
        case 0x30e874u: goto label_30e874;
        case 0x30e878u: goto label_30e878;
        case 0x30e87cu: goto label_30e87c;
        case 0x30e880u: goto label_30e880;
        case 0x30e884u: goto label_30e884;
        case 0x30e888u: goto label_30e888;
        case 0x30e88cu: goto label_30e88c;
        case 0x30e890u: goto label_30e890;
        case 0x30e894u: goto label_30e894;
        case 0x30e898u: goto label_30e898;
        case 0x30e89cu: goto label_30e89c;
        case 0x30e8a0u: goto label_30e8a0;
        case 0x30e8a4u: goto label_30e8a4;
        case 0x30e8a8u: goto label_30e8a8;
        case 0x30e8acu: goto label_30e8ac;
        case 0x30e8b0u: goto label_30e8b0;
        case 0x30e8b4u: goto label_30e8b4;
        case 0x30e8b8u: goto label_30e8b8;
        case 0x30e8bcu: goto label_30e8bc;
        case 0x30e8c0u: goto label_30e8c0;
        case 0x30e8c4u: goto label_30e8c4;
        case 0x30e8c8u: goto label_30e8c8;
        case 0x30e8ccu: goto label_30e8cc;
        case 0x30e8d0u: goto label_30e8d0;
        case 0x30e8d4u: goto label_30e8d4;
        case 0x30e8d8u: goto label_30e8d8;
        case 0x30e8dcu: goto label_30e8dc;
        case 0x30e8e0u: goto label_30e8e0;
        case 0x30e8e4u: goto label_30e8e4;
        case 0x30e8e8u: goto label_30e8e8;
        case 0x30e8ecu: goto label_30e8ec;
        case 0x30e8f0u: goto label_30e8f0;
        case 0x30e8f4u: goto label_30e8f4;
        case 0x30e8f8u: goto label_30e8f8;
        case 0x30e8fcu: goto label_30e8fc;
        case 0x30e900u: goto label_30e900;
        case 0x30e904u: goto label_30e904;
        case 0x30e908u: goto label_30e908;
        case 0x30e90cu: goto label_30e90c;
        case 0x30e910u: goto label_30e910;
        case 0x30e914u: goto label_30e914;
        case 0x30e918u: goto label_30e918;
        case 0x30e91cu: goto label_30e91c;
        case 0x30e920u: goto label_30e920;
        case 0x30e924u: goto label_30e924;
        case 0x30e928u: goto label_30e928;
        case 0x30e92cu: goto label_30e92c;
        case 0x30e930u: goto label_30e930;
        case 0x30e934u: goto label_30e934;
        case 0x30e938u: goto label_30e938;
        case 0x30e93cu: goto label_30e93c;
        case 0x30e940u: goto label_30e940;
        case 0x30e944u: goto label_30e944;
        case 0x30e948u: goto label_30e948;
        case 0x30e94cu: goto label_30e94c;
        case 0x30e950u: goto label_30e950;
        case 0x30e954u: goto label_30e954;
        case 0x30e958u: goto label_30e958;
        case 0x30e95cu: goto label_30e95c;
        case 0x30e960u: goto label_30e960;
        case 0x30e964u: goto label_30e964;
        case 0x30e968u: goto label_30e968;
        case 0x30e96cu: goto label_30e96c;
        case 0x30e970u: goto label_30e970;
        case 0x30e974u: goto label_30e974;
        case 0x30e978u: goto label_30e978;
        case 0x30e97cu: goto label_30e97c;
        case 0x30e980u: goto label_30e980;
        case 0x30e984u: goto label_30e984;
        case 0x30e988u: goto label_30e988;
        case 0x30e98cu: goto label_30e98c;
        case 0x30e990u: goto label_30e990;
        case 0x30e994u: goto label_30e994;
        default: break;
    }

    ctx->pc = 0x30e670u;

label_30e670:
    // 0x30e670: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_30e674:
    // 0x30e674: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30e674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_30e678:
    // 0x30e678: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_30e67c:
    // 0x30e67c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
label_30e680:
    // 0x30e680: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30e680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e684:
    // 0x30e684: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x30e684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_30e688:
    // 0x30e688: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x30e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_30e68c:
    // 0x30e68c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30e68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_30e690:
    // 0x30e690: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30e690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_30e694:
    // 0x30e694: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30e694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_30e698:
    // 0x30e698: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30e698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_30e69c:
    // 0x30e69c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30e69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_30e6a0:
    // 0x30e6a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30e6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30e6a4:
    // 0x30e6a4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30e6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_30e6a8:
    // 0x30e6a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x30e6a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_30e6ac:
    // 0x30e6ac: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30e6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_30e6b0:
    // 0x30e6b0: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x30e6b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_30e6b4:
    // 0x30e6b4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_30e6b8:
    // 0x30e6b8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x30e6b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_30e6bc:
    // 0x30e6bc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30e6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_30e6c0:
    // 0x30e6c0: 0x26970038  addiu       $s7, $s4, 0x38
    ctx->pc = 0x30e6c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_30e6c4:
    // 0x30e6c4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x30e6c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_30e6c8:
    // 0x30e6c8: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x30e6c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30e6cc:
    // 0x30e6cc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x30e6ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_30e6d0:
    // 0x30e6d0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30e6d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_30e6d4:
    // 0x30e6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30e6d8:
    // 0x30e6d8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30e6d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_30e6dc:
    // 0x30e6dc: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x30e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_30e6e0:
    // 0x30e6e0: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x30e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_30e6e4:
    // 0x30e6e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x30e6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e6e8:
    // 0x30e6e8: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x30e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_30e6ec:
    // 0x30e6ec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x30e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_30e6f0:
    // 0x30e6f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30e6f4:
    // 0x30e6f4: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x30e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_30e6f8:
    // 0x30e6f8: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x30e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_30e6fc:
    // 0x30e6fc: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x30e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_30e700:
    // 0x30e700: 0xa2800018  sb          $zero, 0x18($s4)
    ctx->pc = 0x30e700u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 0));
label_30e704:
    // 0x30e704: 0xc0c1a3e  jal         func_3068F8
label_30e708:
    if (ctx->pc == 0x30E708u) {
        ctx->pc = 0x30E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E704u;
        // 0x30e708: 0x8fb000d0  lw          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E70Cu;
        goto label_30e70c;
    }
    ctx->pc = 0x30E704u;
    SET_GPR_U32(ctx, 31, 0x30E70Cu);
    ctx->pc = 0x30E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E704u;
    // 0x30e708: 0x8fb000d0  lw          $s0, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30E704u, 0x30E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E70Cu;
label_30e70c:
    // 0x30e70c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_30e710:
    // 0x30e710: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30e714:
    // 0x30e714: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x30e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
label_30e718:
    // 0x30e718: 0xae920020  sw          $s2, 0x20($s4)
    ctx->pc = 0x30e718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 18));
label_30e71c:
    // 0x30e71c: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x30e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_30e720:
    // 0x30e720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e724:
    // 0x30e724: 0xe6940024  swc1        $f20, 0x24($s4)
    ctx->pc = 0x30e724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_30e728:
    // 0x30e728: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30e728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30e72c:
    // 0x30e72c: 0xe6950028  swc1        $f21, 0x28($s4)
    ctx->pc = 0x30e72cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_30e730:
    // 0x30e730: 0xa683004c  sh          $v1, 0x4C($s4)
    ctx->pc = 0x30e730u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 76), (uint16_t)GPR_U32(ctx, 3));
label_30e734:
    // 0x30e734: 0xa691004e  sh          $s1, 0x4E($s4)
    ctx->pc = 0x30e734u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 78), (uint16_t)GPR_U32(ctx, 17));
label_30e738:
    // 0x30e738: 0xa2930051  sb          $s3, 0x51($s4)
    ctx->pc = 0x30e738u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 81), (uint8_t)GPR_U32(ctx, 19));
label_30e73c:
    // 0x30e73c: 0xae900058  sw          $s0, 0x58($s4)
    ctx->pc = 0x30e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 16));
label_30e740:
    // 0x30e740: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x30e740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_30e744:
    // 0x30e744: 0xae800030  sw          $zero, 0x30($s4)
    ctx->pc = 0x30e744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 0));
label_30e748:
    // 0x30e748: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x30e748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
label_30e74c:
    // 0x30e74c: 0xa2800050  sb          $zero, 0x50($s4)
    ctx->pc = 0x30e74cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 0));
label_30e750:
    // 0x30e750: 0xa2800052  sb          $zero, 0x52($s4)
    ctx->pc = 0x30e750u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 82), (uint8_t)GPR_U32(ctx, 0));
label_30e754:
    // 0x30e754: 0xa2800053  sb          $zero, 0x53($s4)
    ctx->pc = 0x30e754u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 83), (uint8_t)GPR_U32(ctx, 0));
label_30e758:
    // 0x30e758: 0xa2800054  sb          $zero, 0x54($s4)
    ctx->pc = 0x30e758u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 0));
label_30e75c:
    // 0x30e75c: 0x0  nop
    ctx->pc = 0x30e75cu;
    // NOP
label_30e760:
    // 0x30e760: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x30e760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_30e764:
    // 0x30e764: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_30e768:
    // 0x30e768: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x30e768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_30e76c:
    // 0x30e76c: 0x0  nop
    ctx->pc = 0x30e76cu;
    // NOP
label_30e770:
    // 0x30e770: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_30e774:
    if (ctx->pc == 0x30E774u) {
        ctx->pc = 0x30E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E770u;
        // 0x30e774: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E778u;
        goto label_30e778;
    }
    ctx->pc = 0x30E770u;
    {
        const bool branch_taken_0x30e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E770u;
        // 0x30e774: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e770) {
            ctx->pc = 0x30E760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e760;
        }
    }
    ctx->pc = 0x30E778u;
label_30e778:
    // 0x30e778: 0x56a0000a  bnel        $s5, $zero, . + 4 + (0xA << 2)
label_30e77c:
    if (ctx->pc == 0x30E77Cu) {
        ctx->pc = 0x30E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E778u;
        // 0x30e77c: 0x82a20000  lb          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E780u;
        goto label_30e780;
    }
    ctx->pc = 0x30E778u;
    {
        const bool branch_taken_0x30e778 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e778) {
            ctx->pc = 0x30E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E778u;
            // 0x30e77c: 0x82a20000  lb          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E7A4u;
            goto label_30e7a4;
        }
    }
    ctx->pc = 0x30E780u;
label_30e780:
    // 0x30e780: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_30e784:
    if (ctx->pc == 0x30E784u) {
        ctx->pc = 0x30E788u;
        goto label_30e788;
    }
    ctx->pc = 0x30E780u;
    {
        const bool branch_taken_0x30e780 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e780) {
            ctx->pc = 0x30E798u;
            goto label_30e798;
        }
    }
    ctx->pc = 0x30E788u;
label_30e788:
    // 0x30e788: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
label_30e78c:
    if (ctx->pc == 0x30E78Cu) {
        ctx->pc = 0x30E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E788u;
        // 0x30e78c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E790u;
        goto label_30e790;
    }
    ctx->pc = 0x30E788u;
    {
        const bool branch_taken_0x30e788 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E788u;
        // 0x30e78c: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e788) {
            ctx->pc = 0x30E798u;
            goto label_30e798;
        }
    }
    ctx->pc = 0x30E790u;
label_30e790:
    // 0x30e790: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_30e794:
    if (ctx->pc == 0x30E794u) {
        ctx->pc = 0x30E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E790u;
        // 0x30e794: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E798u;
        goto label_30e798;
    }
    ctx->pc = 0x30E790u;
    {
        const bool branch_taken_0x30e790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E790u;
        // 0x30e794: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e790) {
            ctx->pc = 0x30E8D0u;
            goto label_30e8d0;
        }
    }
    ctx->pc = 0x30E798u;
label_30e798:
    // 0x30e798: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_30e79c:
    if (ctx->pc == 0x30E79Cu) {
        ctx->pc = 0x30E7A0u;
        goto label_30e7a0;
    }
    ctx->pc = 0x30E798u;
    {
        const bool branch_taken_0x30e798 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e798) {
            ctx->pc = 0x30E7E4u;
            goto label_30e7e4;
        }
    }
    ctx->pc = 0x30E7A0u;
label_30e7a0:
    // 0x30e7a0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x30e7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_30e7a4:
    // 0x30e7a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_30e7a8:
    if (ctx->pc == 0x30E7A8u) {
        ctx->pc = 0x30E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7A4u;
        // 0x30e7a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7ACu;
        goto label_30e7ac;
    }
    ctx->pc = 0x30E7A4u;
    {
        const bool branch_taken_0x30e7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7A4u;
        // 0x30e7a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7a4) {
            ctx->pc = 0x30E7E4u;
            goto label_30e7e4;
        }
    }
    ctx->pc = 0x30E7ACu;
label_30e7ac:
    // 0x30e7ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30e7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30e7b0:
    // 0x30e7b0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x30e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_30e7b4:
    // 0x30e7b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30e7b8:
    // 0x30e7b8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x30e7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_30e7bc:
    // 0x30e7bc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x30e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_30e7c0:
    // 0x30e7c0: 0x40f809  jalr        $v0
label_30e7c4:
    if (ctx->pc == 0x30E7C4u) {
        ctx->pc = 0x30E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7C0u;
        // 0x30e7c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7C8u;
        goto label_30e7c8;
    }
    ctx->pc = 0x30E7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E7C8u);
        ctx->pc = 0x30E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7C0u;
        // 0x30e7c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E7C0u, 0x30E7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E7C8u;
label_30e7c8:
    // 0x30e7c8: 0x92830050  lbu         $v1, 0x50($s4)
    ctx->pc = 0x30e7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
label_30e7cc:
    // 0x30e7cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30e7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e7d0:
    // 0x30e7d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30e7d4:
    // 0x30e7d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e7d8:
    // 0x30e7d8: 0xa2830050  sb          $v1, 0x50($s4)
    ctx->pc = 0x30e7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 3));
label_30e7dc:
    // 0x30e7dc: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x30e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_30e7e0:
    // 0x30e7e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30e7e4:
    // 0x30e7e4: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
label_30e7e8:
    if (ctx->pc == 0x30E7E8u) {
        ctx->pc = 0x30E7ECu;
        goto label_30e7ec;
    }
    ctx->pc = 0x30E7E4u;
    {
        const bool branch_taken_0x30e7e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e7e4) {
            ctx->pc = 0x30E830u;
            goto label_30e830;
        }
    }
    ctx->pc = 0x30E7ECu;
label_30e7ec:
    // 0x30e7ec: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x30e7ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_30e7f0:
    // 0x30e7f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_30e7f4:
    if (ctx->pc == 0x30E7F4u) {
        ctx->pc = 0x30E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7F0u;
        // 0x30e7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E7F8u;
        goto label_30e7f8;
    }
    ctx->pc = 0x30E7F0u;
    {
        const bool branch_taken_0x30e7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E7F0u;
        // 0x30e7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e7f0) {
            ctx->pc = 0x30E830u;
            goto label_30e830;
        }
    }
    ctx->pc = 0x30E7F8u;
label_30e7f8:
    // 0x30e7f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30e7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30e7fc:
    // 0x30e7fc: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x30e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_30e800:
    // 0x30e800: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30e804:
    // 0x30e804: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x30e804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_30e808:
    // 0x30e808: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x30e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_30e80c:
    // 0x30e80c: 0x40f809  jalr        $v0
label_30e810:
    if (ctx->pc == 0x30E810u) {
        ctx->pc = 0x30E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E80Cu;
        // 0x30e810: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E814u;
        goto label_30e814;
    }
    ctx->pc = 0x30E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E814u);
        ctx->pc = 0x30E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E80Cu;
        // 0x30e810: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E80Cu, 0x30E814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E814u;
label_30e814:
    // 0x30e814: 0x92830050  lbu         $v1, 0x50($s4)
    ctx->pc = 0x30e814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
label_30e818:
    // 0x30e818: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30e818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e81c:
    // 0x30e81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30e820:
    // 0x30e820: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e824:
    // 0x30e824: 0xa2830050  sb          $v1, 0x50($s4)
    ctx->pc = 0x30e824u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 3));
label_30e828:
    // 0x30e828: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x30e828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_30e82c:
    // 0x30e82c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30e830:
    // 0x30e830: 0x13c00013  beqz        $fp, . + 4 + (0x13 << 2)
label_30e834:
    if (ctx->pc == 0x30E834u) {
        ctx->pc = 0x30E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E830u;
        // 0x30e834: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E838u;
        goto label_30e838;
    }
    ctx->pc = 0x30E830u;
    {
        const bool branch_taken_0x30e830 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E830u;
        // 0x30e834: 0x8fa300b0  lw          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e830) {
            ctx->pc = 0x30E880u;
            goto label_30e880;
        }
    }
    ctx->pc = 0x30E838u;
label_30e838:
    // 0x30e838: 0x83c20000  lb          $v0, 0x0($fp)
    ctx->pc = 0x30e838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_30e83c:
    // 0x30e83c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_30e840:
    if (ctx->pc == 0x30E840u) {
        ctx->pc = 0x30E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E83Cu;
        // 0x30e840: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E844u;
        goto label_30e844;
    }
    ctx->pc = 0x30E83Cu;
    {
        const bool branch_taken_0x30e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E83Cu;
        // 0x30e840: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e83c) {
            ctx->pc = 0x30E880u;
            goto label_30e880;
        }
    }
    ctx->pc = 0x30E844u;
label_30e844:
    // 0x30e844: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30e844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30e848:
    // 0x30e848: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x30e848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_30e84c:
    // 0x30e84c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30e850:
    // 0x30e850: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x30e850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_30e854:
    // 0x30e854: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x30e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_30e858:
    // 0x30e858: 0x40f809  jalr        $v0
label_30e85c:
    if (ctx->pc == 0x30E85Cu) {
        ctx->pc = 0x30E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E858u;
        // 0x30e85c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E860u;
        goto label_30e860;
    }
    ctx->pc = 0x30E858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E860u);
        ctx->pc = 0x30E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E858u;
        // 0x30e85c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E858u, 0x30E860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E860u;
label_30e860:
    // 0x30e860: 0x92830050  lbu         $v1, 0x50($s4)
    ctx->pc = 0x30e860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
label_30e864:
    // 0x30e864: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e868:
    // 0x30e868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30e86c:
    // 0x30e86c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e870:
    // 0x30e870: 0xa2830050  sb          $v1, 0x50($s4)
    ctx->pc = 0x30e870u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 3));
label_30e874:
    // 0x30e874: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x30e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_30e878:
    // 0x30e878: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x30e878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_30e87c:
    // 0x30e87c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x30e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_30e880:
    // 0x30e880: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_30e884:
    if (ctx->pc == 0x30E884u) {
        ctx->pc = 0x30E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E880u;
        // 0x30e884: 0x8fa200b8  lw          $v0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E888u;
        goto label_30e888;
    }
    ctx->pc = 0x30E880u;
    {
        const bool branch_taken_0x30e880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E880u;
        // 0x30e884: 0x8fa200b8  lw          $v0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e880) {
            ctx->pc = 0x30E908u;
            goto label_30e908;
        }
    }
    ctx->pc = 0x30E888u;
label_30e888:
    // 0x30e888: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x30e888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_30e88c:
    // 0x30e88c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_30e890:
    if (ctx->pc == 0x30E890u) {
        ctx->pc = 0x30E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E88Cu;
        // 0x30e890: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E894u;
        goto label_30e894;
    }
    ctx->pc = 0x30E88Cu;
    {
        const bool branch_taken_0x30e88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E88Cu;
        // 0x30e890: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e88c) {
            ctx->pc = 0x30E904u;
            goto label_30e904;
        }
    }
    ctx->pc = 0x30E894u;
label_30e894:
    // 0x30e894: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x30e894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e898:
    // 0x30e898: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_30e89c:
    // 0x30e89c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30e8a0:
    // 0x30e8a0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x30e8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_30e8a4:
    // 0x30e8a4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x30e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_30e8a8:
    // 0x30e8a8: 0x40f809  jalr        $v0
label_30e8ac:
    if (ctx->pc == 0x30E8ACu) {
        ctx->pc = 0x30E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8A8u;
        // 0x30e8ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8B0u;
        goto label_30e8b0;
    }
    ctx->pc = 0x30E8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E8B0u);
        ctx->pc = 0x30E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8A8u;
        // 0x30e8ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E8A8u, 0x30E8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E8B0u;
label_30e8b0:
    // 0x30e8b0: 0x92830050  lbu         $v1, 0x50($s4)
    ctx->pc = 0x30e8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
label_30e8b4:
    // 0x30e8b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e8b8:
    // 0x30e8b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30e8bc:
    // 0x30e8bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e8c0:
    // 0x30e8c0: 0xa2830050  sb          $v1, 0x50($s4)
    ctx->pc = 0x30e8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 3));
label_30e8c4:
    // 0x30e8c4: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x30e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_30e8c8:
    // 0x30e8c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_30e8cc:
    if (ctx->pc == 0x30E8CCu) {
        ctx->pc = 0x30E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8C8u;
        // 0x30e8cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8D0u;
        goto label_30e8d0;
    }
    ctx->pc = 0x30E8C8u;
    {
        const bool branch_taken_0x30e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8C8u;
        // 0x30e8cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8c8) {
            ctx->pc = 0x30E904u;
            goto label_30e904;
        }
    }
    ctx->pc = 0x30E8D0u;
label_30e8d0:
    // 0x30e8d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30e8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e8d4:
    // 0x30e8d4: 0x244513a8  addiu       $a1, $v0, 0x13A8
    ctx->pc = 0x30e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5032));
label_30e8d8:
    // 0x30e8d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30e8dc:
    // 0x30e8dc: 0x0  nop
    ctx->pc = 0x30e8dcu;
    // NOP
label_30e8e0:
    // 0x30e8e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30e8e4:
    // 0x30e8e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30e8e8:
    // 0x30e8e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_30e8ec:
    // 0x30e8ec: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x30e8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_30e8f0:
    // 0x30e8f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x30e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_30e8f4:
    // 0x30e8f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_30e8f8:
    if (ctx->pc == 0x30E8F8u) {
        ctx->pc = 0x30E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8F4u;
        // 0x30e8f8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E8FCu;
        goto label_30e8fc;
    }
    ctx->pc = 0x30E8F4u;
    {
        const bool branch_taken_0x30e8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E8F4u;
        // 0x30e8f8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8f4) {
            ctx->pc = 0x30E8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e8e0;
        }
    }
    ctx->pc = 0x30E8FCu;
label_30e8fc:
    // 0x30e8fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30e900:
    // 0x30e900: 0xa2820050  sb          $v0, 0x50($s4)
    ctx->pc = 0x30e900u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 2));
label_30e904:
    // 0x30e904: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x30e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_30e908:
    // 0x30e908: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_30e90c:
    if (ctx->pc == 0x30E90Cu) {
        ctx->pc = 0x30E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E908u;
        // 0x30e90c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E910u;
        goto label_30e910;
    }
    ctx->pc = 0x30E908u;
    {
        const bool branch_taken_0x30e908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e908) {
            ctx->pc = 0x30E90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E908u;
            // 0x30e90c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E960u;
            goto label_30e960;
        }
    }
    ctx->pc = 0x30E910u;
label_30e910:
    // 0x30e910: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x30e910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_30e914:
    // 0x30e914: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_30e918:
    if (ctx->pc == 0x30E918u) {
        ctx->pc = 0x30E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E914u;
        // 0x30e918: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E91Cu;
        goto label_30e91c;
    }
    ctx->pc = 0x30E914u;
    {
        const bool branch_taken_0x30e914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E914u;
        // 0x30e918: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e914) {
            ctx->pc = 0x30E95Cu;
            goto label_30e95c;
        }
    }
    ctx->pc = 0x30E91Cu;
label_30e91c:
    // 0x30e91c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x30e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_30e920:
    // 0x30e920: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x30e920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_30e924:
    // 0x30e924: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x30e924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_30e928:
    // 0x30e928: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x30e928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_30e92c:
    // 0x30e92c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x30e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_30e930:
    // 0x30e930: 0x40f809  jalr        $v0
label_30e934:
    if (ctx->pc == 0x30E934u) {
        ctx->pc = 0x30E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E930u;
        // 0x30e934: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E938u;
        goto label_30e938;
    }
    ctx->pc = 0x30E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30E938u);
        ctx->pc = 0x30E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E930u;
        // 0x30e934: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E930u, 0x30E938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30E938u;
label_30e938:
    // 0x30e938: 0x92840050  lbu         $a0, 0x50($s4)
    ctx->pc = 0x30e938u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
label_30e93c:
    // 0x30e93c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e940:
    // 0x30e940: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x30e940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30e944:
    // 0x30e944: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30e944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30e948:
    // 0x30e948: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30e948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30e94c:
    // 0x30e94c: 0xa2840050  sb          $a0, 0x50($s4)
    ctx->pc = 0x30e94cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 4));
label_30e950:
    // 0x30e950: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x30e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_30e954:
    // 0x30e954: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30e954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_30e958:
    // 0x30e958: 0xa2850054  sb          $a1, 0x54($s4)
    ctx->pc = 0x30e958u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 5));
label_30e95c:
    // 0x30e95c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x30e95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30e960:
    // 0x30e960: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30e960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30e964:
    // 0x30e964: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30e964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30e968:
    // 0x30e968: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30e968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30e96c:
    // 0x30e96c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30e96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30e970:
    // 0x30e970: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30e970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30e974:
    // 0x30e974: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30e974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30e978:
    // 0x30e978: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30e978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30e97c:
    // 0x30e97c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30e97cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30e980:
    // 0x30e980: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30e980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30e984:
    // 0x30e984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30e988:
    // 0x30e988: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x30e988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30e98c:
    // 0x30e98c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x30e98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30e990:
    // 0x30e990: 0x3e00008  jr          $ra
label_30e994:
    if (ctx->pc == 0x30E994u) {
        ctx->pc = 0x30E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E990u;
        // 0x30e994: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E998u;
        goto label_fallthrough_0x30e990;
    }
    ctx->pc = 0x30E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E990u;
        // 0x30e994: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30e990:
    ctx->pc = 0x30E998u;
}
