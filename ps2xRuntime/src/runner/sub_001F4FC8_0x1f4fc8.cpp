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

// Function: sub_001F4FC8
// Address: 0x1f4fc8 - 0x1f5030
void sub_001F4FC8_0x1f4fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4FC8_0x1f4fc8");
#endif

    switch (ctx->pc) {
        case 0x1f4fecu: goto label_1f4fec;
        case 0x1f4ffcu: goto label_1f4ffc;
        case 0x1f5010u: goto label_1f5010;
        default: break;
    }

    ctx->pc = 0x1f4fc8u;

    // 0x1f4fc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f4fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f4fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fd8: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x1f4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f4fdc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4FDCu;
    {
        const bool branch_taken_0x1f4fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FDCu;
        // 0x1f4fe0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4fdc) {
            ctx->pc = 0x1F5004u;
            goto label_1f5004;
        }
    }
    ctx->pc = 0x1F4FE4u;
    // 0x1f4fe4: 0xc07d356  jal         func_1F4D58
    ctx->pc = 0x1F4FE4u;
    SET_GPR_U32(ctx, 31, 0x1F4FECu);
    ctx->pc = 0x1F4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FE4u;
    // 0x1f4fe8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D58u, 0x1F4FE4u, 0x1F4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FECu;
label_1f4fec:
    // 0x1f4fec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f4ff0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f4ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f4ff4: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F4FF4u;
    SET_GPR_U32(ctx, 31, 0x1F4FFCu);
    ctx->pc = 0x1F4FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FF4u;
    // 0x1f4ff8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F4FF4u, 0x1F4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FFCu;
label_1f4ffc:
    // 0x1f4ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4FFCu;
    {
        const bool branch_taken_0x1f4ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FFCu;
        // 0x1f5000: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ffc) {
            ctx->pc = 0x1F5020u;
            goto label_1f5020;
        }
    }
    ctx->pc = 0x1F5004u;
label_1f5004:
    // 0x1f5004: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f5004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f5008: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1F5008u;
    SET_GPR_U32(ctx, 31, 0x1F5010u);
    ctx->pc = 0x1F500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5008u;
    // 0x1f500c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F5008u, 0x1F5010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5010u;
label_1f5010:
    // 0x1f5010: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1f5010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1f5014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5018: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x1f5018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x1f501c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f501cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5020:
    // 0x1f5020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5024: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5024u;
        // 0x1f5028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F502Cu;
    // 0x1f502c: 0x0  nop
    ctx->pc = 0x1f502cu;
    // NOP
    ctx->pc = 0x1f5030u;
}
