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

// Function: sub_001EBB90
// Address: 0x1ebb90 - 0x1ebc10
void sub_001EBB90_0x1ebb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBB90_0x1ebb90");
#endif

    switch (ctx->pc) {
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebb94u: goto label_1ebb94;
        case 0x1ebb98u: goto label_1ebb98;
        case 0x1ebb9cu: goto label_1ebb9c;
        case 0x1ebba0u: goto label_1ebba0;
        case 0x1ebba4u: goto label_1ebba4;
        case 0x1ebba8u: goto label_1ebba8;
        case 0x1ebbacu: goto label_1ebbac;
        case 0x1ebbb0u: goto label_1ebbb0;
        case 0x1ebbb4u: goto label_1ebbb4;
        case 0x1ebbb8u: goto label_1ebbb8;
        case 0x1ebbbcu: goto label_1ebbbc;
        case 0x1ebbc0u: goto label_1ebbc0;
        case 0x1ebbc4u: goto label_1ebbc4;
        case 0x1ebbc8u: goto label_1ebbc8;
        case 0x1ebbccu: goto label_1ebbcc;
        case 0x1ebbd0u: goto label_1ebbd0;
        case 0x1ebbd4u: goto label_1ebbd4;
        case 0x1ebbd8u: goto label_1ebbd8;
        case 0x1ebbdcu: goto label_1ebbdc;
        case 0x1ebbe0u: goto label_1ebbe0;
        case 0x1ebbe4u: goto label_1ebbe4;
        case 0x1ebbe8u: goto label_1ebbe8;
        case 0x1ebbecu: goto label_1ebbec;
        case 0x1ebbf0u: goto label_1ebbf0;
        case 0x1ebbf4u: goto label_1ebbf4;
        case 0x1ebbf8u: goto label_1ebbf8;
        case 0x1ebbfcu: goto label_1ebbfc;
        case 0x1ebc00u: goto label_1ebc00;
        case 0x1ebc04u: goto label_1ebc04;
        case 0x1ebc08u: goto label_1ebc08;
        case 0x1ebc0cu: goto label_1ebc0c;
        default: break;
    }

    ctx->pc = 0x1ebb90u;

label_1ebb90:
    // 0x1ebb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ebb94:
    // 0x1ebb94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ebb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ebb98:
    // 0x1ebb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebb9c:
    // 0x1ebb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebba0:
    // 0x1ebba0: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ebba4:
    // 0x1ebba4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebba8:
    // 0x1ebba8: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1ebba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1ebbac:
    // 0x1ebbac: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1ebbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1ebbb0:
    // 0x1ebbb0: 0x40f809  jalr        $v0
label_1ebbb4:
    if (ctx->pc == 0x1EBBB4u) {
        ctx->pc = 0x1EBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB0u;
        // 0x1ebbb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBB8u;
        goto label_1ebbb8;
    }
    ctx->pc = 0x1EBBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBBB8u);
        ctx->pc = 0x1EBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB0u;
        // 0x1ebbb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBB0u, 0x1EBBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBBB8u;
label_1ebbb8:
    // 0x1ebbb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ebbbc:
    // 0x1ebbbc: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x1ebbbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_1ebbc0:
    // 0x1ebbc0: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x1ebbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_1ebbc4:
    // 0x1ebbc4: 0xa0f809  jalr        $a1
label_1ebbc8:
    if (ctx->pc == 0x1EBBC8u) {
        ctx->pc = 0x1EBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBC4u;
        // 0x1ebbc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBCCu;
        goto label_1ebbcc;
    }
    ctx->pc = 0x1EBBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EBBCCu);
        ctx->pc = 0x1EBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBC4u;
        // 0x1ebbc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBC4u, 0x1EBBCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBBCCu;
label_1ebbcc:
    // 0x1ebbcc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ebbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ebbd0:
    // 0x1ebbd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ebbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebbd4:
    // 0x1ebbd4: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x1ebbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1ebbd8:
    // 0x1ebbd8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x1ebbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1ebbdc:
    // 0x1ebbdc: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x1ebbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_1ebbe0:
    // 0x1ebbe0: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ebbe4:
    // 0x1ebbe4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1ebbe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ebbe8:
    // 0x1ebbe8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ebbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ebbec:
    // 0x1ebbec: 0xc07f876  jal         func_1FE1D8
label_1ebbf0:
    if (ctx->pc == 0x1EBBF0u) {
        ctx->pc = 0x1EBBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBECu;
        // 0x1ebbf0: 0x8ca414d8  lw          $a0, 0x14D8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBF4u;
        goto label_1ebbf4;
    }
    ctx->pc = 0x1EBBECu;
    SET_GPR_U32(ctx, 31, 0x1EBBF4u);
    ctx->pc = 0x1EBBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBECu;
    // 0x1ebbf0: 0x8ca414d8  lw          $a0, 0x14D8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1D8u, 0x1EBBECu, 0x1EBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBF4u;
label_1ebbf4:
    // 0x1ebbf4: 0xc07f886  jal         func_1FE218
label_1ebbf8:
    if (ctx->pc == 0x1EBBF8u) {
        ctx->pc = 0x1EBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBF4u;
        // 0x1ebbf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBFCu;
        goto label_1ebbfc;
    }
    ctx->pc = 0x1EBBF4u;
    SET_GPR_U32(ctx, 31, 0x1EBBFCu);
    ctx->pc = 0x1EBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBBF4u;
    // 0x1ebbf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1EBBF4u, 0x1EBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBFCu;
label_1ebbfc:
    // 0x1ebbfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ebbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebc00:
    // 0x1ebc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebc04:
    // 0x1ebc04: 0x3e00008  jr          $ra
label_1ebc08:
    if (ctx->pc == 0x1EBC08u) {
        ctx->pc = 0x1EBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC04u;
        // 0x1ebc08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC0Cu;
        goto label_1ebc0c;
    }
    ctx->pc = 0x1EBC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC04u;
        // 0x1ebc08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC0Cu;
label_1ebc0c:
    // 0x1ebc0c: 0x0  nop
    ctx->pc = 0x1ebc0cu;
    // NOP
    ctx->pc = 0x1ebc10u;
}
