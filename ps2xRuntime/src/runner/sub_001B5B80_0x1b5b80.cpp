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

// Function: sub_001B5B80
// Address: 0x1b5b80 - 0x1b5c10
void sub_001B5B80_0x1b5b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5B80_0x1b5b80");
#endif

    switch (ctx->pc) {
        case 0x1b5b80u: goto label_1b5b80;
        case 0x1b5b84u: goto label_1b5b84;
        case 0x1b5b88u: goto label_1b5b88;
        case 0x1b5b8cu: goto label_1b5b8c;
        case 0x1b5b90u: goto label_1b5b90;
        case 0x1b5b94u: goto label_1b5b94;
        case 0x1b5b98u: goto label_1b5b98;
        case 0x1b5b9cu: goto label_1b5b9c;
        case 0x1b5ba0u: goto label_1b5ba0;
        case 0x1b5ba4u: goto label_1b5ba4;
        case 0x1b5ba8u: goto label_1b5ba8;
        case 0x1b5bacu: goto label_1b5bac;
        case 0x1b5bb0u: goto label_1b5bb0;
        case 0x1b5bb4u: goto label_1b5bb4;
        case 0x1b5bb8u: goto label_1b5bb8;
        case 0x1b5bbcu: goto label_1b5bbc;
        case 0x1b5bc0u: goto label_1b5bc0;
        case 0x1b5bc4u: goto label_1b5bc4;
        case 0x1b5bc8u: goto label_1b5bc8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bd0u: goto label_1b5bd0;
        case 0x1b5bd4u: goto label_1b5bd4;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5be0u: goto label_1b5be0;
        case 0x1b5be4u: goto label_1b5be4;
        case 0x1b5be8u: goto label_1b5be8;
        case 0x1b5becu: goto label_1b5bec;
        case 0x1b5bf0u: goto label_1b5bf0;
        case 0x1b5bf4u: goto label_1b5bf4;
        case 0x1b5bf8u: goto label_1b5bf8;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c00u: goto label_1b5c00;
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c0cu: goto label_1b5c0c;
        default: break;
    }

    ctx->pc = 0x1b5b80u;

label_1b5b80:
    // 0x1b5b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5b84:
    // 0x1b5b84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b5b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b5b88:
    // 0x1b5b88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b5b8c:
    // 0x1b5b8c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b5b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1b5b90:
    // 0x1b5b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b5b94:
    // 0x1b5b94: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b5b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_1b5b98:
    // 0x1b5b98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b5b9c:
    // 0x1b5b9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b5b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ba0:
    // 0x1b5ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5ba4:
    // 0x1b5ba4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b5ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ba8:
    // 0x1b5ba8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b5ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bac:
    // 0x1b5bac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b5bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bb0:
    // 0x1b5bb0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1b5bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b5bb4:
    // 0x1b5bb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b5bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bb8:
    // 0x1b5bb8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bbc:
    // 0x1b5bbc: 0x8d024120  lw          $v0, 0x4120($t0)
    ctx->pc = 0x1b5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16672)));
label_1b5bc0:
    // 0x1b5bc0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1b5bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1b5bc4:
    // 0x1b5bc4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1b5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1b5bc8:
    // 0x1b5bc8: 0x60f809  jalr        $v1
label_1b5bcc:
    if (ctx->pc == 0x1B5BCCu) {
        ctx->pc = 0x1B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BC8u;
        // 0x1b5bcc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BD0u;
        goto label_1b5bd0;
    }
    ctx->pc = 0x1B5BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5BD0u);
        ctx->pc = 0x1B5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BC8u;
        // 0x1b5bcc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5BC8u, 0x1B5BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5BD0u;
label_1b5bd0:
    // 0x1b5bd0: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1b5bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b5bd4:
    // 0x1b5bd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b5bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bd8:
    // 0x1b5bd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b5bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bdc:
    // 0x1b5bdc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b5bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5be0:
    // 0x1b5be0: 0x8d024120  lw          $v0, 0x4120($t0)
    ctx->pc = 0x1b5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16672)));
label_1b5be4:
    // 0x1b5be4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1b5be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1b5be8:
    // 0x1b5be8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1b5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1b5bec:
    // 0x1b5bec: 0x60f809  jalr        $v1
label_1b5bf0:
    if (ctx->pc == 0x1B5BF0u) {
        ctx->pc = 0x1B5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BECu;
        // 0x1b5bf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BF4u;
        goto label_1b5bf4;
    }
    ctx->pc = 0x1B5BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5BF4u);
        ctx->pc = 0x1B5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BECu;
        // 0x1b5bf0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5BECu, 0x1B5BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5BF4u;
label_1b5bf4:
    // 0x1b5bf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b5bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b5bf8:
    // 0x1b5bf8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b5bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5bfc:
    // 0x1b5bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5c00:
    // 0x1b5c00: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b5c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5c04:
    // 0x1b5c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5c08:
    // 0x1b5c08: 0x3e00008  jr          $ra
label_1b5c0c:
    if (ctx->pc == 0x1B5C0Cu) {
        ctx->pc = 0x1B5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C08u;
        // 0x1b5c0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C10u;
        goto label_fallthrough_0x1b5c08;
    }
    ctx->pc = 0x1B5C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C08u;
        // 0x1b5c0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5c08:
    ctx->pc = 0x1B5C10u;
}
