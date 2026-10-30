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

// Function: sub_00155F78
// Address: 0x155f78 - 0x155ff0
void sub_00155F78_0x155f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155F78_0x155f78");
#endif

    switch (ctx->pc) {
        case 0x155f78u: goto label_155f78;
        case 0x155f7cu: goto label_155f7c;
        case 0x155f80u: goto label_155f80;
        case 0x155f84u: goto label_155f84;
        case 0x155f88u: goto label_155f88;
        case 0x155f8cu: goto label_155f8c;
        case 0x155f90u: goto label_155f90;
        case 0x155f94u: goto label_155f94;
        case 0x155f98u: goto label_155f98;
        case 0x155f9cu: goto label_155f9c;
        case 0x155fa0u: goto label_155fa0;
        case 0x155fa4u: goto label_155fa4;
        case 0x155fa8u: goto label_155fa8;
        case 0x155facu: goto label_155fac;
        case 0x155fb0u: goto label_155fb0;
        case 0x155fb4u: goto label_155fb4;
        case 0x155fb8u: goto label_155fb8;
        case 0x155fbcu: goto label_155fbc;
        case 0x155fc0u: goto label_155fc0;
        case 0x155fc4u: goto label_155fc4;
        case 0x155fc8u: goto label_155fc8;
        case 0x155fccu: goto label_155fcc;
        case 0x155fd0u: goto label_155fd0;
        case 0x155fd4u: goto label_155fd4;
        case 0x155fd8u: goto label_155fd8;
        case 0x155fdcu: goto label_155fdc;
        case 0x155fe0u: goto label_155fe0;
        case 0x155fe4u: goto label_155fe4;
        case 0x155fe8u: goto label_155fe8;
        case 0x155fecu: goto label_155fec;
        default: break;
    }

    ctx->pc = 0x155f78u;

label_155f78:
    // 0x155f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_155f7c:
    // 0x155f7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x155f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_155f80:
    // 0x155f80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_155f84:
    // 0x155f84: 0x2447deb8  addiu       $a3, $v0, -0x2148
    ctx->pc = 0x155f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_155f88:
    // 0x155f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155f8c:
    // 0x155f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155f90:
    // 0x155f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f94:
    // 0x155f94: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x155f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_155f98:
    // 0x155f98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x155f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_155f9c:
    // 0x155f9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x155f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_155fa0:
    // 0x155fa0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_155fa4:
    // 0x155fa4: 0x2cc40002  sltiu       $a0, $a2, 0x2
    ctx->pc = 0x155fa4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_155fa8:
    // 0x155fa8: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_155fac:
    // 0x155fac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x155facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_155fb0:
    // 0x155fb0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_155fb4:
    if (ctx->pc == 0x155FB4u) {
        ctx->pc = 0x155FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FB0u;
        // 0x155fb4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FB8u;
        goto label_155fb8;
    }
    ctx->pc = 0x155FB0u;
    {
        const bool branch_taken_0x155fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x155FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FB0u;
        // 0x155fb4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fb0) {
            ctx->pc = 0x155F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155f98;
        }
    }
    ctx->pc = 0x155FB8u;
label_155fb8:
    // 0x155fb8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155fbc:
    // 0x155fbc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x155fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_155fc0:
    // 0x155fc0: 0xa06056e0  sb          $zero, 0x56E0($v1)
    ctx->pc = 0x155fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22240), (uint8_t)GPR_U32(ctx, 0));
label_155fc4:
    // 0x155fc4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x155fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_155fc8:
    // 0x155fc8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x155fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_155fcc:
    // 0x155fcc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x155fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_155fd0:
    // 0x155fd0: 0x60f809  jalr        $v1
label_155fd4:
    if (ctx->pc == 0x155FD4u) {
        ctx->pc = 0x155FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FD0u;
        // 0x155fd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FD8u;
        goto label_155fd8;
    }
    ctx->pc = 0x155FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155FD8u);
        ctx->pc = 0x155FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FD0u;
        // 0x155fd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155FD0u, 0x155FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155FD8u;
label_155fd8:
    // 0x155fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155fdc:
    // 0x155fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155fe0:
    // 0x155fe0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x155fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_155fe4:
    // 0x155fe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x155fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155fe8:
    // 0x155fe8: 0x3e00008  jr          $ra
label_155fec:
    if (ctx->pc == 0x155FECu) {
        ctx->pc = 0x155FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FE8u;
        // 0x155fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FF0u;
        goto label_fallthrough_0x155fe8;
    }
    ctx->pc = 0x155FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FE8u;
        // 0x155fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155fe8:
    ctx->pc = 0x155FF0u;
}
