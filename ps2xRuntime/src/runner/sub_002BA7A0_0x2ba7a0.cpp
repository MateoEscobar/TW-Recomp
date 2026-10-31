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

// Function: sub_002BA7A0
// Address: 0x2ba7a0 - 0x2ba810
void sub_002BA7A0_0x2ba7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA7A0_0x2ba7a0");
#endif

    switch (ctx->pc) {
        case 0x2ba7dcu: goto label_2ba7dc;
        default: break;
    }

    ctx->pc = 0x2ba7a0u;

    // 0x2ba7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba7a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ba7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ba7a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba7ac: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ba7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ba7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba7b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ba7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba7b8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ba7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba7bc: 0x84a50092  lh          $a1, 0x92($a1)
    ctx->pc = 0x2ba7bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x2ba7c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ba7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ba7c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ba7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ba7c8: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2ba7cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ba7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ba7d0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ba7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ba7d4: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2BA7D4u;
    SET_GPR_U32(ctx, 31, 0x2BA7DCu);
    ctx->pc = 0x2BA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA7D4u;
    // 0x2ba7d8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BA7D4u, 0x2BA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7DCu;
label_2ba7dc:
    // 0x2ba7dc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ba7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2ba7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ba7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ba7e4: 0x0  nop
    ctx->pc = 0x2ba7e4u;
    // NOP
    // 0x2ba7e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba7e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba7ec: 0x0  nop
    ctx->pc = 0x2ba7ecu;
    // NOP
    // 0x2ba7f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA7F0u;
    {
        const bool branch_taken_0x2ba7f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7F0u;
        // 0x2ba7f4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba7f0) {
            ctx->pc = 0x2BA800u;
            goto label_2ba800;
        }
    }
    ctx->pc = 0x2BA7F8u;
    // 0x2ba7f8: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2ba7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2ba7fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ba7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2ba800:
    // 0x2ba800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba808: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA808u;
        // 0x2ba80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA810u;
}
