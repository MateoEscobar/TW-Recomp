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

// Function: sub_0014FEB0
// Address: 0x14feb0 - 0x14ff20
void sub_0014FEB0_0x14feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FEB0_0x14feb0");
#endif

    switch (ctx->pc) {
        case 0x14fec4u: goto label_14fec4;
        case 0x14fef0u: goto label_14fef0;
        case 0x14fefcu: goto label_14fefc;
        case 0x14ff04u: goto label_14ff04;
        case 0x14ff0cu: goto label_14ff0c;
        default: break;
    }

    ctx->pc = 0x14feb0u;

    // 0x14feb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14feb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14feb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14feb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14febc: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14FEBCu;
    SET_GPR_U32(ctx, 31, 0x14FEC4u);
    ctx->pc = 0x14FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEBCu;
    // 0x14fec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14FEBCu, 0x14FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEC4u;
label_14fec4:
    // 0x14fec4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14fec8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14fecc: 0x2463c1b8  addiu       $v1, $v1, -0x3E48
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951352));
    // 0x14fed0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14fed4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fed8: 0x24a5c1a8  addiu       $a1, $a1, -0x3E58
    ctx->pc = 0x14fed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951336));
    // 0x14fedc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14fee0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14fee4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14fee8: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14FEE8u;
    SET_GPR_U32(ctx, 31, 0x14FEF0u);
    ctx->pc = 0x14FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEE8u;
    // 0x14feec: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14FEE8u, 0x14FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEF0u;
label_14fef0:
    // 0x14fef0: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14fef0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14fef4: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FEF4u;
    SET_GPR_U32(ctx, 31, 0x14FEFCu);
    ctx->pc = 0x14FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEF4u;
    // 0x14fef8: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FEF4u, 0x14FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEFCu;
label_14fefc:
    // 0x14fefc: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14FEFCu;
    SET_GPR_U32(ctx, 31, 0x14FF04u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14FEFCu, 0x14FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF04u;
label_14ff04:
    // 0x14ff04: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FF04u;
    SET_GPR_U32(ctx, 31, 0x14FF0Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FF04u, 0x14FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF0Cu;
label_14ff0c:
    // 0x14ff0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ff0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ff10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ff14: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF14u;
        // 0x14ff18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF1Cu;
    // 0x14ff1c: 0x0  nop
    ctx->pc = 0x14ff1cu;
    // NOP
    ctx->pc = 0x14ff20u;
}
