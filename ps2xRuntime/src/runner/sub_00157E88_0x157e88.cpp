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

// Function: sub_00157E88
// Address: 0x157e88 - 0x157ef8
void sub_00157E88_0x157e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157E88_0x157e88");
#endif

    switch (ctx->pc) {
        case 0x157e88u: goto label_157e88;
        case 0x157e8cu: goto label_157e8c;
        case 0x157e90u: goto label_157e90;
        case 0x157e94u: goto label_157e94;
        case 0x157e98u: goto label_157e98;
        case 0x157e9cu: goto label_157e9c;
        case 0x157ea0u: goto label_157ea0;
        case 0x157ea4u: goto label_157ea4;
        case 0x157ea8u: goto label_157ea8;
        case 0x157eacu: goto label_157eac;
        case 0x157eb0u: goto label_157eb0;
        case 0x157eb4u: goto label_157eb4;
        case 0x157eb8u: goto label_157eb8;
        case 0x157ebcu: goto label_157ebc;
        case 0x157ec0u: goto label_157ec0;
        case 0x157ec4u: goto label_157ec4;
        case 0x157ec8u: goto label_157ec8;
        case 0x157eccu: goto label_157ecc;
        case 0x157ed0u: goto label_157ed0;
        case 0x157ed4u: goto label_157ed4;
        case 0x157ed8u: goto label_157ed8;
        case 0x157edcu: goto label_157edc;
        case 0x157ee0u: goto label_157ee0;
        case 0x157ee4u: goto label_157ee4;
        case 0x157ee8u: goto label_157ee8;
        case 0x157eecu: goto label_157eec;
        case 0x157ef0u: goto label_157ef0;
        case 0x157ef4u: goto label_157ef4;
        default: break;
    }

    ctx->pc = 0x157e88u;

label_157e88:
    // 0x157e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_157e8c:
    // 0x157e8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_157e90:
    // 0x157e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x157e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_157e94:
    // 0x157e94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157e98:
    // 0x157e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157e9c:
    // 0x157e9c: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x157e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_157ea0:
    // 0x157ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_157ea4:
    // 0x157ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157ea8:
    // 0x157ea8: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_157eac:
    // 0x157eac: 0xc0e8b20  jal         func_3A2C80
label_157eb0:
    if (ctx->pc == 0x157EB0u) {
        ctx->pc = 0x157EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EACu;
        // 0x157eb0: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EB4u;
        goto label_157eb4;
    }
    ctx->pc = 0x157EACu;
    SET_GPR_U32(ctx, 31, 0x157EB4u);
    ctx->pc = 0x157EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EACu;
    // 0x157eb0: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x157EACu, 0x157EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EB4u;
label_157eb4:
    // 0x157eb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157eb8:
    // 0x157eb8: 0xc043ec8  jal         func_10FB20
label_157ebc:
    if (ctx->pc == 0x157EBCu) {
        ctx->pc = 0x157EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB8u;
        // 0x157ebc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EC0u;
        goto label_157ec0;
    }
    ctx->pc = 0x157EB8u;
    SET_GPR_U32(ctx, 31, 0x157EC0u);
    ctx->pc = 0x157EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157EB8u;
    // 0x157ebc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB20u, 0x157EB8u, 0x157EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EC0u;
label_157ec0:
    // 0x157ec0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x157ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_157ec4:
    // 0x157ec4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x157ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_157ec8:
    // 0x157ec8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x157ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_157ecc:
    // 0x157ecc: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x157eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_157ed0:
    // 0x157ed0: 0x40f809  jalr        $v0
label_157ed4:
    if (ctx->pc == 0x157ED4u) {
        ctx->pc = 0x157ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ED0u;
        // 0x157ed4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157ED8u;
        goto label_157ed8;
    }
    ctx->pc = 0x157ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157ED8u);
        ctx->pc = 0x157ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157ED0u;
        // 0x157ed4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157ED0u, 0x157ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157ED8u;
label_157ed8:
    // 0x157ed8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x157ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_157edc:
    // 0x157edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157ee0:
    // 0x157ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_157ee4:
    // 0x157ee4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x157ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_157ee8:
    // 0x157ee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x157ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157eec:
    // 0x157eec: 0x3e00008  jr          $ra
label_157ef0:
    if (ctx->pc == 0x157EF0u) {
        ctx->pc = 0x157EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EECu;
        // 0x157ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157EF4u;
        goto label_157ef4;
    }
    ctx->pc = 0x157EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EECu;
        // 0x157ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157EF4u;
label_157ef4:
    // 0x157ef4: 0x0  nop
    ctx->pc = 0x157ef4u;
    // NOP
    ctx->pc = 0x157ef8u;
}
