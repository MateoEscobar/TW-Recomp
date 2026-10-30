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

// Function: sub_00484098
// Address: 0x484098 - 0x484120
void sub_00484098_0x484098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484098_0x484098");
#endif

    switch (ctx->pc) {
        case 0x4840c4u: goto label_4840c4;
        case 0x4840f0u: goto label_4840f0;
        case 0x4840f8u: goto label_4840f8;
        default: break;
    }

    ctx->pc = 0x484098u;

    // 0x484098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x484098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48409c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4840a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4840a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4840a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4840a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4840a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4840a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4840ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4840acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4840b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4840b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4840b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4840B4u;
    {
        const bool branch_taken_0x4840b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4840B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4840B4u;
        // 0x4840b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4840b4) {
            ctx->pc = 0x4840C4u;
            goto label_4840c4;
        }
    }
    ctx->pc = 0x4840BCu;
    // 0x4840bc: 0xc120f9c  jal         func_483E70
    ctx->pc = 0x4840BCu;
    SET_GPR_U32(ctx, 31, 0x4840C4u);
    ctx->pc = 0x4840C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4840BCu;
    // 0x4840c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E70u, 0x4840BCu, 0x4840C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4840C4u;
label_4840c4:
    // 0x4840c4: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x4840c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x4840c8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4840c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4840cc: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x4840ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x4840d0: 0xae510098  sw          $s1, 0x98($s2)
    ctx->pc = 0x4840d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 17));
    // 0x4840d4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4840d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x4840d8: 0x8e5100a0  lw          $s1, 0xA0($s2)
    ctx->pc = 0x4840d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x4840dc: 0xae1100a0  sw          $s1, 0xA0($s0)
    ctx->pc = 0x4840dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
    // 0x4840e0: 0x8e100098  lw          $s0, 0x98($s0)
    ctx->pc = 0x4840e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x4840e4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4840E4u;
    {
        const bool branch_taken_0x4840e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4840E4u;
        // 0x4840e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4840e4) {
            ctx->pc = 0x484108u;
            goto label_484108;
        }
    }
    ctx->pc = 0x4840ECu;
    // 0x4840ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4840ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4840f0:
    // 0x4840f0: 0xc12114e  jal         func_484538
    ctx->pc = 0x4840F0u;
    SET_GPR_U32(ctx, 31, 0x4840F8u);
    ctx->pc = 0x4840F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4840F0u;
    // 0x4840f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484538u, 0x4840F0u, 0x4840F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4840F8u;
label_4840f8:
    // 0x4840f8: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x4840f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x4840fc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4840FCu;
    {
        const bool branch_taken_0x4840fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x484100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4840FCu;
        // 0x484100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4840fc) {
            ctx->pc = 0x4840F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4840f0;
        }
    }
    ctx->pc = 0x484104u;
    // 0x484104: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x484104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_484108:
    // 0x484108: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x484108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48410c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48410cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x484110: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x484110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x484114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484118: 0x3e00008  jr          $ra
    ctx->pc = 0x484118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484118u;
        // 0x48411c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484120u;
}
