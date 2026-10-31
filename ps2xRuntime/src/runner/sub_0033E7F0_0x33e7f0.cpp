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

// Function: sub_0033E7F0
// Address: 0x33e7f0 - 0x33ebb8
void sub_0033E7F0_0x33e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E7F0_0x33e7f0");
#endif

    switch (ctx->pc) {
        case 0x33e7f0u: goto label_33e7f0;
        case 0x33e7f4u: goto label_33e7f4;
        case 0x33e7f8u: goto label_33e7f8;
        case 0x33e7fcu: goto label_33e7fc;
        case 0x33e800u: goto label_33e800;
        case 0x33e804u: goto label_33e804;
        case 0x33e808u: goto label_33e808;
        case 0x33e80cu: goto label_33e80c;
        case 0x33e810u: goto label_33e810;
        case 0x33e814u: goto label_33e814;
        case 0x33e818u: goto label_33e818;
        case 0x33e81cu: goto label_33e81c;
        case 0x33e820u: goto label_33e820;
        case 0x33e824u: goto label_33e824;
        case 0x33e828u: goto label_33e828;
        case 0x33e82cu: goto label_33e82c;
        case 0x33e830u: goto label_33e830;
        case 0x33e834u: goto label_33e834;
        case 0x33e838u: goto label_33e838;
        case 0x33e83cu: goto label_33e83c;
        case 0x33e840u: goto label_33e840;
        case 0x33e844u: goto label_33e844;
        case 0x33e848u: goto label_33e848;
        case 0x33e84cu: goto label_33e84c;
        case 0x33e850u: goto label_33e850;
        case 0x33e854u: goto label_33e854;
        case 0x33e858u: goto label_33e858;
        case 0x33e85cu: goto label_33e85c;
        case 0x33e860u: goto label_33e860;
        case 0x33e864u: goto label_33e864;
        case 0x33e868u: goto label_33e868;
        case 0x33e86cu: goto label_33e86c;
        case 0x33e870u: goto label_33e870;
        case 0x33e874u: goto label_33e874;
        case 0x33e878u: goto label_33e878;
        case 0x33e87cu: goto label_33e87c;
        case 0x33e880u: goto label_33e880;
        case 0x33e884u: goto label_33e884;
        case 0x33e888u: goto label_33e888;
        case 0x33e88cu: goto label_33e88c;
        case 0x33e890u: goto label_33e890;
        case 0x33e894u: goto label_33e894;
        case 0x33e898u: goto label_33e898;
        case 0x33e89cu: goto label_33e89c;
        case 0x33e8a0u: goto label_33e8a0;
        case 0x33e8a4u: goto label_33e8a4;
        case 0x33e8a8u: goto label_33e8a8;
        case 0x33e8acu: goto label_33e8ac;
        case 0x33e8b0u: goto label_33e8b0;
        case 0x33e8b4u: goto label_33e8b4;
        case 0x33e8b8u: goto label_33e8b8;
        case 0x33e8bcu: goto label_33e8bc;
        case 0x33e8c0u: goto label_33e8c0;
        case 0x33e8c4u: goto label_33e8c4;
        case 0x33e8c8u: goto label_33e8c8;
        case 0x33e8ccu: goto label_33e8cc;
        case 0x33e8d0u: goto label_33e8d0;
        case 0x33e8d4u: goto label_33e8d4;
        case 0x33e8d8u: goto label_33e8d8;
        case 0x33e8dcu: goto label_33e8dc;
        case 0x33e8e0u: goto label_33e8e0;
        case 0x33e8e4u: goto label_33e8e4;
        case 0x33e8e8u: goto label_33e8e8;
        case 0x33e8ecu: goto label_33e8ec;
        case 0x33e8f0u: goto label_33e8f0;
        case 0x33e8f4u: goto label_33e8f4;
        case 0x33e8f8u: goto label_33e8f8;
        case 0x33e8fcu: goto label_33e8fc;
        case 0x33e900u: goto label_33e900;
        case 0x33e904u: goto label_33e904;
        case 0x33e908u: goto label_33e908;
        case 0x33e90cu: goto label_33e90c;
        case 0x33e910u: goto label_33e910;
        case 0x33e914u: goto label_33e914;
        case 0x33e918u: goto label_33e918;
        case 0x33e91cu: goto label_33e91c;
        case 0x33e920u: goto label_33e920;
        case 0x33e924u: goto label_33e924;
        case 0x33e928u: goto label_33e928;
        case 0x33e92cu: goto label_33e92c;
        case 0x33e930u: goto label_33e930;
        case 0x33e934u: goto label_33e934;
        case 0x33e938u: goto label_33e938;
        case 0x33e93cu: goto label_33e93c;
        case 0x33e940u: goto label_33e940;
        case 0x33e944u: goto label_33e944;
        case 0x33e948u: goto label_33e948;
        case 0x33e94cu: goto label_33e94c;
        case 0x33e950u: goto label_33e950;
        case 0x33e954u: goto label_33e954;
        case 0x33e958u: goto label_33e958;
        case 0x33e95cu: goto label_33e95c;
        case 0x33e960u: goto label_33e960;
        case 0x33e964u: goto label_33e964;
        case 0x33e968u: goto label_33e968;
        case 0x33e96cu: goto label_33e96c;
        case 0x33e970u: goto label_33e970;
        case 0x33e974u: goto label_33e974;
        case 0x33e978u: goto label_33e978;
        case 0x33e97cu: goto label_33e97c;
        case 0x33e980u: goto label_33e980;
        case 0x33e984u: goto label_33e984;
        case 0x33e988u: goto label_33e988;
        case 0x33e98cu: goto label_33e98c;
        case 0x33e990u: goto label_33e990;
        case 0x33e994u: goto label_33e994;
        case 0x33e998u: goto label_33e998;
        case 0x33e99cu: goto label_33e99c;
        case 0x33e9a0u: goto label_33e9a0;
        case 0x33e9a4u: goto label_33e9a4;
        case 0x33e9a8u: goto label_33e9a8;
        case 0x33e9acu: goto label_33e9ac;
        case 0x33e9b0u: goto label_33e9b0;
        case 0x33e9b4u: goto label_33e9b4;
        case 0x33e9b8u: goto label_33e9b8;
        case 0x33e9bcu: goto label_33e9bc;
        case 0x33e9c0u: goto label_33e9c0;
        case 0x33e9c4u: goto label_33e9c4;
        case 0x33e9c8u: goto label_33e9c8;
        case 0x33e9ccu: goto label_33e9cc;
        case 0x33e9d0u: goto label_33e9d0;
        case 0x33e9d4u: goto label_33e9d4;
        case 0x33e9d8u: goto label_33e9d8;
        case 0x33e9dcu: goto label_33e9dc;
        case 0x33e9e0u: goto label_33e9e0;
        case 0x33e9e4u: goto label_33e9e4;
        case 0x33e9e8u: goto label_33e9e8;
        case 0x33e9ecu: goto label_33e9ec;
        case 0x33e9f0u: goto label_33e9f0;
        case 0x33e9f4u: goto label_33e9f4;
        case 0x33e9f8u: goto label_33e9f8;
        case 0x33e9fcu: goto label_33e9fc;
        case 0x33ea00u: goto label_33ea00;
        case 0x33ea04u: goto label_33ea04;
        case 0x33ea08u: goto label_33ea08;
        case 0x33ea0cu: goto label_33ea0c;
        case 0x33ea10u: goto label_33ea10;
        case 0x33ea14u: goto label_33ea14;
        case 0x33ea18u: goto label_33ea18;
        case 0x33ea1cu: goto label_33ea1c;
        case 0x33ea20u: goto label_33ea20;
        case 0x33ea24u: goto label_33ea24;
        case 0x33ea28u: goto label_33ea28;
        case 0x33ea2cu: goto label_33ea2c;
        case 0x33ea30u: goto label_33ea30;
        case 0x33ea34u: goto label_33ea34;
        case 0x33ea38u: goto label_33ea38;
        case 0x33ea3cu: goto label_33ea3c;
        case 0x33ea40u: goto label_33ea40;
        case 0x33ea44u: goto label_33ea44;
        case 0x33ea48u: goto label_33ea48;
        case 0x33ea4cu: goto label_33ea4c;
        case 0x33ea50u: goto label_33ea50;
        case 0x33ea54u: goto label_33ea54;
        case 0x33ea58u: goto label_33ea58;
        case 0x33ea5cu: goto label_33ea5c;
        case 0x33ea60u: goto label_33ea60;
        case 0x33ea64u: goto label_33ea64;
        case 0x33ea68u: goto label_33ea68;
        case 0x33ea6cu: goto label_33ea6c;
        case 0x33ea70u: goto label_33ea70;
        case 0x33ea74u: goto label_33ea74;
        case 0x33ea78u: goto label_33ea78;
        case 0x33ea7cu: goto label_33ea7c;
        case 0x33ea80u: goto label_33ea80;
        case 0x33ea84u: goto label_33ea84;
        case 0x33ea88u: goto label_33ea88;
        case 0x33ea8cu: goto label_33ea8c;
        case 0x33ea90u: goto label_33ea90;
        case 0x33ea94u: goto label_33ea94;
        case 0x33ea98u: goto label_33ea98;
        case 0x33ea9cu: goto label_33ea9c;
        case 0x33eaa0u: goto label_33eaa0;
        case 0x33eaa4u: goto label_33eaa4;
        case 0x33eaa8u: goto label_33eaa8;
        case 0x33eaacu: goto label_33eaac;
        case 0x33eab0u: goto label_33eab0;
        case 0x33eab4u: goto label_33eab4;
        case 0x33eab8u: goto label_33eab8;
        case 0x33eabcu: goto label_33eabc;
        case 0x33eac0u: goto label_33eac0;
        case 0x33eac4u: goto label_33eac4;
        case 0x33eac8u: goto label_33eac8;
        case 0x33eaccu: goto label_33eacc;
        case 0x33ead0u: goto label_33ead0;
        case 0x33ead4u: goto label_33ead4;
        case 0x33ead8u: goto label_33ead8;
        case 0x33eadcu: goto label_33eadc;
        case 0x33eae0u: goto label_33eae0;
        case 0x33eae4u: goto label_33eae4;
        case 0x33eae8u: goto label_33eae8;
        case 0x33eaecu: goto label_33eaec;
        case 0x33eaf0u: goto label_33eaf0;
        case 0x33eaf4u: goto label_33eaf4;
        case 0x33eaf8u: goto label_33eaf8;
        case 0x33eafcu: goto label_33eafc;
        case 0x33eb00u: goto label_33eb00;
        case 0x33eb04u: goto label_33eb04;
        case 0x33eb08u: goto label_33eb08;
        case 0x33eb0cu: goto label_33eb0c;
        case 0x33eb10u: goto label_33eb10;
        case 0x33eb14u: goto label_33eb14;
        case 0x33eb18u: goto label_33eb18;
        case 0x33eb1cu: goto label_33eb1c;
        case 0x33eb20u: goto label_33eb20;
        case 0x33eb24u: goto label_33eb24;
        case 0x33eb28u: goto label_33eb28;
        case 0x33eb2cu: goto label_33eb2c;
        case 0x33eb30u: goto label_33eb30;
        case 0x33eb34u: goto label_33eb34;
        case 0x33eb38u: goto label_33eb38;
        case 0x33eb3cu: goto label_33eb3c;
        case 0x33eb40u: goto label_33eb40;
        case 0x33eb44u: goto label_33eb44;
        case 0x33eb48u: goto label_33eb48;
        case 0x33eb4cu: goto label_33eb4c;
        case 0x33eb50u: goto label_33eb50;
        case 0x33eb54u: goto label_33eb54;
        case 0x33eb58u: goto label_33eb58;
        case 0x33eb5cu: goto label_33eb5c;
        case 0x33eb60u: goto label_33eb60;
        case 0x33eb64u: goto label_33eb64;
        case 0x33eb68u: goto label_33eb68;
        case 0x33eb6cu: goto label_33eb6c;
        case 0x33eb70u: goto label_33eb70;
        case 0x33eb74u: goto label_33eb74;
        case 0x33eb78u: goto label_33eb78;
        case 0x33eb7cu: goto label_33eb7c;
        case 0x33eb80u: goto label_33eb80;
        case 0x33eb84u: goto label_33eb84;
        case 0x33eb88u: goto label_33eb88;
        case 0x33eb8cu: goto label_33eb8c;
        case 0x33eb90u: goto label_33eb90;
        case 0x33eb94u: goto label_33eb94;
        case 0x33eb98u: goto label_33eb98;
        case 0x33eb9cu: goto label_33eb9c;
        case 0x33eba0u: goto label_33eba0;
        case 0x33eba4u: goto label_33eba4;
        case 0x33eba8u: goto label_33eba8;
        case 0x33ebacu: goto label_33ebac;
        case 0x33ebb0u: goto label_33ebb0;
        case 0x33ebb4u: goto label_33ebb4;
        default: break;
    }

    ctx->pc = 0x33e7f0u;

label_33e7f0:
    // 0x33e7f0: 0x27bdd0a0  addiu       $sp, $sp, -0x2F60
    ctx->pc = 0x33e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955168));
label_33e7f4:
    // 0x33e7f4: 0x7fb72ee0  sq          $s7, 0x2EE0($sp)
    ctx->pc = 0x33e7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12000), GPR_VEC(ctx, 23));
label_33e7f8:
    // 0x33e7f8: 0x7fb22f30  sq          $s2, 0x2F30($sp)
    ctx->pc = 0x33e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12080), GPR_VEC(ctx, 18));
label_33e7fc:
    // 0x33e7fc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x33e7fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e800:
    // 0x33e800: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33e800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33e804:
    // 0x33e804: 0xafa52ea4  sw          $a1, 0x2EA4($sp)
    ctx->pc = 0x33e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 11940), GPR_U32(ctx, 5));
label_33e808:
    // 0x33e808: 0x7fb02f50  sq          $s0, 0x2F50($sp)
    ctx->pc = 0x33e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12112), GPR_VEC(ctx, 16));
label_33e80c:
    // 0x33e80c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x33e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33e810:
    // 0x33e810: 0x7fb12f40  sq          $s1, 0x2F40($sp)
    ctx->pc = 0x33e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12096), GPR_VEC(ctx, 17));
label_33e814:
    // 0x33e814: 0x7fb32f20  sq          $s3, 0x2F20($sp)
    ctx->pc = 0x33e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12064), GPR_VEC(ctx, 19));
label_33e818:
    // 0x33e818: 0x7fb42f10  sq          $s4, 0x2F10($sp)
    ctx->pc = 0x33e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12048), GPR_VEC(ctx, 20));
label_33e81c:
    // 0x33e81c: 0x7fb52f00  sq          $s5, 0x2F00($sp)
    ctx->pc = 0x33e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12032), GPR_VEC(ctx, 21));
label_33e820:
    // 0x33e820: 0x7fb62ef0  sq          $s6, 0x2EF0($sp)
    ctx->pc = 0x33e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 12016), GPR_VEC(ctx, 22));
label_33e824:
    // 0x33e824: 0x7fbe2ed0  sq          $fp, 0x2ED0($sp)
    ctx->pc = 0x33e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 11984), GPR_VEC(ctx, 30));
label_33e828:
    // 0x33e828: 0xffbf2ec0  sd          $ra, 0x2EC0($sp)
    ctx->pc = 0x33e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 11968), GPR_U64(ctx, 31));
label_33e82c:
    // 0x33e82c: 0xc0d0456  jal         func_341158
label_33e830:
    if (ctx->pc == 0x33E830u) {
        ctx->pc = 0x33E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E82Cu;
        // 0x33e830: 0xafa72ea8  sw          $a3, 0x2EA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11944), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E834u;
        goto label_33e834;
    }
    ctx->pc = 0x33E82Cu;
    SET_GPR_U32(ctx, 31, 0x33E834u);
    ctx->pc = 0x33E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E82Cu;
    // 0x33e830: 0xafa72ea8  sw          $a3, 0x2EA8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 11944), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33E82Cu, 0x33E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E834u;
label_33e834:
    // 0x33e834: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x33e834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33e838:
    // 0x33e838: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x33e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33e83c:
    // 0x33e83c: 0x90a30030  lbu         $v1, 0x30($a1)
    ctx->pc = 0x33e83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
label_33e840:
    // 0x33e840: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x33e840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_33e844:
    // 0x33e844: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_33e848:
    if (ctx->pc == 0x33E848u) {
        ctx->pc = 0x33E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E844u;
        // 0x33e848: 0xafa32eac  sw          $v1, 0x2EAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E84Cu;
        goto label_33e84c;
    }
    ctx->pc = 0x33E844u;
    {
        const bool branch_taken_0x33e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E844u;
        // 0x33e848: 0xafa32eac  sw          $v1, 0x2EAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e844) {
            ctx->pc = 0x33E86Cu;
            goto label_33e86c;
        }
    }
    ctx->pc = 0x33E84Cu;
label_33e84c:
    // 0x33e84c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x33e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_33e850:
    // 0x33e850: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x33e850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_33e854:
    // 0x33e854: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33e854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_33e858:
    // 0x33e858: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x33e858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_33e85c:
    // 0x33e85c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x33e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_33e860:
    // 0x33e860: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x33e860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_33e864:
    // 0x33e864: 0x10000003  b           . + 4 + (0x3 << 2)
label_33e868:
    if (ctx->pc == 0x33E868u) {
        ctx->pc = 0x33E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E864u;
        // 0x33e868: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E86Cu;
        goto label_33e86c;
    }
    ctx->pc = 0x33E864u;
    {
        const bool branch_taken_0x33e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E864u;
        // 0x33e868: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e864) {
            ctx->pc = 0x33E874u;
            goto label_33e874;
        }
    }
    ctx->pc = 0x33E86Cu;
label_33e86c:
    // 0x33e86c: 0xc0d058e  jal         func_341638
label_33e870:
    if (ctx->pc == 0x33E870u) {
        ctx->pc = 0x33E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E86Cu;
        // 0x33e870: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E874u;
        goto label_33e874;
    }
    ctx->pc = 0x33E86Cu;
    SET_GPR_U32(ctx, 31, 0x33E874u);
    ctx->pc = 0x33E870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E86Cu;
    // 0x33e870: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341638u, 0x33E86Cu, 0x33E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E874u;
label_33e874:
    // 0x33e874: 0x8fa52ea8  lw          $a1, 0x2EA8($sp)
    ctx->pc = 0x33e874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11944)));
label_33e878:
    // 0x33e878: 0xc0d0610  jal         func_341840
label_33e87c:
    if (ctx->pc == 0x33E87Cu) {
        ctx->pc = 0x33E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E878u;
        // 0x33e87c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E880u;
        goto label_33e880;
    }
    ctx->pc = 0x33E878u;
    SET_GPR_U32(ctx, 31, 0x33E880u);
    ctx->pc = 0x33E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E878u;
    // 0x33e87c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341840u, 0x33E878u, 0x33E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E880u;
label_33e880:
    // 0x33e880: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x33e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33e884:
    // 0x33e884: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x33e884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_33e888:
    // 0x33e888: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_33e88c:
    if (ctx->pc == 0x33E88Cu) {
        ctx->pc = 0x33E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E888u;
        // 0x33e88c: 0xafa02ea0  sw          $zero, 0x2EA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E890u;
        goto label_33e890;
    }
    ctx->pc = 0x33E888u;
    {
        const bool branch_taken_0x33e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E888u;
        // 0x33e88c: 0xafa02ea0  sw          $zero, 0x2EA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e888) {
            ctx->pc = 0x33EA64u;
            goto label_33ea64;
        }
    }
    ctx->pc = 0x33E890u;
label_33e890:
    // 0x33e890: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x33e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_33e894:
    // 0x33e894: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33e898:
    if (ctx->pc == 0x33E898u) {
        ctx->pc = 0x33E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E894u;
        // 0x33e898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E89Cu;
        goto label_33e89c;
    }
    ctx->pc = 0x33E894u;
    {
        const bool branch_taken_0x33e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E894u;
        // 0x33e898: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e894) {
            ctx->pc = 0x33E8A0u;
            goto label_33e8a0;
        }
    }
    ctx->pc = 0x33E89Cu;
label_33e89c:
    // 0x33e89c: 0x8e4b001c  lw          $t3, 0x1C($s2)
    ctx->pc = 0x33e89cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_33e8a0:
    // 0x33e8a0: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x33e8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_33e8a4:
    // 0x33e8a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33e8a8:
    if (ctx->pc == 0x33E8A8u) {
        ctx->pc = 0x33E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8A4u;
        // 0x33e8a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8ACu;
        goto label_33e8ac;
    }
    ctx->pc = 0x33E8A4u;
    {
        const bool branch_taken_0x33e8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8A4u;
        // 0x33e8a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8a4) {
            ctx->pc = 0x33E8B0u;
            goto label_33e8b0;
        }
    }
    ctx->pc = 0x33E8ACu;
label_33e8ac:
    // 0x33e8ac: 0x8e480020  lw          $t0, 0x20($s2)
    ctx->pc = 0x33e8acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_33e8b0:
    // 0x33e8b0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x33e8b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_33e8b4:
    // 0x33e8b4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x33e8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_33e8b8:
    // 0x33e8b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33e8bc:
    if (ctx->pc == 0x33E8BCu) {
        ctx->pc = 0x33E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8B8u;
        // 0x33e8bc: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8C0u;
        goto label_33e8c0;
    }
    ctx->pc = 0x33E8B8u;
    {
        const bool branch_taken_0x33e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8B8u;
        // 0x33e8bc: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8b8) {
            ctx->pc = 0x33E8C4u;
            goto label_33e8c4;
        }
    }
    ctx->pc = 0x33E8C0u;
label_33e8c0:
    // 0x33e8c0: 0x8e4a0014  lw          $t2, 0x14($s2)
    ctx->pc = 0x33e8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_33e8c4:
    // 0x33e8c4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x33e8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_33e8c8:
    // 0x33e8c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33e8cc:
    if (ctx->pc == 0x33E8CCu) {
        ctx->pc = 0x33E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8C8u;
        // 0x33e8cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8D0u;
        goto label_33e8d0;
    }
    ctx->pc = 0x33E8C8u;
    {
        const bool branch_taken_0x33e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8C8u;
        // 0x33e8cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8c8) {
            ctx->pc = 0x33E8D4u;
            goto label_33e8d4;
        }
    }
    ctx->pc = 0x33E8D0u;
label_33e8d0:
    // 0x33e8d0: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x33e8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_33e8d4:
    // 0x33e8d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_33e8d8:
    // 0x33e8d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33e8dc:
    // 0x33e8dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33e8e0:
    if (ctx->pc == 0x33E8E0u) {
        ctx->pc = 0x33E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8DCu;
        // 0x33e8e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8E4u;
        goto label_33e8e4;
    }
    ctx->pc = 0x33E8DCu;
    {
        const bool branch_taken_0x33e8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8DCu;
        // 0x33e8e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8dc) {
            ctx->pc = 0x33E8E8u;
            goto label_33e8e8;
        }
    }
    ctx->pc = 0x33E8E4u;
label_33e8e4:
    // 0x33e8e4: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x33e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_33e8e8:
    // 0x33e8e8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33e8ec:
    // 0x33e8ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_33e8f0:
    // 0x33e8f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33e8f4:
    if (ctx->pc == 0x33E8F4u) {
        ctx->pc = 0x33E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8F0u;
        // 0x33e8f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E8F8u;
        goto label_33e8f8;
    }
    ctx->pc = 0x33E8F0u;
    {
        const bool branch_taken_0x33e8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8F0u;
        // 0x33e8f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8f0) {
            ctx->pc = 0x33E8FCu;
            goto label_33e8fc;
        }
    }
    ctx->pc = 0x33E8F8u;
label_33e8f8:
    // 0x33e8f8: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x33e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_33e8fc:
    // 0x33e8fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x33e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33e900:
    // 0x33e900: 0x27a626a0  addiu       $a2, $sp, 0x26A0
    ctx->pc = 0x33e900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 9888));
label_33e904:
    // 0x33e904: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x33e904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_33e908:
    // 0x33e908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33e908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e90c:
    // 0x33e90c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x33e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_33e910:
    // 0x33e910: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x33e910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33e914:
    // 0x33e914: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x33e914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_33e918:
    // 0x33e918: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x33e918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33e91c:
    // 0x33e91c: 0xc0d0048  jal         func_340120
label_33e920:
    if (ctx->pc == 0x33E920u) {
        ctx->pc = 0x33E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E91Cu;
        // 0x33e920: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E924u;
        goto label_33e924;
    }
    ctx->pc = 0x33E91Cu;
    SET_GPR_U32(ctx, 31, 0x33E924u);
    ctx->pc = 0x33E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E91Cu;
    // 0x33e920: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340120u, 0x33E91Cu, 0x33E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E924u;
label_33e924:
    // 0x33e924: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_33e928:
    if (ctx->pc == 0x33E928u) {
        ctx->pc = 0x33E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E924u;
        // 0x33e928: 0xafa22eb0  sw          $v0, 0x2EB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E92Cu;
        goto label_33e92c;
    }
    ctx->pc = 0x33E924u;
    {
        const bool branch_taken_0x33e924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E924u;
        // 0x33e928: 0xafa22eb0  sw          $v0, 0x2EB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e924) {
            ctx->pc = 0x33EA64u;
            goto label_33ea64;
        }
    }
    ctx->pc = 0x33E92Cu;
label_33e92c:
    // 0x33e92c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x33e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_33e930:
    // 0x33e930: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x33e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_33e934:
    // 0x33e934: 0x244226a0  addiu       $v0, $v0, 0x26A0
    ctx->pc = 0x33e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9888));
label_33e938:
    // 0x33e938: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33e93c:
    // 0x33e93c: 0x9663003c  lhu         $v1, 0x3C($s3)
    ctx->pc = 0x33e93cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_33e940:
    // 0x33e940: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_33e944:
    if (ctx->pc == 0x33E944u) {
        ctx->pc = 0x33E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E940u;
        // 0x33e944: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E948u;
        goto label_33e948;
    }
    ctx->pc = 0x33E940u;
    {
        const bool branch_taken_0x33e940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E940u;
        // 0x33e944: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e940) {
            ctx->pc = 0x33E95Cu;
            goto label_33e95c;
        }
    }
    ctx->pc = 0x33E948u;
label_33e948:
    // 0x33e948: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x33e948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_33e94c:
    // 0x33e94c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33e950:
    if (ctx->pc == 0x33E950u) {
        ctx->pc = 0x33E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E94Cu;
        // 0x33e950: 0x8c860034  lw          $a2, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E954u;
        goto label_33e954;
    }
    ctx->pc = 0x33E94Cu;
    {
        const bool branch_taken_0x33e94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e94c) {
            ctx->pc = 0x33E950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E94Cu;
            // 0x33e950: 0x8c860034  lw          $a2, 0x34($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E960u;
            goto label_33e960;
        }
    }
    ctx->pc = 0x33E954u;
label_33e954:
    // 0x33e954: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
label_33e958:
    if (ctx->pc == 0x33E958u) {
        ctx->pc = 0x33E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E954u;
        // 0x33e958: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E95Cu;
        goto label_33e95c;
    }
    ctx->pc = 0x33E954u;
    {
        const bool branch_taken_0x33e954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E954u;
        // 0x33e958: 0x26160001  addiu       $s6, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e954) {
            ctx->pc = 0x33EA50u;
            goto label_33ea50;
        }
    }
    ctx->pc = 0x33E95Cu;
label_33e95c:
    // 0x33e95c: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x33e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_33e960:
    // 0x33e960: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x33e960u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33e964:
    // 0x33e964: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x33e964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33e968:
    // 0x33e968: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33e96c:
    // 0x33e96c: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x33e96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_33e970:
    // 0x33e970: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x33e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_33e974:
    // 0x33e974: 0x40f809  jalr        $v0
label_33e978:
    if (ctx->pc == 0x33E978u) {
        ctx->pc = 0x33E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E974u;
        // 0x33e978: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E97Cu;
        goto label_33e97c;
    }
    ctx->pc = 0x33E974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E97Cu);
        ctx->pc = 0x33E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E974u;
        // 0x33e978: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E974u, 0x33E97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E97Cu;
label_33e97c:
    // 0x33e97c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_33e980:
    if (ctx->pc == 0x33E980u) {
        ctx->pc = 0x33E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E97Cu;
        // 0x33e980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E984u;
        goto label_33e984;
    }
    ctx->pc = 0x33E97Cu;
    {
        const bool branch_taken_0x33e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E97Cu;
        // 0x33e980: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e97c) {
            ctx->pc = 0x33EA50u;
            goto label_33ea50;
        }
    }
    ctx->pc = 0x33E984u;
label_33e984:
    // 0x33e984: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x33e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_33e988:
    // 0x33e988: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x33e988u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33e98c:
    // 0x33e98c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33e98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e990:
    // 0x33e990: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33e990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33e994:
    // 0x33e994: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33e994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33e998:
    // 0x33e998: 0x8d070034  lw          $a3, 0x34($t0)
    ctx->pc = 0x33e998u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_33e99c:
    // 0x33e99c: 0x40f809  jalr        $v0
label_33e9a0:
    if (ctx->pc == 0x33E9A0u) {
        ctx->pc = 0x33E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E99Cu;
        // 0x33e9a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9A4u;
        goto label_33e9a4;
    }
    ctx->pc = 0x33E99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E9A4u);
        ctx->pc = 0x33E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E99Cu;
        // 0x33e9a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E99Cu, 0x33E9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E9A4u;
label_33e9a4:
    // 0x33e9a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e9a8:
    // 0x33e9a8: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_33e9ac:
    if (ctx->pc == 0x33E9ACu) {
        ctx->pc = 0x33E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9A8u;
        // 0x33e9ac: 0x8fa62eb0  lw          $a2, 0x2EB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9B0u;
        goto label_33e9b0;
    }
    ctx->pc = 0x33E9A8u;
    {
        const bool branch_taken_0x33e9a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9A8u;
        // 0x33e9ac: 0x8fa62eb0  lw          $a2, 0x2EB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9a8) {
            ctx->pc = 0x33EA54u;
            goto label_33ea54;
        }
    }
    ctx->pc = 0x33E9B0u;
label_33e9b0:
    // 0x33e9b0: 0x26f5007c  addiu       $s5, $s7, 0x7C
    ctx->pc = 0x33e9b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 124));
label_33e9b4:
    // 0x33e9b4: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x33e9b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33e9b8:
    // 0x33e9b8: 0x241e00c0  addiu       $fp, $zero, 0xC0
    ctx->pc = 0x33e9b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33e9bc:
    // 0x33e9bc: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33e9bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33e9c0:
    // 0x33e9c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33e9c4:
    // 0x33e9c4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_33e9c8:
    if (ctx->pc == 0x33E9C8u) {
        ctx->pc = 0x33E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9C4u;
        // 0x33e9c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9CCu;
        goto label_33e9cc;
    }
    ctx->pc = 0x33E9C4u;
    {
        const bool branch_taken_0x33e9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9C4u;
        // 0x33e9c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9c4) {
            ctx->pc = 0x33EA44u;
            goto label_33ea44;
        }
    }
    ctx->pc = 0x33E9CCu;
label_33e9cc:
    // 0x33e9cc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x33e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33e9d0:
    // 0x33e9d0: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x33e9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33e9d4:
    // 0x33e9d4: 0x90c30030  lbu         $v1, 0x30($a2)
    ctx->pc = 0x33e9d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 48)));
label_33e9d8:
    // 0x33e9d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33e9dc:
    // 0x33e9dc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x33e9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33e9e0:
    // 0x33e9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33e9e4:
    // 0x33e9e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x33e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_33e9e8:
    // 0x33e9e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33e9ec:
    // 0x33e9ec: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_33e9f0:
    if (ctx->pc == 0x33E9F0u) {
        ctx->pc = 0x33E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9ECu;
        // 0x33e9f0: 0x8fa22ea0  lw          $v0, 0x2EA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9F4u;
        goto label_33e9f4;
    }
    ctx->pc = 0x33E9ECu;
    {
        const bool branch_taken_0x33e9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9ECu;
        // 0x33e9f0: 0x8fa22ea0  lw          $v0, 0x2EA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e9ec) {
            ctx->pc = 0x33EA44u;
            goto label_33ea44;
        }
    }
    ctx->pc = 0x33E9F4u;
label_33e9f4:
    // 0x33e9f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33e9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e9f8:
    // 0x33e9f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x33e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33e9fc:
    // 0x33e9fc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33e9fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ea00:
    // 0x33ea00: 0x5e2018  mult        $a0, $v0, $fp
    ctx->pc = 0x33ea00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33ea04:
    // 0x33ea04: 0x8fa92ea8  lw          $t1, 0x2EA8($sp)
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11944)));
label_33ea08:
    // 0x33ea08: 0x948021  addu        $s0, $a0, $s4
    ctx->pc = 0x33ea08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_33ea0c:
    // 0x33ea0c: 0x60f809  jalr        $v1
label_33ea10:
    if (ctx->pc == 0x33EA10u) {
        ctx->pc = 0x33EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA0Cu;
        // 0x33ea10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA14u;
        goto label_33ea14;
    }
    ctx->pc = 0x33EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33EA14u);
        ctx->pc = 0x33EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA0Cu;
        // 0x33ea10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EA0Cu, 0x33EA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33EA14u;
label_33ea14:
    // 0x33ea14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_33ea18:
    if (ctx->pc == 0x33EA18u) {
        ctx->pc = 0x33EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA14u;
        // 0x33ea18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA1Cu;
        goto label_33ea1c;
    }
    ctx->pc = 0x33EA14u;
    {
        const bool branch_taken_0x33ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA14u;
        // 0x33ea18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea14) {
            ctx->pc = 0x33EA44u;
            goto label_33ea44;
        }
    }
    ctx->pc = 0x33EA1Cu;
label_33ea1c:
    // 0x33ea1c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_33ea20:
    // 0x33ea20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33ea24:
    // 0x33ea24: 0x27a625d0  addiu       $a2, $sp, 0x25D0
    ctx->pc = 0x33ea24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 9680));
label_33ea28:
    // 0x33ea28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ea2c:
    // 0x33ea2c: 0x27a72ea0  addiu       $a3, $sp, 0x2EA0
    ctx->pc = 0x33ea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 11936));
label_33ea30:
    // 0x33ea30: 0x8e690034  lw          $t1, 0x34($s3)
    ctx->pc = 0x33ea30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33ea34:
    // 0x33ea34: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x33ea34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33ea38:
    // 0x33ea38: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x33ea38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_33ea3c:
    // 0x33ea3c: 0xc0cf5c6  jal         func_33D718
label_33ea40:
    if (ctx->pc == 0x33EA40u) {
        ctx->pc = 0x33EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA3Cu;
        // 0x33ea40: 0x8e4a0004  lw          $t2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA44u;
        goto label_33ea44;
    }
    ctx->pc = 0x33EA3Cu;
    SET_GPR_U32(ctx, 31, 0x33EA44u);
    ctx->pc = 0x33EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EA3Cu;
    // 0x33ea40: 0x8e4a0004  lw          $t2, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D718u, 0x33EA3Cu, 0x33EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA44u;
label_33ea44:
    // 0x33ea44: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33ea44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33ea48:
    // 0x33ea48: 0x5620ffdd  bnel        $s1, $zero, . + 4 + (-0x23 << 2)
label_33ea4c:
    if (ctx->pc == 0x33EA4Cu) {
        ctx->pc = 0x33EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA48u;
        // 0x33ea4c: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA50u;
        goto label_33ea50;
    }
    ctx->pc = 0x33EA48u;
    {
        const bool branch_taken_0x33ea48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ea48) {
            ctx->pc = 0x33EA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EA48u;
            // 0x33ea4c: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e9c0;
        }
    }
    ctx->pc = 0x33EA50u;
label_33ea50:
    // 0x33ea50: 0x8fa62eb0  lw          $a2, 0x2EB0($sp)
    ctx->pc = 0x33ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11952)));
label_33ea54:
    // 0x33ea54: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x33ea54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_33ea58:
    // 0x33ea58: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x33ea58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_33ea5c:
    // 0x33ea5c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_33ea60:
    if (ctx->pc == 0x33EA60u) {
        ctx->pc = 0x33EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA5Cu;
        // 0x33ea60: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA64u;
        goto label_33ea64;
    }
    ctx->pc = 0x33EA5Cu;
    {
        const bool branch_taken_0x33ea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA5Cu;
        // 0x33ea60: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea5c) {
            ctx->pc = 0x33E930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e930;
        }
    }
    ctx->pc = 0x33EA64u;
label_33ea64:
    // 0x33ea64: 0x8e4a0010  lw          $t2, 0x10($s2)
    ctx->pc = 0x33ea64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_33ea68:
    // 0x33ea68: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x33ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_33ea6c:
    // 0x33ea6c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_33ea70:
    if (ctx->pc == 0x33EA70u) {
        ctx->pc = 0x33EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA6Cu;
        // 0x33ea70: 0x8fa92eac  lw          $t1, 0x2EAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA74u;
        goto label_33ea74;
    }
    ctx->pc = 0x33EA6Cu;
    {
        const bool branch_taken_0x33ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA6Cu;
        // 0x33ea70: 0x8fa92eac  lw          $t1, 0x2EAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea6c) {
            ctx->pc = 0x33EB14u;
            goto label_33eb14;
        }
    }
    ctx->pc = 0x33EA74u;
label_33ea74:
    // 0x33ea74: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x33ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_33ea78:
    // 0x33ea78: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x33ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_33ea7c:
    // 0x33ea7c: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x33ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_33ea80:
    // 0x33ea80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_33ea84:
    if (ctx->pc == 0x33EA84u) {
        ctx->pc = 0x33EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA80u;
        // 0x33ea84: 0x8fb32ea0  lw          $s3, 0x2EA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA88u;
        goto label_33ea88;
    }
    ctx->pc = 0x33EA80u;
    {
        const bool branch_taken_0x33ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA80u;
        // 0x33ea84: 0x8fb32ea0  lw          $s3, 0x2EA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ea80) {
            ctx->pc = 0x33EB14u;
            goto label_33eb14;
        }
    }
    ctx->pc = 0x33EA88u;
label_33ea88:
    // 0x33ea88: 0x241400c0  addiu       $s4, $zero, 0xC0
    ctx->pc = 0x33ea88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33ea8c:
    // 0x33ea8c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x33ea8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_33ea90:
    // 0x33ea90: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x33ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_33ea94:
    // 0x33ea94: 0x2742018  mult        $a0, $s3, $s4
    ctx->pc = 0x33ea94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33ea98:
    // 0x33ea98: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x33ea98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33ea9c:
    // 0x33ea9c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x33ea9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33eaa0:
    // 0x33eaa0: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x33eaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_33eaa4:
    // 0x33eaa4: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x33eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_33eaa8:
    // 0x33eaa8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x33eaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33eaac:
    // 0x33eaac: 0x8fa92ea8  lw          $t1, 0x2EA8($sp)
    ctx->pc = 0x33eaacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11944)));
label_33eab0:
    // 0x33eab0: 0xc64d002c  lwc1        $f13, 0x2C($s2)
    ctx->pc = 0x33eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_33eab4:
    // 0x33eab4: 0x40f809  jalr        $v0
label_33eab8:
    if (ctx->pc == 0x33EAB8u) {
        ctx->pc = 0x33EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAB4u;
        // 0x33eab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EABCu;
        goto label_33eabc;
    }
    ctx->pc = 0x33EAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33EABCu);
        ctx->pc = 0x33EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAB4u;
        // 0x33eab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EAB4u, 0x33EABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33EABCu;
label_33eabc:
    // 0x33eabc: 0x8fb02ea0  lw          $s0, 0x2EA0($sp)
    ctx->pc = 0x33eabcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11936)));
label_33eac0:
    // 0x33eac0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x33eac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_33eac4:
    // 0x33eac4: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x33eac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_33eac8:
    // 0x33eac8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33eacc:
    if (ctx->pc == 0x33EACCu) {
        ctx->pc = 0x33EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAC8u;
        // 0x33eacc: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EAD0u;
        goto label_33ead0;
    }
    ctx->pc = 0x33EAC8u;
    {
        const bool branch_taken_0x33eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EAC8u;
        // 0x33eacc: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eac8) {
            ctx->pc = 0x33EB14u;
            goto label_33eb14;
        }
    }
    ctx->pc = 0x33EAD0u;
label_33ead0:
    // 0x33ead0: 0x2708023  subu        $s0, $s3, $s0
    ctx->pc = 0x33ead0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_33ead4:
    // 0x33ead4: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x33ead4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_33ead8:
    // 0x33ead8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33eadc:
    // 0x33eadc: 0x0  nop
    ctx->pc = 0x33eadcu;
    // NOP
label_33eae0:
    // 0x33eae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33eae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33eae4:
    // 0x33eae4: 0x8e4a0004  lw          $t2, 0x4($s2)
    ctx->pc = 0x33eae4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_33eae8:
    // 0x33eae8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x33eae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33eaec:
    // 0x33eaec: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x33eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_33eaf0:
    // 0x33eaf0: 0x27a625d0  addiu       $a2, $sp, 0x25D0
    ctx->pc = 0x33eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 9680));
label_33eaf4:
    // 0x33eaf4: 0x27a72ea0  addiu       $a3, $sp, 0x2EA0
    ctx->pc = 0x33eaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 11936));
label_33eaf8:
    // 0x33eaf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33eaf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33eafc:
    // 0x33eafc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33eafcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33eb00:
    // 0x33eb00: 0xc0cf5c6  jal         func_33D718
label_33eb04:
    if (ctx->pc == 0x33EB04u) {
        ctx->pc = 0x33EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB00u;
        // 0x33eb04: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB08u;
        goto label_33eb08;
    }
    ctx->pc = 0x33EB00u;
    SET_GPR_U32(ctx, 31, 0x33EB08u);
    ctx->pc = 0x33EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EB00u;
    // 0x33eb04: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D718u, 0x33EB00u, 0x33EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EB08u;
label_33eb08:
    // 0x33eb08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33eb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33eb0c:
    // 0x33eb0c: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_33eb10:
    if (ctx->pc == 0x33EB10u) {
        ctx->pc = 0x33EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB0Cu;
        // 0x33eb10: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB14u;
        goto label_33eb14;
    }
    ctx->pc = 0x33EB0Cu;
    {
        const bool branch_taken_0x33eb0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33eb0c) {
            ctx->pc = 0x33EB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33EB0Cu;
            // 0x33eb10: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33EAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33eae0;
        }
    }
    ctx->pc = 0x33EB14u;
label_33eb14:
    // 0x33eb14: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x33eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_33eb18:
    // 0x33eb18: 0x8fa32ea0  lw          $v1, 0x2EA0($sp)
    ctx->pc = 0x33eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11936)));
label_33eb1c:
    // 0x33eb1c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x33eb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_33eb20:
    // 0x33eb20: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x33eb20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_33eb24:
    // 0x33eb24: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_33eb28:
    if (ctx->pc == 0x33EB28u) {
        ctx->pc = 0x33EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB24u;
        // 0x33eb28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB2Cu;
        goto label_33eb2c;
    }
    ctx->pc = 0x33EB24u;
    {
        const bool branch_taken_0x33eb24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB24u;
        // 0x33eb28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb24) {
            ctx->pc = 0x33EB80u;
            goto label_33eb80;
        }
    }
    ctx->pc = 0x33EB2Cu;
label_33eb2c:
    // 0x33eb2c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x33eb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33eb30:
    // 0x33eb30: 0x27a725d0  addiu       $a3, $sp, 0x25D0
    ctx->pc = 0x33eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 9680));
label_33eb34:
    // 0x33eb34: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_33eb38:
    // 0x33eb38: 0x8fa62ea4  lw          $a2, 0x2EA4($sp)
    ctx->pc = 0x33eb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11940)));
label_33eb3c:
    // 0x33eb3c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_33eb40:
    // 0x33eb40: 0xc00013  mtlo        $a2
    ctx->pc = 0x33eb40u;
    ctx->lo = GPR_U64(ctx, 6);
label_33eb44:
    // 0x33eb44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33eb48:
    // 0x33eb48: 0x70881800  madd        $v1, $a0, $t0
    ctx->pc = 0x33eb48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33eb4c:
    // 0x33eb4c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x33eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33eb50:
    // 0x33eb50: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x33eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_33eb54:
    // 0x33eb54: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x33eb54u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33eb58:
    // 0x33eb58: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x33eb58u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_33eb5c:
    // 0x33eb5c: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x33eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
label_33eb60:
    // 0x33eb60: 0x7c6a0010  sq          $t2, 0x10($v1)
    ctx->pc = 0x33eb60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 10));
label_33eb64:
    // 0x33eb64: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_33eb68:
    // 0x33eb68: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_33eb6c:
    if (ctx->pc == 0x33EB6Cu) {
        ctx->pc = 0x33EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB68u;
        // 0x33eb6c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB70u;
        goto label_33eb70;
    }
    ctx->pc = 0x33EB68u;
    {
        const bool branch_taken_0x33eb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB68u;
        // 0x33eb6c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb68) {
            ctx->pc = 0x33EB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33eb54;
        }
    }
    ctx->pc = 0x33EB70u;
label_33eb70:
    // 0x33eb70: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x33eb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33eb74:
    // 0x33eb74: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x33eb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_33eb78:
    // 0x33eb78: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_33eb7c:
    if (ctx->pc == 0x33EB7Cu) {
        ctx->pc = 0x33EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB78u;
        // 0x33eb7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB80u;
        goto label_33eb80;
    }
    ctx->pc = 0x33EB78u;
    {
        const bool branch_taken_0x33eb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB78u;
        // 0x33eb7c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eb78) {
            ctx->pc = 0x33EB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33eb38;
        }
    }
    ctx->pc = 0x33EB80u;
label_33eb80:
    // 0x33eb80: 0x7bb02f50  lq          $s0, 0x2F50($sp)
    ctx->pc = 0x33eb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 12112)));
label_33eb84:
    // 0x33eb84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33eb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33eb88:
    // 0x33eb88: 0x7bb12f40  lq          $s1, 0x2F40($sp)
    ctx->pc = 0x33eb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 12096)));
label_33eb8c:
    // 0x33eb8c: 0x7bb22f30  lq          $s2, 0x2F30($sp)
    ctx->pc = 0x33eb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 12080)));
label_33eb90:
    // 0x33eb90: 0x7bb32f20  lq          $s3, 0x2F20($sp)
    ctx->pc = 0x33eb90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 12064)));
label_33eb94:
    // 0x33eb94: 0x7bb42f10  lq          $s4, 0x2F10($sp)
    ctx->pc = 0x33eb94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 12048)));
label_33eb98:
    // 0x33eb98: 0x7bb52f00  lq          $s5, 0x2F00($sp)
    ctx->pc = 0x33eb98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 12032)));
label_33eb9c:
    // 0x33eb9c: 0x7bb62ef0  lq          $s6, 0x2EF0($sp)
    ctx->pc = 0x33eb9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 12016)));
label_33eba0:
    // 0x33eba0: 0x7bb72ee0  lq          $s7, 0x2EE0($sp)
    ctx->pc = 0x33eba0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 12000)));
label_33eba4:
    // 0x33eba4: 0x7bbe2ed0  lq          $fp, 0x2ED0($sp)
    ctx->pc = 0x33eba4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 11984)));
label_33eba8:
    // 0x33eba8: 0xdfbf2ec0  ld          $ra, 0x2EC0($sp)
    ctx->pc = 0x33eba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 11968)));
label_33ebac:
    // 0x33ebac: 0x3e00008  jr          $ra
label_33ebb0:
    if (ctx->pc == 0x33EBB0u) {
        ctx->pc = 0x33EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBACu;
        // 0x33ebb0: 0x27bd2f60  addiu       $sp, $sp, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EBB4u;
        goto label_33ebb4;
    }
    ctx->pc = 0x33EBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EBACu;
        // 0x33ebb0: 0x27bd2f60  addiu       $sp, $sp, 0x2F60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EBB4u;
label_33ebb4:
    // 0x33ebb4: 0x0  nop
    ctx->pc = 0x33ebb4u;
    // NOP
    ctx->pc = 0x33ebb8u;
}
