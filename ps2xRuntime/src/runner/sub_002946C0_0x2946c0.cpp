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

// Function: sub_002946C0
// Address: 0x2946c0 - 0x294718
void sub_002946C0_0x2946c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002946C0_0x2946c0");
#endif

    ctx->pc = 0x2946c0u;

    // 0x2946c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2946c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2946c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2946c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2946c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2946c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2946cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2946ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2946d0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2946d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2946d4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2946d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x2946d8: 0xae0b0b84  sw          $t3, 0xB84($s0)
    ctx->pc = 0x2946d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x510B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B84u, _value); } while (0);
    // 0x2946dc: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x2946dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x2946e0: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x2946e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x2946e4: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x2946e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x2946e8: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x2946e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x2946ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2946ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946f0: 0xe44c0b4c  swc1        $f12, 0xB4C($v0)
    ctx->pc = 0x2946f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510B4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B4Cu, _value); } while (0); }
    // 0x2946f4: 0xac640b58  sw          $a0, 0xB58($v1)
    ctx->pc = 0x2946f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510B58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B58u, _value); } while (0);
    // 0x2946f8: 0xad050b5c  sw          $a1, 0xB5C($t0)
    ctx->pc = 0x2946f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x510B5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B5Cu, _value); } while (0);
    // 0x2946fc: 0xad860b60  sw          $a2, 0xB60($t4)
    ctx->pc = 0x2946fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x510B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B60u, _value); } while (0);
    // 0x294700: 0xada70b64  sw          $a3, 0xB64($t5)
    ctx->pc = 0x294700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x510B64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B64u, _value); } while (0);
    // 0x294704: 0xadc90b74  sw          $t1, 0xB74($t6)
    ctx->pc = 0x294704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x510B74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B74u, _value); } while (0);
    // 0x294708: 0xadea0b6c  sw          $t2, 0xB6C($t7)
    ctx->pc = 0x294708u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x510B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B6Cu, _value); } while (0);
    // 0x29470c: 0x3e00008  jr          $ra
    ctx->pc = 0x29470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29470Cu;
        // 0x294710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294714u;
    // 0x294714: 0x0  nop
    ctx->pc = 0x294714u;
    // NOP
    ctx->pc = 0x294718u;
}
