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

// Function: sub_002A90A0
// Address: 0x2a90a0 - 0x2a9160
void sub_002A90A0_0x2a90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A90A0_0x2a90a0");
#endif

    switch (ctx->pc) {
        case 0x2a90a0u: goto label_2a90a0;
        case 0x2a90a4u: goto label_2a90a4;
        case 0x2a90a8u: goto label_2a90a8;
        case 0x2a90acu: goto label_2a90ac;
        case 0x2a90b0u: goto label_2a90b0;
        case 0x2a90b4u: goto label_2a90b4;
        case 0x2a90b8u: goto label_2a90b8;
        case 0x2a90bcu: goto label_2a90bc;
        case 0x2a90c0u: goto label_2a90c0;
        case 0x2a90c4u: goto label_2a90c4;
        case 0x2a90c8u: goto label_2a90c8;
        case 0x2a90ccu: goto label_2a90cc;
        case 0x2a90d0u: goto label_2a90d0;
        case 0x2a90d4u: goto label_2a90d4;
        case 0x2a90d8u: goto label_2a90d8;
        case 0x2a90dcu: goto label_2a90dc;
        case 0x2a90e0u: goto label_2a90e0;
        case 0x2a90e4u: goto label_2a90e4;
        case 0x2a90e8u: goto label_2a90e8;
        case 0x2a90ecu: goto label_2a90ec;
        case 0x2a90f0u: goto label_2a90f0;
        case 0x2a90f4u: goto label_2a90f4;
        case 0x2a90f8u: goto label_2a90f8;
        case 0x2a90fcu: goto label_2a90fc;
        case 0x2a9100u: goto label_2a9100;
        case 0x2a9104u: goto label_2a9104;
        case 0x2a9108u: goto label_2a9108;
        case 0x2a910cu: goto label_2a910c;
        case 0x2a9110u: goto label_2a9110;
        case 0x2a9114u: goto label_2a9114;
        case 0x2a9118u: goto label_2a9118;
        case 0x2a911cu: goto label_2a911c;
        case 0x2a9120u: goto label_2a9120;
        case 0x2a9124u: goto label_2a9124;
        case 0x2a9128u: goto label_2a9128;
        case 0x2a912cu: goto label_2a912c;
        case 0x2a9130u: goto label_2a9130;
        case 0x2a9134u: goto label_2a9134;
        case 0x2a9138u: goto label_2a9138;
        case 0x2a913cu: goto label_2a913c;
        case 0x2a9140u: goto label_2a9140;
        case 0x2a9144u: goto label_2a9144;
        case 0x2a9148u: goto label_2a9148;
        case 0x2a914cu: goto label_2a914c;
        case 0x2a9150u: goto label_2a9150;
        case 0x2a9154u: goto label_2a9154;
        case 0x2a9158u: goto label_2a9158;
        case 0x2a915cu: goto label_2a915c;
        default: break;
    }

    ctx->pc = 0x2a90a0u;

label_2a90a0:
    // 0x2a90a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a90a4:
    // 0x2a90a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2a90a8:
    // 0x2a90a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2a90ac:
    // 0x2a90ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a90acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a90b0:
    // 0x2a90b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2a90b4:
    // 0x2a90b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a90b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a90b8:
    // 0x2a90b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a90bc:
    // 0x2a90bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2a90bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a90c0:
    // 0x2a90c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2a90c4:
    if (ctx->pc == 0x2A90C4u) {
        ctx->pc = 0x2A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90C0u;
        // 0x2a90c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A90C8u;
        goto label_2a90c8;
    }
    ctx->pc = 0x2A90C0u;
    {
        const bool branch_taken_0x2a90c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90C0u;
        // 0x2a90c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90c0) {
            ctx->pc = 0x2A90D4u;
            goto label_2a90d4;
        }
    }
    ctx->pc = 0x2A90C8u;
label_2a90c8:
    // 0x2a90c8: 0x240502a1  addiu       $a1, $zero, 0x2A1
    ctx->pc = 0x2a90c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
label_2a90cc:
    // 0x2a90cc: 0xc0886a8  jal         func_221AA0
label_2a90d0:
    if (ctx->pc == 0x2A90D0u) {
        ctx->pc = 0x2A90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90CCu;
        // 0x2a90d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A90D4u;
        goto label_2a90d4;
    }
    ctx->pc = 0x2A90CCu;
    SET_GPR_U32(ctx, 31, 0x2A90D4u);
    ctx->pc = 0x2A90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A90CCu;
    // 0x2a90d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2A90CCu, 0x2A90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90D4u;
label_2a90d4:
    // 0x2a90d4: 0xc0e409a  jal         func_390268
label_2a90d8:
    if (ctx->pc == 0x2A90D8u) {
        ctx->pc = 0x2A90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90D4u;
        // 0x2a90d8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A90DCu;
        goto label_2a90dc;
    }
    ctx->pc = 0x2A90D4u;
    SET_GPR_U32(ctx, 31, 0x2A90DCu);
    ctx->pc = 0x2A90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A90D4u;
    // 0x2a90d8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A90D4u, 0x2A90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90DCu;
label_2a90dc:
    // 0x2a90dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2a90e0:
    if (ctx->pc == 0x2A90E0u) {
        ctx->pc = 0x2A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90DCu;
        // 0x2a90e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A90E4u;
        goto label_2a90e4;
    }
    ctx->pc = 0x2A90DCu;
    {
        const bool branch_taken_0x2a90dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90DCu;
        // 0x2a90e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90dc) {
            ctx->pc = 0x2A90FCu;
            goto label_2a90fc;
        }
    }
    ctx->pc = 0x2A90E4u;
label_2a90e4:
    // 0x2a90e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a90e8:
    // 0x2a90e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a90e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a90ec:
    // 0x2a90ec: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x2a90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_2a90f0:
    // 0x2a90f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a90f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a90f4:
    // 0x2a90f4: 0xc0a6800  jal         func_29A000
label_2a90f8:
    if (ctx->pc == 0x2A90F8u) {
        ctx->pc = 0x2A90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90F4u;
        // 0x2a90f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A90FCu;
        goto label_2a90fc;
    }
    ctx->pc = 0x2A90F4u;
    SET_GPR_U32(ctx, 31, 0x2A90FCu);
    ctx->pc = 0x2A90F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A90F4u;
    // 0x2a90f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2A90F4u, 0x2A90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90FCu;
label_2a90fc:
    // 0x2a90fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a9100:
    // 0x2a9100: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9104:
    // 0x2a9104: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a9104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a9108:
    // 0x2a9108: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a910c:
    // 0x2a910c: 0x40f809  jalr        $v0
label_2a9110:
    if (ctx->pc == 0x2A9110u) {
        ctx->pc = 0x2A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A910Cu;
        // 0x2a9110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9114u;
        goto label_2a9114;
    }
    ctx->pc = 0x2A910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A9114u);
        ctx->pc = 0x2A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A910Cu;
        // 0x2a9110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A910Cu, 0x2A9114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9114u;
label_2a9114:
    // 0x2a9114: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a9114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a9118:
    // 0x2a9118: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a9118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a911c:
    // 0x2a911c: 0x8c639438  lw          $v1, -0x6BC8($v1)
    ctx->pc = 0x2a911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939704)));
label_2a9120:
    // 0x2a9120: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_2a9124:
    if (ctx->pc == 0x2A9124u) {
        ctx->pc = 0x2A9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9120u;
        // 0x2a9124: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9128u;
        goto label_2a9128;
    }
    ctx->pc = 0x2A9120u;
    {
        const bool branch_taken_0x2a9120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a9120) {
            ctx->pc = 0x2A9124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9120u;
            // 0x2a9124: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9134u;
            goto label_2a9134;
        }
    }
    ctx->pc = 0x2A9128u;
label_2a9128:
    // 0x2a9128: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2a9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a912c:
    // 0x2a912c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_2a9130:
    if (ctx->pc == 0x2A9130u) {
        ctx->pc = 0x2A9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A912Cu;
        // 0x2a9130: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9134u;
        goto label_2a9134;
    }
    ctx->pc = 0x2A912Cu;
    {
        const bool branch_taken_0x2a912c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a912c) {
            ctx->pc = 0x2A9130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A912Cu;
            // 0x2a9130: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9134u;
            goto label_2a9134;
        }
    }
    ctx->pc = 0x2A9134u;
label_2a9134:
    // 0x2a9134: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2a9138:
    if (ctx->pc == 0x2A9138u) {
        ctx->pc = 0x2A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9134u;
        // 0x2a9138: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A913Cu;
        goto label_2a913c;
    }
    ctx->pc = 0x2A9134u;
    {
        const bool branch_taken_0x2a9134 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9134u;
        // 0x2a9138: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9134) {
            ctx->pc = 0x2A9144u;
            goto label_2a9144;
        }
    }
    ctx->pc = 0x2A913Cu;
label_2a913c:
    // 0x2a913c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2a913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a9140:
    // 0x2a9140: 0xac839438  sw          $v1, -0x6BC8($a0)
    ctx->pc = 0x2a9140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294939704), GPR_U32(ctx, 3));
label_2a9144:
    // 0x2a9144: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a9144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9148:
    // 0x2a9148: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a914c:
    // 0x2a914c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a914cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9150:
    // 0x2a9150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9154:
    // 0x2a9154: 0x3e00008  jr          $ra
label_2a9158:
    if (ctx->pc == 0x2A9158u) {
        ctx->pc = 0x2A9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9154u;
        // 0x2a9158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A915Cu;
        goto label_2a915c;
    }
    ctx->pc = 0x2A9154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9154u;
        // 0x2a9158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A915Cu;
label_2a915c:
    // 0x2a915c: 0x0  nop
    ctx->pc = 0x2a915cu;
    // NOP
    ctx->pc = 0x2a9160u;
}
