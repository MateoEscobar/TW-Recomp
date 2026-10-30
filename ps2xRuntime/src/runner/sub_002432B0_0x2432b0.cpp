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

// Function: sub_002432B0
// Address: 0x2432b0 - 0x243360
void sub_002432B0_0x2432b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002432B0_0x2432b0");
#endif

    switch (ctx->pc) {
        case 0x2432d0u: goto label_2432d0;
        case 0x243334u: goto label_243334;
        default: break;
    }

    ctx->pc = 0x2432b0u;

    // 0x2432b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2432b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2432b4: 0x3c05180f  lui         $a1, 0x180F
    ctx->pc = 0x2432b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6159 << 16));
    // 0x2432b8: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x2432b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
    // 0x2432bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2432bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2432c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2432c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2432c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2432c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2432c8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2432C8u;
    SET_GPR_U32(ctx, 31, 0x2432D0u);
    ctx->pc = 0x2432CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2432C8u;
    // 0x2432cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2432C8u, 0x2432D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2432D0u;
label_2432d0:
    // 0x2432d0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2432D0u;
    {
        const bool branch_taken_0x2432d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2432d0) {
            ctx->pc = 0x2432D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2432D0u;
            // 0x2432d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24334Cu;
            goto label_24334c;
        }
    }
    ctx->pc = 0x2432D8u;
    // 0x2432d8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2432d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2432dc: 0x860401be  lh          $a0, 0x1BE($s0)
    ctx->pc = 0x2432dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x2432e0: 0x2445c7c0  addiu       $a1, $v0, -0x3840
    ctx->pc = 0x2432e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952896));
    // 0x2432e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2432e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2432e8: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x2432e8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x55C7C2u));
    // 0x2432ec: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2432ECu;
    {
        const bool branch_taken_0x2432ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2432F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432ECu;
        // 0x2432f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432ec) {
            ctx->pc = 0x243324u;
            goto label_243324;
        }
    }
    ctx->pc = 0x2432F4u;
    // 0x2432f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2432f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2432f8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2432F8u;
    {
        const bool branch_taken_0x2432f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2432FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2432F8u;
        // 0x2432fc: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432f8) {
            ctx->pc = 0x243310u;
            goto label_243310;
        }
    }
    ctx->pc = 0x243300u;
    // 0x243300: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x243300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x243304: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x243304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x243308: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x243308u;
    {
        const bool branch_taken_0x243308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243308u;
        // 0x24330c: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243308) {
            ctx->pc = 0x243320u;
            goto label_243320;
        }
    }
    ctx->pc = 0x243310u;
label_243310:
    // 0x243310: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x243310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x243314: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x243314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x243318: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x243318u;
    {
        const bool branch_taken_0x243318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243318) {
            ctx->pc = 0x243324u;
            goto label_243324;
        }
    }
    ctx->pc = 0x243320u;
label_243320:
    // 0x243320: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x243320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243324:
    // 0x243324: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x243324u;
    {
        const bool branch_taken_0x243324 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x243324) {
            ctx->pc = 0x243328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243324u;
            // 0x243328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24334Cu;
            goto label_24334c;
        }
    }
    ctx->pc = 0x24332Cu;
    // 0x24332c: 0xc08840e  jal         func_221038
    ctx->pc = 0x24332Cu;
    SET_GPR_U32(ctx, 31, 0x243334u);
    ctx->pc = 0x243330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24332Cu;
    // 0x243330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221038u, 0x24332Cu, 0x243334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243334u;
label_243334:
    // 0x243334: 0x2625c7c0  addiu       $a1, $s1, -0x3840
    ctx->pc = 0x243334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952896));
    // 0x243338: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x243338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24333c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x24333cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x243340: 0xb20201c3  sdl         $v0, 0x1C3($s0)
    ctx->pc = 0x243340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243344: 0xb60201bc  sdr         $v0, 0x1BC($s0)
    ctx->pc = 0x243344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x243348: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x243348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24334c:
    // 0x24334c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24334cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243354: 0x3e00008  jr          $ra
    ctx->pc = 0x243354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243354u;
        // 0x243358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24335Cu;
    // 0x24335c: 0x0  nop
    ctx->pc = 0x24335cu;
    // NOP
    ctx->pc = 0x243360u;
}
