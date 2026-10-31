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

// Function: sub_001E3ED0
// Address: 0x1e3ed0 - 0x1e3f38
void sub_001E3ED0_0x1e3ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3ED0_0x1e3ed0");
#endif

    switch (ctx->pc) {
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        case 0x1e3f34u: goto label_1e3f34;
        default: break;
    }

    ctx->pc = 0x1e3ed0u;

label_1e3ed0:
    // 0x1e3ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3ed4:
    // 0x1e3ed4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e3ed8:
    // 0x1e3ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3edc:
    // 0x1e3edc: 0xc078d7e  jal         func_1E35F8
label_1e3ee0:
    if (ctx->pc == 0x1E3EE0u) {
        ctx->pc = 0x1E3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EDCu;
        // 0x1e3ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EE4u;
        goto label_1e3ee4;
    }
    ctx->pc = 0x1E3EDCu;
    SET_GPR_U32(ctx, 31, 0x1E3EE4u);
    ctx->pc = 0x1E3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3EDCu;
    // 0x1e3ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E35F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E35F8u, 0x1E3EDCu, 0x1E3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3EE4u;
label_1e3ee4:
    // 0x1e3ee4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e3ee8:
    // 0x1e3ee8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1e3eec:
    // 0x1e3eec: 0xc440eef0  lwc1        $f0, -0x1110($v0)
    ctx->pc = 0x1e3eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3ef0:
    // 0x1e3ef0: 0xc461eef4  lwc1        $f1, -0x110C($v1)
    ctx->pc = 0x1e3ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3ef4:
    // 0x1e3ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1e3ef8:
    // 0x1e3ef8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e3ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e3efc:
    // 0x1e3efc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e3efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e3f00:
    // 0x1e3f00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e3f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e3f04:
    // 0x1e3f04: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1e3f04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e3f08:
    // 0x1e3f08: 0x8e050140  lw          $a1, 0x140($s0)
    ctx->pc = 0x1e3f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_1e3f0c:
    // 0x1e3f0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1e3f10:
    // 0x1e3f10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3f14:
    // 0x1e3f14: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1e3f18:
    // 0x1e3f18: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1e3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1e3f1c:
    // 0x1e3f1c: 0x60f809  jalr        $v1
label_1e3f20:
    if (ctx->pc == 0x1E3F20u) {
        ctx->pc = 0x1E3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F1Cu;
        // 0x1e3f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F24u;
        goto label_1e3f24;
    }
    ctx->pc = 0x1E3F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E3F24u);
        ctx->pc = 0x1E3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F1Cu;
        // 0x1e3f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F1Cu, 0x1E3F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F24u;
label_1e3f24:
    // 0x1e3f24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e3f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3f28:
    // 0x1e3f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3f2c:
    // 0x1e3f2c: 0x3e00008  jr          $ra
label_1e3f30:
    if (ctx->pc == 0x1E3F30u) {
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F2Cu;
        // 0x1e3f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F34u;
        goto label_1e3f34;
    }
    ctx->pc = 0x1E3F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F2Cu;
        // 0x1e3f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3F34u;
label_1e3f34:
    // 0x1e3f34: 0x0  nop
    ctx->pc = 0x1e3f34u;
    // NOP
    ctx->pc = 0x1e3f38u;
}
