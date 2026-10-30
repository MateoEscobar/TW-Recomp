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

// Function: sub_002A8190
// Address: 0x2a8190 - 0x2a81f8
void sub_002A8190_0x2a8190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8190_0x2a8190");
#endif

    switch (ctx->pc) {
        case 0x2a81dcu: goto label_2a81dc;
        default: break;
    }

    ctx->pc = 0x2a8190u;

    // 0x2a8190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8194: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a819c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81a0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A81A0u;
    {
        const bool branch_taken_0x2a81a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81A0u;
        // 0x2a81a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81a0) {
            ctx->pc = 0x2A81E4u;
            goto label_2a81e4;
        }
    }
    ctx->pc = 0x2A81A8u;
    // 0x2a81a8: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x2a81a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a81ac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2A81ACu;
    {
        const bool branch_taken_0x2a81ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a81ac) {
            ctx->pc = 0x2A81B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A81ACu;
            // 0x2a81b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A81E8u;
            goto label_2a81e8;
        }
    }
    ctx->pc = 0x2A81B4u;
    // 0x2a81b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a81b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a81b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a81bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a81bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a81c0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2a81c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2a81c4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2a81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2a81c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a81c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a81ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a81d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a81d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a81d4: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2A81D4u;
    SET_GPR_U32(ctx, 31, 0x2A81DCu);
    ctx->pc = 0x2A81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A81D4u;
    // 0x2a81d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A81D4u, 0x2A81DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81DCu;
label_2a81dc:
    // 0x2a81dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a81dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a81e0: 0xa2030050  sb          $v1, 0x50($s0)
    ctx->pc = 0x2a81e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 3));
label_2a81e4:
    // 0x2a81e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a81e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a81e8:
    // 0x2a81e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a81e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a81ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A81ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A81ECu;
        // 0x2a81f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A81ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A81F4u;
    // 0x2a81f4: 0x0  nop
    ctx->pc = 0x2a81f4u;
    // NOP
    ctx->pc = 0x2a81f8u;
}
