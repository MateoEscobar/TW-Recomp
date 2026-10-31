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

// Function: sub_001FDC10
// Address: 0x1fdc10 - 0x1fdc80
void sub_001FDC10_0x1fdc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDC10_0x1fdc10");
#endif

    ctx->pc = 0x1fdc10u;

    // 0x1fdc10: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x1fdc10u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc14: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x1fdc14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc18: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1fdc18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fdc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc20: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdc2c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc30: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1fdc30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1fdc34: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x1fdc34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x1fdc38: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x1fdc38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x1fdc3c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x1fdc3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x1fdc40: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x1fdc40u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x1fdc44: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x1fdc44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x1fdc48: 0xaca4f4e4  sw          $a0, -0xB1C($a1)
    ctx->pc = 0x1fdc48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50F4E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4E4u, _value); } while (0);
    // 0x1fdc4c: 0xa462f4ec  sh          $v0, -0xB14($v1)
    ctx->pc = 0x1fdc4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50F4ECu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x50F4ECu, _value); } while (0);
    // 0x1fdc50: 0xadc0f4dc  sw          $zero, -0xB24($t6)
    ctx->pc = 0x1fdc50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50F4DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4DCu, _value); } while (0);
    // 0x1fdc54: 0xade0f4e0  sw          $zero, -0xB20($t7)
    ctx->pc = 0x1fdc54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50F4E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4E0u, _value); } while (0);
    // 0x1fdc58: 0xada0f4e8  sw          $zero, -0xB18($t5)
    ctx->pc = 0x1fdc58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50F4E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4E8u, _value); } while (0);
    // 0x1fdc5c: 0xacc0f4f0  sw          $zero, -0xB10($a2)
    ctx->pc = 0x1fdc5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50F4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4F0u, _value); } while (0);
    // 0x1fdc60: 0xace0f4f4  sw          $zero, -0xB0C($a3)
    ctx->pc = 0x1fdc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50F4F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4F4u, _value); } while (0);
    // 0x1fdc64: 0xad00ef68  sw          $zero, -0x1098($t0)
    ctx->pc = 0x1fdc64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63EF68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EF68u, _value); } while (0);
    // 0x1fdc68: 0xad20ef6c  sw          $zero, -0x1094($t1)
    ctx->pc = 0x1fdc68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63EF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EF6Cu, _value); } while (0);
    // 0x1fdc6c: 0xad40ef70  sw          $zero, -0x1090($t2)
    ctx->pc = 0x1fdc6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63EF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EF70u, _value); } while (0);
    // 0x1fdc70: 0xad60ef74  sw          $zero, -0x108C($t3)
    ctx->pc = 0x1fdc70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63EF74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EF74u, _value); } while (0);
    // 0x1fdc74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC74u;
        // 0x1fdc78: 0xad80ef78  sw          $zero, -0x1088($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4294963064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDC7Cu;
    // 0x1fdc7c: 0x0  nop
    ctx->pc = 0x1fdc7cu;
    // NOP
    ctx->pc = 0x1fdc80u;
}
