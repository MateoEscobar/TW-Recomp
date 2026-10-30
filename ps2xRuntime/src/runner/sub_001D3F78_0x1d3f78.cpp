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

// Function: sub_001D3F78
// Address: 0x1d3f78 - 0x1d4000
void sub_001D3F78_0x1d3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3F78_0x1d3f78");
#endif

    switch (ctx->pc) {
        case 0x1d3f78u: goto label_1d3f78;
        case 0x1d3f7cu: goto label_1d3f7c;
        case 0x1d3f80u: goto label_1d3f80;
        case 0x1d3f84u: goto label_1d3f84;
        case 0x1d3f88u: goto label_1d3f88;
        case 0x1d3f8cu: goto label_1d3f8c;
        case 0x1d3f90u: goto label_1d3f90;
        case 0x1d3f94u: goto label_1d3f94;
        case 0x1d3f98u: goto label_1d3f98;
        case 0x1d3f9cu: goto label_1d3f9c;
        case 0x1d3fa0u: goto label_1d3fa0;
        case 0x1d3fa4u: goto label_1d3fa4;
        case 0x1d3fa8u: goto label_1d3fa8;
        case 0x1d3facu: goto label_1d3fac;
        case 0x1d3fb0u: goto label_1d3fb0;
        case 0x1d3fb4u: goto label_1d3fb4;
        case 0x1d3fb8u: goto label_1d3fb8;
        case 0x1d3fbcu: goto label_1d3fbc;
        case 0x1d3fc0u: goto label_1d3fc0;
        case 0x1d3fc4u: goto label_1d3fc4;
        case 0x1d3fc8u: goto label_1d3fc8;
        case 0x1d3fccu: goto label_1d3fcc;
        case 0x1d3fd0u: goto label_1d3fd0;
        case 0x1d3fd4u: goto label_1d3fd4;
        case 0x1d3fd8u: goto label_1d3fd8;
        case 0x1d3fdcu: goto label_1d3fdc;
        case 0x1d3fe0u: goto label_1d3fe0;
        case 0x1d3fe4u: goto label_1d3fe4;
        case 0x1d3fe8u: goto label_1d3fe8;
        case 0x1d3fecu: goto label_1d3fec;
        case 0x1d3ff0u: goto label_1d3ff0;
        case 0x1d3ff4u: goto label_1d3ff4;
        case 0x1d3ff8u: goto label_1d3ff8;
        case 0x1d3ffcu: goto label_1d3ffc;
        default: break;
    }

    ctx->pc = 0x1d3f78u;

label_1d3f78:
    // 0x1d3f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3f7c:
    // 0x1d3f7c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1d3f80:
    // 0x1d3f80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d3f84:
    // 0x1d3f84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1d3f88:
    // 0x1d3f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3f8c:
    // 0x1d3f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f90:
    // 0x1d3f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3f94:
    // 0x1d3f94: 0x2442b740  addiu       $v0, $v0, -0x48C0
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948672));
label_1d3f98:
    // 0x1d3f98: 0x2463b768  addiu       $v1, $v1, -0x4898
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948712));
label_1d3f9c:
    // 0x1d3f9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d3fa0:
    // 0x1d3fa0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1d3fa4:
    // 0x1d3fa4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1d3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_1d3fa8:
    // 0x1d3fa8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1d3fac:
    if (ctx->pc == 0x1D3FACu) {
        ctx->pc = 0x1D3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FA8u;
        // 0x1d3fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FB0u;
        goto label_1d3fb0;
    }
    ctx->pc = 0x1D3FA8u;
    {
        const bool branch_taken_0x1d3fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FA8u;
        // 0x1d3fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fa8) {
            ctx->pc = 0x1D3FDCu;
            goto label_1d3fdc;
        }
    }
    ctx->pc = 0x1D3FB0u;
label_1d3fb0:
    // 0x1d3fb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d3fb4:
    // 0x1d3fb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3fb8:
    // 0x1d3fb8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1d3fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1d3fbc:
    // 0x1d3fbc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1d3fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1d3fc0:
    // 0x1d3fc0: 0x24c65ef8  addiu       $a2, $a2, 0x5EF8
    ctx->pc = 0x1d3fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24312));
label_1d3fc4:
    // 0x1d3fc4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1d3fc8:
    // 0x1d3fc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1d3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1d3fcc:
    // 0x1d3fcc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1d3fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1d3fd0:
    // 0x1d3fd0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1d3fd4:
    // 0x1d3fd4: 0x60f809  jalr        $v1
label_1d3fd8:
    if (ctx->pc == 0x1D3FD8u) {
        ctx->pc = 0x1D3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FD4u;
        // 0x1d3fd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FDCu;
        goto label_1d3fdc;
    }
    ctx->pc = 0x1D3FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D3FDCu);
        ctx->pc = 0x1D3FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FD4u;
        // 0x1d3fd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3FD4u, 0x1D3FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3FDCu;
label_1d3fdc:
    // 0x1d3fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3fe0:
    // 0x1d3fe0: 0xc06a39e  jal         func_1A8E78
label_1d3fe4:
    if (ctx->pc == 0x1D3FE4u) {
        ctx->pc = 0x1D3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FE0u;
        // 0x1d3fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FE8u;
        goto label_1d3fe8;
    }
    ctx->pc = 0x1D3FE0u;
    SET_GPR_U32(ctx, 31, 0x1D3FE8u);
    ctx->pc = 0x1D3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3FE0u;
    // 0x1d3fe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1D3FE0u, 0x1D3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3FE8u;
label_1d3fe8:
    // 0x1d3fe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3fec:
    // 0x1d3fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3ff0:
    // 0x1d3ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3ff4:
    // 0x1d3ff4: 0x3e00008  jr          $ra
label_1d3ff8:
    if (ctx->pc == 0x1D3FF8u) {
        ctx->pc = 0x1D3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FF4u;
        // 0x1d3ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FFCu;
        goto label_1d3ffc;
    }
    ctx->pc = 0x1D3FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FF4u;
        // 0x1d3ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3FFCu;
label_1d3ffc:
    // 0x1d3ffc: 0x0  nop
    ctx->pc = 0x1d3ffcu;
    // NOP
    ctx->pc = 0x1d4000u;
}
