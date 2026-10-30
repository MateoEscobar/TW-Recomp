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

// Function: sub_00149BC0
// Address: 0x149bc0 - 0x149c30
void sub_00149BC0_0x149bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149BC0_0x149bc0");
#endif

    switch (ctx->pc) {
        case 0x149be4u: goto label_149be4;
        case 0x149c04u: goto label_149c04;
        case 0x149c1cu: goto label_149c1c;
        default: break;
    }

    ctx->pc = 0x149bc0u;

    // 0x149bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149bc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x149bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149bc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149bcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bd8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149bdc: 0xc11352e  jal         func_44D4B8
    ctx->pc = 0x149BDCu;
    SET_GPR_U32(ctx, 31, 0x149BE4u);
    ctx->pc = 0x149BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BDCu;
    // 0x149be0: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D4B8u, 0x149BDCu, 0x149BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149BE4u;
label_149be4:
    // 0x149be4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149BE4u;
    {
        const bool branch_taken_0x149be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149be4) {
            ctx->pc = 0x149BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149BE4u;
            // 0x149be8: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149BF8u;
            goto label_149bf8;
        }
    }
    ctx->pc = 0x149BECu;
    // 0x149bec: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149bf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x149BF0u;
    {
        const bool branch_taken_0x149bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149BF0u;
        // 0x149bf4: 0x24429a88  addiu       $v0, $v0, -0x6578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149bf0) {
            ctx->pc = 0x149C10u;
            goto label_149c10;
        }
    }
    ctx->pc = 0x149BF8u;
label_149bf8:
    // 0x149bf8: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x149bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x149bfc: 0xc113624  jal         func_44D890
    ctx->pc = 0x149BFCu;
    SET_GPR_U32(ctx, 31, 0x149C04u);
    ctx->pc = 0x149C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BFCu;
    // 0x149c00: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D890u, 0x149BFCu, 0x149C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C04u;
label_149c04:
    // 0x149c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149C04u;
    {
        const bool branch_taken_0x149c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C04u;
        // 0x149c08: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149c04) {
            ctx->pc = 0x149C14u;
            goto label_149c14;
        }
    }
    ctx->pc = 0x149C0Cu;
    // 0x149c0c: 0x24429c30  addiu       $v0, $v0, -0x63D0
    ctx->pc = 0x149c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941744));
label_149c10:
    // 0x149c10: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_149c14:
    // 0x149c14: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149C14u;
    SET_GPR_U32(ctx, 31, 0x149C1Cu);
    ctx->pc = 0x149C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C14u;
    // 0x149c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149C14u, 0x149C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C1Cu;
label_149c1c:
    // 0x149c1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c24: 0x3e00008  jr          $ra
    ctx->pc = 0x149C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149C24u;
        // 0x149c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149C2Cu;
    // 0x149c2c: 0x0  nop
    ctx->pc = 0x149c2cu;
    // NOP
    ctx->pc = 0x149c30u;
}
