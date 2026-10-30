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

// Function: sub_002F27A0
// Address: 0x2f27a0 - 0x2f2818
void sub_002F27A0_0x2f27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F27A0_0x2f27a0");
#endif

    switch (ctx->pc) {
        case 0x2f27d4u: goto label_2f27d4;
        case 0x2f2800u: goto label_2f2800;
        default: break;
    }

    ctx->pc = 0x2f27a0u;

    // 0x2f27a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f27a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f27a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2f27a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f27a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f27ac: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f27acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2f27b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f27b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f27b4: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x2f27b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x2f27b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f27b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f27bc: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2f27bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2f27c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f27c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f27c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27c8: 0x263191e0  addiu       $s1, $s1, -0x6E20
    ctx->pc = 0x2f27c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939104));
    // 0x2f27cc: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x2F27CCu;
    SET_GPR_U32(ctx, 31, 0x2F27D4u);
    ctx->pc = 0x2F27D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27CCu;
    // 0x2f27d0: 0x26520f80  addiu       $s2, $s2, 0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2F27CCu, 0x2F27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27D4u;
label_2f27d4:
    // 0x2f27d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f27d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f27d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f27dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2f27e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F27E0u;
    {
        const bool branch_taken_0x2f27e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f27e0) {
            ctx->pc = 0x2F27E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F27E0u;
            // 0x2f27e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F27E8u;
            goto label_2f27e8;
        }
    }
    ctx->pc = 0x2F27E8u;
label_2f27e8:
    // 0x2f27e8: 0x2810  mfhi        $a1
    ctx->pc = 0x2f27e8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f27ec: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2f27ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2f27f0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2f27f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f27f4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2f27f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2f27f8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x2F27F8u;
    SET_GPR_U32(ctx, 31, 0x2F2800u);
    ctx->pc = 0x2F27FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27F8u;
    // 0x2f27fc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2F27F8u, 0x2F2800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2800u;
label_2f2800:
    // 0x2f2800: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f2800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2804: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f2804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2808: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f2808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f280c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2810: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2810u;
        // 0x2f2814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2818u;
}
