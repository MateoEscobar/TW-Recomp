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

// Function: sub_00239E78
// Address: 0x239e78 - 0x239ee0
void sub_00239E78_0x239e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239E78_0x239e78");
#endif

    switch (ctx->pc) {
        case 0x239e78u: goto label_239e78;
        case 0x239e7cu: goto label_239e7c;
        case 0x239e80u: goto label_239e80;
        case 0x239e84u: goto label_239e84;
        case 0x239e88u: goto label_239e88;
        case 0x239e8cu: goto label_239e8c;
        case 0x239e90u: goto label_239e90;
        case 0x239e94u: goto label_239e94;
        case 0x239e98u: goto label_239e98;
        case 0x239e9cu: goto label_239e9c;
        case 0x239ea0u: goto label_239ea0;
        case 0x239ea4u: goto label_239ea4;
        case 0x239ea8u: goto label_239ea8;
        case 0x239eacu: goto label_239eac;
        case 0x239eb0u: goto label_239eb0;
        case 0x239eb4u: goto label_239eb4;
        case 0x239eb8u: goto label_239eb8;
        case 0x239ebcu: goto label_239ebc;
        case 0x239ec0u: goto label_239ec0;
        case 0x239ec4u: goto label_239ec4;
        case 0x239ec8u: goto label_239ec8;
        case 0x239eccu: goto label_239ecc;
        case 0x239ed0u: goto label_239ed0;
        case 0x239ed4u: goto label_239ed4;
        case 0x239ed8u: goto label_239ed8;
        case 0x239edcu: goto label_239edc;
        default: break;
    }

    ctx->pc = 0x239e78u;

label_239e78:
    // 0x239e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_239e7c:
    // 0x239e7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x239e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_239e80:
    // 0x239e80: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_239e84:
    // 0x239e84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239e88:
    // 0x239e88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x239e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_239e8c:
    // 0x239e8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_239e90:
    // 0x239e90: 0xc0e4060  jal         func_390180
label_239e94:
    if (ctx->pc == 0x239E94u) {
        ctx->pc = 0x239E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E90u;
        // 0x239e94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239E98u;
        goto label_239e98;
    }
    ctx->pc = 0x239E90u;
    SET_GPR_U32(ctx, 31, 0x239E98u);
    ctx->pc = 0x239E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E90u;
    // 0x239e94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x239E90u, 0x239E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E98u;
label_239e98:
    // 0x239e98: 0xc08a61a  jal         func_229868
label_239e9c:
    if (ctx->pc == 0x239E9Cu) {
        ctx->pc = 0x239E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E98u;
        // 0x239e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EA0u;
        goto label_239ea0;
    }
    ctx->pc = 0x239E98u;
    SET_GPR_U32(ctx, 31, 0x239EA0u);
    ctx->pc = 0x239E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E98u;
    // 0x239e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x239E98u, 0x239EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EA0u;
label_239ea0:
    // 0x239ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239ea4:
    // 0x239ea4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_239ea8:
    if (ctx->pc == 0x239EA8u) {
        ctx->pc = 0x239EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EA4u;
        // 0x239ea8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EACu;
        goto label_239eac;
    }
    ctx->pc = 0x239EA4u;
    {
        const bool branch_taken_0x239ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EA4u;
        // 0x239ea8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ea4) {
            ctx->pc = 0x239ECCu;
            goto label_239ecc;
        }
    }
    ctx->pc = 0x239EACu;
label_239eac:
    // 0x239eac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239eb0:
    // 0x239eb0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x239eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_239eb4:
    // 0x239eb4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x239eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_239eb8:
    // 0x239eb8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x239eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_239ebc:
    // 0x239ebc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x239ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_239ec0:
    // 0x239ec0: 0x40f809  jalr        $v0
label_239ec4:
    if (ctx->pc == 0x239EC4u) {
        ctx->pc = 0x239EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC0u;
        // 0x239ec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EC8u;
        goto label_239ec8;
    }
    ctx->pc = 0x239EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239EC8u);
        ctx->pc = 0x239EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC0u;
        // 0x239ec4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239EC0u, 0x239EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239EC8u;
label_239ec8:
    // 0x239ec8: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x239ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
label_239ecc:
    // 0x239ecc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x239eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239ed0:
    // 0x239ed0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x239ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239ed4:
    // 0x239ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239ed8:
    // 0x239ed8: 0x3e00008  jr          $ra
label_239edc:
    if (ctx->pc == 0x239EDCu) {
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED8u;
        // 0x239edc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239EE0u;
        goto label_fallthrough_0x239ed8;
    }
    ctx->pc = 0x239ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED8u;
        // 0x239edc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x239ed8:
    ctx->pc = 0x239EE0u;
}
