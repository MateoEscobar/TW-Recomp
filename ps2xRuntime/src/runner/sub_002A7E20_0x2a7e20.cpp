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

// Function: sub_002A7E20
// Address: 0x2a7e20 - 0x2a7e98
void sub_002A7E20_0x2a7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7E20_0x2a7e20");
#endif

    ctx->pc = 0x2a7e20u;

    // 0x2a7e20: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2a7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2a7e24: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x2a7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x2a7e28: 0x2442f7f0  addiu       $v0, $v0, -0x810
    ctx->pc = 0x2a7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965232));
    // 0x2a7e2c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a7e30: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2a7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2a7e34: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x2a7e34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x2a7e38: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2a7e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7e3c: 0x254a16c0  addiu       $t2, $t2, 0x16C0
    ctx->pc = 0x2a7e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5824));
    // 0x2a7e40: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2a7e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7e44: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x2a7e44u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x2a7e48: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a7e48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a7e4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a7e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e50: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2a7e50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a7e54: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2a7e54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a7e58: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2a7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2a7e5c: 0x79450000  lq          $a1, 0x0($t2)
    ctx->pc = 0x2a7e5cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2a7e60: 0xac880034  sw          $t0, 0x34($a0)
    ctx->pc = 0x2a7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
    // 0x2a7e64: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x2a7e64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x2a7e68: 0xac890038  sw          $t1, 0x38($a0)
    ctx->pc = 0x2a7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 9));
    // 0x2a7e6c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2a7e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2a7e70: 0x8d63bd30  lw          $v1, -0x42D0($t3)
    ctx->pc = 0x2a7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294950192)));
    // 0x2a7e74: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x2a7e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x2a7e78: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2a7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2a7e7c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2a7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2a7e80: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2a7e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2a7e84: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2a7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2a7e88: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x2a7e88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7E8Cu;
        // 0x2a7e90: 0xa0800051  sb          $zero, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7E94u;
    // 0x2a7e94: 0x0  nop
    ctx->pc = 0x2a7e94u;
    // NOP
    ctx->pc = 0x2a7e98u;
}
