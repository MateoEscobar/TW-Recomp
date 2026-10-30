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

// Function: sub_002FE248
// Address: 0x2fe248 - 0x2fe280
void sub_002FE248_0x2fe248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE248_0x2fe248");
#endif

    ctx->pc = 0x2fe248u;

    // 0x2fe248: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fe248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fe24c: 0x3c0142dc  lui         $at, 0x42DC
    ctx->pc = 0x2fe24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17116 << 16));
    // 0x2fe250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe254: 0x24633060  addiu       $v1, $v1, 0x3060
    ctx->pc = 0x2fe254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12384));
    // 0x2fe258: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2fe258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2fe25c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fe25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fe260: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fe260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe264: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x2fe264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fe268: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fe268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fe26c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2fe26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2fe270: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2fe270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2fe274: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fe274u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fe278: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE278u;
        // 0x2fe27c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE280u;
}
