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

// Function: sub_001E1BE0
// Address: 0x1e1be0 - 0x1e1c40
void sub_001E1BE0_0x1e1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1BE0_0x1e1be0");
#endif

    switch (ctx->pc) {
        case 0x1e1be0u: goto label_1e1be0;
        case 0x1e1be4u: goto label_1e1be4;
        case 0x1e1be8u: goto label_1e1be8;
        case 0x1e1becu: goto label_1e1bec;
        case 0x1e1bf0u: goto label_1e1bf0;
        case 0x1e1bf4u: goto label_1e1bf4;
        case 0x1e1bf8u: goto label_1e1bf8;
        case 0x1e1bfcu: goto label_1e1bfc;
        case 0x1e1c00u: goto label_1e1c00;
        case 0x1e1c04u: goto label_1e1c04;
        case 0x1e1c08u: goto label_1e1c08;
        case 0x1e1c0cu: goto label_1e1c0c;
        case 0x1e1c10u: goto label_1e1c10;
        case 0x1e1c14u: goto label_1e1c14;
        case 0x1e1c18u: goto label_1e1c18;
        case 0x1e1c1cu: goto label_1e1c1c;
        case 0x1e1c20u: goto label_1e1c20;
        case 0x1e1c24u: goto label_1e1c24;
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c2cu: goto label_1e1c2c;
        case 0x1e1c30u: goto label_1e1c30;
        case 0x1e1c34u: goto label_1e1c34;
        case 0x1e1c38u: goto label_1e1c38;
        case 0x1e1c3cu: goto label_1e1c3c;
        default: break;
    }

    ctx->pc = 0x1e1be0u;

label_1e1be0:
    // 0x1e1be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e1be4:
    // 0x1e1be4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e1be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e1be8:
    // 0x1e1be8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e1be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e1bec:
    // 0x1e1bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bf0:
    // 0x1e1bf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1bf4:
    // 0x1e1bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1bf8:
    // 0x1e1bf8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1e1bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_1e1bfc:
    // 0x1e1bfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1c00:
    // 0x1e1c00: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e1c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e1c04:
    // 0x1e1c04: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1e1c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1e1c08:
    // 0x1e1c08: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1e1c0c:
    // 0x1e1c0c: 0x40f809  jalr        $v0
label_1e1c10:
    if (ctx->pc == 0x1E1C10u) {
        ctx->pc = 0x1E1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C0Cu;
        // 0x1e1c10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C14u;
        goto label_1e1c14;
    }
    ctx->pc = 0x1E1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1C14u);
        ctx->pc = 0x1E1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C0Cu;
        // 0x1e1c10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C0Cu, 0x1E1C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1C14u;
label_1e1c14:
    // 0x1e1c14: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e1c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e1c18:
    // 0x1e1c18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c1c:
    // 0x1e1c1c: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1e1c1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_1e1c20:
    // 0x1e1c20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e1c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e1c24:
    // 0x1e1c24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e1c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1c28:
    // 0x1e1c28: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x1e1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_1e1c2c:
    // 0x1e1c2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e1c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1c30:
    // 0x1e1c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1c34:
    // 0x1e1c34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e1c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e1c38:
    // 0x1e1c38: 0x3e00008  jr          $ra
label_1e1c3c:
    if (ctx->pc == 0x1E1C3Cu) {
        ctx->pc = 0x1E1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C38u;
        // 0x1e1c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1C40u;
        goto label_fallthrough_0x1e1c38;
    }
    ctx->pc = 0x1E1C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1C38u;
        // 0x1e1c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1c38:
    ctx->pc = 0x1E1C40u;
}
