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

// Function: sub_00247958
// Address: 0x247958 - 0x247a08
void sub_00247958_0x247958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247958_0x247958");
#endif

    switch (ctx->pc) {
        case 0x24799cu: goto label_24799c;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479e0u: goto label_2479e0;
        default: break;
    }

    ctx->pc = 0x247958u;

    // 0x247958: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24795c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x247960: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x247960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x247964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24796c: 0x920201b3  lbu         $v0, 0x1B3($s0)
    ctx->pc = 0x24796cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 435)));
    // 0x247970: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x247970u;
    {
        const bool branch_taken_0x247970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247970u;
        // 0x247974: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247970) {
            ctx->pc = 0x2479F0u;
            goto label_2479f0;
        }
    }
    ctx->pc = 0x247978u;
    // 0x247978: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x247978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x24797c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x24797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x247980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247984: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x247984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x247988: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x247988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24798c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x24798cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247990: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x247990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x247994: 0xc0941c2  jal         func_250708
    ctx->pc = 0x247994u;
    SET_GPR_U32(ctx, 31, 0x24799Cu);
    ctx->pc = 0x247998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247994u;
    // 0x247998: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x247994u, 0x24799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24799Cu;
label_24799c:
    // 0x24799c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24799Cu;
    {
        const bool branch_taken_0x24799c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2479A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24799Cu;
        // 0x2479a0: 0xae0201b4  sw          $v0, 0x1B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24799c) {
            ctx->pc = 0x2479E4u;
            goto label_2479e4;
        }
    }
    ctx->pc = 0x2479A4u;
    // 0x2479a4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2479a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2479a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2479a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479ac: 0xc09416c  jal         func_2505B0
    ctx->pc = 0x2479ACu;
    SET_GPR_U32(ctx, 31, 0x2479B4u);
    ctx->pc = 0x2479B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479ACu;
    // 0x2479b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2505B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505B0u, 0x2479ACu, 0x2479B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479B4u;
label_2479b4:
    // 0x2479b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2479B4u;
    {
        const bool branch_taken_0x2479b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2479b4) {
            ctx->pc = 0x2479B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2479B4u;
            // 0x2479b8: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2479CCu;
            goto label_2479cc;
        }
    }
    ctx->pc = 0x2479BCu;
    // 0x2479bc: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2479BCu;
    SET_GPR_U32(ctx, 31, 0x2479C4u);
    ctx->pc = 0x2479C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479BCu;
    // 0x2479c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2479BCu, 0x2479C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479C4u;
label_2479c4:
    // 0x2479c4: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x2479c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x2479c8: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x2479c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_2479cc:
    // 0x2479cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2479CCu;
    {
        const bool branch_taken_0x2479cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2479D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2479CCu;
        // 0x2479d0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2479cc) {
            ctx->pc = 0x2479E8u;
            goto label_2479e8;
        }
    }
    ctx->pc = 0x2479D4u;
    // 0x2479d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2479d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479d8: 0xc093886  jal         func_24E218
    ctx->pc = 0x2479D8u;
    SET_GPR_U32(ctx, 31, 0x2479E0u);
    ctx->pc = 0x2479DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479D8u;
    // 0x2479dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E218u, 0x2479D8u, 0x2479E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479E0u;
label_2479e0:
    // 0x2479e0: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x2479e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_2479e4:
    // 0x2479e4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2479e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2479e8:
    // 0x2479e8: 0xa20001b3  sb          $zero, 0x1B3($s0)
    ctx->pc = 0x2479e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 435), (uint8_t)GPR_U32(ctx, 0));
    // 0x2479ec: 0x7e0202b0  sq          $v0, 0x2B0($s0)
    ctx->pc = 0x2479ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), GPR_VEC(ctx, 2));
label_2479f0:
    // 0x2479f0: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x2479f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x2479f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2479f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2479f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2479f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2479fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2479fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247a00: 0x3e00008  jr          $ra
    ctx->pc = 0x247A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A00u;
        // 0x247a04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A08u;
}
