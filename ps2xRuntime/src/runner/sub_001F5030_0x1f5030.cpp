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

// Function: sub_001F5030
// Address: 0x1f5030 - 0x1f5098
void sub_001F5030_0x1f5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5030_0x1f5030");
#endif

    switch (ctx->pc) {
        case 0x1f5058u: goto label_1f5058;
        case 0x1f5068u: goto label_1f5068;
        case 0x1f507cu: goto label_1f507c;
        default: break;
    }

    ctx->pc = 0x1f5030u;

    // 0x1f5030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f5038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f503c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f503cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5040: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x1f5040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f5044: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x1f5044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f5048: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5048u;
    {
        const bool branch_taken_0x1f5048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5048u;
        // 0x1f504c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5048) {
            ctx->pc = 0x1F5070u;
            goto label_1f5070;
        }
    }
    ctx->pc = 0x1F5050u;
    // 0x1f5050: 0xc07d356  jal         func_1F4D58
    ctx->pc = 0x1F5050u;
    SET_GPR_U32(ctx, 31, 0x1F5058u);
    ctx->pc = 0x1F5054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5050u;
    // 0x1f5054: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D58u, 0x1F5050u, 0x1F5058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5058u;
label_1f5058:
    // 0x1f5058: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f505c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f5060: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F5060u;
    SET_GPR_U32(ctx, 31, 0x1F5068u);
    ctx->pc = 0x1F5064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5060u;
    // 0x1f5064: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F5060u, 0x1F5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5068u;
label_1f5068:
    // 0x1f5068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5068u;
    {
        const bool branch_taken_0x1f5068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5068u;
        // 0x1f506c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5068) {
            ctx->pc = 0x1F508Cu;
            goto label_1f508c;
        }
    }
    ctx->pc = 0x1F5070u;
label_1f5070:
    // 0x1f5070: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f5074: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F5074u;
    SET_GPR_U32(ctx, 31, 0x1F507Cu);
    ctx->pc = 0x1F5078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5074u;
    // 0x1f5078: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F5074u, 0x1F507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F507Cu;
label_1f507c:
    // 0x1f507c: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1f507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1f5080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5084: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x1f5084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x1f5088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f508c:
    // 0x1f508c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5090: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5090u;
        // 0x1f5094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5098u;
}
