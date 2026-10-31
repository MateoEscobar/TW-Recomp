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

// Function: sub_002199C0
// Address: 0x2199c0 - 0x219a28
void sub_002199C0_0x2199c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002199C0_0x2199c0");
#endif

    switch (ctx->pc) {
        case 0x219a08u: goto label_219a08;
        default: break;
    }

    ctx->pc = 0x2199c0u;

    // 0x2199c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2199c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2199c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2199c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2199c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2199cc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2199d0: 0x2442ff50  addiu       $v0, $v0, -0xB0
    ctx->pc = 0x2199d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967120));
    // 0x2199d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2199d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2199d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2199dc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2199dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2199e0: 0x1465000e  bne         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2199E0u;
    {
        const bool branch_taken_0x2199e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2199E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199E0u;
        // 0x2199e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199e0) {
            ctx->pc = 0x219A1Cu;
            goto label_219a1c;
        }
    }
    ctx->pc = 0x2199E8u;
    // 0x2199e8: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x2199e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2199ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2199ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199f0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2199f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2199f4: 0x0  nop
    ctx->pc = 0x2199f4u;
    // NOP
    // 0x2199f8: 0x0  nop
    ctx->pc = 0x2199f8u;
    // NOP
    // 0x2199fc: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2199fcu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x219a00: 0xc094c1e  jal         func_253078
    ctx->pc = 0x219A00u;
    SET_GPR_U32(ctx, 31, 0x219A08u);
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x219A00u, 0x219A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A08u;
label_219a08:
    // 0x219a08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x219a0c: 0x8c620170  lw          $v0, 0x170($v1)
    ctx->pc = 0x219a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x510170u));
    // 0x219a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x219a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219a14: 0xac620170  sw          $v0, 0x170($v1)
    ctx->pc = 0x219a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x510170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x510170u, _value); } while (0);
    // 0x219a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_219a1c:
    // 0x219a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x219A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A1Cu;
        // 0x219a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A24u;
    // 0x219a24: 0x0  nop
    ctx->pc = 0x219a24u;
    // NOP
    ctx->pc = 0x219a28u;
}
