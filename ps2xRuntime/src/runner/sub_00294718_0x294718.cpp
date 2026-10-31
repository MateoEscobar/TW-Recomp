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

// Function: sub_00294718
// Address: 0x294718 - 0x294788
void sub_00294718_0x294718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294718_0x294718");
#endif

    ctx->pc = 0x294718u;

    // 0x294718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29471c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x294720: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x294720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x294724: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x294724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x294728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29472c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x29472cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x294730: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x294730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x294734: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x294734u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x294738: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x294738u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x29473c: 0xae090b90  sw          $t1, 0xB90($s0)
    ctx->pc = 0x29473cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x510B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B90u, _value); } while (0);
    // 0x294740: 0xae2a0b94  sw          $t2, 0xB94($s1)
    ctx->pc = 0x294740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x510B94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B94u, _value); } while (0);
    // 0x294744: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x294744u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x294748: 0xae4b0b80  sw          $t3, 0xB80($s2)
    ctx->pc = 0x294748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x510B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B80u, _value); } while (0);
    // 0x29474c: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x29474cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x294750: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x294750u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x294754: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x294754u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x294758: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x294758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29475c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29475cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294760: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x294760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294764: 0xe44c0b50  swc1        $f12, 0xB50($v0)
    ctx->pc = 0x294764u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x510B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B50u, _value); } while (0); }
    // 0x294768: 0xac640b54  sw          $a0, 0xB54($v1)
    ctx->pc = 0x294768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x510B54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B54u, _value); } while (0);
    // 0x29476c: 0xad850b68  sw          $a1, 0xB68($t4)
    ctx->pc = 0x29476cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x510B68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B68u, _value); } while (0);
    // 0x294770: 0xada60b70  sw          $a2, 0xB70($t5)
    ctx->pc = 0x294770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x510B70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B70u, _value); } while (0);
    // 0x294774: 0xadc70b78  sw          $a3, 0xB78($t6)
    ctx->pc = 0x294774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x510B78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B78u, _value); } while (0);
    // 0x294778: 0xade80b7c  sw          $t0, 0xB7C($t7)
    ctx->pc = 0x294778u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x510B7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510B7Cu, _value); } while (0);
    // 0x29477c: 0x3e00008  jr          $ra
    ctx->pc = 0x29477Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29477Cu;
        // 0x294780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29477Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294784u;
    // 0x294784: 0x0  nop
    ctx->pc = 0x294784u;
    // NOP
    ctx->pc = 0x294788u;
}
