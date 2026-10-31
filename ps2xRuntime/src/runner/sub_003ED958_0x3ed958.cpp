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

// Function: sub_003ED958
// Address: 0x3ed958 - 0x3ed9c0
void sub_003ED958_0x3ed958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED958_0x3ed958");
#endif

    switch (ctx->pc) {
        case 0x3ed958u: goto label_3ed958;
        case 0x3ed95cu: goto label_3ed95c;
        case 0x3ed960u: goto label_3ed960;
        case 0x3ed964u: goto label_3ed964;
        case 0x3ed968u: goto label_3ed968;
        case 0x3ed96cu: goto label_3ed96c;
        case 0x3ed970u: goto label_3ed970;
        case 0x3ed974u: goto label_3ed974;
        case 0x3ed978u: goto label_3ed978;
        case 0x3ed97cu: goto label_3ed97c;
        case 0x3ed980u: goto label_3ed980;
        case 0x3ed984u: goto label_3ed984;
        case 0x3ed988u: goto label_3ed988;
        case 0x3ed98cu: goto label_3ed98c;
        case 0x3ed990u: goto label_3ed990;
        case 0x3ed994u: goto label_3ed994;
        case 0x3ed998u: goto label_3ed998;
        case 0x3ed99cu: goto label_3ed99c;
        case 0x3ed9a0u: goto label_3ed9a0;
        case 0x3ed9a4u: goto label_3ed9a4;
        case 0x3ed9a8u: goto label_3ed9a8;
        case 0x3ed9acu: goto label_3ed9ac;
        case 0x3ed9b0u: goto label_3ed9b0;
        case 0x3ed9b4u: goto label_3ed9b4;
        case 0x3ed9b8u: goto label_3ed9b8;
        case 0x3ed9bcu: goto label_3ed9bc;
        default: break;
    }

    ctx->pc = 0x3ed958u;

label_3ed958:
    // 0x3ed958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ed95c:
    // 0x3ed95c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ed95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ed960:
    // 0x3ed960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ed960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ed964:
    // 0x3ed964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ed964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed968:
    // 0x3ed968: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ed968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ed96c:
    // 0x3ed96c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3ed96cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed970:
    // 0x3ed970: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed974:
    // 0x3ed974: 0x40f809  jalr        $v0
label_3ed978:
    if (ctx->pc == 0x3ED978u) {
        ctx->pc = 0x3ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED974u;
        // 0x3ed978: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED97Cu;
        goto label_3ed97c;
    }
    ctx->pc = 0x3ED974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED97Cu);
        ctx->pc = 0x3ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED974u;
        // 0x3ed978: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED974u, 0x3ED97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED97Cu;
label_3ed97c:
    // 0x3ed97c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ed97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed980:
    // 0x3ed980: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ed984:
    // 0x3ed984: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3ed988:
    if (ctx->pc == 0x3ED988u) {
        ctx->pc = 0x3ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED984u;
        // 0x3ed988: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED98Cu;
        goto label_3ed98c;
    }
    ctx->pc = 0x3ED984u;
    {
        const bool branch_taken_0x3ed984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED984u;
        // 0x3ed988: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed984) {
            ctx->pc = 0x3ED99Cu;
            goto label_3ed99c;
        }
    }
    ctx->pc = 0x3ED98Cu;
label_3ed98c:
    // 0x3ed98c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3ed990:
    if (ctx->pc == 0x3ED990u) {
        ctx->pc = 0x3ED990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED98Cu;
        // 0x3ed990: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED994u;
        goto label_3ed994;
    }
    ctx->pc = 0x3ED98Cu;
    {
        const bool branch_taken_0x3ed98c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED98Cu;
        // 0x3ed990: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed98c) {
            ctx->pc = 0x3ED9A8u;
            goto label_3ed9a8;
        }
    }
    ctx->pc = 0x3ED994u;
label_3ed994:
    // 0x3ed994: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ed998:
    if (ctx->pc == 0x3ED998u) {
        ctx->pc = 0x3ED998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED994u;
        // 0x3ed998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED99Cu;
        goto label_3ed99c;
    }
    ctx->pc = 0x3ED994u;
    {
        const bool branch_taken_0x3ed994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED994u;
        // 0x3ed998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed994) {
            ctx->pc = 0x3ED9B4u;
            goto label_3ed9b4;
        }
    }
    ctx->pc = 0x3ED99Cu;
label_3ed99c:
    // 0x3ed99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ed99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed9a0:
    // 0x3ed9a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ed9a4:
    if (ctx->pc == 0x3ED9A4u) {
        ctx->pc = 0x3ED9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9A0u;
        // 0x3ed9a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED9A8u;
        goto label_3ed9a8;
    }
    ctx->pc = 0x3ED9A0u;
    {
        const bool branch_taken_0x3ed9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9A0u;
        // 0x3ed9a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed9a0) {
            ctx->pc = 0x3ED9ACu;
            goto label_3ed9ac;
        }
    }
    ctx->pc = 0x3ED9A8u;
label_3ed9a8:
    // 0x3ed9a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3ed9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3ed9ac:
    // 0x3ed9ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ed9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed9b0:
    // 0x3ed9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ed9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed9b4:
    // 0x3ed9b4: 0x3e00008  jr          $ra
label_3ed9b8:
    if (ctx->pc == 0x3ED9B8u) {
        ctx->pc = 0x3ED9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9B4u;
        // 0x3ed9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED9BCu;
        goto label_3ed9bc;
    }
    ctx->pc = 0x3ED9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9B4u;
        // 0x3ed9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED9BCu;
label_3ed9bc:
    // 0x3ed9bc: 0x0  nop
    ctx->pc = 0x3ed9bcu;
    // NOP
    ctx->pc = 0x3ed9c0u;
}
