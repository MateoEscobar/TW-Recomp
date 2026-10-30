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

// Function: sub_00226510
// Address: 0x226510 - 0x2265d0
void sub_00226510_0x226510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226510_0x226510");
#endif

    switch (ctx->pc) {
        case 0x226524u: goto label_226524;
        case 0x226594u: goto label_226594;
        default: break;
    }

    ctx->pc = 0x226510u;

    // 0x226510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22651c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x22651Cu;
    SET_GPR_U32(ctx, 31, 0x226524u);
    ctx->pc = 0x226520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22651Cu;
    // 0x226520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22651Cu, 0x226524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226524u;
label_226524:
    // 0x226524: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x226524u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x226528: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x226528u;
    {
        const bool branch_taken_0x226528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226528u;
        // 0x22652c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226528) {
            ctx->pc = 0x22653Cu;
            goto label_22653c;
        }
    }
    ctx->pc = 0x226530u;
    // 0x226530: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x226530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x226534: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x226534u;
    {
        const bool branch_taken_0x226534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226534) {
            ctx->pc = 0x226574u;
            goto label_226574;
        }
    }
    ctx->pc = 0x22653Cu;
label_22653c:
    // 0x22653c: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x22653cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x226540: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x226540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x226544: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x226544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x226548: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x226548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22654c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x226550: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x226550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x226554: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226554u;
    {
        const bool branch_taken_0x226554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226554u;
        // 0x226558: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226554) {
            ctx->pc = 0x226574u;
            goto label_226574;
        }
    }
    ctx->pc = 0x22655Cu;
    // 0x22655c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22655cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x226560: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x226560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x226564: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x226564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x226568: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x226568u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22656c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22656Cu;
    {
        const bool branch_taken_0x22656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22656c) {
            ctx->pc = 0x226570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22656Cu;
            // 0x226570: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226584u;
            goto label_226584;
        }
    }
    ctx->pc = 0x226574u;
label_226574:
    // 0x226574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x226574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x226578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x226578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22657c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22657Cu;
    {
        const bool branch_taken_0x22657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22657Cu;
        // 0x226580: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22657c) {
            ctx->pc = 0x2265C4u;
            goto label_2265c4;
        }
    }
    ctx->pc = 0x226584u;
label_226584:
    // 0x226584: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x226584u;
    {
        const bool branch_taken_0x226584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226584) {
            ctx->pc = 0x226588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226584u;
            // 0x226588: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2265C0u;
            goto label_2265c0;
        }
    }
    ctx->pc = 0x22658Cu;
    // 0x22658c: 0xc088c1a  jal         func_223068
    ctx->pc = 0x22658Cu;
    SET_GPR_U32(ctx, 31, 0x226594u);
    ctx->pc = 0x226590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22658Cu;
    // 0x226590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x22658Cu, 0x226594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226594u;
label_226594:
    // 0x226594: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x226594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x226598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22659c: 0x0  nop
    ctx->pc = 0x22659cu;
    // NOP
    // 0x2265a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2265a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2265a4: 0x84620148  lh          $v0, 0x148($v1)
    ctx->pc = 0x2265a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x2265a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2265a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2265ac: 0x0  nop
    ctx->pc = 0x2265acu;
    // NOP
    // 0x2265b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2265b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2265b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2265b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2265b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2265B8u;
    {
        const bool branch_taken_0x2265b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265B8u;
        // 0x2265bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265b8) {
            ctx->pc = 0x2265C4u;
            goto label_2265c4;
        }
    }
    ctx->pc = 0x2265C0u;
label_2265c0:
    // 0x2265c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2265c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2265c4:
    // 0x2265c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2265c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2265c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2265C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265C8u;
        // 0x2265cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265D0u;
}
