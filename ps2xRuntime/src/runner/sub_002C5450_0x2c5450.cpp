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

// Function: sub_002C5450
// Address: 0x2c5450 - 0x2c54d8
void sub_002C5450_0x2c5450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5450_0x2c5450");
#endif

    switch (ctx->pc) {
        case 0x2c5450u: goto label_2c5450;
        case 0x2c5454u: goto label_2c5454;
        case 0x2c5458u: goto label_2c5458;
        case 0x2c545cu: goto label_2c545c;
        case 0x2c5460u: goto label_2c5460;
        case 0x2c5464u: goto label_2c5464;
        case 0x2c5468u: goto label_2c5468;
        case 0x2c546cu: goto label_2c546c;
        case 0x2c5470u: goto label_2c5470;
        case 0x2c5474u: goto label_2c5474;
        case 0x2c5478u: goto label_2c5478;
        case 0x2c547cu: goto label_2c547c;
        case 0x2c5480u: goto label_2c5480;
        case 0x2c5484u: goto label_2c5484;
        case 0x2c5488u: goto label_2c5488;
        case 0x2c548cu: goto label_2c548c;
        case 0x2c5490u: goto label_2c5490;
        case 0x2c5494u: goto label_2c5494;
        case 0x2c5498u: goto label_2c5498;
        case 0x2c549cu: goto label_2c549c;
        case 0x2c54a0u: goto label_2c54a0;
        case 0x2c54a4u: goto label_2c54a4;
        case 0x2c54a8u: goto label_2c54a8;
        case 0x2c54acu: goto label_2c54ac;
        case 0x2c54b0u: goto label_2c54b0;
        case 0x2c54b4u: goto label_2c54b4;
        case 0x2c54b8u: goto label_2c54b8;
        case 0x2c54bcu: goto label_2c54bc;
        case 0x2c54c0u: goto label_2c54c0;
        case 0x2c54c4u: goto label_2c54c4;
        case 0x2c54c8u: goto label_2c54c8;
        case 0x2c54ccu: goto label_2c54cc;
        case 0x2c54d0u: goto label_2c54d0;
        case 0x2c54d4u: goto label_2c54d4;
        default: break;
    }

    ctx->pc = 0x2c5450u;

label_2c5450:
    // 0x2c5450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c5454:
    // 0x2c5454: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c5458:
    // 0x2c5458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c5458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c545c:
    // 0x2c545c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c545cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5460:
    // 0x2c5460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c5464:
    // 0x2c5464: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c5464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2c5468:
    // 0x2c5468: 0xc0cd4ee  jal         func_3353B8
label_2c546c:
    if (ctx->pc == 0x2C546Cu) {
        ctx->pc = 0x2C546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5468u;
        // 0x2c546c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5470u;
        goto label_2c5470;
    }
    ctx->pc = 0x2C5468u;
    SET_GPR_U32(ctx, 31, 0x2C5470u);
    ctx->pc = 0x2C546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5468u;
    // 0x2c546c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2C5468u, 0x2C5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5470u;
label_2c5470:
    // 0x2c5470: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x2c5470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_2c5474:
    // 0x2c5474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2c5478:
    if (ctx->pc == 0x2C5478u) {
        ctx->pc = 0x2C5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5474u;
        // 0x2c5478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C547Cu;
        goto label_2c547c;
    }
    ctx->pc = 0x2C5474u;
    {
        const bool branch_taken_0x2c5474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5474u;
        // 0x2c5478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5474) {
            ctx->pc = 0x2C5488u;
            goto label_2c5488;
        }
    }
    ctx->pc = 0x2C547Cu;
label_2c547c:
    // 0x2c547c: 0x92030039  lbu         $v1, 0x39($s0)
    ctx->pc = 0x2c547cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
label_2c5480:
    // 0x2c5480: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_2c5484:
    if (ctx->pc == 0x2C5484u) {
        ctx->pc = 0x2C5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5480u;
        // 0x2c5484: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5488u;
        goto label_2c5488;
    }
    ctx->pc = 0x2C5480u;
    {
        const bool branch_taken_0x2c5480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5480) {
            ctx->pc = 0x2C5484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5480u;
            // 0x2c5484: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C54B8u;
            goto label_2c54b8;
        }
    }
    ctx->pc = 0x2C5488u;
label_2c5488:
    // 0x2c5488: 0xc0a367c  jal         func_28D9F0
label_2c548c:
    if (ctx->pc == 0x2C548Cu) {
        ctx->pc = 0x2C548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5488u;
        // 0x2c548c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5490u;
        goto label_2c5490;
    }
    ctx->pc = 0x2C5488u;
    SET_GPR_U32(ctx, 31, 0x2C5490u);
    ctx->pc = 0x2C548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5488u;
    // 0x2c548c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C5488u, 0x2C5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5490u;
label_2c5490:
    // 0x2c5490: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c5494:
    if (ctx->pc == 0x2C5494u) {
        ctx->pc = 0x2C5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5490u;
        // 0x2c5494: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5498u;
        goto label_2c5498;
    }
    ctx->pc = 0x2C5490u;
    {
        const bool branch_taken_0x2c5490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5490u;
        // 0x2c5494: 0x2406029c  addiu       $a2, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5490) {
            ctx->pc = 0x2C54B4u;
            goto label_2c54b4;
        }
    }
    ctx->pc = 0x2C5498u;
label_2c5498:
    // 0x2c5498: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c549c:
    // 0x2c549c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c54a0:
    // 0x2c54a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c54a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2c54a4:
    // 0x2c54a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c54a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c54a8:
    // 0x2c54a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c54a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c54ac:
    // 0x2c54ac: 0xc0be8c0  jal         func_2FA300
label_2c54b0:
    if (ctx->pc == 0x2C54B0u) {
        ctx->pc = 0x2C54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54ACu;
        // 0x2c54b0: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C54B4u;
        goto label_2c54b4;
    }
    ctx->pc = 0x2C54ACu;
    SET_GPR_U32(ctx, 31, 0x2C54B4u);
    ctx->pc = 0x2C54B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C54ACu;
    // 0x2c54b0: 0x240803e8  addiu       $t0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2C54ACu, 0x2C54B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54B4u;
label_2c54b4:
    // 0x2c54b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c54b8:
    // 0x2c54b8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2c54b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2c54bc:
    // 0x2c54bc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2c54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2c54c0:
    // 0x2c54c0: 0x60f809  jalr        $v1
label_2c54c4:
    if (ctx->pc == 0x2C54C4u) {
        ctx->pc = 0x2C54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54C0u;
        // 0x2c54c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C54C8u;
        goto label_2c54c8;
    }
    ctx->pc = 0x2C54C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C54C8u);
        ctx->pc = 0x2C54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54C0u;
        // 0x2c54c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C54C0u, 0x2C54C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C54C8u;
label_2c54c8:
    // 0x2c54c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c54c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c54cc:
    // 0x2c54cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c54ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c54d0:
    // 0x2c54d0: 0x3e00008  jr          $ra
label_2c54d4:
    if (ctx->pc == 0x2C54D4u) {
        ctx->pc = 0x2C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54D0u;
        // 0x2c54d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C54D8u;
        goto label_fallthrough_0x2c54d0;
    }
    ctx->pc = 0x2C54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54D0u;
        // 0x2c54d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C54D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c54d0:
    ctx->pc = 0x2C54D8u;
}
