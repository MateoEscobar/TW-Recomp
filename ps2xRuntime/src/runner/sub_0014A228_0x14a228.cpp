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

// Function: sub_0014A228
// Address: 0x14a228 - 0x14a358
void sub_0014A228_0x14a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A228_0x14a228");
#endif

    switch (ctx->pc) {
        case 0x14a268u: goto label_14a268;
        case 0x14a28cu: goto label_14a28c;
        case 0x14a2a8u: goto label_14a2a8;
        case 0x14a2b4u: goto label_14a2b4;
        case 0x14a2d0u: goto label_14a2d0;
        case 0x14a2dcu: goto label_14a2dc;
        case 0x14a300u: goto label_14a300;
        case 0x14a30cu: goto label_14a30c;
        default: break;
    }

    ctx->pc = 0x14a228u;

    // 0x14a228: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14a22c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14a230: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14a234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a238: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14a23c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x14a23cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x14a240: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14a244: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14a244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a248: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14a248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14a24c: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x14a24cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    // 0x14a250: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14a254: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x14a254u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
    // 0x14a258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a25c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A25Cu;
    {
        const bool branch_taken_0x14a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A25Cu;
        // 0x14a260: 0x3c150055  lui         $s5, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a25c) {
            ctx->pc = 0x14A274u;
            goto label_14a274;
        }
    }
    ctx->pc = 0x14A264u;
    // 0x14a264: 0x0  nop
    ctx->pc = 0x14a264u;
    // NOP
label_14a268:
    // 0x14a268: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x14a268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a26c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14A26Cu;
    {
        const bool branch_taken_0x14a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A26Cu;
        // 0x14a270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a26c) {
            ctx->pc = 0x14A330u;
            goto label_14a330;
        }
    }
    ctx->pc = 0x14A274u;
label_14a274:
    // 0x14a274: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a278: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x14a27c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14a280: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x14a280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14a284: 0xc1115d8  jal         func_445760
    ctx->pc = 0x14A284u;
    SET_GPR_U32(ctx, 31, 0x14A28Cu);
    ctx->pc = 0x14A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A284u;
    // 0x14a288: 0x2608000c  addiu       $t0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445760u, 0x14A284u, 0x14A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A28Cu;
label_14a28c:
    // 0x14a28c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A28Cu;
    {
        const bool branch_taken_0x14a28c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A28Cu;
        // 0x14a290: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a28c) {
            ctx->pc = 0x14A2B4u;
            goto label_14a2b4;
        }
    }
    ctx->pc = 0x14A294u;
    // 0x14a294: 0x8e2269ec  lw          $v0, 0x69EC($s1)
    ctx->pc = 0x14a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    // 0x14a298: 0x2665a870  addiu       $a1, $s3, -0x5790
    ctx->pc = 0x14a298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944880));
    // 0x14a29c: 0x26a6a988  addiu       $a2, $s5, -0x5678
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945160));
    // 0x14a2a0: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A2A0u;
    SET_GPR_U32(ctx, 31, 0x14A2A8u);
    ctx->pc = 0x14A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2A0u;
    // 0x14a2a4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A2A0u, 0x14A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2A8u;
label_14a2a8:
    // 0x14a2a8: 0x8e2369ec  lw          $v1, 0x69EC($s1)
    ctx->pc = 0x14a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    // 0x14a2ac: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A2ACu;
    SET_GPR_U32(ctx, 31, 0x14A2B4u);
    ctx->pc = 0x14A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2ACu;
    // 0x14a2b0: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A2ACu, 0x14A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2B4u;
label_14a2b4:
    // 0x14a2b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a2b8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A2B8u;
    {
        const bool branch_taken_0x14a2b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2B8u;
        // 0x14a2bc: 0x2665a870  addiu       $a1, $s3, -0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2b8) {
            ctx->pc = 0x14A2E0u;
            goto label_14a2e0;
        }
    }
    ctx->pc = 0x14A2C0u;
    // 0x14a2c0: 0x8e2269ec  lw          $v0, 0x69EC($s1)
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    // 0x14a2c4: 0x2686a9c0  addiu       $a2, $s4, -0x5640
    ctx->pc = 0x14a2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945216));
    // 0x14a2c8: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14A2C8u;
    SET_GPR_U32(ctx, 31, 0x14A2D0u);
    ctx->pc = 0x14A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2C8u;
    // 0x14a2cc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A2C8u, 0x14A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2D0u;
label_14a2d0:
    // 0x14a2d0: 0x8e2369ec  lw          $v1, 0x69EC($s1)
    ctx->pc = 0x14a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27116)));
    // 0x14a2d4: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14A2D4u;
    SET_GPR_U32(ctx, 31, 0x14A2DCu);
    ctx->pc = 0x14A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2D4u;
    // 0x14a2d8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A2D4u, 0x14A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2DCu;
label_14a2dc:
    // 0x14a2dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14a2e0:
    // 0x14a2e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14A2E0u;
    {
        const bool branch_taken_0x14a2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2E0u;
        // 0x14a2e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2e0) {
            ctx->pc = 0x14A268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a268;
        }
    }
    ctx->pc = 0x14A2E8u;
    // 0x14a2e8: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x14a2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a2ec: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14A2ECu;
    {
        const bool branch_taken_0x14a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2ECu;
        // 0x14a2f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2ec) {
            ctx->pc = 0x14A32Cu;
            goto label_14a32c;
        }
    }
    ctx->pc = 0x14A2F4u;
    // 0x14a2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2f8: 0xc111590  jal         func_445640
    ctx->pc = 0x14A2F8u;
    SET_GPR_U32(ctx, 31, 0x14A300u);
    ctx->pc = 0x14A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2F8u;
    // 0x14a2fc: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14A2F8u, 0x14A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A300u;
label_14a300:
    // 0x14a300: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x14a300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a304: 0xc05287a  jal         func_14A1E8
    ctx->pc = 0x14A304u;
    SET_GPR_U32(ctx, 31, 0x14A30Cu);
    ctx->pc = 0x14A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A304u;
    // 0x14a308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A1E8u, 0x14A304u, 0x14A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A30Cu;
label_14a30c:
    // 0x14a30c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14a310: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A310u;
    {
        const bool branch_taken_0x14a310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A310u;
        // 0x14a314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a310) {
            ctx->pc = 0x14A32Cu;
            goto label_14a32c;
        }
    }
    ctx->pc = 0x14A318u;
    // 0x14a318: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a31c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a320: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14a320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14a324: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A324u;
    {
        const bool branch_taken_0x14a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A324u;
        // 0x14a328: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a324) {
            ctx->pc = 0x14A330u;
            goto label_14a330;
        }
    }
    ctx->pc = 0x14A32Cu;
label_14a32c:
    // 0x14a32c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a330:
    // 0x14a330: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14a330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a334: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14a334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a338: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14a338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a33c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14a33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a340: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14a340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a344: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14a344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a34c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A34Cu;
        // 0x14a350: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A354u;
    // 0x14a354: 0x0  nop
    ctx->pc = 0x14a354u;
    // NOP
    ctx->pc = 0x14a358u;
}
