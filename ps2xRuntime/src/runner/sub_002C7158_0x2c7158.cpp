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

// Function: sub_002C7158
// Address: 0x2c7158 - 0x2c7248
void sub_002C7158_0x2c7158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7158_0x2c7158");
#endif

    switch (ctx->pc) {
        case 0x2c71c0u: goto label_2c71c0;
        case 0x2c71e8u: goto label_2c71e8;
        case 0x2c7208u: goto label_2c7208;
        case 0x2c722cu: goto label_2c722c;
        default: break;
    }

    ctx->pc = 0x2c7158u;

    // 0x2c7158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c7158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c715c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2c715cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c7160: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c7160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c7164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c7168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c716c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c7170: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C7170u;
    {
        const bool branch_taken_0x2c7170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7170u;
        // 0x2c7174: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7170) {
            ctx->pc = 0x2C71C8u;
            goto label_2c71c8;
        }
    }
    ctx->pc = 0x2C7178u;
    // 0x2c7178: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c717c: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x2c717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x2c7180: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2c7180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c7184: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7184u;
    {
        const bool branch_taken_0x2c7184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7184u;
        // 0x2c7188: 0x2411025b  addiu       $s1, $zero, 0x25B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7184) {
            ctx->pc = 0x2C71A0u;
            goto label_2c71a0;
        }
    }
    ctx->pc = 0x2C718Cu;
    // 0x2c718c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c718cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c7190: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c7190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7194: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c7194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c7198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7198u;
    {
        const bool branch_taken_0x2c7198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7198u;
        // 0x2c719c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7198) {
            ctx->pc = 0x2C71B8u;
            goto label_2c71b8;
        }
    }
    ctx->pc = 0x2C71A0u;
label_2c71a0:
    // 0x2c71a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c71a4: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C71A4u;
    {
        const bool branch_taken_0x2c71a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71A4u;
        // 0x2c71a8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71a4) {
            ctx->pc = 0x2C7200u;
            goto label_2c7200;
        }
    }
    ctx->pc = 0x2C71ACu;
    // 0x2c71ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2c71acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c71b0: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c71b4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c71b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c71b8:
    // 0x2c71b8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2C71B8u;
    SET_GPR_U32(ctx, 31, 0x2C71C0u);
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C71B8u, 0x2C71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71C0u;
label_2c71c0:
    // 0x2c71c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C71C0u;
    {
        const bool branch_taken_0x2c71c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71C0u;
        // 0x2c71c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71c0) {
            ctx->pc = 0x2C7200u;
            goto label_2c7200;
        }
    }
    ctx->pc = 0x2C71C8u;
label_2c71c8:
    // 0x2c71c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c71cc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C71CCu;
    {
        const bool branch_taken_0x2c71cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71CCu;
        // 0x2c71d0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71cc) {
            ctx->pc = 0x2C71F0u;
            goto label_2c71f0;
        }
    }
    ctx->pc = 0x2C71D4u;
    // 0x2c71d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c71d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c71dc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c71e0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2C71E0u;
    SET_GPR_U32(ctx, 31, 0x2C71E8u);
    ctx->pc = 0x2C71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C71E0u;
    // 0x2c71e4: 0x2411029c  addiu       $s1, $zero, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2C71E0u, 0x2C71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71E8u;
label_2c71e8:
    // 0x2c71e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C71E8u;
    {
        const bool branch_taken_0x2c71e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71E8u;
        // 0x2c71ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71e8) {
            ctx->pc = 0x2C7200u;
            goto label_2c7200;
        }
    }
    ctx->pc = 0x2C71F0u;
label_2c71f0:
    // 0x2c71f0: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C71F0u;
    {
        const bool branch_taken_0x2c71f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71F0u;
        // 0x2c71f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c71f0) {
            ctx->pc = 0x2C7230u;
            goto label_2c7230;
        }
    }
    ctx->pc = 0x2C71F8u;
    // 0x2c71f8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2c71f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c71fc: 0x2411029c  addiu       $s1, $zero, 0x29C
    ctx->pc = 0x2c71fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2c7200:
    // 0x2c7200: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C7200u;
    SET_GPR_U32(ctx, 31, 0x2C7208u);
    ctx->pc = 0x2C7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7200u;
    // 0x2c7204: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C7200u, 0x2C7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7208u;
label_2c7208:
    // 0x2c7208: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7208u;
    {
        const bool branch_taken_0x2c7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7208u;
        // 0x2c720c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7208) {
            ctx->pc = 0x2C722Cu;
            goto label_2c722c;
        }
    }
    ctx->pc = 0x2C7210u;
    // 0x2c7210: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c7214: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7218: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c7218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c721c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c721cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7220: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c7220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7224: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2C7224u;
    SET_GPR_U32(ctx, 31, 0x2C722Cu);
    ctx->pc = 0x2C7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7224u;
    // 0x2c7228: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C7224u, 0x2C722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C722Cu;
label_2c722c:
    // 0x2c722c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c722cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7230:
    // 0x2c7230: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c7230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7234: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c7234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c723c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C723Cu;
        // 0x2c7240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7244u;
    // 0x2c7244: 0x0  nop
    ctx->pc = 0x2c7244u;
    // NOP
    ctx->pc = 0x2c7248u;
}
