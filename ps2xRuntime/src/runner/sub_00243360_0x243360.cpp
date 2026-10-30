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

// Function: sub_00243360
// Address: 0x243360 - 0x243420
void sub_00243360_0x243360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243360_0x243360");
#endif

    switch (ctx->pc) {
        case 0x2433bcu: goto label_2433bc;
        case 0x2433c4u: goto label_2433c4;
        case 0x2433d4u: goto label_2433d4;
        default: break;
    }

    ctx->pc = 0x243360u;

    // 0x243360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243364: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x243364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x243368: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x243368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24336c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243374: 0x2444c7c0  addiu       $a0, $v0, -0x3840
    ctx->pc = 0x243374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952896));
    // 0x243378: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x243378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x24337c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x24337cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55C7C2u));
    // 0x243380: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x243380u;
    {
        const bool branch_taken_0x243380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243380) {
            ctx->pc = 0x243384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243380u;
            // 0x243384: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243414u;
            goto label_243414;
        }
    }
    ctx->pc = 0x243388u;
    // 0x243388: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x243388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24338c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24338Cu;
    {
        const bool branch_taken_0x24338c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24338Cu;
        // 0x243390: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24338c) {
            ctx->pc = 0x2433A4u;
            goto label_2433a4;
        }
    }
    ctx->pc = 0x243394u;
    // 0x243394: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x243394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x243398: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x243398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x24339c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24339Cu;
    {
        const bool branch_taken_0x24339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2433A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24339Cu;
        // 0x2433a0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24339c) {
            ctx->pc = 0x2433B4u;
            goto label_2433b4;
        }
    }
    ctx->pc = 0x2433A4u;
label_2433a4:
    // 0x2433a4: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x2433a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2433a8: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x2433a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x2433ac: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2433ACu;
    {
        const bool branch_taken_0x2433ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2433ac) {
            ctx->pc = 0x2433B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2433ACu;
            // 0x2433b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243414u;
            goto label_243414;
        }
    }
    ctx->pc = 0x2433B4u;
label_2433b4:
    // 0x2433b4: 0xc088420  jal         func_221080
    ctx->pc = 0x2433B4u;
    SET_GPR_U32(ctx, 31, 0x2433BCu);
    ctx->pc = 0x2433B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433B4u;
    // 0x2433b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x2433B4u, 0x2433BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433BCu;
label_2433bc:
    // 0x2433bc: 0xc088e48  jal         func_223920
    ctx->pc = 0x2433BCu;
    SET_GPR_U32(ctx, 31, 0x2433C4u);
    ctx->pc = 0x2433C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433BCu;
    // 0x2433c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x2433BCu, 0x2433C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433C4u;
label_2433c4:
    // 0x2433c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2433C4u;
    {
        const bool branch_taken_0x2433c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2433C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433C4u;
        // 0x2433c8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433c4) {
            ctx->pc = 0x2433DCu;
            goto label_2433dc;
        }
    }
    ctx->pc = 0x2433CCu;
    // 0x2433cc: 0xc08a024  jal         func_228090
    ctx->pc = 0x2433CCu;
    SET_GPR_U32(ctx, 31, 0x2433D4u);
    ctx->pc = 0x2433D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2433CCu;
    // 0x2433d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x2433CCu, 0x2433D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2433D4u;
label_2433d4:
    // 0x2433d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2433D4u;
    {
        const bool branch_taken_0x2433d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2433D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433D4u;
        // 0x2433d8: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433d4) {
            ctx->pc = 0x2433F8u;
            goto label_2433f8;
        }
    }
    ctx->pc = 0x2433DCu;
label_2433dc:
    // 0x2433dc: 0x2446c7b0  addiu       $a2, $v0, -0x3850
    ctx->pc = 0x2433dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x2433e0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2433e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2433e4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2433e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2433e8: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x2433e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2433ec: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x2433ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2433f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2433F0u;
    {
        const bool branch_taken_0x2433f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2433F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2433F0u;
        // 0x2433f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433f0) {
            ctx->pc = 0x243414u;
            goto label_243414;
        }
    }
    ctx->pc = 0x2433F8u;
label_2433f8:
    // 0x2433f8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2433f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2433fc: 0x2446c7b8  addiu       $a2, $v0, -0x3848
    ctx->pc = 0x2433fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952888));
    // 0x243400: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x243400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x243404: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x243404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x243408: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x243408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24340c: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x24340cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x243410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_243414:
    // 0x243414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243418: 0x3e00008  jr          $ra
    ctx->pc = 0x243418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243418u;
        // 0x24341c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243420u;
}
