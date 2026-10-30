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

// Function: sub_00149668
// Address: 0x149668 - 0x149720
void sub_00149668_0x149668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149668_0x149668");
#endif

    switch (ctx->pc) {
        case 0x1496c0u: goto label_1496c0;
        default: break;
    }

    ctx->pc = 0x149668u;

    // 0x149668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14966c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x149670: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x149674: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x149678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14967c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x149680: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x149680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149684: 0x8c47489c  lw          $a3, 0x489C($v0)
    ctx->pc = 0x149684u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x51489Cu));
    // 0x149688: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x149688u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14968c: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x14968Cu;
    {
        const bool branch_taken_0x14968c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x149690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14968Cu;
        // 0x149690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14968c) {
            ctx->pc = 0x1496E8u;
            goto label_1496e8;
        }
    }
    ctx->pc = 0x149694u;
    // 0x149694: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x149694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x149698: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x149698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14969c: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x14969cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1496a0: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x1496a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x1496a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1496a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1496a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1496a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1496ac: 0x84450042  lh          $a1, 0x42($v0)
    ctx->pc = 0x1496acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x1496b0: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1496B0u;
    {
        const bool branch_taken_0x1496b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1496B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496B0u;
        // 0x1496b4: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496b0) {
            ctx->pc = 0x1496ECu;
            goto label_1496ec;
        }
    }
    ctx->pc = 0x1496B8u;
    // 0x1496b8: 0xc1068f8  jal         func_41A3E0
    ctx->pc = 0x1496B8u;
    SET_GPR_U32(ctx, 31, 0x1496C0u);
    ctx->pc = 0x1496BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496B8u;
    // 0x1496bc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A3E0u, 0x1496B8u, 0x1496C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496C0u;
label_1496c0:
    // 0x1496c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1496C0u;
    {
        const bool branch_taken_0x1496c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496C0u;
        // 0x1496c4: 0x24020140  addiu       $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496c0) {
            ctx->pc = 0x1496E8u;
            goto label_1496e8;
        }
    }
    ctx->pc = 0x1496C8u;
    // 0x1496c8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1496c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1496cc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1496ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1496d0: 0x2463e3c0  addiu       $v1, $v1, -0x1C40
    ctx->pc = 0x1496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960064));
    // 0x1496d4: 0x11202b  sltu        $a0, $zero, $s1
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1496d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1496dc: 0xa0520123  sb          $s2, 0x123($v0)
    ctx->pc = 0x1496dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 18));
    // 0x1496e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1496E0u;
    {
        const bool branch_taken_0x1496e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496E0u;
        // 0x1496e4: 0xa0440122  sb          $a0, 0x122($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 290), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496e0) {
            ctx->pc = 0x149704u;
            goto label_149704;
        }
    }
    ctx->pc = 0x1496E8u;
label_1496e8:
    // 0x1496e8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1496ec:
    // 0x1496ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1496f0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1496f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1496f4: 0x2442e3c0  addiu       $v0, $v0, -0x1C40
    ctx->pc = 0x1496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960064));
    // 0x1496f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1496f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1496fc: 0xa0600123  sb          $zero, 0x123($v1)
    ctx->pc = 0x1496fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x149700: 0xa0600122  sb          $zero, 0x122($v1)
    ctx->pc = 0x149700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 290), (uint8_t)GPR_U32(ctx, 0));
label_149704:
    // 0x149704: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x149704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149708: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14970c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14970cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149714: 0x3e00008  jr          $ra
    ctx->pc = 0x149714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149714u;
        // 0x149718: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14971Cu;
    // 0x14971c: 0x0  nop
    ctx->pc = 0x14971cu;
    // NOP
    ctx->pc = 0x149720u;
}
