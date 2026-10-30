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

// Function: sub_0010DD50
// Address: 0x10dd50 - 0x10ddd8
void sub_0010DD50_0x10dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DD50_0x10dd50");
#endif

    switch (ctx->pc) {
        case 0x10dd50u: goto label_10dd50;
        case 0x10dd54u: goto label_10dd54;
        case 0x10dd58u: goto label_10dd58;
        case 0x10dd5cu: goto label_10dd5c;
        case 0x10dd60u: goto label_10dd60;
        case 0x10dd64u: goto label_10dd64;
        case 0x10dd68u: goto label_10dd68;
        case 0x10dd6cu: goto label_10dd6c;
        case 0x10dd70u: goto label_10dd70;
        case 0x10dd74u: goto label_10dd74;
        case 0x10dd78u: goto label_10dd78;
        case 0x10dd7cu: goto label_10dd7c;
        case 0x10dd80u: goto label_10dd80;
        case 0x10dd84u: goto label_10dd84;
        case 0x10dd88u: goto label_10dd88;
        case 0x10dd8cu: goto label_10dd8c;
        case 0x10dd90u: goto label_10dd90;
        case 0x10dd94u: goto label_10dd94;
        case 0x10dd98u: goto label_10dd98;
        case 0x10dd9cu: goto label_10dd9c;
        case 0x10dda0u: goto label_10dda0;
        case 0x10dda4u: goto label_10dda4;
        case 0x10dda8u: goto label_10dda8;
        case 0x10ddacu: goto label_10ddac;
        case 0x10ddb0u: goto label_10ddb0;
        case 0x10ddb4u: goto label_10ddb4;
        case 0x10ddb8u: goto label_10ddb8;
        case 0x10ddbcu: goto label_10ddbc;
        case 0x10ddc0u: goto label_10ddc0;
        case 0x10ddc4u: goto label_10ddc4;
        case 0x10ddc8u: goto label_10ddc8;
        case 0x10ddccu: goto label_10ddcc;
        case 0x10ddd0u: goto label_10ddd0;
        case 0x10ddd4u: goto label_10ddd4;
        default: break;
    }

    ctx->pc = 0x10dd50u;

label_10dd50:
    // 0x10dd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10dd54:
    // 0x10dd54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10dd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10dd58:
    // 0x10dd58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10dd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_10dd5c:
    // 0x10dd5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10dd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10dd60:
    // 0x10dd60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_10dd64:
    // 0x10dd64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_10dd68:
    // 0x10dd68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10dd6c:
    // 0x10dd6c: 0xc0439e6  jal         func_10E798
label_10dd70:
    if (ctx->pc == 0x10DD70u) {
        ctx->pc = 0x10DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD6Cu;
        // 0x10dd70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD74u;
        goto label_10dd74;
    }
    ctx->pc = 0x10DD6Cu;
    SET_GPR_U32(ctx, 31, 0x10DD74u);
    ctx->pc = 0x10DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD6Cu;
    // 0x10dd70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E798u, 0x10DD6Cu, 0x10DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD74u;
label_10dd74:
    // 0x10dd74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_10dd78:
    if (ctx->pc == 0x10DD78u) {
        ctx->pc = 0x10DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD74u;
        // 0x10dd78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD7Cu;
        goto label_10dd7c;
    }
    ctx->pc = 0x10DD74u;
    {
        const bool branch_taken_0x10dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD74u;
        // 0x10dd78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd74) {
            ctx->pc = 0x10DDBCu;
            goto label_10ddbc;
        }
    }
    ctx->pc = 0x10DD7Cu;
label_10dd7c:
    // 0x10dd7c: 0x82450008  lb          $a1, 0x8($s2)
    ctx->pc = 0x10dd7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_10dd80:
    // 0x10dd80: 0x8c51bce4  lw          $s1, -0x431C($v0)
    ctx->pc = 0x10dd80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_10dd84:
    // 0x10dd84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10dd88:
    // 0x10dd88: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x10dd88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10dd8c:
    // 0x10dd8c: 0x86020138  lh          $v0, 0x138($s0)
    ctx->pc = 0x10dd8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
label_10dd90:
    // 0x10dd90: 0x26100138  addiu       $s0, $s0, 0x138
    ctx->pc = 0x10dd90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_10dd94:
    // 0x10dd94: 0xc046dd4  jal         func_11B750
label_10dd98:
    if (ctx->pc == 0x10DD98u) {
        ctx->pc = 0x10DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD94u;
        // 0x10dd98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD9Cu;
        goto label_10dd9c;
    }
    ctx->pc = 0x10DD94u;
    SET_GPR_U32(ctx, 31, 0x10DD9Cu);
    ctx->pc = 0x10DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD94u;
    // 0x10dd98: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10DD94u, 0x10DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD9Cu;
label_10dd9c:
    // 0x10dd9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10dda0:
    // 0x10dda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dda4:
    // 0x10dda4: 0x60f809  jalr        $v1
label_10dda8:
    if (ctx->pc == 0x10DDA8u) {
        ctx->pc = 0x10DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA4u;
        // 0x10dda8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDACu;
        goto label_10ddac;
    }
    ctx->pc = 0x10DDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DDACu);
        ctx->pc = 0x10DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDA4u;
        // 0x10dda8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DDA4u, 0x10DDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DDACu;
label_10ddac:
    // 0x10ddac: 0x82450008  lb          $a1, 0x8($s2)
    ctx->pc = 0x10ddacu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_10ddb0:
    // 0x10ddb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10ddb4:
    // 0x10ddb4: 0xc046dd0  jal         func_11B740
label_10ddb8:
    if (ctx->pc == 0x10DDB8u) {
        ctx->pc = 0x10DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDB4u;
        // 0x10ddb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDBCu;
        goto label_10ddbc;
    }
    ctx->pc = 0x10DDB4u;
    SET_GPR_U32(ctx, 31, 0x10DDBCu);
    ctx->pc = 0x10DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDB4u;
    // 0x10ddb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x10DDB4u, 0x10DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDBCu;
label_10ddbc:
    // 0x10ddbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10ddbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10ddc0:
    // 0x10ddc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10ddc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10ddc4:
    // 0x10ddc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ddc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10ddc8:
    // 0x10ddc8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10ddc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ddcc:
    // 0x10ddcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ddccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ddd0:
    // 0x10ddd0: 0x3e00008  jr          $ra
label_10ddd4:
    if (ctx->pc == 0x10DDD4u) {
        ctx->pc = 0x10DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDD0u;
        // 0x10ddd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DDD8u;
        goto label_fallthrough_0x10ddd0;
    }
    ctx->pc = 0x10DDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDD0u;
        // 0x10ddd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10ddd0:
    ctx->pc = 0x10DDD8u;
}
