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

// Function: sub_0044CDA8
// Address: 0x44cda8 - 0x44cdf0
void sub_0044CDA8_0x44cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CDA8_0x44cda8");
#endif

    switch (ctx->pc) {
        case 0x44cda8u: goto label_44cda8;
        case 0x44cdacu: goto label_44cdac;
        case 0x44cdb0u: goto label_44cdb0;
        case 0x44cdb4u: goto label_44cdb4;
        case 0x44cdb8u: goto label_44cdb8;
        case 0x44cdbcu: goto label_44cdbc;
        case 0x44cdc0u: goto label_44cdc0;
        case 0x44cdc4u: goto label_44cdc4;
        case 0x44cdc8u: goto label_44cdc8;
        case 0x44cdccu: goto label_44cdcc;
        case 0x44cdd0u: goto label_44cdd0;
        case 0x44cdd4u: goto label_44cdd4;
        case 0x44cdd8u: goto label_44cdd8;
        case 0x44cddcu: goto label_44cddc;
        case 0x44cde0u: goto label_44cde0;
        case 0x44cde4u: goto label_44cde4;
        case 0x44cde8u: goto label_44cde8;
        case 0x44cdecu: goto label_44cdec;
        default: break;
    }

    ctx->pc = 0x44cda8u;

label_44cda8:
    // 0x44cda8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x44cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_44cdac:
    // 0x44cdac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44cdacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44cdb0:
    // 0x44cdb0: 0x8c439004  lw          $v1, -0x6FFC($v0)
    ctx->pc = 0x44cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938628)));
label_44cdb4:
    // 0x44cdb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44cdb8:
    // 0x44cdb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_44cdbc:
    if (ctx->pc == 0x44CDBCu) {
        ctx->pc = 0x44CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDB8u;
        // 0x44cdbc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CDC0u;
        goto label_44cdc0;
    }
    ctx->pc = 0x44CDB8u;
    {
        const bool branch_taken_0x44cdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDB8u;
        // 0x44cdbc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cdb8) {
            ctx->pc = 0x44CDD8u;
            goto label_44cdd8;
        }
    }
    ctx->pc = 0x44CDC0u;
label_44cdc0:
    // 0x44cdc0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x44cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_44cdc4:
    // 0x44cdc4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x44cdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_44cdc8:
    // 0x44cdc8: 0x8c5c9000  lw          $gp, -0x7000($v0)
    ctx->pc = 0x44cdc8u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938624)));
label_44cdcc:
    // 0x44cdcc: 0x60f809  jalr        $v1
label_44cdd0:
    if (ctx->pc == 0x44CDD0u) {
        ctx->pc = 0x44CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDCCu;
        // 0x44cdd0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CDD4u;
        goto label_44cdd4;
    }
    ctx->pc = 0x44CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x44CDD4u);
        ctx->pc = 0x44CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDCCu;
        // 0x44cdd0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CDCCu, 0x44CDD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44CDD4u;
label_44cdd4:
    // 0x44cdd4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x44cdd4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44cdd8:
    // 0x44cdd8: 0xf  sync
    ctx->pc = 0x44cdd8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_44cddc:
    // 0x44cddc: 0x42000038  ei
    ctx->pc = 0x44cddcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_44cde0:
    // 0x44cde0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44cde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44cde4:
    // 0x44cde4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44cde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44cde8:
    // 0x44cde8: 0x3e00008  jr          $ra
label_44cdec:
    if (ctx->pc == 0x44CDECu) {
        ctx->pc = 0x44CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDE8u;
        // 0x44cdec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44CDF0u;
        goto label_fallthrough_0x44cde8;
    }
    ctx->pc = 0x44CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CDE8u;
        // 0x44cdec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44cde8:
    ctx->pc = 0x44CDF0u;
}
