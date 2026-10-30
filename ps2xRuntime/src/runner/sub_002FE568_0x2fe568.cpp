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

// Function: sub_002FE568
// Address: 0x2fe568 - 0x2fe5d8
void sub_002FE568_0x2fe568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE568_0x2fe568");
#endif

    switch (ctx->pc) {
        case 0x2fe590u: goto label_2fe590;
        default: break;
    }

    ctx->pc = 0x2fe568u;

    // 0x2fe568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe56c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fe56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2fe570: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fe570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fe574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe578: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2fe578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2fe57c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2fe57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe580: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2fe580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe588: 0xc0bf8e0  jal         func_2FE380
    ctx->pc = 0x2FE588u;
    SET_GPR_U32(ctx, 31, 0x2FE590u);
    ctx->pc = 0x2FE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE588u;
    // 0x2fe58c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE380u, 0x2FE588u, 0x2FE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE590u;
label_2fe590:
    // 0x2fe590: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fe590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fe594: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fe594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe598: 0x24632fe0  addiu       $v1, $v1, 0x2FE0
    ctx->pc = 0x2fe598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12256));
    // 0x2fe59c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2fe59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x2fe5a0: 0xa2120014  sb          $s2, 0x14($s0)
    ctx->pc = 0x2fe5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x2fe5a4: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2fe5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2fe5a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2fe5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2fe5ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fe5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe5b0: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x2fe5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fe5b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fe5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fe5b8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2fe5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2fe5bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fe5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe5c0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2fe5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2fe5c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2fe5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe5cc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2fe5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x2fe5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5D0u;
        // 0x2fe5d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE5D8u;
}
