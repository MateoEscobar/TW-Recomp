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

// Function: sub_001B4168
// Address: 0x1b4168 - 0x1b4298
void sub_001B4168_0x1b4168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4168_0x1b4168");
#endif

    switch (ctx->pc) {
        case 0x1b4184u: goto label_1b4184;
        case 0x1b4190u: goto label_1b4190;
        case 0x1b419cu: goto label_1b419c;
        case 0x1b4210u: goto label_1b4210;
        case 0x1b4224u: goto label_1b4224;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4284u: goto label_1b4284;
        default: break;
    }

    ctx->pc = 0x1b4168u;

    // 0x1b4168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b416c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b4170: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b4170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b4174: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b4178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b417c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1B417Cu;
    SET_GPR_U32(ctx, 31, 0x1B4184u);
    ctx->pc = 0x1B4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B417Cu;
    // 0x1b4180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1B417Cu, 0x1B4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4184u;
label_1b4184:
    // 0x1b4184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4188: 0xc087502  jal         func_21D408
    ctx->pc = 0x1B4188u;
    SET_GPR_U32(ctx, 31, 0x1B4190u);
    ctx->pc = 0x1B418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4188u;
    // 0x1b418c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1B4188u, 0x1B4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4190u;
label_1b4190:
    // 0x1b4190: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x1b4190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1b4194: 0xc08a200  jal         func_228800
    ctx->pc = 0x1B4194u;
    SET_GPR_U32(ctx, 31, 0x1B419Cu);
    ctx->pc = 0x1B4198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4194u;
    // 0x1b4198: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x1B4194u, 0x1B419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B419Cu;
label_1b419c:
    // 0x1b419c: 0x9203019d  lbu         $v1, 0x19D($s0)
    ctx->pc = 0x1b419cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 413)));
    // 0x1b41a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B41A0u;
    {
        const bool branch_taken_0x1b41a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41A0u;
        // 0x1b41a4: 0x9044011a  lbu         $a0, 0x11A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41a0) {
            ctx->pc = 0x1B41B4u;
            goto label_1b41b4;
        }
    }
    ctx->pc = 0x1B41A8u;
    // 0x1b41a8: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x1b41a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x1b41ac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B41ACu;
    {
        const bool branch_taken_0x1b41ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b41ac) {
            ctx->pc = 0x1B41B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B41ACu;
            // 0x1b41b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B41B4u;
            goto label_1b41b4;
        }
    }
    ctx->pc = 0x1B41B4u;
label_1b41b4:
    // 0x1b41b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b41b8: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B41B8u;
    {
        const bool branch_taken_0x1b41b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41B8u;
        // 0x1b41bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41b8) {
            ctx->pc = 0x1B41F0u;
            goto label_1b41f0;
        }
    }
    ctx->pc = 0x1B41C0u;
    // 0x1b41c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B41C0u;
    {
        const bool branch_taken_0x1b41c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41C0u;
        // 0x1b41c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c0) {
            ctx->pc = 0x1B41D8u;
            goto label_1b41d8;
        }
    }
    ctx->pc = 0x1B41C8u;
    // 0x1b41c8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B41C8u;
    {
        const bool branch_taken_0x1b41c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41C8u;
        // 0x1b41cc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41c8) {
            ctx->pc = 0x1B422Cu;
            goto label_1b422c;
        }
    }
    ctx->pc = 0x1B41D0u;
    // 0x1b41d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B41D0u;
    {
        const bool branch_taken_0x1b41d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b41d0) {
            ctx->pc = 0x1B4268u;
            goto label_1b4268;
        }
    }
    ctx->pc = 0x1B41D8u;
label_1b41d8:
    // 0x1b41d8: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B41D8u;
    {
        const bool branch_taken_0x1b41d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41D8u;
        // 0x1b41dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41d8) {
            ctx->pc = 0x1B422Cu;
            goto label_1b422c;
        }
    }
    ctx->pc = 0x1B41E0u;
    // 0x1b41e0: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B41E0u;
    {
        const bool branch_taken_0x1b41e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41E0u;
        // 0x1b41e4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41e0) {
            ctx->pc = 0x1B4244u;
            goto label_1b4244;
        }
    }
    ctx->pc = 0x1B41E8u;
    // 0x1b41e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B41E8u;
    {
        const bool branch_taken_0x1b41e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b41e8) {
            ctx->pc = 0x1B4268u;
            goto label_1b4268;
        }
    }
    ctx->pc = 0x1B41F0u;
label_1b41f0:
    // 0x1b41f0: 0xa224028d  sb          $a0, 0x28D($s1)
    ctx->pc = 0x1b41f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 653), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b41f4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b41f8: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b41f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x1b41fc: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x1b41fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x1b4200: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b4200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4208: 0xc06cc96  jal         func_1B3258
    ctx->pc = 0x1B4208u;
    SET_GPR_U32(ctx, 31, 0x1B4210u);
    ctx->pc = 0x1B420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4208u;
    // 0x1b420c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3258u, 0x1B4208u, 0x1B4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4210u;
label_1b4210:
    // 0x1b4210: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4218: 0x24060164  addiu       $a2, $zero, 0x164
    ctx->pc = 0x1b4218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    // 0x1b421c: 0xc06cc96  jal         func_1B3258
    ctx->pc = 0x1B421Cu;
    SET_GPR_U32(ctx, 31, 0x1B4224u);
    ctx->pc = 0x1B4220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B421Cu;
    // 0x1b4220: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3258u, 0x1B421Cu, 0x1B4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4224u;
label_1b4224:
    // 0x1b4224: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B4224u;
    {
        const bool branch_taken_0x1b4224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4224u;
        // 0x1b4228: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4224) {
            ctx->pc = 0x1B4288u;
            goto label_1b4288;
        }
    }
    ctx->pc = 0x1B422Cu;
label_1b422c:
    // 0x1b422c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b422cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b4230: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b4230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4234: 0xc06cbba  jal         func_1B2EE8
    ctx->pc = 0x1B4234u;
    SET_GPR_U32(ctx, 31, 0x1B423Cu);
    ctx->pc = 0x1B4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4234u;
    // 0x1b4238: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EE8u, 0x1B4234u, 0x1B423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B423Cu;
label_1b423c:
    // 0x1b423c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B423Cu;
    {
        const bool branch_taken_0x1b423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B423Cu;
        // 0x1b4240: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b423c) {
            ctx->pc = 0x1B4288u;
            goto label_1b4288;
        }
    }
    ctx->pc = 0x1B4244u;
label_1b4244:
    // 0x1b4244: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x1b4244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x1b4248: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b424c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b4250: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x1b4250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
    // 0x1b4254: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b4254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4258: 0xc06ca64  jal         func_1B2990
    ctx->pc = 0x1B4258u;
    SET_GPR_U32(ctx, 31, 0x1B4260u);
    ctx->pc = 0x1B425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4258u;
    // 0x1b425c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x1B4258u, 0x1B4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4260u;
label_1b4260:
    // 0x1b4260: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4260u;
    {
        const bool branch_taken_0x1b4260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4260u;
        // 0x1b4264: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4260) {
            ctx->pc = 0x1B4288u;
            goto label_1b4288;
        }
    }
    ctx->pc = 0x1B4268u;
label_1b4268:
    // 0x1b4268: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x1b4268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x1b426c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b426cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4270: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1b4270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1b4274: 0x34c680ff  ori         $a2, $a2, 0x80FF
    ctx->pc = 0x1b4274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33023);
    // 0x1b4278: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b427c: 0xc06ca64  jal         func_1B2990
    ctx->pc = 0x1B427Cu;
    SET_GPR_U32(ctx, 31, 0x1B4284u);
    ctx->pc = 0x1B4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B427Cu;
    // 0x1b4280: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2990u, 0x1B427Cu, 0x1B4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4284u;
label_1b4284:
    // 0x1b4284: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b4284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4288:
    // 0x1b4288: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b428c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b428cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4290: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4290u;
        // 0x1b4294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4298u;
}
