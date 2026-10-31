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

// Function: sub_001557F8
// Address: 0x1557f8 - 0x155a90
void sub_001557F8_0x1557f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001557F8_0x1557f8");
#endif

    switch (ctx->pc) {
        case 0x1557f8u: goto label_1557f8;
        case 0x1557fcu: goto label_1557fc;
        case 0x155800u: goto label_155800;
        case 0x155804u: goto label_155804;
        case 0x155808u: goto label_155808;
        case 0x15580cu: goto label_15580c;
        case 0x155810u: goto label_155810;
        case 0x155814u: goto label_155814;
        case 0x155818u: goto label_155818;
        case 0x15581cu: goto label_15581c;
        case 0x155820u: goto label_155820;
        case 0x155824u: goto label_155824;
        case 0x155828u: goto label_155828;
        case 0x15582cu: goto label_15582c;
        case 0x155830u: goto label_155830;
        case 0x155834u: goto label_155834;
        case 0x155838u: goto label_155838;
        case 0x15583cu: goto label_15583c;
        case 0x155840u: goto label_155840;
        case 0x155844u: goto label_155844;
        case 0x155848u: goto label_155848;
        case 0x15584cu: goto label_15584c;
        case 0x155850u: goto label_155850;
        case 0x155854u: goto label_155854;
        case 0x155858u: goto label_155858;
        case 0x15585cu: goto label_15585c;
        case 0x155860u: goto label_155860;
        case 0x155864u: goto label_155864;
        case 0x155868u: goto label_155868;
        case 0x15586cu: goto label_15586c;
        case 0x155870u: goto label_155870;
        case 0x155874u: goto label_155874;
        case 0x155878u: goto label_155878;
        case 0x15587cu: goto label_15587c;
        case 0x155880u: goto label_155880;
        case 0x155884u: goto label_155884;
        case 0x155888u: goto label_155888;
        case 0x15588cu: goto label_15588c;
        case 0x155890u: goto label_155890;
        case 0x155894u: goto label_155894;
        case 0x155898u: goto label_155898;
        case 0x15589cu: goto label_15589c;
        case 0x1558a0u: goto label_1558a0;
        case 0x1558a4u: goto label_1558a4;
        case 0x1558a8u: goto label_1558a8;
        case 0x1558acu: goto label_1558ac;
        case 0x1558b0u: goto label_1558b0;
        case 0x1558b4u: goto label_1558b4;
        case 0x1558b8u: goto label_1558b8;
        case 0x1558bcu: goto label_1558bc;
        case 0x1558c0u: goto label_1558c0;
        case 0x1558c4u: goto label_1558c4;
        case 0x1558c8u: goto label_1558c8;
        case 0x1558ccu: goto label_1558cc;
        case 0x1558d0u: goto label_1558d0;
        case 0x1558d4u: goto label_1558d4;
        case 0x1558d8u: goto label_1558d8;
        case 0x1558dcu: goto label_1558dc;
        case 0x1558e0u: goto label_1558e0;
        case 0x1558e4u: goto label_1558e4;
        case 0x1558e8u: goto label_1558e8;
        case 0x1558ecu: goto label_1558ec;
        case 0x1558f0u: goto label_1558f0;
        case 0x1558f4u: goto label_1558f4;
        case 0x1558f8u: goto label_1558f8;
        case 0x1558fcu: goto label_1558fc;
        case 0x155900u: goto label_155900;
        case 0x155904u: goto label_155904;
        case 0x155908u: goto label_155908;
        case 0x15590cu: goto label_15590c;
        case 0x155910u: goto label_155910;
        case 0x155914u: goto label_155914;
        case 0x155918u: goto label_155918;
        case 0x15591cu: goto label_15591c;
        case 0x155920u: goto label_155920;
        case 0x155924u: goto label_155924;
        case 0x155928u: goto label_155928;
        case 0x15592cu: goto label_15592c;
        case 0x155930u: goto label_155930;
        case 0x155934u: goto label_155934;
        case 0x155938u: goto label_155938;
        case 0x15593cu: goto label_15593c;
        case 0x155940u: goto label_155940;
        case 0x155944u: goto label_155944;
        case 0x155948u: goto label_155948;
        case 0x15594cu: goto label_15594c;
        case 0x155950u: goto label_155950;
        case 0x155954u: goto label_155954;
        case 0x155958u: goto label_155958;
        case 0x15595cu: goto label_15595c;
        case 0x155960u: goto label_155960;
        case 0x155964u: goto label_155964;
        case 0x155968u: goto label_155968;
        case 0x15596cu: goto label_15596c;
        case 0x155970u: goto label_155970;
        case 0x155974u: goto label_155974;
        case 0x155978u: goto label_155978;
        case 0x15597cu: goto label_15597c;
        case 0x155980u: goto label_155980;
        case 0x155984u: goto label_155984;
        case 0x155988u: goto label_155988;
        case 0x15598cu: goto label_15598c;
        case 0x155990u: goto label_155990;
        case 0x155994u: goto label_155994;
        case 0x155998u: goto label_155998;
        case 0x15599cu: goto label_15599c;
        case 0x1559a0u: goto label_1559a0;
        case 0x1559a4u: goto label_1559a4;
        case 0x1559a8u: goto label_1559a8;
        case 0x1559acu: goto label_1559ac;
        case 0x1559b0u: goto label_1559b0;
        case 0x1559b4u: goto label_1559b4;
        case 0x1559b8u: goto label_1559b8;
        case 0x1559bcu: goto label_1559bc;
        case 0x1559c0u: goto label_1559c0;
        case 0x1559c4u: goto label_1559c4;
        case 0x1559c8u: goto label_1559c8;
        case 0x1559ccu: goto label_1559cc;
        case 0x1559d0u: goto label_1559d0;
        case 0x1559d4u: goto label_1559d4;
        case 0x1559d8u: goto label_1559d8;
        case 0x1559dcu: goto label_1559dc;
        case 0x1559e0u: goto label_1559e0;
        case 0x1559e4u: goto label_1559e4;
        case 0x1559e8u: goto label_1559e8;
        case 0x1559ecu: goto label_1559ec;
        case 0x1559f0u: goto label_1559f0;
        case 0x1559f4u: goto label_1559f4;
        case 0x1559f8u: goto label_1559f8;
        case 0x1559fcu: goto label_1559fc;
        case 0x155a00u: goto label_155a00;
        case 0x155a04u: goto label_155a04;
        case 0x155a08u: goto label_155a08;
        case 0x155a0cu: goto label_155a0c;
        case 0x155a10u: goto label_155a10;
        case 0x155a14u: goto label_155a14;
        case 0x155a18u: goto label_155a18;
        case 0x155a1cu: goto label_155a1c;
        case 0x155a20u: goto label_155a20;
        case 0x155a24u: goto label_155a24;
        case 0x155a28u: goto label_155a28;
        case 0x155a2cu: goto label_155a2c;
        case 0x155a30u: goto label_155a30;
        case 0x155a34u: goto label_155a34;
        case 0x155a38u: goto label_155a38;
        case 0x155a3cu: goto label_155a3c;
        case 0x155a40u: goto label_155a40;
        case 0x155a44u: goto label_155a44;
        case 0x155a48u: goto label_155a48;
        case 0x155a4cu: goto label_155a4c;
        case 0x155a50u: goto label_155a50;
        case 0x155a54u: goto label_155a54;
        case 0x155a58u: goto label_155a58;
        case 0x155a5cu: goto label_155a5c;
        case 0x155a60u: goto label_155a60;
        case 0x155a64u: goto label_155a64;
        case 0x155a68u: goto label_155a68;
        case 0x155a6cu: goto label_155a6c;
        case 0x155a70u: goto label_155a70;
        case 0x155a74u: goto label_155a74;
        case 0x155a78u: goto label_155a78;
        case 0x155a7cu: goto label_155a7c;
        case 0x155a80u: goto label_155a80;
        case 0x155a84u: goto label_155a84;
        case 0x155a88u: goto label_155a88;
        case 0x155a8cu: goto label_155a8c;
        default: break;
    }

    ctx->pc = 0x1557f8u;

label_1557f8:
    // 0x1557f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1557fc:
    // 0x1557fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1557fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_155800:
    // 0x155800: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x155800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_155804:
    // 0x155804: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x155804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_155808:
    // 0x155808: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x155808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_15580c:
    // 0x15580c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_155810:
    // 0x155810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155814:
    // 0x155814: 0xc0579d2  jal         func_15E748
label_155818:
    if (ctx->pc == 0x155818u) {
        ctx->pc = 0x15581Cu;
        goto label_15581c;
    }
    ctx->pc = 0x155814u;
    SET_GPR_U32(ctx, 31, 0x15581Cu);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155814u, 0x15581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15581Cu;
label_15581c:
    // 0x15581c: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x15581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_155820:
    // 0x155820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_155824:
    if (ctx->pc == 0x155824u) {
        ctx->pc = 0x155824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155820u;
        // 0x155824: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155828u;
        goto label_155828;
    }
    ctx->pc = 0x155820u;
    {
        const bool branch_taken_0x155820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155820u;
        // 0x155824: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155820) {
            ctx->pc = 0x155838u;
            goto label_155838;
        }
    }
    ctx->pc = 0x155828u;
label_155828:
    // 0x155828: 0xc05797a  jal         func_15E5E8
label_15582c:
    if (ctx->pc == 0x15582Cu) {
        ctx->pc = 0x15582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155828u;
        // 0x15582c: 0x248453a0  addiu       $a0, $a0, 0x53A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155830u;
        goto label_155830;
    }
    ctx->pc = 0x155828u;
    SET_GPR_U32(ctx, 31, 0x155830u);
    ctx->pc = 0x15582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155828u;
    // 0x15582c: 0x248453a0  addiu       $a0, $a0, 0x53A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x155828u, 0x155830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155830u;
label_155830:
    // 0x155830: 0x1000008f  b           . + 4 + (0x8F << 2)
label_155834:
    if (ctx->pc == 0x155834u) {
        ctx->pc = 0x155834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155830u;
        // 0x155834: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155838u;
        goto label_155838;
    }
    ctx->pc = 0x155830u;
    {
        const bool branch_taken_0x155830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155830u;
        // 0x155834: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155830) {
            ctx->pc = 0x155A70u;
            goto label_155a70;
        }
    }
    ctx->pc = 0x155838u;
label_155838:
    // 0x155838: 0xc057994  jal         func_15E650
label_15583c:
    if (ctx->pc == 0x15583Cu) {
        ctx->pc = 0x155840u;
        goto label_155840;
    }
    ctx->pc = 0x155838u;
    SET_GPR_U32(ctx, 31, 0x155840u);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x155838u, 0x155840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155840u;
label_155840:
    // 0x155840: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x155840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_155844:
    // 0x155844: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x155844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_155848:
    // 0x155848: 0x8c63ebec  lw          $v1, -0x1414($v1)
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962156)));
label_15584c:
    // 0x15584c: 0x8c6207a4  lw          $v0, 0x7A4($v1)
    ctx->pc = 0x15584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1956)));
label_155850:
    // 0x155850: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_155854:
    if (ctx->pc == 0x155854u) {
        ctx->pc = 0x155854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155850u;
        // 0x155854: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155858u;
        goto label_155858;
    }
    ctx->pc = 0x155850u;
    {
        const bool branch_taken_0x155850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155850u;
        // 0x155854: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155850) {
            ctx->pc = 0x155878u;
            goto label_155878;
        }
    }
    ctx->pc = 0x155858u;
label_155858:
    // 0x155858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15585c:
    // 0x15585c: 0xc1073bc  jal         func_41CEF0
label_155860:
    if (ctx->pc == 0x155860u) {
        ctx->pc = 0x155860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15585Cu;
        // 0x155860: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155864u;
        goto label_155864;
    }
    ctx->pc = 0x15585Cu;
    SET_GPR_U32(ctx, 31, 0x155864u);
    ctx->pc = 0x155860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15585Cu;
    // 0x155860: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x15585Cu, 0x155864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155864u;
label_155864:
    // 0x155864: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x155864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_155868:
    // 0x155868: 0xc05835e  jal         func_160D78
label_15586c:
    if (ctx->pc == 0x15586Cu) {
        ctx->pc = 0x15586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155868u;
        // 0x15586c: 0x2484e7d8  addiu       $a0, $a0, -0x1828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155870u;
        goto label_155870;
    }
    ctx->pc = 0x155868u;
    SET_GPR_U32(ctx, 31, 0x155870u);
    ctx->pc = 0x15586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155868u;
    // 0x15586c: 0x2484e7d8  addiu       $a0, $a0, -0x1828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x155868u, 0x155870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155870u;
label_155870:
    // 0x155870: 0x1000007f  b           . + 4 + (0x7F << 2)
label_155874:
    if (ctx->pc == 0x155874u) {
        ctx->pc = 0x155874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155870u;
        // 0x155874: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155878u;
        goto label_155878;
    }
    ctx->pc = 0x155870u;
    {
        const bool branch_taken_0x155870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155870u;
        // 0x155874: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155870) {
            ctx->pc = 0x155A70u;
            goto label_155a70;
        }
    }
    ctx->pc = 0x155878u;
label_155878:
    // 0x155878: 0x8c6207a8  lw          $v0, 0x7A8($v1)
    ctx->pc = 0x155878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1960)));
label_15587c:
    // 0x15587c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_155880:
    if (ctx->pc == 0x155880u) {
        ctx->pc = 0x155880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15587Cu;
        // 0x155880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155884u;
        goto label_155884;
    }
    ctx->pc = 0x15587Cu;
    {
        const bool branch_taken_0x15587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15587Cu;
        // 0x155880: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15587c) {
            ctx->pc = 0x1558F8u;
            goto label_1558f8;
        }
    }
    ctx->pc = 0x155884u;
label_155884:
    // 0x155884: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x155884u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_155888:
    // 0x155888: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_15588c:
    // 0x15588c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_155890:
    // 0x155890: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x155890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155894:
    // 0x155894: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x155894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_155898:
    // 0x155898: 0xac83014c  sw          $v1, 0x14C($a0)
    ctx->pc = 0x155898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 3));
label_15589c:
    // 0x15589c: 0x24a5e798  addiu       $a1, $a1, -0x1868
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961048));
label_1558a0:
    // 0x1558a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1558a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1558a4:
    // 0x1558a4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1558a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1558a8:
    // 0x1558a8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1558a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1558ac:
    // 0x1558ac: 0x40f809  jalr        $v0
label_1558b0:
    if (ctx->pc == 0x1558B0u) {
        ctx->pc = 0x1558B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558ACu;
        // 0x1558b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558B4u;
        goto label_1558b4;
    }
    ctx->pc = 0x1558ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1558B4u);
        ctx->pc = 0x1558B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558ACu;
        // 0x1558b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558ACu, 0x1558B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1558B4u;
label_1558b4:
    // 0x1558b4: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1558b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1558b8:
    // 0x1558b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1558b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1558bc:
    // 0x1558bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1558bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1558c0:
    // 0x1558c0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1558c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1558c4:
    // 0x1558c4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1558c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1558c8:
    // 0x1558c8: 0x60f809  jalr        $v1
label_1558cc:
    if (ctx->pc == 0x1558CCu) {
        ctx->pc = 0x1558CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558C8u;
        // 0x1558cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558D0u;
        goto label_1558d0;
    }
    ctx->pc = 0x1558C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1558D0u);
        ctx->pc = 0x1558CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558C8u;
        // 0x1558cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558C8u, 0x1558D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1558D0u;
label_1558d0:
    // 0x1558d0: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1558d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1558d4:
    // 0x1558d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1558d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1558d8:
    // 0x1558d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1558d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1558dc:
    // 0x1558dc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1558dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1558e0:
    // 0x1558e0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1558e4:
    // 0x1558e4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1558e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1558e8:
    // 0x1558e8: 0x60f809  jalr        $v1
label_1558ec:
    if (ctx->pc == 0x1558ECu) {
        ctx->pc = 0x1558ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558E8u;
        // 0x1558ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558F0u;
        goto label_1558f0;
    }
    ctx->pc = 0x1558E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1558F0u);
        ctx->pc = 0x1558ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558E8u;
        // 0x1558ec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558E8u, 0x1558F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1558F0u;
label_1558f0:
    // 0x1558f0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1558f4:
    if (ctx->pc == 0x1558F4u) {
        ctx->pc = 0x1558F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558F0u;
        // 0x1558f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558F8u;
        goto label_1558f8;
    }
    ctx->pc = 0x1558F0u;
    {
        const bool branch_taken_0x1558f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558F0u;
        // 0x1558f4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558f0) {
            ctx->pc = 0x155A70u;
            goto label_155a70;
        }
    }
    ctx->pc = 0x1558F8u;
label_1558f8:
    // 0x1558f8: 0x8c6207ac  lw          $v0, 0x7AC($v1)
    ctx->pc = 0x1558f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1964)));
label_1558fc:
    // 0x1558fc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_155900:
    if (ctx->pc == 0x155900u) {
        ctx->pc = 0x155900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558FCu;
        // 0x155900: 0x8c83ebec  lw          $v1, -0x1414($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155904u;
        goto label_155904;
    }
    ctx->pc = 0x1558FCu;
    {
        const bool branch_taken_0x1558fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558fc) {
            ctx->pc = 0x155900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1558FCu;
            // 0x155900: 0x8c83ebec  lw          $v1, -0x1414($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1559A0u;
            goto label_1559a0;
        }
    }
    ctx->pc = 0x155904u;
label_155904:
    // 0x155904: 0x8c6207b0  lw          $v0, 0x7B0($v1)
    ctx->pc = 0x155904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1968)));
label_155908:
    // 0x155908: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_15590c:
    if (ctx->pc == 0x15590Cu) {
        ctx->pc = 0x15590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155908u;
        // 0x15590c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155910u;
        goto label_155910;
    }
    ctx->pc = 0x155908u;
    {
        const bool branch_taken_0x155908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155908u;
        // 0x15590c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155908) {
            ctx->pc = 0x15599Cu;
            goto label_15599c;
        }
    }
    ctx->pc = 0x155910u;
label_155910:
    // 0x155910: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155914:
    // 0x155914: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_155918:
    // 0x155918: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_15591c:
    // 0x15591c: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x15591cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_155920:
    // 0x155920: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x155920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_155924:
    // 0x155924: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x155924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_155928:
    // 0x155928: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x155928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15592c:
    // 0x15592c: 0xc0e409a  jal         func_390268
label_155930:
    if (ctx->pc == 0x155930u) {
        ctx->pc = 0x155930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15592Cu;
        // 0x155930: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155934u;
        goto label_155934;
    }
    ctx->pc = 0x15592Cu;
    SET_GPR_U32(ctx, 31, 0x155934u);
    ctx->pc = 0x155930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15592Cu;
    // 0x155930: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x15592Cu, 0x155934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155934u;
label_155934:
    // 0x155934: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_155938:
    // 0x155938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15593c:
    // 0x15593c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155940:
    // 0x155940: 0xc08bad0  jal         func_22EB40
label_155944:
    if (ctx->pc == 0x155944u) {
        ctx->pc = 0x155944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155940u;
        // 0x155944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155948u;
        goto label_155948;
    }
    ctx->pc = 0x155940u;
    SET_GPR_U32(ctx, 31, 0x155948u);
    ctx->pc = 0x155944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155940u;
    // 0x155944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x155940u, 0x155948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155948u;
label_155948:
    // 0x155948: 0xc08a18c  jal         func_228630
label_15594c:
    if (ctx->pc == 0x15594Cu) {
        ctx->pc = 0x15594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155948u;
        // 0x15594c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155950u;
        goto label_155950;
    }
    ctx->pc = 0x155948u;
    SET_GPR_U32(ctx, 31, 0x155950u);
    ctx->pc = 0x15594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155948u;
    // 0x15594c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228630u, 0x155948u, 0x155950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155950u;
label_155950:
    // 0x155950: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_155954:
    // 0x155954: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_155958:
    // 0x155958: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x155958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_15595c:
    // 0x15595c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x15595cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_155960:
    // 0x155960: 0x60f809  jalr        $v1
label_155964:
    if (ctx->pc == 0x155964u) {
        ctx->pc = 0x155964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155960u;
        // 0x155964: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155968u;
        goto label_155968;
    }
    ctx->pc = 0x155960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155968u);
        ctx->pc = 0x155964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155960u;
        // 0x155964: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155960u, 0x155968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155968u;
label_155968:
    // 0x155968: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15596c:
    // 0x15596c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15596cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155970:
    // 0x155970: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x155970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_155974:
    // 0x155974: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x155974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_155978:
    // 0x155978: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x155978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_15597c:
    // 0x15597c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x15597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_155980:
    // 0x155980: 0x60f809  jalr        $v1
label_155984:
    if (ctx->pc == 0x155984u) {
        ctx->pc = 0x155984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155980u;
        // 0x155984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155988u;
        goto label_155988;
    }
    ctx->pc = 0x155980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155988u);
        ctx->pc = 0x155984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155980u;
        // 0x155984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155980u, 0x155988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155988u;
label_155988:
    // 0x155988: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x155988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15598c:
    // 0x15598c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_155990:
    if (ctx->pc == 0x155990u) {
        ctx->pc = 0x155990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15598Cu;
        // 0x155990: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155994u;
        goto label_155994;
    }
    ctx->pc = 0x15598Cu;
    {
        const bool branch_taken_0x15598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15598c) {
            ctx->pc = 0x155990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15598Cu;
            // 0x155990: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155928;
        }
    }
    ctx->pc = 0x155994u;
label_155994:
    // 0x155994: 0x10000034  b           . + 4 + (0x34 << 2)
label_155998:
    if (ctx->pc == 0x155998u) {
        ctx->pc = 0x155998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155994u;
        // 0x155998: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15599Cu;
        goto label_15599c;
    }
    ctx->pc = 0x155994u;
    {
        const bool branch_taken_0x155994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155994u;
        // 0x155998: 0x8e82489c  lw          $v0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155994) {
            ctx->pc = 0x155A68u;
            goto label_155a68;
        }
    }
    ctx->pc = 0x15599Cu;
label_15599c:
    // 0x15599c: 0x8c83ebec  lw          $v1, -0x1414($a0)
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962156)));
label_1559a0:
    // 0x1559a0: 0x8c6207ac  lw          $v0, 0x7AC($v1)
    ctx->pc = 0x1559a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1964)));
label_1559a4:
    // 0x1559a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1559a8:
    if (ctx->pc == 0x1559A8u) {
        ctx->pc = 0x1559A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559A4u;
        // 0x1559a8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559ACu;
        goto label_1559ac;
    }
    ctx->pc = 0x1559A4u;
    {
        const bool branch_taken_0x1559a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559A4u;
        // 0x1559a8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559a4) {
            ctx->pc = 0x1559F8u;
            goto label_1559f8;
        }
    }
    ctx->pc = 0x1559ACu;
label_1559ac:
    // 0x1559ac: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1559acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1559b0:
    // 0x1559b0: 0xc0e409a  jal         func_390268
label_1559b4:
    if (ctx->pc == 0x1559B4u) {
        ctx->pc = 0x1559B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559B0u;
        // 0x1559b4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559B8u;
        goto label_1559b8;
    }
    ctx->pc = 0x1559B0u;
    SET_GPR_U32(ctx, 31, 0x1559B8u);
    ctx->pc = 0x1559B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1559B0u;
    // 0x1559b4: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1559B0u, 0x1559B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559B8u;
label_1559b8:
    // 0x1559b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1559b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1559bc:
    // 0x1559bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1559bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1559c0:
    // 0x1559c0: 0xc08bad0  jal         func_22EB40
label_1559c4:
    if (ctx->pc == 0x1559C4u) {
        ctx->pc = 0x1559C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559C0u;
        // 0x1559c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559C8u;
        goto label_1559c8;
    }
    ctx->pc = 0x1559C0u;
    SET_GPR_U32(ctx, 31, 0x1559C8u);
    ctx->pc = 0x1559C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1559C0u;
    // 0x1559c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x1559C0u, 0x1559C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559C8u;
label_1559c8:
    // 0x1559c8: 0xc08a18c  jal         func_228630
label_1559cc:
    if (ctx->pc == 0x1559CCu) {
        ctx->pc = 0x1559CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559C8u;
        // 0x1559cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559D0u;
        goto label_1559d0;
    }
    ctx->pc = 0x1559C8u;
    SET_GPR_U32(ctx, 31, 0x1559D0u);
    ctx->pc = 0x1559CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1559C8u;
    // 0x1559cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228630u, 0x1559C8u, 0x1559D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1559D0u;
label_1559d0:
    // 0x1559d0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1559d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1559d4:
    // 0x1559d4: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1559d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_1559d8:
    // 0x1559d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1559d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1559dc:
    // 0x1559dc: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x1559dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_1559e0:
    // 0x1559e0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1559e4:
    // 0x1559e4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1559e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1559e8:
    // 0x1559e8: 0x60f809  jalr        $v1
label_1559ec:
    if (ctx->pc == 0x1559ECu) {
        ctx->pc = 0x1559ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559E8u;
        // 0x1559ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559F0u;
        goto label_1559f0;
    }
    ctx->pc = 0x1559E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1559F0u);
        ctx->pc = 0x1559ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559E8u;
        // 0x1559ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1559E8u, 0x1559F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1559F0u;
label_1559f0:
    // 0x1559f0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1559f4:
    if (ctx->pc == 0x1559F4u) {
        ctx->pc = 0x1559F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559F0u;
        // 0x1559f4: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1559F8u;
        goto label_1559f8;
    }
    ctx->pc = 0x1559F0u;
    {
        const bool branch_taken_0x1559f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559F0u;
        // 0x1559f4: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559f0) {
            ctx->pc = 0x155A4Cu;
            goto label_155a4c;
        }
    }
    ctx->pc = 0x1559F8u;
label_1559f8:
    // 0x1559f8: 0x8c6207b0  lw          $v0, 0x7B0($v1)
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1968)));
label_1559fc:
    // 0x1559fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_155a00:
    if (ctx->pc == 0x155A00u) {
        ctx->pc = 0x155A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559FCu;
        // 0x155a00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A04u;
        goto label_155a04;
    }
    ctx->pc = 0x1559FCu;
    {
        const bool branch_taken_0x1559fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1559FCu;
        // 0x155a00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559fc) {
            ctx->pc = 0x155A70u;
            goto label_155a70;
        }
    }
    ctx->pc = 0x155A04u;
label_155a04:
    // 0x155a04: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x155a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_155a08:
    // 0x155a08: 0xc0e409a  jal         func_390268
label_155a0c:
    if (ctx->pc == 0x155A0Cu) {
        ctx->pc = 0x155A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A08u;
        // 0x155a0c: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A10u;
        goto label_155a10;
    }
    ctx->pc = 0x155A08u;
    SET_GPR_U32(ctx, 31, 0x155A10u);
    ctx->pc = 0x155A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A08u;
    // 0x155a0c: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x155A08u, 0x155A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155A10u;
label_155a10:
    // 0x155a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155a14:
    // 0x155a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155a18:
    // 0x155a18: 0xc08bad0  jal         func_22EB40
label_155a1c:
    if (ctx->pc == 0x155A1Cu) {
        ctx->pc = 0x155A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A18u;
        // 0x155a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A20u;
        goto label_155a20;
    }
    ctx->pc = 0x155A18u;
    SET_GPR_U32(ctx, 31, 0x155A20u);
    ctx->pc = 0x155A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A18u;
    // 0x155a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x155A18u, 0x155A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155A20u;
label_155a20:
    // 0x155a20: 0xc08a18c  jal         func_228630
label_155a24:
    if (ctx->pc == 0x155A24u) {
        ctx->pc = 0x155A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A20u;
        // 0x155a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A28u;
        goto label_155a28;
    }
    ctx->pc = 0x155A20u;
    SET_GPR_U32(ctx, 31, 0x155A28u);
    ctx->pc = 0x155A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A20u;
    // 0x155a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228630u, 0x155A20u, 0x155A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155A28u;
label_155a28:
    // 0x155a28: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_155a2c:
    // 0x155a2c: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x155a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_155a30:
    // 0x155a30: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x155a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_155a34:
    // 0x155a34: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x155a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_155a38:
    // 0x155a38: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x155a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_155a3c:
    // 0x155a3c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x155a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_155a40:
    // 0x155a40: 0x60f809  jalr        $v1
label_155a44:
    if (ctx->pc == 0x155A44u) {
        ctx->pc = 0x155A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A40u;
        // 0x155a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A48u;
        goto label_155a48;
    }
    ctx->pc = 0x155A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155A48u);
        ctx->pc = 0x155A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A40u;
        // 0x155a44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A40u, 0x155A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155A48u;
label_155a48:
    // 0x155a48: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x155a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_155a4c:
    // 0x155a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155a50:
    // 0x155a50: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x155a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_155a54:
    // 0x155a54: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_155a58:
    // 0x155a58: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x155a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_155a5c:
    // 0x155a5c: 0x60f809  jalr        $v1
label_155a60:
    if (ctx->pc == 0x155A60u) {
        ctx->pc = 0x155A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A5Cu;
        // 0x155a60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A64u;
        goto label_155a64;
    }
    ctx->pc = 0x155A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155A64u);
        ctx->pc = 0x155A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A5Cu;
        // 0x155a60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A5Cu, 0x155A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155A64u;
label_155a64:
    // 0x155a64: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x155a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_155a68:
    // 0x155a68: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x155a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
label_155a6c:
    // 0x155a6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x155a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_155a70:
    // 0x155a70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x155a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155a74:
    // 0x155a74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x155a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_155a78:
    // 0x155a78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x155a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155a7c:
    // 0x155a7c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x155a7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155a80:
    // 0x155a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155a84:
    // 0x155a84: 0x3e00008  jr          $ra
label_155a88:
    if (ctx->pc == 0x155A88u) {
        ctx->pc = 0x155A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A84u;
        // 0x155a88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155A8Cu;
        goto label_155a8c;
    }
    ctx->pc = 0x155A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A84u;
        // 0x155a88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A8Cu;
label_155a8c:
    // 0x155a8c: 0x0  nop
    ctx->pc = 0x155a8cu;
    // NOP
    ctx->pc = 0x155a90u;
}
