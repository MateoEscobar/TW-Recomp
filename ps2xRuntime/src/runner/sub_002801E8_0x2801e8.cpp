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

// Function: sub_002801E8
// Address: 0x2801e8 - 0x2802a0
void sub_002801E8_0x2801e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002801E8_0x2801e8");
#endif

    switch (ctx->pc) {
        case 0x280200u: goto label_280200;
        case 0x280218u: goto label_280218;
        case 0x280270u: goto label_280270;
        default: break;
    }

    ctx->pc = 0x2801e8u;

    // 0x2801e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2801e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2801ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2801ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2801f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2801f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2801f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2801f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2801f8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2801F8u;
    SET_GPR_U32(ctx, 31, 0x280200u);
    ctx->pc = 0x2801FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801F8u;
    // 0x2801fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2801F8u, 0x280200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280200u;
label_280200:
    // 0x280200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280200u;
    {
        const bool branch_taken_0x280200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280200u;
        // 0x280204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280200) {
            ctx->pc = 0x280210u;
            goto label_280210;
        }
    }
    ctx->pc = 0x280208u;
    // 0x280208: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x280208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x28020c: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x28020cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
label_280210:
    // 0x280210: 0xc089988  jal         func_226620
    ctx->pc = 0x280210u;
    SET_GPR_U32(ctx, 31, 0x280218u);
    ctx->pc = 0x280214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280210u;
    // 0x280214: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x280210u, 0x280218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280218u;
label_280218:
    // 0x280218: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x280218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x28021c: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x28021cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x280220: 0x2444e888  addiu       $a0, $v0, -0x1778
    ctx->pc = 0x280220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961288));
    // 0x280224: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x280224u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x55E88Au));
    // 0x280228: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280228u;
    {
        const bool branch_taken_0x280228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280228u;
        // 0x28022c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280228) {
            ctx->pc = 0x280260u;
            goto label_280260;
        }
    }
    ctx->pc = 0x280230u;
    // 0x280230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x280230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280234: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x280234u;
    {
        const bool branch_taken_0x280234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280234u;
        // 0x280238: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280234) {
            ctx->pc = 0x28024Cu;
            goto label_28024c;
        }
    }
    ctx->pc = 0x28023Cu;
    // 0x28023c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x28023cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x280240: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x280240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x280244: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x280244u;
    {
        const bool branch_taken_0x280244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x280248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280244u;
        // 0x280248: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280244) {
            ctx->pc = 0x28025Cu;
            goto label_28025c;
        }
    }
    ctx->pc = 0x28024Cu;
label_28024c:
    // 0x28024c: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x28024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x280250: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x280250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x280254: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280254u;
    {
        const bool branch_taken_0x280254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280254) {
            ctx->pc = 0x280260u;
            goto label_280260;
        }
    }
    ctx->pc = 0x28025Cu;
label_28025c:
    // 0x28025c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280260:
    // 0x280260: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x280260u;
    {
        const bool branch_taken_0x280260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x280260) {
            ctx->pc = 0x280264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280260u;
            // 0x280264: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28028Cu;
            goto label_28028c;
        }
    }
    ctx->pc = 0x280268u;
    // 0x280268: 0xc088420  jal         func_221080
    ctx->pc = 0x280268u;
    SET_GPR_U32(ctx, 31, 0x280270u);
    ctx->pc = 0x28026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280268u;
    // 0x28026c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x280268u, 0x280270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280270u;
label_280270:
    // 0x280270: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x280270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x280274: 0x2446e878  addiu       $a2, $v0, -0x1788
    ctx->pc = 0x280274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961272));
    // 0x280278: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x280278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28027c: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x28027cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x280280: 0xb20301c3  sdl         $v1, 0x1C3($s0)
    ctx->pc = 0x280280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280284: 0xb60301bc  sdr         $v1, 0x1BC($s0)
    ctx->pc = 0x280284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x280288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28028c:
    // 0x28028c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28028cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280290: 0x3e00008  jr          $ra
    ctx->pc = 0x280290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280290u;
        // 0x280294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280298u;
    // 0x280298: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28029c: 0x0  nop
    ctx->pc = 0x28029cu;
    // NOP
    ctx->pc = 0x2802a0u;
}
