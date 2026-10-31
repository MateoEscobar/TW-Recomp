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

// Function: sub_00408AD0
// Address: 0x408ad0 - 0x408b30
void sub_00408AD0_0x408ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408AD0_0x408ad0");
#endif

    switch (ctx->pc) {
        case 0x408ae8u: goto label_408ae8;
        case 0x408afcu: goto label_408afc;
        case 0x408b10u: goto label_408b10;
        case 0x408b1cu: goto label_408b1c;
        default: break;
    }

    ctx->pc = 0x408ad0u;

    // 0x408ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x408ad4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x408ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x408ad8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x408adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x408ae0: 0xc10314e  jal         func_40C538
    ctx->pc = 0x408AE0u;
    SET_GPR_U32(ctx, 31, 0x408AE8u);
    ctx->pc = 0x408AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408AE0u;
    // 0x408ae4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x408AE0u, 0x408AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408AE8u;
label_408ae8:
    // 0x408ae8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x408AE8u;
    {
        const bool branch_taken_0x408ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x408AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408AE8u;
        // 0x408aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408ae8) {
            ctx->pc = 0x408B04u;
            goto label_408b04;
        }
    }
    ctx->pc = 0x408AF0u;
    // 0x408af0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x408af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x408af4: 0xc10241a  jal         func_409068
    ctx->pc = 0x408AF4u;
    SET_GPR_U32(ctx, 31, 0x408AFCu);
    ctx->pc = 0x408AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408AF4u;
    // 0x408af8: 0x24a57da0  addiu       $a1, $a1, 0x7DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x408AF4u, 0x408AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408AFCu;
label_408afc:
    // 0x408afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x408AFCu;
    {
        const bool branch_taken_0x408afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408AFCu;
        // 0x408b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408afc) {
            ctx->pc = 0x408B20u;
            goto label_408b20;
        }
    }
    ctx->pc = 0x408B04u;
label_408b04:
    // 0x408b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x408b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x408b08: 0xc1024b6  jal         func_4092D8
    ctx->pc = 0x408B08u;
    SET_GPR_U32(ctx, 31, 0x408B10u);
    ctx->pc = 0x408B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B08u;
    // 0x408b0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4092D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4092D8u, 0x408B08u, 0x408B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B10u;
label_408b10:
    // 0x408b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x408b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408b14: 0xc1025e4  jal         func_409790
    ctx->pc = 0x408B14u;
    SET_GPR_U32(ctx, 31, 0x408B1Cu);
    ctx->pc = 0x408B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408B14u;
    // 0x408b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409790u, 0x408B14u, 0x408B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408B1Cu;
label_408b1c:
    // 0x408b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408b20:
    // 0x408b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x408b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x408b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x408b28: 0x3e00008  jr          $ra
    ctx->pc = 0x408B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B28u;
        // 0x408b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408B30u;
}
