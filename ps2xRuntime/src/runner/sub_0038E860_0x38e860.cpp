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

// Function: sub_0038E860
// Address: 0x38e860 - 0x38ebd0
void sub_0038E860_0x38e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E860_0x38e860");
#endif

    switch (ctx->pc) {
        case 0x38e860u: goto label_38e860;
        case 0x38e864u: goto label_38e864;
        case 0x38e868u: goto label_38e868;
        case 0x38e86cu: goto label_38e86c;
        case 0x38e870u: goto label_38e870;
        case 0x38e874u: goto label_38e874;
        case 0x38e878u: goto label_38e878;
        case 0x38e87cu: goto label_38e87c;
        case 0x38e880u: goto label_38e880;
        case 0x38e884u: goto label_38e884;
        case 0x38e888u: goto label_38e888;
        case 0x38e88cu: goto label_38e88c;
        case 0x38e890u: goto label_38e890;
        case 0x38e894u: goto label_38e894;
        case 0x38e898u: goto label_38e898;
        case 0x38e89cu: goto label_38e89c;
        case 0x38e8a0u: goto label_38e8a0;
        case 0x38e8a4u: goto label_38e8a4;
        case 0x38e8a8u: goto label_38e8a8;
        case 0x38e8acu: goto label_38e8ac;
        case 0x38e8b0u: goto label_38e8b0;
        case 0x38e8b4u: goto label_38e8b4;
        case 0x38e8b8u: goto label_38e8b8;
        case 0x38e8bcu: goto label_38e8bc;
        case 0x38e8c0u: goto label_38e8c0;
        case 0x38e8c4u: goto label_38e8c4;
        case 0x38e8c8u: goto label_38e8c8;
        case 0x38e8ccu: goto label_38e8cc;
        case 0x38e8d0u: goto label_38e8d0;
        case 0x38e8d4u: goto label_38e8d4;
        case 0x38e8d8u: goto label_38e8d8;
        case 0x38e8dcu: goto label_38e8dc;
        case 0x38e8e0u: goto label_38e8e0;
        case 0x38e8e4u: goto label_38e8e4;
        case 0x38e8e8u: goto label_38e8e8;
        case 0x38e8ecu: goto label_38e8ec;
        case 0x38e8f0u: goto label_38e8f0;
        case 0x38e8f4u: goto label_38e8f4;
        case 0x38e8f8u: goto label_38e8f8;
        case 0x38e8fcu: goto label_38e8fc;
        case 0x38e900u: goto label_38e900;
        case 0x38e904u: goto label_38e904;
        case 0x38e908u: goto label_38e908;
        case 0x38e90cu: goto label_38e90c;
        case 0x38e910u: goto label_38e910;
        case 0x38e914u: goto label_38e914;
        case 0x38e918u: goto label_38e918;
        case 0x38e91cu: goto label_38e91c;
        case 0x38e920u: goto label_38e920;
        case 0x38e924u: goto label_38e924;
        case 0x38e928u: goto label_38e928;
        case 0x38e92cu: goto label_38e92c;
        case 0x38e930u: goto label_38e930;
        case 0x38e934u: goto label_38e934;
        case 0x38e938u: goto label_38e938;
        case 0x38e93cu: goto label_38e93c;
        case 0x38e940u: goto label_38e940;
        case 0x38e944u: goto label_38e944;
        case 0x38e948u: goto label_38e948;
        case 0x38e94cu: goto label_38e94c;
        case 0x38e950u: goto label_38e950;
        case 0x38e954u: goto label_38e954;
        case 0x38e958u: goto label_38e958;
        case 0x38e95cu: goto label_38e95c;
        case 0x38e960u: goto label_38e960;
        case 0x38e964u: goto label_38e964;
        case 0x38e968u: goto label_38e968;
        case 0x38e96cu: goto label_38e96c;
        case 0x38e970u: goto label_38e970;
        case 0x38e974u: goto label_38e974;
        case 0x38e978u: goto label_38e978;
        case 0x38e97cu: goto label_38e97c;
        case 0x38e980u: goto label_38e980;
        case 0x38e984u: goto label_38e984;
        case 0x38e988u: goto label_38e988;
        case 0x38e98cu: goto label_38e98c;
        case 0x38e990u: goto label_38e990;
        case 0x38e994u: goto label_38e994;
        case 0x38e998u: goto label_38e998;
        case 0x38e99cu: goto label_38e99c;
        case 0x38e9a0u: goto label_38e9a0;
        case 0x38e9a4u: goto label_38e9a4;
        case 0x38e9a8u: goto label_38e9a8;
        case 0x38e9acu: goto label_38e9ac;
        case 0x38e9b0u: goto label_38e9b0;
        case 0x38e9b4u: goto label_38e9b4;
        case 0x38e9b8u: goto label_38e9b8;
        case 0x38e9bcu: goto label_38e9bc;
        case 0x38e9c0u: goto label_38e9c0;
        case 0x38e9c4u: goto label_38e9c4;
        case 0x38e9c8u: goto label_38e9c8;
        case 0x38e9ccu: goto label_38e9cc;
        case 0x38e9d0u: goto label_38e9d0;
        case 0x38e9d4u: goto label_38e9d4;
        case 0x38e9d8u: goto label_38e9d8;
        case 0x38e9dcu: goto label_38e9dc;
        case 0x38e9e0u: goto label_38e9e0;
        case 0x38e9e4u: goto label_38e9e4;
        case 0x38e9e8u: goto label_38e9e8;
        case 0x38e9ecu: goto label_38e9ec;
        case 0x38e9f0u: goto label_38e9f0;
        case 0x38e9f4u: goto label_38e9f4;
        case 0x38e9f8u: goto label_38e9f8;
        case 0x38e9fcu: goto label_38e9fc;
        case 0x38ea00u: goto label_38ea00;
        case 0x38ea04u: goto label_38ea04;
        case 0x38ea08u: goto label_38ea08;
        case 0x38ea0cu: goto label_38ea0c;
        case 0x38ea10u: goto label_38ea10;
        case 0x38ea14u: goto label_38ea14;
        case 0x38ea18u: goto label_38ea18;
        case 0x38ea1cu: goto label_38ea1c;
        case 0x38ea20u: goto label_38ea20;
        case 0x38ea24u: goto label_38ea24;
        case 0x38ea28u: goto label_38ea28;
        case 0x38ea2cu: goto label_38ea2c;
        case 0x38ea30u: goto label_38ea30;
        case 0x38ea34u: goto label_38ea34;
        case 0x38ea38u: goto label_38ea38;
        case 0x38ea3cu: goto label_38ea3c;
        case 0x38ea40u: goto label_38ea40;
        case 0x38ea44u: goto label_38ea44;
        case 0x38ea48u: goto label_38ea48;
        case 0x38ea4cu: goto label_38ea4c;
        case 0x38ea50u: goto label_38ea50;
        case 0x38ea54u: goto label_38ea54;
        case 0x38ea58u: goto label_38ea58;
        case 0x38ea5cu: goto label_38ea5c;
        case 0x38ea60u: goto label_38ea60;
        case 0x38ea64u: goto label_38ea64;
        case 0x38ea68u: goto label_38ea68;
        case 0x38ea6cu: goto label_38ea6c;
        case 0x38ea70u: goto label_38ea70;
        case 0x38ea74u: goto label_38ea74;
        case 0x38ea78u: goto label_38ea78;
        case 0x38ea7cu: goto label_38ea7c;
        case 0x38ea80u: goto label_38ea80;
        case 0x38ea84u: goto label_38ea84;
        case 0x38ea88u: goto label_38ea88;
        case 0x38ea8cu: goto label_38ea8c;
        case 0x38ea90u: goto label_38ea90;
        case 0x38ea94u: goto label_38ea94;
        case 0x38ea98u: goto label_38ea98;
        case 0x38ea9cu: goto label_38ea9c;
        case 0x38eaa0u: goto label_38eaa0;
        case 0x38eaa4u: goto label_38eaa4;
        case 0x38eaa8u: goto label_38eaa8;
        case 0x38eaacu: goto label_38eaac;
        case 0x38eab0u: goto label_38eab0;
        case 0x38eab4u: goto label_38eab4;
        case 0x38eab8u: goto label_38eab8;
        case 0x38eabcu: goto label_38eabc;
        case 0x38eac0u: goto label_38eac0;
        case 0x38eac4u: goto label_38eac4;
        case 0x38eac8u: goto label_38eac8;
        case 0x38eaccu: goto label_38eacc;
        case 0x38ead0u: goto label_38ead0;
        case 0x38ead4u: goto label_38ead4;
        case 0x38ead8u: goto label_38ead8;
        case 0x38eadcu: goto label_38eadc;
        case 0x38eae0u: goto label_38eae0;
        case 0x38eae4u: goto label_38eae4;
        case 0x38eae8u: goto label_38eae8;
        case 0x38eaecu: goto label_38eaec;
        case 0x38eaf0u: goto label_38eaf0;
        case 0x38eaf4u: goto label_38eaf4;
        case 0x38eaf8u: goto label_38eaf8;
        case 0x38eafcu: goto label_38eafc;
        case 0x38eb00u: goto label_38eb00;
        case 0x38eb04u: goto label_38eb04;
        case 0x38eb08u: goto label_38eb08;
        case 0x38eb0cu: goto label_38eb0c;
        case 0x38eb10u: goto label_38eb10;
        case 0x38eb14u: goto label_38eb14;
        case 0x38eb18u: goto label_38eb18;
        case 0x38eb1cu: goto label_38eb1c;
        case 0x38eb20u: goto label_38eb20;
        case 0x38eb24u: goto label_38eb24;
        case 0x38eb28u: goto label_38eb28;
        case 0x38eb2cu: goto label_38eb2c;
        case 0x38eb30u: goto label_38eb30;
        case 0x38eb34u: goto label_38eb34;
        case 0x38eb38u: goto label_38eb38;
        case 0x38eb3cu: goto label_38eb3c;
        case 0x38eb40u: goto label_38eb40;
        case 0x38eb44u: goto label_38eb44;
        case 0x38eb48u: goto label_38eb48;
        case 0x38eb4cu: goto label_38eb4c;
        case 0x38eb50u: goto label_38eb50;
        case 0x38eb54u: goto label_38eb54;
        case 0x38eb58u: goto label_38eb58;
        case 0x38eb5cu: goto label_38eb5c;
        case 0x38eb60u: goto label_38eb60;
        case 0x38eb64u: goto label_38eb64;
        case 0x38eb68u: goto label_38eb68;
        case 0x38eb6cu: goto label_38eb6c;
        case 0x38eb70u: goto label_38eb70;
        case 0x38eb74u: goto label_38eb74;
        case 0x38eb78u: goto label_38eb78;
        case 0x38eb7cu: goto label_38eb7c;
        case 0x38eb80u: goto label_38eb80;
        case 0x38eb84u: goto label_38eb84;
        case 0x38eb88u: goto label_38eb88;
        case 0x38eb8cu: goto label_38eb8c;
        case 0x38eb90u: goto label_38eb90;
        case 0x38eb94u: goto label_38eb94;
        case 0x38eb98u: goto label_38eb98;
        case 0x38eb9cu: goto label_38eb9c;
        case 0x38eba0u: goto label_38eba0;
        case 0x38eba4u: goto label_38eba4;
        case 0x38eba8u: goto label_38eba8;
        case 0x38ebacu: goto label_38ebac;
        case 0x38ebb0u: goto label_38ebb0;
        case 0x38ebb4u: goto label_38ebb4;
        case 0x38ebb8u: goto label_38ebb8;
        case 0x38ebbcu: goto label_38ebbc;
        case 0x38ebc0u: goto label_38ebc0;
        case 0x38ebc4u: goto label_38ebc4;
        case 0x38ebc8u: goto label_38ebc8;
        case 0x38ebccu: goto label_38ebcc;
        default: break;
    }

    ctx->pc = 0x38e860u;

label_38e860:
    // 0x38e860: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x38e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_38e864:
    // 0x38e864: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x38e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_38e868:
    // 0x38e868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x38e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_38e86c:
    // 0x38e86c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x38e86cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e870:
    // 0x38e870: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x38e870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_38e874:
    // 0x38e874: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x38e874u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38e878:
    // 0x38e878: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x38e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_38e87c:
    // 0x38e87c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x38e87cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_38e880:
    // 0x38e880: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x38e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_38e884:
    // 0x38e884: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x38e884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38e888:
    // 0x38e888: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x38e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_38e88c:
    // 0x38e88c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x38e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_38e890:
    // 0x38e890: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38e890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e894:
    // 0x38e894: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x38e894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_38e898:
    // 0x38e898: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x38e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_38e89c:
    // 0x38e89c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x38e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_38e8a0:
    // 0x38e8a0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x38e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_38e8a4:
    // 0x38e8a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_38e8a8:
    // 0x38e8a8: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x38e8a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_38e8ac:
    // 0x38e8ac: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x38e8acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_38e8b0:
    // 0x38e8b0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x38e8b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_38e8b4:
    // 0x38e8b4: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x38e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
label_38e8b8:
    // 0x38e8b8: 0xafa90068  sw          $t1, 0x68($sp)
    ctx->pc = 0x38e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 9));
label_38e8bc:
    // 0x38e8bc: 0xc08a61a  jal         func_229868
label_38e8c0:
    if (ctx->pc == 0x38E8C0u) {
        ctx->pc = 0x38E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8BCu;
        // 0x38e8c0: 0xafaa006c  sw          $t2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8C4u;
        goto label_38e8c4;
    }
    ctx->pc = 0x38E8BCu;
    SET_GPR_U32(ctx, 31, 0x38E8C4u);
    ctx->pc = 0x38E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8BCu;
    // 0x38e8c0: 0xafaa006c  sw          $t2, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x38E8BCu, 0x38E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8C4u;
label_38e8c4:
    // 0x38e8c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38e8c8:
    // 0x38e8c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x38e8c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e8cc:
    // 0x38e8cc: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x38e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_38e8d0:
    // 0x38e8d0: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x38e8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_38e8d4:
    // 0x38e8d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x38e8d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_38e8d8:
    // 0x38e8d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38e8dc:
    // 0x38e8dc: 0x128000ab  beqz        $s4, . + 4 + (0xAB << 2)
label_38e8e0:
    if (ctx->pc == 0x38E8E0u) {
        ctx->pc = 0x38E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8DCu;
        // 0x38e8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8E4u;
        goto label_38e8e4;
    }
    ctx->pc = 0x38E8DCu;
    {
        const bool branch_taken_0x38e8dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8DCu;
        // 0x38e8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e8dc) {
            ctx->pc = 0x38EB8Cu;
            goto label_38eb8c;
        }
    }
    ctx->pc = 0x38E8E4u;
label_38e8e4:
    // 0x38e8e4: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x38e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_38e8e8:
    // 0x38e8e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x38e8e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e8ec:
    // 0x38e8ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x38e8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_38e8f0:
    // 0x38e8f0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x38e8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_38e8f4:
    // 0x38e8f4: 0xc12e29c  jal         func_4B8A70
label_38e8f8:
    if (ctx->pc == 0x38E8F8u) {
        ctx->pc = 0x38E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8F4u;
        // 0x38e8f8: 0xc44c00d4  lwc1        $f12, 0xD4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E8FCu;
        goto label_38e8fc;
    }
    ctx->pc = 0x38E8F4u;
    SET_GPR_U32(ctx, 31, 0x38E8FCu);
    ctx->pc = 0x38E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8F4u;
    // 0x38e8f8: 0xc44c00d4  lwc1        $f12, 0xD4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x38E8F4u, 0x38E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8FCu;
label_38e8fc:
    // 0x38e8fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x38e8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38e900:
    // 0x38e900: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x38e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
label_38e904:
    // 0x38e904: 0xc12e310  jal         func_4B8C40
label_38e908:
    if (ctx->pc == 0x38E908u) {
        ctx->pc = 0x38E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E904u;
        // 0x38e908: 0xc44c00d4  lwc1        $f12, 0xD4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E90Cu;
        goto label_38e90c;
    }
    ctx->pc = 0x38E904u;
    SET_GPR_U32(ctx, 31, 0x38E90Cu);
    ctx->pc = 0x38E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E904u;
    // 0x38e908: 0xc44c00d4  lwc1        $f12, 0xD4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x38E904u, 0x38E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E90Cu;
label_38e90c:
    // 0x38e90c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x38e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_38e910:
    // 0x38e910: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x38e910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_38e914:
    // 0x38e914: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x38e914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e918:
    // 0x38e918: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38e918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38e91c:
    // 0x38e91c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38e91cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38e920:
    // 0x38e920: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x38e920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38e924:
    // 0x38e924: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x38e924u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_38e928:
    // 0x38e928: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38e92c:
    // 0x38e92c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_38e930:
    if (ctx->pc == 0x38E930u) {
        ctx->pc = 0x38E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E92Cu;
        // 0x38e930: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E934u;
        goto label_38e934;
    }
    ctx->pc = 0x38E92Cu;
    {
        const bool branch_taken_0x38e92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E92Cu;
        // 0x38e930: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e92c) {
            ctx->pc = 0x38EB68u;
            goto label_38eb68;
        }
    }
    ctx->pc = 0x38E934u;
label_38e934:
    // 0x38e934: 0x0  nop
    ctx->pc = 0x38e934u;
    // NOP
label_38e938:
    // 0x38e938: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x38e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_38e93c:
    // 0x38e93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38e940:
    // 0x38e940: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x38e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38e944:
    // 0x38e944: 0x521e0088  beql        $s0, $fp, . + 4 + (0x88 << 2)
label_38e948:
    if (ctx->pc == 0x38E948u) {
        ctx->pc = 0x38E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E944u;
        // 0x38e948: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E94Cu;
        goto label_38e94c;
    }
    ctx->pc = 0x38E944u;
    {
        const bool branch_taken_0x38e944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 30));
        if (branch_taken_0x38e944) {
            ctx->pc = 0x38E948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E944u;
            // 0x38e948: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EB68u;
            goto label_38eb68;
        }
    }
    ctx->pc = 0x38E94Cu;
label_38e94c:
    // 0x38e94c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e950:
    // 0x38e950: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38e950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38e954:
    // 0x38e954: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38e958:
    // 0x38e958: 0x40f809  jalr        $v0
label_38e95c:
    if (ctx->pc == 0x38E95Cu) {
        ctx->pc = 0x38E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E958u;
        // 0x38e95c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E960u;
        goto label_38e960;
    }
    ctx->pc = 0x38E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E960u);
        ctx->pc = 0x38E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E958u;
        // 0x38e95c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E958u, 0x38E960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E960u;
label_38e960:
    // 0x38e960: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_38e964:
    if (ctx->pc == 0x38E964u) {
        ctx->pc = 0x38E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E960u;
        // 0x38e964: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E968u;
        goto label_38e968;
    }
    ctx->pc = 0x38E960u;
    {
        const bool branch_taken_0x38e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E960u;
        // 0x38e964: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e960) {
            ctx->pc = 0x38EB64u;
            goto label_38eb64;
        }
    }
    ctx->pc = 0x38E968u;
label_38e968:
    // 0x38e968: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38e96c:
    // 0x38e96c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38e96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38e970:
    // 0x38e970: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38e974:
    // 0x38e974: 0x40f809  jalr        $v0
label_38e978:
    if (ctx->pc == 0x38E978u) {
        ctx->pc = 0x38E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E974u;
        // 0x38e978: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E97Cu;
        goto label_38e97c;
    }
    ctx->pc = 0x38E974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E97Cu);
        ctx->pc = 0x38E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E974u;
        // 0x38e978: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E974u, 0x38E97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E97Cu;
label_38e97c:
    // 0x38e97c: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x38e97cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_38e980:
    // 0x38e980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38e980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e984:
    // 0x38e984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38e984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e988:
    // 0x38e988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38e988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e98c:
    // 0x38e98c: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x38e98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_38e990:
    // 0x38e990: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x38e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_38e994:
    // 0x38e994: 0x60f809  jalr        $v1
label_38e998:
    if (ctx->pc == 0x38E998u) {
        ctx->pc = 0x38E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E994u;
        // 0x38e998: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E99Cu;
        goto label_38e99c;
    }
    ctx->pc = 0x38E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38E99Cu);
        ctx->pc = 0x38E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E994u;
        // 0x38e998: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E994u, 0x38E99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E99Cu;
label_38e99c:
    // 0x38e99c: 0x78460050  lq          $a2, 0x50($v0)
    ctx->pc = 0x38e99cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 80)));
label_38e9a0:
    // 0x38e9a0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x38e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_38e9a4:
    // 0x38e9a4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x38e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_38e9a8:
    // 0x38e9a8: 0x24724b00  addiu       $s2, $v1, 0x4B00
    ctx->pc = 0x38e9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_38e9ac:
    // 0x38e9ac: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x38e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_38e9b0:
    // 0x38e9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e9b4:
    // 0x38e9b4: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x38e9b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_38e9b8:
    // 0x38e9b8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x38e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_38e9bc:
    // 0x38e9bc: 0x78450020  lq          $a1, 0x20($v0)
    ctx->pc = 0x38e9bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_38e9c0:
    // 0x38e9c0: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x38e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
label_38e9c4:
    // 0x38e9c4: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x38e9c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_38e9c8:
    // 0x38e9c8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38e9c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38e9cc:
    // 0x38e9cc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x38e9ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_38e9d0:
    // 0x38e9d0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38e9d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38e9d4:
    // 0x38e9d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38e9d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38e9d8:
    // 0x38e9d8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38e9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38e9dc:
    // 0x38e9dc: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x38e9dcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_38e9e0:
    // 0x38e9e0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38e9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_38e9e4:
    // 0x38e9e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x38e9e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38e9e8:
    // 0x38e9e8: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x38e9e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_38e9ec:
    // 0x38e9ec: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x38e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_38e9f0:
    // 0x38e9f0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x38e9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_38e9f4:
    // 0x38e9f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38e9f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38e9f8:
    // 0x38e9f8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38e9f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38e9fc:
    // 0x38e9fc: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x38e9fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_38ea00:
    // 0x38ea00: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38ea00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea04:
    // 0x38ea04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38ea04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea08:
    // 0x38ea08: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38ea08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea0c:
    // 0x38ea0c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x38ea0cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_38ea10:
    // 0x38ea10: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x38ea10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_38ea14:
    // 0x38ea14: 0xc0e3400  jal         func_38D000
label_38ea18:
    if (ctx->pc == 0x38EA18u) {
        ctx->pc = 0x38EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA14u;
        // 0x38ea18: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA1Cu;
        goto label_38ea1c;
    }
    ctx->pc = 0x38EA14u;
    SET_GPR_U32(ctx, 31, 0x38EA1Cu);
    ctx->pc = 0x38EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA14u;
    // 0x38ea18: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D000u, 0x38EA14u, 0x38EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA1Cu;
label_38ea1c:
    // 0x38ea1c: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x38ea1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_38ea20:
    // 0x38ea20: 0x4600a885  abs.s       $f2, $f21
    ctx->pc = 0x38ea20u;
    ctx->f[2] = FPU_ABS_S(ctx->f[21]);
label_38ea24:
    // 0x38ea24: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x38ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38ea28:
    // 0x38ea28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ea2c:
    // 0x38ea2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x38ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_38ea30:
    // 0x38ea30: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x38ea30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38ea34:
    // 0x38ea34: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x38ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_38ea38:
    // 0x38ea38: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x38ea38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38ea3c:
    // 0x38ea3c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38ea3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38ea40:
    // 0x38ea40: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x38ea40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_38ea44:
    // 0x38ea44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38ea44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38ea48:
    // 0x38ea48: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x38ea48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_38ea4c:
    // 0x38ea4c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38ea4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea50:
    // 0x38ea50: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38ea50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea54:
    // 0x38ea54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38ea54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea58:
    // 0x38ea58: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x38ea58u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_38ea5c:
    // 0x38ea5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38ea5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38ea60:
    // 0x38ea60: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x38ea60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_38ea64:
    // 0x38ea64: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38ea64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea68:
    // 0x38ea68: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38ea68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea6c:
    // 0x38ea6c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38ea6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38ea70:
    // 0x38ea70: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x38ea70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_38ea74:
    // 0x38ea74: 0x4485a000  mtc1        $a1, $f20
    ctx->pc = 0x38ea74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_38ea78:
    // 0x38ea78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ea7c:
    // 0x38ea7c: 0x46011541  sub.s       $f21, $f2, $f1
    ctx->pc = 0x38ea7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_38ea80:
    // 0x38ea80: 0xc0e3400  jal         func_38D000
label_38ea84:
    if (ctx->pc == 0x38EA84u) {
        ctx->pc = 0x38EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EA80u;
        // 0x38ea84: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EA88u;
        goto label_38ea88;
    }
    ctx->pc = 0x38EA80u;
    SET_GPR_U32(ctx, 31, 0x38EA88u);
    ctx->pc = 0x38EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EA80u;
    // 0x38ea84: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D000u, 0x38EA80u, 0x38EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EA88u;
label_38ea88:
    // 0x38ea88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x38ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38ea8c:
    // 0x38ea8c: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x38ea8cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
label_38ea90:
    // 0x38ea90: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x38ea90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_38ea94:
    // 0x38ea94: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x38ea94u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38ea98:
    // 0x38ea98: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x38ea98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38ea9c:
    // 0x38ea9c: 0x0  nop
    ctx->pc = 0x38ea9cu;
    // NOP
label_38eaa0:
    // 0x38eaa0: 0x45030031  bc1tl       . + 4 + (0x31 << 2)
label_38eaa4:
    if (ctx->pc == 0x38EAA4u) {
        ctx->pc = 0x38EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAA0u;
        // 0x38eaa4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAA8u;
        goto label_38eaa8;
    }
    ctx->pc = 0x38EAA0u;
    {
        const bool branch_taken_0x38eaa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38eaa0) {
            ctx->pc = 0x38EAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EAA0u;
            // 0x38eaa4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EB68u;
            goto label_38eb68;
        }
    }
    ctx->pc = 0x38EAA8u;
label_38eaa8:
    // 0x38eaa8: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x38eaa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38eaac:
    // 0x38eaac: 0x0  nop
    ctx->pc = 0x38eaacu;
    // NOP
label_38eab0:
    // 0x38eab0: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
label_38eab4:
    if (ctx->pc == 0x38EAB4u) {
        ctx->pc = 0x38EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAB0u;
        // 0x38eab4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAB8u;
        goto label_38eab8;
    }
    ctx->pc = 0x38EAB0u;
    {
        const bool branch_taken_0x38eab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38eab0) {
            ctx->pc = 0x38EAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EAB0u;
            // 0x38eab4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EB68u;
            goto label_38eb68;
        }
    }
    ctx->pc = 0x38EAB8u;
label_38eab8:
    // 0x38eab8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x38eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_38eabc:
    // 0x38eabc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_38eac0:
    if (ctx->pc == 0x38EAC0u) {
        ctx->pc = 0x38EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EABCu;
        // 0x38eac0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAC4u;
        goto label_38eac4;
    }
    ctx->pc = 0x38EABCu;
    {
        const bool branch_taken_0x38eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EABCu;
        // 0x38eac0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eabc) {
            ctx->pc = 0x38EAD4u;
            goto label_38ead4;
        }
    }
    ctx->pc = 0x38EAC4u;
label_38eac4:
    // 0x38eac4: 0x60f809  jalr        $v1
label_38eac8:
    if (ctx->pc == 0x38EAC8u) {
        ctx->pc = 0x38EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAC4u;
        // 0x38eac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EACCu;
        goto label_38eacc;
    }
    ctx->pc = 0x38EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38EACCu);
        ctx->pc = 0x38EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAC4u;
        // 0x38eac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EAC4u, 0x38EACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EACCu;
label_38eacc:
    // 0x38eacc: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_38ead0:
    if (ctx->pc == 0x38EAD0u) {
        ctx->pc = 0x38EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EACCu;
        // 0x38ead0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAD4u;
        goto label_38ead4;
    }
    ctx->pc = 0x38EACCu;
    {
        const bool branch_taken_0x38eacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eacc) {
            ctx->pc = 0x38EAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EACCu;
            // 0x38ead0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EB68u;
            goto label_38eb68;
        }
    }
    ctx->pc = 0x38EAD4u;
label_38ead4:
    // 0x38ead4: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x38ead4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_38ead8:
    // 0x38ead8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x38ead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38eadc:
    // 0x38eadc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x38eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_38eae0:
    // 0x38eae0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x38eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_38eae4:
    // 0x38eae4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x38eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38eae8:
    // 0x38eae8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38eae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38eaec:
    // 0x38eaec: 0x0  nop
    ctx->pc = 0x38eaecu;
    // NOP
label_38eaf0:
    // 0x38eaf0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_38eaf4:
    if (ctx->pc == 0x38EAF4u) {
        ctx->pc = 0x38EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAF0u;
        // 0x38eaf4: 0x8fa7006c  lw          $a3, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EAF8u;
        goto label_38eaf8;
    }
    ctx->pc = 0x38EAF0u;
    {
        const bool branch_taken_0x38eaf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EAF0u;
        // 0x38eaf4: 0x8fa7006c  lw          $a3, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eaf0) {
            ctx->pc = 0x38EB18u;
            goto label_38eb18;
        }
    }
    ctx->pc = 0x38EAF8u;
label_38eaf8:
    // 0x38eaf8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38eaf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38eafc:
    // 0x38eafc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x38eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_38eb00:
    // 0x38eb00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38eb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38eb04:
    // 0x38eb04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x38eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_38eb08:
    // 0x38eb08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x38eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38eb0c:
    // 0x38eb0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38eb0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_38eb10:
    // 0x38eb10: 0x10000007  b           . + 4 + (0x7 << 2)
label_38eb14:
    if (ctx->pc == 0x38EB14u) {
        ctx->pc = 0x38EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB10u;
        // 0x38eb14: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB18u;
        goto label_38eb18;
    }
    ctx->pc = 0x38EB10u;
    {
        const bool branch_taken_0x38eb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB10u;
        // 0x38eb14: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb10) {
            ctx->pc = 0x38EB30u;
            goto label_38eb30;
        }
    }
    ctx->pc = 0x38EB18u;
label_38eb18:
    // 0x38eb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38eb1c:
    // 0x38eb1c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x38eb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38eb20:
    // 0x38eb20: 0xc0e3264  jal         func_38C990
label_38eb24:
    if (ctx->pc == 0x38EB24u) {
        ctx->pc = 0x38EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB20u;
        // 0x38eb24: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB28u;
        goto label_38eb28;
    }
    ctx->pc = 0x38EB20u;
    SET_GPR_U32(ctx, 31, 0x38EB28u);
    ctx->pc = 0x38EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB20u;
    // 0x38eb24: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C990u, 0x38EB20u, 0x38EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB28u;
label_38eb28:
    // 0x38eb28: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_38eb2c:
    if (ctx->pc == 0x38EB2Cu) {
        ctx->pc = 0x38EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB28u;
        // 0x38eb2c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB30u;
        goto label_38eb30;
    }
    ctx->pc = 0x38EB28u;
    {
        const bool branch_taken_0x38eb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eb28) {
            ctx->pc = 0x38EB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EB28u;
            // 0x38eb2c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EB68u;
            goto label_38eb68;
        }
    }
    ctx->pc = 0x38EB30u;
label_38eb30:
    // 0x38eb30: 0x4614a829  min.s       $f0, $f21, $f20
    ctx->pc = 0x38eb30u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[20]);
label_38eb34:
    // 0x38eb34: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x38eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_38eb38:
    // 0x38eb38: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x38eb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_38eb3c:
    // 0x38eb3c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x38eb3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_38eb40:
    // 0x38eb40: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x38eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_38eb44:
    // 0x38eb44: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x38eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
label_38eb48:
    // 0x38eb48: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x38eb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_38eb4c:
    // 0x38eb4c: 0x2a5202b  sltu        $a0, $s5, $a1
    ctx->pc = 0x38eb4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_38eb50:
    // 0x38eb50: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x38eb50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38eb54:
    // 0x38eb54: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x38eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_38eb58:
    // 0x38eb58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x38eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_38eb5c:
    // 0x38eb5c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_38eb60:
    if (ctx->pc == 0x38EB60u) {
        ctx->pc = 0x38EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB5Cu;
        // 0x38eb60: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB64u;
        goto label_38eb64;
    }
    ctx->pc = 0x38EB5Cu;
    {
        const bool branch_taken_0x38eb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB5Cu;
        // 0x38eb60: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb5c) {
            ctx->pc = 0x38EB88u;
            goto label_38eb88;
        }
    }
    ctx->pc = 0x38EB64u;
label_38eb64:
    // 0x38eb64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x38eb64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_38eb68:
    // 0x38eb68: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x38eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_38eb6c:
    // 0x38eb6c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38eb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38eb70:
    // 0x38eb70: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38eb74:
    // 0x38eb74: 0x40f809  jalr        $v0
label_38eb78:
    if (ctx->pc == 0x38EB78u) {
        ctx->pc = 0x38EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB74u;
        // 0x38eb78: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB7Cu;
        goto label_38eb7c;
    }
    ctx->pc = 0x38EB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38EB7Cu);
        ctx->pc = 0x38EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB74u;
        // 0x38eb78: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EB74u, 0x38EB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38EB7Cu;
label_38eb7c:
    // 0x38eb7c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x38eb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38eb80:
    // 0x38eb80: 0x5440ff6d  bnel        $v0, $zero, . + 4 + (-0x93 << 2)
label_38eb84:
    if (ctx->pc == 0x38EB84u) {
        ctx->pc = 0x38EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB80u;
        // 0x38eb84: 0x8ee30008  lw          $v1, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EB88u;
        goto label_38eb88;
    }
    ctx->pc = 0x38EB80u;
    {
        const bool branch_taken_0x38eb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38eb80) {
            ctx->pc = 0x38EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38EB80u;
            // 0x38eb84: 0x8ee30008  lw          $v1, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e938;
        }
    }
    ctx->pc = 0x38EB88u;
label_38eb88:
    // 0x38eb88: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x38eb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38eb8c:
    // 0x38eb8c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x38eb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_38eb90:
    // 0x38eb90: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x38eb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_38eb94:
    // 0x38eb94: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x38eb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_38eb98:
    // 0x38eb98: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x38eb98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_38eb9c:
    // 0x38eb9c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x38eb9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38eba0:
    // 0x38eba0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x38eba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38eba4:
    // 0x38eba4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x38eba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38eba8:
    // 0x38eba8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x38eba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38ebac:
    // 0x38ebac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x38ebacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38ebb0:
    // 0x38ebb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38ebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38ebb4:
    // 0x38ebb4: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x38ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_38ebb8:
    // 0x38ebb8: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x38ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_38ebbc:
    // 0x38ebbc: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x38ebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_38ebc0:
    // 0x38ebc0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x38ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38ebc4:
    // 0x38ebc4: 0x3e00008  jr          $ra
label_38ebc8:
    if (ctx->pc == 0x38EBC8u) {
        ctx->pc = 0x38EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBC4u;
        // 0x38ebc8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EBCCu;
        goto label_38ebcc;
    }
    ctx->pc = 0x38EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EBC4u;
        // 0x38ebc8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EBCCu;
label_38ebcc:
    // 0x38ebcc: 0x0  nop
    ctx->pc = 0x38ebccu;
    // NOP
    ctx->pc = 0x38ebd0u;
}
