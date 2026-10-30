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

// Function: sub_00298368
// Address: 0x298368 - 0x298420
void sub_00298368_0x298368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298368_0x298368");
#endif

    switch (ctx->pc) {
        case 0x298380u: goto label_298380;
        case 0x2983acu: goto label_2983ac;
        case 0x2983b8u: goto label_2983b8;
        case 0x2983d8u: goto label_2983d8;
        case 0x2983f4u: goto label_2983f4;
        case 0x298400u: goto label_298400;
        default: break;
    }

    ctx->pc = 0x298368u;

    // 0x298368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29836c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298370: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x298370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x298374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298378: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298378u;
    SET_GPR_U32(ctx, 31, 0x298380u);
    ctx->pc = 0x29837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298378u;
    // 0x29837c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298378u, 0x298380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298380u;
label_298380:
    // 0x298380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x298380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298384: 0x9223000f  lbu         $v1, 0xF($s1)
    ctx->pc = 0x298384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x298388: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298388u;
    {
        const bool branch_taken_0x298388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298388u;
        // 0x29838c: 0x24900284  addiu       $s0, $a0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298388) {
            ctx->pc = 0x29839Cu;
            goto label_29839c;
        }
    }
    ctx->pc = 0x298390u;
    // 0x298390: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x298390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x298394: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298394u;
    {
        const bool branch_taken_0x298394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298394u;
        // 0x298398: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298394) {
            ctx->pc = 0x2983C0u;
            goto label_2983c0;
        }
    }
    ctx->pc = 0x29839Cu;
label_29839c:
    // 0x29839c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x29839cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2983a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2983a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2983a4: 0xc08c734  jal         func_231CD0
    ctx->pc = 0x2983A4u;
    SET_GPR_U32(ctx, 31, 0x2983ACu);
    ctx->pc = 0x2983A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983A4u;
    // 0x2983a8: 0x240505dc  addiu       $a1, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CD0u, 0x2983A4u, 0x2983ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983ACu;
label_2983ac:
    // 0x2983ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2983acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983b0: 0xc0a67bc  jal         func_299EF0
    ctx->pc = 0x2983B0u;
    SET_GPR_U32(ctx, 31, 0x2983B8u);
    ctx->pc = 0x2983B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983B0u;
    // 0x2983b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x2983B0u, 0x2983B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983B8u;
label_2983b8:
    // 0x2983b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2983B8u;
    {
        const bool branch_taken_0x2983b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983B8u;
        // 0x2983bc: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983b8) {
            ctx->pc = 0x298404u;
            goto label_298404;
        }
    }
    ctx->pc = 0x2983C0u;
label_2983c0:
    // 0x2983c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2983C0u;
    {
        const bool branch_taken_0x2983c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2983C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983C0u;
        // 0x2983c4: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983c0) {
            ctx->pc = 0x2983E0u;
            goto label_2983e0;
        }
    }
    ctx->pc = 0x2983C8u;
    // 0x2983c8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2983C8u;
    {
        const bool branch_taken_0x2983c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2983c8) {
            ctx->pc = 0x2983CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2983C8u;
            // 0x2983cc: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298404u;
            goto label_298404;
        }
    }
    ctx->pc = 0x2983D0u;
    // 0x2983d0: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x2983D0u;
    SET_GPR_U32(ctx, 31, 0x2983D8u);
    ctx->pc = 0x2983D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983D0u;
    // 0x2983d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x2983D0u, 0x2983D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983D8u;
label_2983d8:
    // 0x2983d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2983D8u;
    {
        const bool branch_taken_0x2983d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983D8u;
        // 0x2983dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983d8) {
            ctx->pc = 0x298410u;
            goto label_298410;
        }
    }
    ctx->pc = 0x2983E0u;
label_2983e0:
    // 0x2983e0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2983e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2983e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2983e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2983e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2983e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983ec: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x2983ECu;
    SET_GPR_U32(ctx, 31, 0x2983F4u);
    ctx->pc = 0x2983F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983ECu;
    // 0x2983f0: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x2983ECu, 0x2983F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983F4u;
label_2983f4:
    // 0x2983f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2983f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983f8: 0xc0a67bc  jal         func_299EF0
    ctx->pc = 0x2983F8u;
    SET_GPR_U32(ctx, 31, 0x298400u);
    ctx->pc = 0x2983FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983F8u;
    // 0x2983fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EF0u, 0x2983F8u, 0x298400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298400u;
label_298400:
    // 0x298400: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x298400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_298404:
    // 0x298404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298408: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x298408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x29840c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29840cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_298410:
    // 0x298410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298418: 0x3e00008  jr          $ra
    ctx->pc = 0x298418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298418u;
        // 0x29841c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298420u;
}
