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

// Function: sub_00150BC8
// Address: 0x150bc8 - 0x150c28
void sub_00150BC8_0x150bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150BC8_0x150bc8");
#endif

    switch (ctx->pc) {
        case 0x150bdcu: goto label_150bdc;
        case 0x150bf8u: goto label_150bf8;
        case 0x150c00u: goto label_150c00;
        case 0x150c08u: goto label_150c08;
        case 0x150c10u: goto label_150c10;
        default: break;
    }

    ctx->pc = 0x150bc8u;

    // 0x150bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150bd4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150BD4u;
    SET_GPR_U32(ctx, 31, 0x150BDCu);
    ctx->pc = 0x150BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BD4u;
    // 0x150bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150BD4u, 0x150BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BDCu;
label_150bdc:
    // 0x150bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150be0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x150be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x150be4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x150be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x150be8: 0xa082c242  sb          $v0, -0x3DBE($a0)
    ctx->pc = 0x150be8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C242u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C242u, _value); } while (0);
    // 0x150bec: 0xac70bd64  sw          $s0, -0x429C($v1)
    ctx->pc = 0x150becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50BD64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD64u, _value); } while (0);
    // 0x150bf0: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150BF0u;
    SET_GPR_U32(ctx, 31, 0x150BF8u);
    ctx->pc = 0x150BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BF0u;
    // 0x150bf4: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150BF0u, 0x150BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BF8u;
label_150bf8:
    // 0x150bf8: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x150BF8u;
    SET_GPR_U32(ctx, 31, 0x150C00u);
    ctx->pc = 0x150BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BF8u;
    // 0x150bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x150BF8u, 0x150C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C00u;
label_150c00:
    // 0x150c00: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150C00u;
    SET_GPR_U32(ctx, 31, 0x150C08u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150C00u, 0x150C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C08u;
label_150c08:
    // 0x150c08: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150C08u;
    SET_GPR_U32(ctx, 31, 0x150C10u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150C08u, 0x150C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C10u;
label_150c10:
    // 0x150c10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150c18: 0x3e00008  jr          $ra
    ctx->pc = 0x150C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C18u;
        // 0x150c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150C20u;
    // 0x150c20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150c24: 0x0  nop
    ctx->pc = 0x150c24u;
    // NOP
    ctx->pc = 0x150c28u;
}
