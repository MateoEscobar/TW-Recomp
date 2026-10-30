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

// Function: sub_001B54F0
// Address: 0x1b54f0 - 0x1b5590
void sub_001B54F0_0x1b54f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B54F0_0x1b54f0");
#endif

    switch (ctx->pc) {
        case 0x1b5570u: goto label_1b5570;
        case 0x1b557cu: goto label_1b557c;
        default: break;
    }

    ctx->pc = 0x1b54f0u;

    // 0x1b54f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1b54f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54f4: 0x240a03f0  addiu       $t2, $zero, 0x3F0
    ctx->pc = 0x1b54f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x1b54f8: 0xea1818  mult        $v1, $a3, $t2
    ctx->pc = 0x1b54f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b54fc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b54fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b5500: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1b5504: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b5504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b5508: 0x2449a1b0  addiu       $t1, $v0, -0x5E50
    ctx->pc = 0x1b5508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x1b550c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b5510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5514: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b5518: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b551c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B551Cu;
    {
        const bool branch_taken_0x1b551c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B551Cu;
        // 0x1b5520: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b551c) {
            ctx->pc = 0x1B557Cu;
            goto label_1b557c;
        }
    }
    ctx->pc = 0x1B5524u;
    // 0x1b5524: 0xea4018  mult        $t0, $a3, $t2
    ctx->pc = 0x1b5524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b5528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b552c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1b552cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1b5530: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1b5530u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b5534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b5534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b5538: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x1b5538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b553c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b5540: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x1b5540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1b5544: 0x90c8000c  lbu         $t0, 0xC($a2)
    ctx->pc = 0x1b5544u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b5548: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b554c: 0x90c60008  lbu         $a2, 0x8($a2)
    ctx->pc = 0x1b554cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b5550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5554: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b5554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b5558: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x1b5558u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b555c: 0xa3a60002  sb          $a2, 0x2($sp)
    ctx->pc = 0x1b555cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b5560: 0xa3a80003  sb          $t0, 0x3($sp)
    ctx->pc = 0x1b5560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b5564: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b5564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5568: 0xc070904  jal         func_1C2410
    ctx->pc = 0x1B5568u;
    SET_GPR_U32(ctx, 31, 0x1B5570u);
    ctx->pc = 0x1B556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5568u;
    // 0x1b556c: 0xace20068  sw          $v0, 0x68($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2410u, 0x1B5568u, 0x1B5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5570u;
label_1b5570:
    // 0x1b5570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5574: 0xc0708ac  jal         func_1C22B0
    ctx->pc = 0x1B5574u;
    SET_GPR_U32(ctx, 31, 0x1B557Cu);
    ctx->pc = 0x1B5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5574u;
    // 0x1b5578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1B5574u, 0x1B557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B557Cu;
label_1b557c:
    // 0x1b557c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b557cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5584: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b5584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5588: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5588u;
        // 0x1b558c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5590u;
}
