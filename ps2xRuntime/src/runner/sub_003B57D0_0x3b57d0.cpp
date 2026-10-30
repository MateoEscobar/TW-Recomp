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

// Function: sub_003B57D0
// Address: 0x3b57d0 - 0x3b5950
void sub_003B57D0_0x3b57d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B57D0_0x3b57d0");
#endif

    switch (ctx->pc) {
        case 0x3b57d0u: goto label_3b57d0;
        case 0x3b57d4u: goto label_3b57d4;
        case 0x3b57d8u: goto label_3b57d8;
        case 0x3b57dcu: goto label_3b57dc;
        case 0x3b57e0u: goto label_3b57e0;
        case 0x3b57e4u: goto label_3b57e4;
        case 0x3b57e8u: goto label_3b57e8;
        case 0x3b57ecu: goto label_3b57ec;
        case 0x3b57f0u: goto label_3b57f0;
        case 0x3b57f4u: goto label_3b57f4;
        case 0x3b57f8u: goto label_3b57f8;
        case 0x3b57fcu: goto label_3b57fc;
        case 0x3b5800u: goto label_3b5800;
        case 0x3b5804u: goto label_3b5804;
        case 0x3b5808u: goto label_3b5808;
        case 0x3b580cu: goto label_3b580c;
        case 0x3b5810u: goto label_3b5810;
        case 0x3b5814u: goto label_3b5814;
        case 0x3b5818u: goto label_3b5818;
        case 0x3b581cu: goto label_3b581c;
        case 0x3b5820u: goto label_3b5820;
        case 0x3b5824u: goto label_3b5824;
        case 0x3b5828u: goto label_3b5828;
        case 0x3b582cu: goto label_3b582c;
        case 0x3b5830u: goto label_3b5830;
        case 0x3b5834u: goto label_3b5834;
        case 0x3b5838u: goto label_3b5838;
        case 0x3b583cu: goto label_3b583c;
        case 0x3b5840u: goto label_3b5840;
        case 0x3b5844u: goto label_3b5844;
        case 0x3b5848u: goto label_3b5848;
        case 0x3b584cu: goto label_3b584c;
        case 0x3b5850u: goto label_3b5850;
        case 0x3b5854u: goto label_3b5854;
        case 0x3b5858u: goto label_3b5858;
        case 0x3b585cu: goto label_3b585c;
        case 0x3b5860u: goto label_3b5860;
        case 0x3b5864u: goto label_3b5864;
        case 0x3b5868u: goto label_3b5868;
        case 0x3b586cu: goto label_3b586c;
        case 0x3b5870u: goto label_3b5870;
        case 0x3b5874u: goto label_3b5874;
        case 0x3b5878u: goto label_3b5878;
        case 0x3b587cu: goto label_3b587c;
        case 0x3b5880u: goto label_3b5880;
        case 0x3b5884u: goto label_3b5884;
        case 0x3b5888u: goto label_3b5888;
        case 0x3b588cu: goto label_3b588c;
        case 0x3b5890u: goto label_3b5890;
        case 0x3b5894u: goto label_3b5894;
        case 0x3b5898u: goto label_3b5898;
        case 0x3b589cu: goto label_3b589c;
        case 0x3b58a0u: goto label_3b58a0;
        case 0x3b58a4u: goto label_3b58a4;
        case 0x3b58a8u: goto label_3b58a8;
        case 0x3b58acu: goto label_3b58ac;
        case 0x3b58b0u: goto label_3b58b0;
        case 0x3b58b4u: goto label_3b58b4;
        case 0x3b58b8u: goto label_3b58b8;
        case 0x3b58bcu: goto label_3b58bc;
        case 0x3b58c0u: goto label_3b58c0;
        case 0x3b58c4u: goto label_3b58c4;
        case 0x3b58c8u: goto label_3b58c8;
        case 0x3b58ccu: goto label_3b58cc;
        case 0x3b58d0u: goto label_3b58d0;
        case 0x3b58d4u: goto label_3b58d4;
        case 0x3b58d8u: goto label_3b58d8;
        case 0x3b58dcu: goto label_3b58dc;
        case 0x3b58e0u: goto label_3b58e0;
        case 0x3b58e4u: goto label_3b58e4;
        case 0x3b58e8u: goto label_3b58e8;
        case 0x3b58ecu: goto label_3b58ec;
        case 0x3b58f0u: goto label_3b58f0;
        case 0x3b58f4u: goto label_3b58f4;
        case 0x3b58f8u: goto label_3b58f8;
        case 0x3b58fcu: goto label_3b58fc;
        case 0x3b5900u: goto label_3b5900;
        case 0x3b5904u: goto label_3b5904;
        case 0x3b5908u: goto label_3b5908;
        case 0x3b590cu: goto label_3b590c;
        case 0x3b5910u: goto label_3b5910;
        case 0x3b5914u: goto label_3b5914;
        case 0x3b5918u: goto label_3b5918;
        case 0x3b591cu: goto label_3b591c;
        case 0x3b5920u: goto label_3b5920;
        case 0x3b5924u: goto label_3b5924;
        case 0x3b5928u: goto label_3b5928;
        case 0x3b592cu: goto label_3b592c;
        case 0x3b5930u: goto label_3b5930;
        case 0x3b5934u: goto label_3b5934;
        case 0x3b5938u: goto label_3b5938;
        case 0x3b593cu: goto label_3b593c;
        case 0x3b5940u: goto label_3b5940;
        case 0x3b5944u: goto label_3b5944;
        case 0x3b5948u: goto label_3b5948;
        case 0x3b594cu: goto label_3b594c;
        default: break;
    }

    ctx->pc = 0x3b57d0u;

label_3b57d0:
    // 0x3b57d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b57d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b57d4:
    // 0x3b57d4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b57d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b57d8:
    // 0x3b57d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b57d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b57dc:
    // 0x3b57dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b57dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b57e0:
    // 0x3b57e0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b57e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b57e4:
    // 0x3b57e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b57e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b57e8:
    // 0x3b57e8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b57ec:
    // 0x3b57ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b57ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b57f0:
    // 0x3b57f0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b57f4:
    // 0x3b57f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b57f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b57f8:
    // 0x3b57f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b57fc:
    // 0x3b57fc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b57fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b5800:
    // 0x3b5800: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b5804:
    // 0x3b5804: 0x40f809  jalr        $v0
label_3b5808:
    if (ctx->pc == 0x3B5808u) {
        ctx->pc = 0x3B5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5804u;
        // 0x3b5808: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B580Cu;
        goto label_3b580c;
    }
    ctx->pc = 0x3B5804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B580Cu);
        ctx->pc = 0x3B5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5804u;
        // 0x3b5808: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5804u, 0x3B580Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B580Cu;
label_3b580c:
    // 0x3b580c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b580cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5810:
    // 0x3b5810: 0xc0ea146  jal         func_3A8518
label_3b5814:
    if (ctx->pc == 0x3B5814u) {
        ctx->pc = 0x3B5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5810u;
        // 0x3b5814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5818u;
        goto label_3b5818;
    }
    ctx->pc = 0x3B5810u;
    SET_GPR_U32(ctx, 31, 0x3B5818u);
    ctx->pc = 0x3B5814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5810u;
    // 0x3b5814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B5810u, 0x3B5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5818u;
label_3b5818:
    // 0x3b5818: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b5818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b581c:
    // 0x3b581c: 0xc0ea146  jal         func_3A8518
label_3b5820:
    if (ctx->pc == 0x3B5820u) {
        ctx->pc = 0x3B5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B581Cu;
        // 0x3b5820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5824u;
        goto label_3b5824;
    }
    ctx->pc = 0x3B581Cu;
    SET_GPR_U32(ctx, 31, 0x3B5824u);
    ctx->pc = 0x3B5820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B581Cu;
    // 0x3b5820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B581Cu, 0x3B5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5824u;
label_3b5824:
    // 0x3b5824: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b5824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5828:
    // 0x3b5828: 0xc0ea146  jal         func_3A8518
label_3b582c:
    if (ctx->pc == 0x3B582Cu) {
        ctx->pc = 0x3B582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5828u;
        // 0x3b582c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5830u;
        goto label_3b5830;
    }
    ctx->pc = 0x3B5828u;
    SET_GPR_U32(ctx, 31, 0x3B5830u);
    ctx->pc = 0x3B582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5828u;
    // 0x3b582c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B5828u, 0x3B5830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5830u;
label_3b5830:
    // 0x3b5830: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5834:
    // 0x3b5834: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b5834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5838:
    // 0x3b5838: 0xc0ea12a  jal         func_3A84A8
label_3b583c:
    if (ctx->pc == 0x3B583Cu) {
        ctx->pc = 0x3B583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5838u;
        // 0x3b583c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5840u;
        goto label_3b5840;
    }
    ctx->pc = 0x3B5838u;
    SET_GPR_U32(ctx, 31, 0x3B5840u);
    ctx->pc = 0x3B583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5838u;
    // 0x3b583c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B5838u, 0x3B5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5840u;
label_3b5840:
    // 0x3b5840: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b5840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5844:
    // 0x3b5844: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b5848:
    // 0x3b5848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b584c:
    // 0x3b584c: 0xc0ea12a  jal         func_3A84A8
label_3b5850:
    if (ctx->pc == 0x3B5850u) {
        ctx->pc = 0x3B5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B584Cu;
        // 0x3b5850: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5854u;
        goto label_3b5854;
    }
    ctx->pc = 0x3B584Cu;
    SET_GPR_U32(ctx, 31, 0x3B5854u);
    ctx->pc = 0x3B5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B584Cu;
    // 0x3b5850: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B584Cu, 0x3B5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5854u;
label_3b5854:
    // 0x3b5854: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3b5854u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5858:
    // 0x3b5858: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x3b5858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3b585c:
    // 0x3b585c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3b585cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3b5860:
    // 0x3b5860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5864:
    // 0x3b5864: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3b5864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3b5868:
    // 0x3b5868: 0xc0e858c  jal         func_3A1630
label_3b586c:
    if (ctx->pc == 0x3B586Cu) {
        ctx->pc = 0x3B586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5868u;
        // 0x3b586c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5870u;
        goto label_3b5870;
    }
    ctx->pc = 0x3B5868u;
    SET_GPR_U32(ctx, 31, 0x3B5870u);
    ctx->pc = 0x3B586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5868u;
    // 0x3b586c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B5868u, 0x3B5870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5870u;
label_3b5870:
    // 0x3b5870: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b5870u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b5874:
    // 0x3b5874: 0x3c05c82d  lui         $a1, 0xC82D
    ctx->pc = 0x3b5874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51245 << 16));
label_3b5878:
    // 0x3b5878: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b5878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b587c:
    // 0x3b587c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5880:
    // 0x3b5880: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3b5880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3b5884:
    // 0x3b5884: 0x34a57530  ori         $a1, $a1, 0x7530
    ctx->pc = 0x3b5884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30000);
label_3b5888:
    // 0x3b5888: 0xc0e9132  jal         func_3A44C8
label_3b588c:
    if (ctx->pc == 0x3B588Cu) {
        ctx->pc = 0x3B588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5888u;
        // 0x3b588c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5890u;
        goto label_3b5890;
    }
    ctx->pc = 0x3B5888u;
    SET_GPR_U32(ctx, 31, 0x3B5890u);
    ctx->pc = 0x3B588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5888u;
    // 0x3b588c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B5888u, 0x3B5890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5890u;
label_3b5890:
    // 0x3b5890: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3b5894:
    // 0x3b5894: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3b5894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b5898:
    // 0x3b5898: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b5898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b589c:
    // 0x3b589c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b58a0:
    // 0x3b58a0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3b58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3b58a4:
    // 0x3b58a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b58a8:
    // 0x3b58a8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3b58ac:
    // 0x3b58ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b58acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b58b0:
    // 0x3b58b0: 0xc0e9bb2  jal         func_3A6EC8
label_3b58b4:
    if (ctx->pc == 0x3B58B4u) {
        ctx->pc = 0x3B58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58B0u;
        // 0x3b58b4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58B8u;
        goto label_3b58b8;
    }
    ctx->pc = 0x3B58B0u;
    SET_GPR_U32(ctx, 31, 0x3B58B8u);
    ctx->pc = 0x3B58B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58B0u;
    // 0x3b58b4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B58B0u, 0x3B58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58B8u;
label_3b58b8:
    // 0x3b58b8: 0xae1500e0  sw          $s5, 0xE0($s0)
    ctx->pc = 0x3b58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 21));
label_3b58bc:
    // 0x3b58bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b58bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b58c0:
    // 0x3b58c0: 0xae1300d8  sw          $s3, 0xD8($s0)
    ctx->pc = 0x3b58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 19));
label_3b58c4:
    // 0x3b58c4: 0xc0e927a  jal         func_3A49E8
label_3b58c8:
    if (ctx->pc == 0x3B58C8u) {
        ctx->pc = 0x3B58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58C4u;
        // 0x3b58c8: 0xae1400dc  sw          $s4, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58CCu;
        goto label_3b58cc;
    }
    ctx->pc = 0x3B58C4u;
    SET_GPR_U32(ctx, 31, 0x3B58CCu);
    ctx->pc = 0x3B58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58C4u;
    // 0x3b58c8: 0xae1400dc  sw          $s4, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B58C4u, 0x3B58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58CCu;
label_3b58cc:
    // 0x3b58cc: 0xc0e927a  jal         func_3A49E8
label_3b58d0:
    if (ctx->pc == 0x3B58D0u) {
        ctx->pc = 0x3B58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58CCu;
        // 0x3b58d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58D4u;
        goto label_3b58d4;
    }
    ctx->pc = 0x3B58CCu;
    SET_GPR_U32(ctx, 31, 0x3B58D4u);
    ctx->pc = 0x3B58D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58CCu;
    // 0x3b58d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A49E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A49E8u, 0x3B58CCu, 0x3B58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58D4u;
label_3b58d4:
    // 0x3b58d4: 0xc0e92cc  jal         func_3A4B30
label_3b58d8:
    if (ctx->pc == 0x3B58D8u) {
        ctx->pc = 0x3B58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58D4u;
        // 0x3b58d8: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58DCu;
        goto label_3b58dc;
    }
    ctx->pc = 0x3B58D4u;
    SET_GPR_U32(ctx, 31, 0x3B58DCu);
    ctx->pc = 0x3B58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58D4u;
    // 0x3b58d8: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B30u, 0x3B58D4u, 0x3B58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58DCu;
label_3b58dc:
    // 0x3b58dc: 0xc0e91da  jal         func_3A4768
label_3b58e0:
    if (ctx->pc == 0x3B58E0u) {
        ctx->pc = 0x3B58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58DCu;
        // 0x3b58e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58E4u;
        goto label_3b58e4;
    }
    ctx->pc = 0x3B58DCu;
    SET_GPR_U32(ctx, 31, 0x3B58E4u);
    ctx->pc = 0x3B58E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58DCu;
    // 0x3b58e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B58DCu, 0x3B58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58E4u;
label_3b58e4:
    // 0x3b58e4: 0xc0e91da  jal         func_3A4768
label_3b58e8:
    if (ctx->pc == 0x3B58E8u) {
        ctx->pc = 0x3B58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58E4u;
        // 0x3b58e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58ECu;
        goto label_3b58ec;
    }
    ctx->pc = 0x3B58E4u;
    SET_GPR_U32(ctx, 31, 0x3B58ECu);
    ctx->pc = 0x3B58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58E4u;
    // 0x3b58e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B58E4u, 0x3B58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58ECu;
label_3b58ec:
    // 0x3b58ec: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b58f0:
    // 0x3b58f0: 0xc0e9290  jal         func_3A4A40
label_3b58f4:
    if (ctx->pc == 0x3B58F4u) {
        ctx->pc = 0x3B58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58F0u;
        // 0x3b58f4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B58F8u;
        goto label_3b58f8;
    }
    ctx->pc = 0x3B58F0u;
    SET_GPR_U32(ctx, 31, 0x3B58F8u);
    ctx->pc = 0x3B58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58F0u;
    // 0x3b58f4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B58F0u, 0x3B58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B58F8u;
label_3b58f8:
    // 0x3b58f8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b58fc:
    // 0x3b58fc: 0xc0e9290  jal         func_3A4A40
label_3b5900:
    if (ctx->pc == 0x3B5900u) {
        ctx->pc = 0x3B5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B58FCu;
        // 0x3b5900: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5904u;
        goto label_3b5904;
    }
    ctx->pc = 0x3B58FCu;
    SET_GPR_U32(ctx, 31, 0x3B5904u);
    ctx->pc = 0x3B5900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B58FCu;
    // 0x3b5900: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B58FCu, 0x3B5904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5904u;
label_3b5904:
    // 0x3b5904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5908:
    // 0x3b5908: 0xc0e8dee  jal         func_3A37B8
label_3b590c:
    if (ctx->pc == 0x3B590Cu) {
        ctx->pc = 0x3B590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5908u;
        // 0x3b590c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5910u;
        goto label_3b5910;
    }
    ctx->pc = 0x3B5908u;
    SET_GPR_U32(ctx, 31, 0x3B5910u);
    ctx->pc = 0x3B590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5908u;
    // 0x3b590c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B5908u, 0x3B5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5910u;
label_3b5910:
    // 0x3b5910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b5910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5914:
    // 0x3b5914: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b5914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b5918:
    // 0x3b5918: 0xc0e92a6  jal         func_3A4A98
label_3b591c:
    if (ctx->pc == 0x3B591Cu) {
        ctx->pc = 0x3B591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5918u;
        // 0x3b591c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5920u;
        goto label_3b5920;
    }
    ctx->pc = 0x3B5918u;
    SET_GPR_U32(ctx, 31, 0x3B5920u);
    ctx->pc = 0x3B591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5918u;
    // 0x3b591c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B5918u, 0x3B5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5920u;
label_3b5920:
    // 0x3b5920: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b5920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b5924:
    // 0x3b5924: 0xc0e92a6  jal         func_3A4A98
label_3b5928:
    if (ctx->pc == 0x3B5928u) {
        ctx->pc = 0x3B5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5924u;
        // 0x3b5928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B592Cu;
        goto label_3b592c;
    }
    ctx->pc = 0x3B5924u;
    SET_GPR_U32(ctx, 31, 0x3B592Cu);
    ctx->pc = 0x3B5928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5924u;
    // 0x3b5928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B5924u, 0x3B592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B592Cu;
label_3b592c:
    // 0x3b592c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b592cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5930:
    // 0x3b5930: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b5930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5934:
    // 0x3b5934: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b5934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b5938:
    // 0x3b5938: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b5938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b593c:
    // 0x3b593c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b593cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b5940:
    // 0x3b5940: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b5940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b5944:
    // 0x3b5944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b5944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b5948:
    // 0x3b5948: 0x3e00008  jr          $ra
label_3b594c:
    if (ctx->pc == 0x3B594Cu) {
        ctx->pc = 0x3B594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5948u;
        // 0x3b594c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5950u;
        goto label_fallthrough_0x3b5948;
    }
    ctx->pc = 0x3B5948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5948u;
        // 0x3b594c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b5948:
    ctx->pc = 0x3B5950u;
}
